/-
Copyright (c) 2017 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Luke Nelson, Jared Roesch, Leonardo de Moura, Sebastian Ullrich
-/
prelude
import init.control.estate init.data.string.basic

/-- Like https://hackage.haskell.org/package/ghc-Prim-0.5.2.0/docs/GHC-Prim.html#t:RealWorld.
    Makes sure we never reorder `IO` operations.

    TODO: mark opaque -/
def IO.RealWorld : Type := Unit

/- TODO(Leo): mark it as an opaque definition. Reason: prevent
   functions defined in other modules from accessing `IO.RealWorld`.
   We don't want action such as
   ```
   def getWorld : IO (IO.RealWorld) := get
   ```
-/
def EIO (ε : Type) : Type → Type := EState ε IO.RealWorld

instance (ε : Type) : Monad (EIO ε) := inferInstanceAs (Monad (EState ε IO.RealWorld))
instance (ε : Type) : MonadExcept ε (EIO ε) := inferInstanceAs (MonadExcept ε (EState ε IO.RealWorld))

instance {ε : Type} {α : Type} [Inhabited ε] : Inhabited (EIO ε α) :=
inferInstanceAs (Inhabited (EState ε IO.RealWorld α))

/-
In the future, we may want to give more concrete data
like in https://doc.rust-lang.org/std/IO/enum.ErrorKind.html
-/
def IO.Error := String

instance : HasToString IO.Error := inferInstanceAs (HasToString String)
instance : Inhabited IO.Error := inferInstanceAs (Inhabited String)

def IO.userError (s : String) : IO.Error :=
s

@[export lean.io_error_to_string_core]
def IO.Error.toString : IO.Error → String :=
id

abbrev IO : Type → Type := EIO IO.Error

@[inline]
unsafe def unsafeIO {α : Type} (fn : IO α) : Option α :=
fn.run' ()

@[extern 4 "lean_io_timeit"]
constant timeit {α : Type} (msg : @& String) (fn : IO α) : IO α := default _

@[extern 4 "lean_io_allocprof"]
constant allocprof {α : Type} (msg : @& String) (fn : IO α) : IO α := default _

/- Programs can execute IO actions during initialization that occurs before
   the `main` function is executed. The attribute `[init <action>]` specifies
   which IO action is executed to set the value of an opaque constant.

   The action `initializing` returns `true` iff it is invoked during initialization. -/
@[extern 1 "lean_io_initializing"]
constant IO.initializing : IO Bool := default _

abbrev monadIO (m : Type → Type) := HasMonadLiftT IO m

namespace IO

def ofExcept {ε α : Type} [HasToString ε] (e : Except ε α) : IO α :=
match e with
| Except.ok a    => pure a
| Except.error e => throw (IO.userError (toString e))

def lazyPure {α : Type} (fn : Unit → α) : IO α :=
pure (fn ())

inductive Fs.Mode
| read | write | readWrite | append

constant Fs.handle : Type := Unit

namespace Prim
open Fs

@[specialize] partial def iterate {α β : Type} : α → (α → IO (Sum α β)) → IO β
| a f :=
  do v ← f a;
  match v with
  | Sum.inl a => iterate a f
  | Sum.inr b => pure b

@[extern 2 "lean_io_prim_put_str"]
constant putStr (s: @& String) : IO Unit := default _
@[extern 1 "lean_io_prim_get_line"]
constant getLine : IO String := default _
@[extern 4 "lean_io_prim_handle_mk"]
constant handle.mk (s : @& String) (m : Mode) (bin : Bool := false) : IO handle := default _
@[extern 2 "lean_io_prim_handle_is_eof"]
constant handle.isEof (h : @& handle) : IO Bool := default _
@[extern 2 "lean_io_prim_handle_flush"]
constant handle.flush (h : @& handle) : IO Unit := default _
@[extern 2 "lean_io_prim_handle_close"]
constant handle.close (h : @& handle) : IO Unit := default _
-- TODO: replace `String` with byte buffer
-- constant handle.read : handle → Nat → EIO String
-- constant handle.write : handle → String → EIO Unit
@[extern 2 "lean_io_prim_handle_get_line"]
constant handle.getLine (h : @& handle) : IO String := default _

@[inline] def liftIO {m : Type → Type} {α : Type} [monadIO m] (x : IO α) : m α :=
monadLift x
end Prim

section
variables {m : Type → Type} [Monad m] [monadIO m]

private def putStr : String → m Unit :=
Prim.liftIO ∘ Prim.putStr

def print {α} [HasToString α] (s : α) : m Unit :=
putStr ∘ toString $ s

def println {α} [HasToString α] (s : α) : m Unit :=
print s *> putStr "\n"
end

namespace Fs
variables {m : Type → Type} [Monad m] [monadIO m]

def handle.mk (s : String) (Mode : Mode) (bin : Bool := false) : m handle := Prim.liftIO (Prim.handle.mk s Mode bin)
def handle.isEof : handle → m Bool := Prim.liftIO ∘ Prim.handle.isEof
def handle.flush : handle → m Unit := Prim.liftIO ∘ Prim.handle.flush
def handle.close : handle → m Unit := Prim.liftIO ∘ Prim.handle.flush
-- def handle.read (h : handle) (bytes : Nat) : m String := Prim.liftEIO (Prim.handle.read h bytes)
-- def handle.write (h : handle) (s : String) : m Unit := Prim.liftEIO (Prim.handle.write h s)
def handle.getLine : handle → m String := Prim.liftIO ∘ Prim.handle.getLine

/-
def getChar (h : handle) : m Char :=
do b ← h.read 1,
   if b.isEmpty then fail "getChar failed"
   else pure b.mkIterator.curr
-/

-- def handle.putChar (h : handle) (c : Char) : m Unit :=
-- h.write (toString c)

-- def handle.putStr (h : handle) (s : String) : m Unit :=
-- h.write s

-- def handle.putStrLn (h : handle) (s : String) : m Unit :=
-- h.putStr s *> h.putStr "\n"

def handle.readToEnd (h : handle) : m String :=
Prim.liftIO $ Prim.iterate "" $ fun r => do
  done ← h.isEof;
  if done
  then pure (Sum.inr r) -- stop
  else do
    -- HACK: use less efficient `getLine` while `read` is broken
    c ← h.getLine;
    pure $ Sum.inl (r ++ c) -- continue

def readFile (fname : String) (bin := false) : m String :=
do h ← handle.mk fname Mode.read bin;
   r ← h.readToEnd;
   h.close;
   pure r

-- def writeFile (fname : String) (data : String) (bin := false) : m Unit :=
-- do h ← handle.mk fname Mode.write bin,
--   h.write data,
--   h.close

end Fs

-- constant stdin : IO Fs.handle
-- constant stderr : IO Fs.handle
-- constant stdout : IO Fs.handle

/-
namespace Proc
def child : Type :=
monadIOProcess.child ioCore

def child.stdin : child → handle :=
monadIOProcess.stdin

def child.stdout : child → handle :=
monadIOProcess.stdout

def child.stderr : child → handle :=
monadIOProcess.stderr

def spawn (p : IO.process.spawnArgs) : IO child :=
monadIOProcess.spawn ioCore p

def wait (c : child) : IO Nat :=
monadIOProcess.wait c

end Proc
-/


/- References -/
constant RefPointed (α : Type) : PointedType := default _
def Ref (α : Type) : Type := (RefPointed α).type
instance (α : Type) : Inhabited (Ref α) := ⟨(RefPointed α).val⟩

namespace Prim
@[extern 3 cpp inline "lean::io_mk_ref(#2, #3)"]
constant mkRef {α : Type} (a : α) : IO (Ref α)                := default _
@[extern 3 cpp inline "lean::io_ref_get(#2, #3)"]
constant Ref.get {α : Type} (r : @& Ref α) : IO α             := default _
@[extern 4 cpp inline "lean::io_ref_set(#2, #3, #4)"]
constant Ref.set {α : Type} (r : @& Ref α) (a : α) : IO Unit  := default _
@[extern 4 cpp inline "lean::io_ref_swap(#2, #3, #4)"]
constant Ref.swap {α : Type} (r : @& Ref α) (a : α) : IO α     := default _
@[extern 3 cpp inline "lean::io_ref_reset(#2, #3)"]
constant Ref.reset {α : Type} (r : @& Ref α) : IO Unit         := default _
end Prim

section
variables {m : Type → Type} [Monad m] [monadIO m]
@[inline] def mkRef {α : Type} (a : α) : m (Ref α) :=  Prim.liftIO (Prim.mkRef a)
@[inline] def Ref.get {α : Type} (r : Ref α) : m α := Prim.liftIO (Prim.Ref.get r)
@[inline] def Ref.set {α : Type} (r : Ref α) (a : α) : m Unit := Prim.liftIO (Prim.Ref.set r a)
@[inline] def Ref.swap {α : Type} (r : Ref α) (a : α) : m α := Prim.liftIO (Prim.Ref.swap r a)
@[inline] def Ref.reset {α : Type} (r : Ref α) : m Unit := Prim.liftIO (Prim.Ref.reset r)
@[inline] def Ref.modify {α : Type} (r : Ref α) (f : α → α) : m Unit :=
do v ← r.get;
   r.reset;
   r.set (f v)
end
end IO

/-
/-- Run the external process specified by `args`.

    The process will run to completion with its output captured by a pipe, and
    read into `String` which is then returned. -/
def IO.cmd (args : IO.process.spawnArgs) : IO String :=
do child ← IO.Proc.spawn { stdout := IO.process.stdio.piped, ..args },
  s ← IO.Fs.readToEnd child.stdout,
  IO.Fs.close child.stdout,
  exitv ← IO.Proc.wait child,
  if exitv ≠ 0 then IO.fail $ "process exited with status " ++ repr exitv else pure (),
  pure s
-/

universe u

/-- Typeclass used for presenting the output of an `#eval` command. -/
class HasEval (α : Type u) :=
(eval : α → IO Unit)

instance HasRepr.HasEval {α : Type u} [HasRepr α] : HasEval α :=
⟨fun a => IO.println (repr a)⟩

instance IO.HasEval {α : Type} [HasEval α] : HasEval (IO α) :=
⟨fun x => do a ← x; HasEval.eval a⟩

-- special case: do not print `()`
instance IOUnit.HasEval : HasEval (IO Unit) :=
⟨fun x => x⟩
