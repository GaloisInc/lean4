/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import init.data.array
import init.lean.name
import init.lean.kvmap
import init.lean.format
import init.lean.compiler.externattr
/-
Implements (extended) λPure and λRc proposed in the article
"Counting Immutable Beans", Sebastian Ullrich and Leonardo de Moura.

The Lean to IR transformation produces λPure code, and
this part is implemented in C++. The procedures described in the paper
above are implemented in Lean.
-/
namespace Lean
namespace IR

/- Function identifier -/
abbrev FunId := Name
abbrev Index := Nat
/- Variable identifier -/
structure VarId :=
(idx : Index)
/- Join point identifier -/
structure JoinPointId :=
(idx : Index)

abbrev Index.lt (a b : Index) : Bool := a < b

namespace VarId
instance : HasBeq VarId := ⟨fun a b => a.idx == b.idx⟩
instance : HasToString VarId := ⟨fun a => "x_" ++ toString a.idx⟩
instance : HasFormat VarId := ⟨fun a => toString a⟩
instance : Hashable VarId := ⟨fun a => hash a.idx⟩
end VarId

namespace JoinPointId
instance : HasBeq JoinPointId := ⟨fun a b => a.idx == b.idx⟩
instance : HasToString JoinPointId := ⟨fun a => "block_" ++ toString a.idx⟩
instance : HasFormat JoinPointId := ⟨fun a => toString a⟩
instance : Hashable JoinPointId := ⟨fun a => hash a.idx⟩
end JoinPointId

abbrev MData := KVMap
namespace MData
abbrev empty : MData := {KVMap .}
instance : HasEmptyc MData := ⟨empty⟩
end MData

/- Low Level IR types. Most are self explanatory.

   - `usize` represents the C++ `size_t` Type. We have it here
      because it is 32-bit in 32-bit machines, and 64-bit in 64-bit machines,
      and we want the C++ backend for our Compiler to generate platform independent code.

   - `irrelevant` for Lean types, propositions and proofs.

   - `object` a pointer to a value in the heap.

   - `tobject` a pointer to a value in the heap or tagged pointer
      (i.e., the least significant bit is 1) storing a scalar value.

Remark: the RC operations for `tobject` are slightly more expensive because we
first need to test whether the `tobject` is really a pointer or not.

Remark: the Lean runtime assumes that sizeof(void*) == sizeof(sizeT).
Lean cannot be compiled on old platforms where this is not True. -/
inductive IRType
| float | uint8 | uint16 | uint32 | uint64 | usize
| irrelevant | object | tobject

def IRType.beq : IRType → IRType → Bool
| IRType.float      IRType.float      := true
| IRType.uint8      IRType.uint8      := true
| IRType.uint16     IRType.uint16     := true
| IRType.uint32     IRType.uint32     := true
| IRType.uint64     IRType.uint64     := true
| IRType.usize      IRType.usize      := true
| IRType.irrelevant IRType.irrelevant := true
| IRType.object     IRType.object     := true
| IRType.tobject    IRType.tobject    := true
| _               _                   := false

instance IRType.HasBeq : HasBeq IRType := ⟨IRType.beq⟩

def IRType.isScalar : IRType → Bool
| IRType.float  := true
| IRType.uint8  := true
| IRType.uint16 := true
| IRType.uint32 := true
| IRType.uint64 := true
| IRType.usize  := true
| _             := false

def IRType.isObj : IRType → Bool
| IRType.object  := true
| IRType.tobject := true
| _              := false

def IRType.isIrrelevant : IRType → Bool
| IRType.irrelevant := true
| _ := false

/- Arguments to applications, constructors, etc.
   We use `irrelevant` for Lean types, propositions and proofs that have been erased.
   Recall that for a Function `f`, we also generate `f._rarg` which does not take
   `irrelevant` arguments. However, `f._rarg` is only safe to be used in full applications. -/
inductive Arg
| var (id : VarId)
| irrelevant

namespace Arg
protected def beq : Arg → Arg → Bool
| (var x)    (var y)    := x == y
| irrelevant irrelevant := true
| _          _          := false

instance : HasBeq Arg := ⟨Arg.beq⟩
instance : Inhabited Arg := ⟨irrelevant⟩
end Arg

@[export lean.ir.mk_var_arg_core] def mkVarArg (id : VarId) : Arg := Arg.var id
@[export lean.ir.mk_irrelevant_arg_core] def mkIrrelevantArg : Arg := Arg.irrelevant

inductive LitVal
| num (v : Nat)
| str (v : String)

def LitVal.beq : LitVal → LitVal → Bool
| (LitVal.num v₁) (LitVal.num v₂) := v₁ == v₂
| (LitVal.str v₁) (LitVal.str v₂) := v₁ == v₂
| _               _               := false

instance LitVal.HasBeq : HasBeq LitVal := ⟨LitVal.beq⟩

/- Constructor information.

   - `name` is the Name of the Constructor in Lean.
   - `cidx` is the Constructor index (aka tag).
   - `size` is the number of arguments of type `object/tobject`.
   - `usize` is the number of arguments of type `usize`.
   - `ssize` is the number of bytes used to store scalar values.

Recall that a Constructor object contains a header, then a sequence of
pointers to other Lean objects, a sequence of `Usize` (i.e., `sizeT`)
scalar values, and a sequence of other scalar values. -/
structure CtorInfo :=
(name : Name) (cidx : Nat) (size : Nat) (usize : Nat) (ssize : Nat)

def CtorInfo.beq : CtorInfo → CtorInfo → Bool
| ⟨n₁, cidx₁, size₁, usize₁, ssize₁⟩ ⟨n₂, cidx₂, size₂, usize₂, ssize₂⟩ :=
  n₁ == n₂ && cidx₁ == cidx₂ && size₁ == size₂ && usize₁ == usize₂ && ssize₁ == ssize₂

instance CtorInfo.HasBeq : HasBeq CtorInfo := ⟨CtorInfo.beq⟩

def CtorInfo.isRef (info : CtorInfo) : Bool :=
info.size > 0 || info.usize > 0 || info.ssize > 0

def CtorInfo.isScalar (info : CtorInfo) : Bool :=
!info.isRef

inductive Expr
| ctor (i : CtorInfo) (ys : Array Arg)
| reset (n : Nat) (x : VarId)
/- `reuse x in ctor_i ys` instruction in the paper. -/
| reuse (x : VarId) (i : CtorInfo) (updtHeader : Bool) (ys : Array Arg)
/- Extract the `tobject` value at Position `sizeof(void*)*i` from `x`. -/
| proj (i : Nat) (x : VarId)
/- Extract the `Usize` value at Position `sizeof(void*)*i` from `x`. -/
| uproj (i : Nat) (x : VarId)
/- Extract the scalar value at Position `sizeof(void*)*n + offset` from `x`. -/
| sproj (n : Nat) (offset : Nat) (x : VarId)
/- Full application. -/
| fap (c : FunId) (ys : Array Arg)
/- Partial application that creates a `pap` value (aka closure in our nonstandard terminology). -/
| pap (c : FunId) (ys : Array Arg)
/- Application. `x` must be a `pap` value. -/
| ap  (x : VarId) (ys : Array Arg)
/- Given `x : ty` where `ty` is a scalar type, this operation returns a value of Type `tobject`.
   For small scalar values, the Result is a tagged pointer, and no memory allocation is performed. -/
| box (ty : IRType) (x : VarId)
/- Given `x : [t]object`, obtain the scalar value. -/
| unbox (x : VarId)
| lit (v : LitVal)
/- Return `1 : uint8` Iff `RC(x) > 1` -/
| isShared (x : VarId)
/- Return `1 : uint8` Iff `x : tobject` is a tagged pointer (storing a scalar value). -/
| isTaggedPtr (x : VarId)

@[export lean.ir.mk_ctor_expr_core]  def mkCtorExpr (n : Name) (cidx : Nat) (size : Nat) (usize : Nat) (ssize : Nat) (ys : Array Arg) : Expr := Expr.ctor ⟨n, cidx, size, usize, ssize⟩ ys
@[export lean.ir.mk_proj_expr_core]  def mkProjExpr (i : Nat) (x : VarId) : Expr := Expr.proj i x
@[export lean.ir.mk_uproj_expr_core] def mkUProjExpr (i : Nat) (x : VarId) : Expr := Expr.uproj i x
@[export lean.ir.mk_sproj_expr_core] def mkSProjExpr (n : Nat) (offset : Nat) (x : VarId) : Expr := Expr.sproj n offset x
@[export lean.ir.mk_fapp_expr_core]  def mkFAppExpr (c : FunId) (ys : Array Arg) : Expr := Expr.fap c ys
@[export lean.ir.mk_papp_expr_core]  def mkPAppExpr (c : FunId) (ys : Array Arg) : Expr := Expr.pap c ys
@[export lean.ir.mk_app_expr_core]   def mkAppExpr (x : VarId) (ys : Array Arg) : Expr := Expr.ap x ys
@[export lean.ir.mk_num_expr_core]   def mkNumExpr (v : Nat) : Expr := Expr.lit (LitVal.num v)
@[export lean.ir.mk_str_expr_core]   def mkStrExpr (v : String) : Expr := Expr.lit (LitVal.str v)

structure Param :=
(x : VarId) (borrow : Bool) (ty : IRType)

instance paramInh : Inhabited Param := ⟨{ x := { idx := 0 }, borrow := false, ty := IRType.object }⟩

@[export lean.ir.mk_param_core] def mkParam (x : VarId) (borrow : Bool) (ty : IRType) : Param := ⟨x, borrow, ty⟩

inductive AltCore (FnBody : Type) : Type
| ctor (info : CtorInfo) (b : FnBody) : AltCore
| default (b : FnBody) : AltCore

inductive FnBody
/- `let x : ty := e; b` -/
| vdecl (x : VarId) (ty : IRType) (e : Expr) (b : FnBody)
/- Join point Declaration `block_j (xs) := e; b` -/
| jdecl (j : JoinPointId) (xs : Array Param) (v : FnBody) (b : FnBody)
/- Store `y` at Position `sizeof(void*)*i` in `x`. `x` must be a Constructor object and `RC(x)` must be 1.
   This operation is not part of λPure is only used during optimization. -/
| set (x : VarId) (i : Nat) (y : Arg) (b : FnBody)
| setTag (x : VarId) (cidx : Nat) (b : FnBody)
/- Store `y : Usize` at Position `sizeof(void*)*i` in `x`. `x` must be a Constructor object and `RC(x)` must be 1. -/
| uset (x : VarId) (i : Nat) (y : VarId) (b : FnBody)
/- Store `y : ty` at Position `sizeof(void*)*i + offset` in `x`. `x` must be a Constructor object and `RC(x)` must be 1.
   `ty` must not be `object`, `tobject`, `irrelevant` nor `Usize`. -/
| sset (x : VarId) (i : Nat) (offset : Nat) (y : VarId) (ty : IRType) (b : FnBody)
/- RC increment for `object`. If c == `true`, then `inc` must check whether `x` is a tagged pointer or not. -/
| inc (x : VarId) (n : Nat) (c : Bool) (b : FnBody)
/- RC decrement for `object`. If c == `true`, then `inc` must check whether `x` is a tagged pointer or not. -/
| dec (x : VarId) (n : Nat) (c : Bool) (b : FnBody)
| del (x : VarId) (b : FnBody)
| mdata (d : MData) (b : FnBody)
| case (tid : Name) (x : VarId) (cs : Array (AltCore FnBody))
| ret (x : Arg)
/- Jump to join point `j` -/
| jmp (j : JoinPointId) (ys : Array Arg)
| unreachable

instance : Inhabited FnBody := ⟨FnBody.unreachable⟩

abbrev FnBody.nil := FnBody.unreachable

@[export lean.ir.mk_vdecl_core] def mkVDecl (x : VarId) (ty : IRType) (e : Expr) (b : FnBody) : FnBody := FnBody.vdecl x ty e b
@[export lean.ir.mk_jdecl_core] def mkJDecl (j : JoinPointId) (xs : Array Param) (v : FnBody) (b : FnBody) : FnBody := FnBody.jdecl j xs v b
@[export lean.ir.mk_uset_core] def mkUSet (x : VarId) (i : Nat) (y : VarId) (b : FnBody) : FnBody := FnBody.uset x i y b
@[export lean.ir.mk_sset_core] def mkSSet (x : VarId) (i : Nat) (offset : Nat) (y : VarId) (ty : IRType) (b : FnBody) : FnBody := FnBody.sset x i offset y ty b
@[export lean.ir.mk_case_core] def mkCase (tid : Name) (x : VarId) (cs : Array (AltCore FnBody)) : FnBody := FnBody.case tid x cs
@[export lean.ir.mk_ret_core] def mkRet (x : Arg) : FnBody := FnBody.ret x
@[export lean.ir.mk_jmp_core] def mkJmp (j : JoinPointId) (ys : Array Arg) : FnBody := FnBody.jmp j ys
@[export lean.ir.mk_unreachable_core] def mkUnreachable : FnBody := FnBody.unreachable

abbrev Alt := AltCore FnBody
@[matchPattern] abbrev Alt.ctor    := @AltCore.ctor FnBody
@[matchPattern] abbrev Alt.default := @AltCore.default FnBody

instance altInh : Inhabited Alt :=
⟨Alt.default (default _)⟩

def FnBody.isTerminal : FnBody → Bool
| (FnBody.case _ _ _) := true
| (FnBody.ret _)      := true
| (FnBody.jmp _ _)    := true
| FnBody.unreachable  := true
| _                   := false

def FnBody.body : FnBody → FnBody
| (FnBody.vdecl _ _ _ b)    := b
| (FnBody.jdecl _ _ _ b)  := b
| (FnBody.set _ _ _ b)      := b
| (FnBody.uset _ _ _ b)     := b
| (FnBody.sset _ _ _ _ _ b) := b
| (FnBody.setTag _ _ b)     := b
| (FnBody.inc _ _ _ b)      := b
| (FnBody.dec _ _ _ b)      := b
| (FnBody.del _ b)          := b
| (FnBody.mdata _ b)        := b
| other                     := other

def FnBody.setBody : FnBody → FnBody → FnBody
| (FnBody.vdecl x t v _)    b := FnBody.vdecl x t v b
| (FnBody.jdecl j xs v _)   b := FnBody.jdecl j xs v b
| (FnBody.set x i y _)      b := FnBody.set x i y b
| (FnBody.uset x i y _)     b := FnBody.uset x i y b
| (FnBody.sset x i o y t _) b := FnBody.sset x i o y t b
| (FnBody.setTag x i _)     b := FnBody.setTag x i b
| (FnBody.inc x n c _)      b := FnBody.inc x n c b
| (FnBody.dec x n c _)      b := FnBody.dec x n c b
| (FnBody.del x _)          b := FnBody.del x b
| (FnBody.mdata d _)        b := FnBody.mdata d b
| other                     b := other

@[inline] def FnBody.resetBody (b : FnBody) : FnBody :=
b.setBody FnBody.nil

/- If b is a non terminal, then return a pair `(c, b')` s.t. `b == c <;> b'`,
   and c.body == FnBody.nil -/
@[inline] def FnBody.split (b : FnBody) : FnBody × FnBody :=
let b' := b.body;
let c  := b.resetBody;
(c, b')

def AltCore.body : Alt → FnBody
| (Alt.ctor _ b)  := b
| (Alt.default b) := b

def AltCore.setBody : Alt → FnBody → Alt
| (Alt.ctor c _) b  := Alt.ctor c b
| (Alt.default _) b := Alt.default b

@[inline] def AltCore.modifyBody (f : FnBody → FnBody) : AltCore FnBody → Alt
| (Alt.ctor c b)  := Alt.ctor c (f b)
| (Alt.default b) := Alt.default (f b)

@[inline] def AltCore.mmodifyBody {m : Type → Type} [Monad m] (f : FnBody → m FnBody) : AltCore FnBody → m Alt
| (Alt.ctor c b)  := Alt.ctor c <$> f b
| (Alt.default b) := Alt.default <$> f b

def Alt.isDefault : Alt → Bool
| (Alt.ctor _ _)  := false
| (Alt.default _) := true

def push (bs : Array FnBody) (b : FnBody) : Array FnBody :=
let b := b.resetBody;
bs.push b

partial def flattenAux : FnBody → Array FnBody → (Array FnBody) × FnBody
| b r :=
  if b.isTerminal then (r, b)
  else flattenAux b.body (push r b)

def FnBody.flatten (b : FnBody) : (Array FnBody) × FnBody :=
flattenAux b Array.empty

partial def reshapeAux : Array FnBody → Nat → FnBody → FnBody
| a i b :=
  if i == 0 then b
  else
    let i         := i - 1;
    let (curr, a) := a.swapAt i (default _);
    let b         := curr.setBody b;
    reshapeAux a i b

def reshape (bs : Array FnBody) (term : FnBody) : FnBody :=
reshapeAux bs bs.size term

@[inline] def modifyJPs (bs : Array FnBody) (f : FnBody → FnBody) : Array FnBody :=
bs.map $ fun b => match b with
  | FnBody.jdecl j xs v k => FnBody.jdecl j xs (f v) k
  | other                 => other

@[inline] def mmodifyJPs {m : Type → Type} [Monad m] (bs : Array FnBody) (f : FnBody → m FnBody) : m (Array FnBody) :=
bs.mmap $ fun b => match b with
  | FnBody.jdecl j xs v k => do v ← f v; pure $ FnBody.jdecl j xs v k
  | other                 => pure other

@[export lean.ir.mk_alt_core] def mkAlt (n : Name) (cidx : Nat) (size : Nat) (usize : Nat) (ssize : Nat) (b : FnBody) : Alt := Alt.ctor ⟨n, cidx, size, usize, ssize⟩ b

inductive Decl
| fdecl  (f : FunId) (xs : Array Param) (ty : IRType) (b : FnBody)
| extern (f : FunId) (xs : Array Param) (ty : IRType) (ext : ExternAttrData)

namespace Decl

instance : Inhabited Decl :=
⟨fdecl (default _) (default _) IRType.irrelevant (default _)⟩

def name : Decl → FunId
| (Decl.fdecl f _ _ _)  := f
| (Decl.extern f _ _ _) := f

def params : Decl → Array Param
| (Decl.fdecl _ xs _ _)  := xs
| (Decl.extern _ xs _ _) := xs

def resultType : Decl → IRType
| (Decl.fdecl _ _ t _)  := t
| (Decl.extern _ _ t _) := t

end Decl

@[export lean.ir.mk_decl_core] def mkDecl (f : FunId) (xs : Array Param) (ty : IRType) (b : FnBody) : Decl := Decl.fdecl f xs ty b

@[export lean.ir.mk_extern_decl_core] def mkExternDecl (f : FunId) (xs : Array Param) (ty : IRType) (e : ExternAttrData) : Decl :=
Decl.extern f xs ty e

/-- Set of variable and join point names -/
abbrev IndexSet := RBTree Index Index.lt
instance vsetInh : Inhabited IndexSet := ⟨{}⟩

inductive LocalContextEntry
| param     : IRType → LocalContextEntry
| localVar  : IRType → Expr → LocalContextEntry
| joinPoint : Array Param → FnBody → LocalContextEntry

abbrev LocalContext := RBMap Index LocalContextEntry Index.lt

def LocalContext.addLocal (ctx : LocalContext) (x : VarId) (t : IRType) (v : Expr) : LocalContext :=
ctx.insert x.idx (LocalContextEntry.localVar t v)

def LocalContext.addJP (ctx : LocalContext) (j : JoinPointId) (xs : Array Param) (b : FnBody) : LocalContext :=
ctx.insert j.idx (LocalContextEntry.joinPoint xs b)

def LocalContext.addParam (ctx : LocalContext) (p : Param) : LocalContext :=
ctx.insert p.x.idx (LocalContextEntry.param p.ty)

def LocalContext.addParams (ctx : LocalContext) (ps : Array Param) : LocalContext :=
ps.foldl LocalContext.addParam ctx

def LocalContext.isJP (ctx : LocalContext) (idx : Index) : Bool :=
match ctx.find idx with
| some (LocalContextEntry.joinPoint _ _) => true
| other => false

def LocalContext.getJPBody (ctx : LocalContext) (j : JoinPointId) : Option FnBody :=
match ctx.find j.idx with
| some (LocalContextEntry.joinPoint _ b) => some b
| other => none

def LocalContext.getJPParams (ctx : LocalContext) (j : JoinPointId) : Option (Array Param) :=
match ctx.find j.idx with
| some (LocalContextEntry.joinPoint ys _) => some ys
| other => none

def LocalContext.isParam (ctx : LocalContext) (idx : Index) : Bool :=
match ctx.find idx with
| some (LocalContextEntry.param _) => true
| other => false

def LocalContext.isLocalVar (ctx : LocalContext) (idx : Index) : Bool :=
match ctx.find idx with
| some (LocalContextEntry.localVar _ _) => true
| other => false

def LocalContext.contains (ctx : LocalContext) (idx : Index) : Bool :=
ctx.contains idx

def LocalContext.eraseJoinPointDecl (ctx : LocalContext) (j : JoinPointId) : LocalContext :=
ctx.erase j.idx

def LocalContext.getType (ctx : LocalContext) (x : VarId) : Option IRType :=
match ctx.find x.idx with
| some (LocalContextEntry.param t) => some t
| some (LocalContextEntry.localVar t _) => some t
| other => none

abbrev IndexRenaming := RBMap Index Index Index.lt

class HasAlphaEqv (α : Type) :=
(aeqv : IndexRenaming → α → α → Bool)

export HasAlphaEqv (aeqv)

def VarId.alphaEqv (ρ : IndexRenaming) (v₁ v₂ : VarId) : Bool :=
match ρ.find v₁.idx with
| some v => v == v₂.idx
| none   => v₁ == v₂

instance VarId.hasAeqv : HasAlphaEqv VarId := ⟨VarId.alphaEqv⟩

def Arg.alphaEqv (ρ : IndexRenaming) : Arg → Arg → Bool
| (Arg.var v₁)   (Arg.var v₂)   := aeqv ρ v₁ v₂
| Arg.irrelevant Arg.irrelevant := true
| _              _              := false

instance Arg.hasAeqv : HasAlphaEqv Arg := ⟨Arg.alphaEqv⟩

def args.alphaEqv (ρ : IndexRenaming) (args₁ args₂ : Array Arg) : Bool :=
Array.isEqv args₁ args₂ (fun a b => aeqv ρ a b)

instance args.hasAeqv : HasAlphaEqv (Array Arg) := ⟨args.alphaEqv⟩

def Expr.alphaEqv (ρ : IndexRenaming) : Expr → Expr → Bool
| (Expr.ctor i₁ ys₁)        (Expr.ctor i₂ ys₂)        := i₁ == i₂ && aeqv ρ ys₁ ys₂
| (Expr.reset n₁ x₁)        (Expr.reset n₂ x₂)        := n₁ == n₂ && aeqv ρ x₁ x₂
| (Expr.reuse x₁ i₁ u₁ ys₁) (Expr.reuse x₂ i₂ u₂ ys₂) := aeqv ρ x₁ x₂ && i₁ == i₂ && u₁ == u₂ && aeqv ρ ys₁ ys₂
| (Expr.proj i₁ x₁)         (Expr.proj i₂ x₂)         := i₁ == i₂ && aeqv ρ x₁ x₂
| (Expr.uproj i₁ x₁)        (Expr.uproj i₂ x₂)        := i₁ == i₂ && aeqv ρ x₁ x₂
| (Expr.sproj n₁ o₁ x₁)     (Expr.sproj n₂ o₂ x₂)     := n₁ == n₂ && o₁ == o₂ && aeqv ρ x₁ x₂
| (Expr.fap c₁ ys₁)         (Expr.fap c₂ ys₂)         := c₁ == c₂ && aeqv ρ ys₁ ys₂
| (Expr.pap c₁ ys₁)         (Expr.pap c₂ ys₂)         := c₁ == c₂ && aeqv ρ ys₂ ys₂
| (Expr.ap x₁ ys₁)          (Expr.ap x₂ ys₂)          := aeqv ρ x₁ x₂ && aeqv ρ ys₁ ys₂
| (Expr.box ty₁ x₁)         (Expr.box ty₂ x₂)         := ty₁ == ty₂ && aeqv ρ x₁ x₂
| (Expr.unbox x₁)           (Expr.unbox x₂)           := aeqv ρ x₁ x₂
| (Expr.lit v₁)             (Expr.lit v₂)             := v₁ == v₂
| (Expr.isShared x₁)        (Expr.isShared x₂)        := aeqv ρ x₁ x₂
| (Expr.isTaggedPtr x₁)     (Expr.isTaggedPtr x₂)     := aeqv ρ x₁ x₂
| _                          _                        := false

instance Expr.hasAeqv : HasAlphaEqv Expr:= ⟨Expr.alphaEqv⟩

def addVarRename (ρ : IndexRenaming) (x₁ x₂ : Nat) :=
if x₁ == x₂ then ρ else ρ.insert x₁ x₂

def addParamRename (ρ : IndexRenaming) (p₁ p₂ : Param) : Option IndexRenaming :=
if p₁.ty == p₂.ty && p₁.borrow = p₂.borrow then some (addVarRename ρ p₁.x.idx p₂.x.idx)
else none

def addParamsRename (ρ : IndexRenaming) (ps₁ ps₂ : Array Param) : Option IndexRenaming :=
if ps₁.size != ps₂.size then none
else Array.foldl₂ (fun ρ p₁ p₂ => do ρ ← ρ; addParamRename ρ p₁ p₂) (some ρ) ps₁ ps₂

partial def FnBody.alphaEqv : IndexRenaming → FnBody → FnBody → Bool
| ρ (FnBody.vdecl x₁ t₁ v₁ b₁)      (FnBody.vdecl x₂ t₂ v₂ b₂)        := t₁ == t₂ && aeqv ρ v₁ v₂ && FnBody.alphaEqv (addVarRename ρ x₁.idx x₂.idx) b₁ b₂
| ρ (FnBody.jdecl j₁ ys₁ v₁ b₁)  (FnBody.jdecl j₂ ys₂ v₂ b₂)          := match addParamsRename ρ ys₁ ys₂ with
  | some ρ' => FnBody.alphaEqv ρ' v₁ v₂ && FnBody.alphaEqv (addVarRename ρ j₁.idx j₂.idx) b₁ b₂
  | none    => false
| ρ (FnBody.set x₁ i₁ y₁ b₁)        (FnBody.set x₂ i₂ y₂ b₂)          := aeqv ρ x₁ x₂ && i₁ == i₂ && aeqv ρ y₁ y₂ && FnBody.alphaEqv ρ b₁ b₂
| ρ (FnBody.uset x₁ i₁ y₁ b₁)       (FnBody.uset x₂ i₂ y₂ b₂)         := aeqv ρ x₁ x₂ && i₁ == i₂ && aeqv ρ y₁ y₂ && FnBody.alphaEqv ρ b₁ b₂
| ρ (FnBody.sset x₁ i₁ o₁ y₁ t₁ b₁) (FnBody.sset x₂ i₂ o₂ y₂ t₂ b₂)   :=
  aeqv ρ x₁ x₂ && i₁ = i₂ && o₁ = o₂ && aeqv ρ y₁ y₂ && t₁ == t₂ && FnBody.alphaEqv ρ b₁ b₂
| ρ (FnBody.setTag x₁ i₁ b₁)        (FnBody.setTag x₂ i₂ b₂)          := aeqv ρ x₁ x₂ && i₁ == i₂ && FnBody.alphaEqv ρ b₁ b₂
| ρ (FnBody.inc x₁ n₁ c₁ b₁)        (FnBody.inc x₂ n₂ c₂ b₂)          := aeqv ρ x₁ x₂ && n₁ == n₂ && c₁ == c₂ && FnBody.alphaEqv ρ b₁ b₂
| ρ (FnBody.dec x₁ n₁ c₁ b₁)        (FnBody.dec x₂ n₂ c₂ b₂)          := aeqv ρ x₁ x₂ && n₁ == n₂ && c₁ == c₂ && FnBody.alphaEqv ρ b₁ b₂
| ρ (FnBody.del x₁ b₁)              (FnBody.del x₂ b₂)                := aeqv ρ x₁ x₂ && FnBody.alphaEqv ρ b₁ b₂
| ρ (FnBody.mdata m₁ b₁)            (FnBody.mdata m₂ b₂)              := m₁ == m₂ && FnBody.alphaEqv ρ b₁ b₂
| ρ (FnBody.case n₁ x₁ alts₁)       (FnBody.case n₂ x₂ alts₂)         := n₁ == n₂ && aeqv ρ x₁ x₂ && Array.isEqv alts₁ alts₂ (fun alt₁ alt₂ =>
   match alt₁, alt₂ with
   | Alt.ctor i₁ b₁, Alt.ctor i₂ b₂ => i₁ == i₂ && FnBody.alphaEqv ρ b₁ b₂
   | Alt.default b₁, Alt.default b₂ => FnBody.alphaEqv ρ b₁ b₂
   | _,              _              => false)
| ρ (FnBody.jmp j₁ ys₁)             (FnBody.jmp j₂ ys₂)               := j₁ == j₂ && aeqv ρ ys₁ ys₂
| ρ (FnBody.ret x₁)                 (FnBody.ret x₂)                   := aeqv ρ x₁ x₂
| _ FnBody.unreachable              FnBody.unreachable                := true
| _ _                               _                                 := false

def FnBody.beq (b₁ b₂ : FnBody) : Bool :=
FnBody.alphaEqv ∅  b₁ b₂

instance FnBody.HasBeq : HasBeq FnBody := ⟨FnBody.beq⟩

abbrev VarIdSet := RBTree VarId (fun x y => x.idx < y.idx)
namespace VarIdSet
instance : Inhabited VarIdSet := ⟨{}⟩
end VarIdSet

def mkIf (x : VarId) (t e : FnBody) : FnBody :=
FnBody.case `Bool x [
  Alt.ctor {name := `Bool.false, cidx := 0, size := 0, usize := 0, ssize := 0} e,
  Alt.ctor {name := `Bool.true, cidx := 1, size := 0, usize := 0, ssize := 0} t
].toArray

end IR
end Lean
