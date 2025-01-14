/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import init.io
import init.util
import init.data.bytearray
import init.lean.declaration
import init.lean.smap

namespace Lean
/- Opaque environment extension state. It is essentially the Lean version of a C `void *`
   TODO: mark opaque -/
def EnvExtensionState : Type := NonScalar

instance EnvExtensionState.inhabited : Inhabited EnvExtensionState := inferInstanceAs (Inhabited NonScalar)

/- TODO: mark opaque. -/
def ModuleIdx := Nat

instance ModuleIdx.inhabited : Inhabited ModuleIdx := inferInstanceAs (Inhabited Nat)

abbrev ConstMap := SMap Name ConstantInfo Name.quickLt

/- Environment fields that are not used often. -/
structure EnvironmentHeader :=
(trustLevel   : UInt32     := 0)
(quotInit     : Bool       := false)
(mainModule   : Name       := default _)
(imports      : Array Name := Array.empty)

/- TODO: mark opaque. -/
structure Environment :=
(const2ModIdx : HashMap Name ModuleIdx)
(constants    : ConstMap)
(extensions   : Array EnvExtensionState)
(header       : EnvironmentHeader := {})

namespace Environment

instance : Inhabited Environment :=
⟨{ const2ModIdx := {}, constants := {}, extensions := Array.empty }⟩

@[export lean.environment_add_core]
def add (env : Environment) (cinfo : ConstantInfo) : Environment :=
{ constants := env.constants.insert cinfo.name cinfo, .. env }

@[export lean.environment_find_core]
def find (env : Environment) (n : Name) : Option ConstantInfo :=
/- It is safe to use `find'` because we never overwrite imported declarations. -/
env.constants.find' n

def contains (env : Environment) (n : Name) : Bool :=
env.constants.contains n

def imports (env : Environment) : Array Name :=
env.header.imports

@[export lean.environment_set_main_module_core]
def setMainModule (env : Environment) (m : Name) : Environment :=
{ header := { mainModule := m, .. env.header }, .. env }

@[export lean.environment_main_module_core]
def mainModule (env : Environment) : Name :=
env.header.mainModule

@[export lean.environment_mark_quot_init_core]
private def markQuotInit (env : Environment) : Environment :=
{ header := { quotInit := true, .. env.header } , .. env }

@[export lean.environment_quot_init_core]
private def isQuotInit (env : Environment) : Bool :=
env.header.quotInit

@[export lean.environment_trust_level_core]
private def getTrustLevel (env : Environment) : UInt32 :=
env.header.trustLevel

def getModuleIdxFor (env : Environment) (c : Name) : Option ModuleIdx :=
env.const2ModIdx.find c

def isConstructor (env : Environment) (c : Name) : Bool :=
match env.find c with
| ConstantInfo.ctorInfo _ => true
| _ => false

/--
Type check, add and compile the given declaration.

TODO: better error handling, we are forgetting the information produced by the C++ type checker and compiler.
-/
@[extern "lean_add_and_compile"]
constant addAndCompile (env : @& Environment) (o : @& Options) (d : @& Declaration) : Option Environment := default _

end Environment

/- "Raw" environment extension.
   TODO: mark opaque. -/
structure EnvExtension (σ : Type) :=
(idx       : Nat)
(initial   : σ)

namespace EnvExtension

unsafe def setStateUnsafe {σ : Type} (ext : EnvExtension σ) (env : Environment) (s : σ) : Environment :=
{ extensions := env.extensions.set ext.idx (unsafeCast s), .. env }

@[implementedBy setStateUnsafe]
constant setState {σ : Type} (ext : EnvExtension σ) (env : Environment) (s : σ) : Environment := default _

unsafe def getStateUnsafe {σ : Type} (ext : EnvExtension σ) (env : Environment) : σ :=
let s : EnvExtensionState := env.extensions.get ext.idx;
@unsafeCast _ _ ⟨ext.initial⟩ s

@[implementedBy getStateUnsafe]
constant getState {σ : Type} (ext : EnvExtension σ) (env : Environment) : σ := ext.initial

@[inline] unsafe def modifyStateUnsafe {σ : Type} (ext : EnvExtension σ) (env : Environment) (f : σ → σ) : Environment :=
{ extensions := env.extensions.modify ext.idx $ fun s =>
    let s : σ := (@unsafeCast _ _ ⟨ext.initial⟩ s);
    let s : σ := f s;
    unsafeCast s,
  .. env }

@[implementedBy modifyStateUnsafe]
constant modifyState {σ : Type} (ext : EnvExtension σ) (env : Environment) (f : σ → σ) : Environment := default _

end EnvExtension

private def mkEnvExtensionsRef : IO (IO.Ref (Array (EnvExtension EnvExtensionState))) :=
IO.mkRef Array.empty

@[init mkEnvExtensionsRef]
private constant envExtensionsRef : IO.Ref (Array (EnvExtension EnvExtensionState)) := default _

instance EnvExtension.Inhabited (σ : Type) [Inhabited σ] : Inhabited (EnvExtension σ) :=
⟨{ idx := 0, initial := default _ }⟩

unsafe def registerEnvExtensionUnsafe {σ : Type} (initState : σ) : IO (EnvExtension σ) :=
do
initializing ← IO.initializing;
unless initializing $ throw (IO.userError ("failed to register environment, extensions can only be registered during initialization"));
exts ← envExtensionsRef.get;
let idx := exts.size;
let ext : EnvExtension σ := {
   idx     := idx,
   initial := initState
};
envExtensionsRef.modify (fun exts => exts.push (unsafeCast ext));
pure ext

/- Environment extensions can only be registered during initialization.
   Reasons:
   1- Our implementation assumes the number of extensions does not change after an environment object is created.
   2- We do not use any synchronization primitive to access `envExtensionsRef`. -/
@[implementedBy registerEnvExtensionUnsafe]
constant registerEnvExtension {σ : Type} (initState : σ) : IO (EnvExtension σ) := default _

private def mkInitialExtensionStates : IO (Array EnvExtensionState) :=
do exts ← envExtensionsRef.get; pure $ exts.map $ fun ext => ext.initial

@[export lean.mk_empty_environment_core]
def mkEmptyEnvironment (trustLevel : UInt32 := 0) : IO Environment :=
do
initializing ← IO.initializing;
when initializing $ throw (IO.userError "environment objects cannot be created during initialization");
exts ← mkInitialExtensionStates;
pure { const2ModIdx := {},
       constants    := {},
       header       := { trustLevel := trustLevel },
       extensions   := exts }

structure PersistentEnvExtensionState (α : Type) (σ : Type) :=
(importedEntries : Array (Array α))  -- entries per imported module
(state : σ)

/- An environment extension with support for storing/retrieving entries from a .olean file.
   - α is the entry type.
   - σ is the actual state.

   TODO: mark opaque. -/
structure PersistentEnvExtension (α : Type) (σ : Type) extends EnvExtension (PersistentEnvExtensionState α σ) :=
(name            : Name)
(addImportedFn   : Array (Array α) → σ)
(addEntryFn      : σ → α → σ)
(exportEntriesFn : σ → Array α)
(statsFn         : σ → Format)

/- Opaque persistent environment extension entry. It is essentially a C `void *`
   TODO: mark opaque -/
def EnvExtensionEntry := NonScalar

instance EnvExtensionEntry.inhabited : Inhabited EnvExtensionEntry := inferInstanceAs (Inhabited NonScalar)

instance PersistentEnvExtensionState.inhabited {α σ} [Inhabited σ] : Inhabited (PersistentEnvExtensionState α σ) :=
⟨{importedEntries := Array.empty, state := default _ }⟩

instance PersistentEnvExtension.inhabited {α σ} [Inhabited σ] : Inhabited (PersistentEnvExtension α σ) :=
⟨{ toEnvExtension := { idx := 0, initial := default _ },
   name := default _,
   addImportedFn := fun _ => default _,
   addEntryFn := fun s _ => s,
   exportEntriesFn := fun _ => Array.empty,
   statsFn := fun _ => Format.nil }⟩

namespace PersistentEnvExtension

def getModuleEntries {α σ : Type} (ext : PersistentEnvExtension α σ) (env : Environment) (m : ModuleIdx) : Array α :=
(ext.toEnvExtension.getState env).importedEntries.get m

def addEntry {α σ : Type} (ext : PersistentEnvExtension α σ) (env : Environment) (a : α) : Environment :=
ext.toEnvExtension.modifyState env $ fun s =>
  let state   := ext.addEntryFn s.state a;
  { state := state, .. s }

def getState {α σ : Type} (ext : PersistentEnvExtension α σ) (env : Environment) : σ :=
(ext.toEnvExtension.getState env).state

def setState {α σ : Type} (ext : PersistentEnvExtension α σ) (env : Environment) (s : σ) : Environment :=
ext.toEnvExtension.modifyState env $ fun ps => { state := s, .. ps }

def modifyState {α σ : Type} (ext : PersistentEnvExtension α σ) (env : Environment) (f : σ → σ) : Environment :=
ext.toEnvExtension.modifyState env $ fun ps => { state := f (ps.state), .. ps }

end PersistentEnvExtension

private def mkPersistentEnvExtensionsRef : IO (IO.Ref (Array (PersistentEnvExtension EnvExtensionEntry EnvExtensionState))) :=
IO.mkRef Array.empty

@[init mkPersistentEnvExtensionsRef]
private constant persistentEnvExtensionsRef : IO.Ref (Array (PersistentEnvExtension EnvExtensionEntry EnvExtensionState)) := default _

structure PersistentEnvExtensionDescr (α σ : Type) :=
(name            : Name)
(addImportedFn   : Array (Array α) → σ)
(addEntryFn      : σ → α → σ)
(exportEntriesFn : σ → Array α)
(statsFn         : σ → Format := fun _ => Format.nil)

unsafe def registerPersistentEnvExtensionUnsafe {α σ : Type} (descr : PersistentEnvExtensionDescr α σ) : IO (PersistentEnvExtension α σ) :=
do
let s : PersistentEnvExtensionState α σ := {
  importedEntries := Array.empty,
  state           := descr.addImportedFn Array.empty };
pExts ← persistentEnvExtensionsRef.get;
when (pExts.any (fun ext => ext.name == descr.name)) $ throw (IO.userError ("invalid environment extension, '" ++ toString descr.name ++ "' has already been used"));
ext ← registerEnvExtension s;
let pExt : PersistentEnvExtension α σ := {
  toEnvExtension  := ext,
  name            := descr.name,
  addImportedFn   := descr.addImportedFn,
  addEntryFn      := descr.addEntryFn,
  exportEntriesFn := descr.exportEntriesFn,
  statsFn         := descr.statsFn
};
persistentEnvExtensionsRef.modify (fun pExts => pExts.push (unsafeCast pExt));
pure pExt

@[implementedBy registerPersistentEnvExtensionUnsafe]
constant registerPersistentEnvExtension {α σ : Type} (descr : PersistentEnvExtensionDescr α σ) : IO (PersistentEnvExtension α σ) := default _

/- Simple PersistentEnvExtension that implements exportEntriesFn using a list of entries. -/

def SimplePersistentEnvExtension (α σ : Type) := PersistentEnvExtension α (List α × σ)

@[specialize] def mkStateFromImportedEntries {α σ : Type} (addEntryFn : σ → α → σ) (initState : σ) (as : Array (Array α)) : σ :=
as.foldl (fun r es => es.foldl (fun r e => addEntryFn r e) r) initState

structure SimplePersistentEnvExtensionDescr (α σ : Type) :=
(name          : Name)
(addEntryFn    : σ → α → σ)
(addImportedFn : Array (Array α) → σ)
(toArrayFn     : List α → Array α := fun es => es.toArray)

def registerSimplePersistentEnvExtension {α σ : Type} (descr : SimplePersistentEnvExtensionDescr α σ) : IO (SimplePersistentEnvExtension α σ) :=
registerPersistentEnvExtension {
  name := descr.name,
  addImportedFn := fun as => ([], descr.addImportedFn as),
  addEntryFn := fun s e => match s with
    | (entries, s) => (e::entries, descr.addEntryFn s e),
  exportEntriesFn := fun s => descr.toArrayFn s.1.reverse,
  statsFn := fun s => format "number of local entries: " ++ format s.1.length
}

namespace SimplePersistentEnvExtension

instance {α σ : Type} [Inhabited σ] : Inhabited (SimplePersistentEnvExtension α σ) :=
inferInstanceAs (Inhabited (PersistentEnvExtension α (List α × σ)))

def getEntries {α σ : Type} (ext : SimplePersistentEnvExtension α σ) (env : Environment) : List α :=
(PersistentEnvExtension.getState ext env).1

def getState {α σ : Type} (ext : SimplePersistentEnvExtension α σ) (env : Environment) : σ :=
(PersistentEnvExtension.getState ext env).2

def setState {α σ : Type} (ext : SimplePersistentEnvExtension α σ) (env : Environment) (s : σ) : Environment :=
PersistentEnvExtension.modifyState ext env (fun ⟨entries, _⟩ => (entries, s))

def modifyState {α σ : Type} (ext : SimplePersistentEnvExtension α σ) (env : Environment) (f : σ → σ) : Environment :=
PersistentEnvExtension.modifyState ext env (fun ⟨entries, s⟩ => (entries, f s))

end SimplePersistentEnvExtension

/- API for creating extensions in C++.
   This API will eventually be deleted. -/
def CPPExtensionState := NonScalar

instance CPPExtensionState.inhabited : Inhabited CPPExtensionState := inferInstanceAs (Inhabited NonScalar)

@[export lean.register_extension_core]
unsafe def registerCPPExtension (initial : CPPExtensionState) : Option Nat :=
unsafeIO (do ext ← registerEnvExtension initial; pure ext.idx)

@[export lean.set_extension_core]
unsafe def setCPPExtensionState (env : Environment) (idx : Nat) (s : CPPExtensionState) : Option Environment :=
unsafeIO (do exts ← envExtensionsRef.get; pure $ (exts.get idx).setState env s)

@[export lean.get_extension_core]
unsafe def getCPPExtensionState (env : Environment) (idx : Nat) : Option CPPExtensionState :=
unsafeIO (do exts ← envExtensionsRef.get; pure $ (exts.get idx).getState env)

/- Legacy support for Modification objects -/

/- Opaque modification object. It is essentially a C `void *`.
   In Lean 3, a .olean file is essentially a collection of modification objects.
   This type represents the modification objects implemented in C++.
   We will eventually delete this type as soon as we port the remaining Lean 3
   legacy code.

   TODO: mark opaque -/
def Modification := NonScalar

instance Modification.inhabited : Inhabited Modification := inferInstanceAs (Inhabited NonScalar)

def regModListExtension : IO (EnvExtension (List Modification)) :=
registerEnvExtension []

@[init regModListExtension]
constant modListExtension : EnvExtension (List Modification) := default _

/- The C++ code uses this function to store the given modification object into the environment. -/
@[export lean.environment_add_modification_core]
def addModification (env : Environment) (mod : Modification) : Environment :=
modListExtension.modifyState env $ fun mods => mod :: mods

/- mkModuleData invokes this function to convert a list of modification objects into
   a serialized byte array. -/
@[extern 2 "lean_serialize_modifications"]
constant serializeModifications : List Modification → IO ByteArray := default _

@[extern 3 "lean_perform_serialized_modifications"]
constant performModifications : Environment → ByteArray → IO Environment := default _

/- Content of a .olean file.
   We use `compact.cpp` to generate the image of this object in disk. -/
structure ModuleData :=
(imports    : Array Name)
(constants  : Array ConstantInfo)
(entries    : Array (Name × Array EnvExtensionEntry))
(serialized : ByteArray) -- Legacy support: serialized modification objects

instance ModuleData.inhabited : Inhabited ModuleData :=
⟨{imports := default _, constants := default _, entries := default _, serialized := default _}⟩

@[extern 3 "lean_save_module_data"]
constant saveModuleData (fname : @& String) (m : ModuleData) : IO Unit := default _
@[extern 2 "lean_read_module_data"]
constant readModuleData (fname : @& String) : IO ModuleData := default _

def mkModuleData (env : Environment) : IO ModuleData :=
do
pExts ← persistentEnvExtensionsRef.get;
let entries : Array (Name × Array EnvExtensionEntry) := pExts.size.fold
  (fun i result =>
    let state  := (pExts.get i).getState env;
    let exportEntriesFn := (pExts.get i).exportEntriesFn;
    let extName    := (pExts.get i).name;
    result.push (extName, exportEntriesFn state))
  Array.empty;
bytes ← serializeModifications (modListExtension.getState env);
pure {
imports    := env.header.imports,
constants  := env.constants.foldStage2 (fun cs _ c => cs.push c) Array.empty,
entries    := entries,
serialized := bytes
}

@[export lean.write_module_core]
def writeModule (env : Environment) (fname : String) : IO Unit :=
do modData ← mkModuleData env; saveModuleData fname modData

@[extern 2 "lean_find_olean"]
constant findOLean (modName : Name) : IO String := default _

partial def importModulesAux : List Name → (NameSet × Array ModuleData) → IO (NameSet × Array ModuleData)
| []      r         := pure r
| (m::ms) (s, mods) :=
  if s.contains m then
    importModulesAux ms (s, mods)
  else do
    let s := s.insert m;
    mFile ← findOLean m;
    mod ← readModuleData mFile;
    (s, mods) ← importModulesAux mod.imports.toList (s, mods);
    let mods := mods.push mod;
    importModulesAux ms (s, mods)

private partial def getEntriesFor (mod : ModuleData) (extId : Name) : Nat → Array EnvExtensionState
| i :=
  if i < mod.entries.size then
    let curr := mod.entries.get i;
    if curr.1 == extId then curr.2 else getEntriesFor (i+1)
  else
    Array.empty

private def setImportedEntries (env : Environment) (mods : Array ModuleData) : IO Environment :=
do
pExtDescrs ← persistentEnvExtensionsRef.get;
pure $ mods.iterate env $ fun _ mod env =>
  pExtDescrs.iterate env $ fun _ extDescr env =>
    let entries := getEntriesFor mod extDescr.name 0;
    extDescr.toEnvExtension.modifyState env $ fun s =>
      { importedEntries := s.importedEntries.push entries,
        .. s }

private def finalizePersistentExtensions (env : Environment) : IO Environment :=
do
pExtDescrs ← persistentEnvExtensionsRef.get;
pure $ pExtDescrs.iterate env $ fun _ extDescr env =>
  extDescr.toEnvExtension.modifyState env $ fun s =>
    { state := extDescr.addImportedFn s.importedEntries, .. s }

@[export lean.import_modules_core]
def importModules (modNames : List Name) (trustLevel : UInt32 := 0) : IO Environment :=
do
(_, mods) ← importModulesAux modNames ({}, Array.empty);
let const2ModIdx := mods.iterate {} $ fun (modIdx) (mod : ModuleData) (m : HashMap Name ModuleIdx) =>
  mod.constants.iterate m $ fun _ cinfo m =>
    m.insert cinfo.name modIdx.val;
constants ← mods.miterate SMap.empty $ fun _ (mod : ModuleData) (cs : ConstMap) =>
  mod.constants.miterate cs $ fun _ cinfo cs => do {
    when (cs.contains cinfo.name) $ throw (IO.userError ("import failed, environment already contains '" ++ toString cinfo.name ++ "'"));
    pure $ cs.insert cinfo.name cinfo
  };
let constants   := constants.switch;
exts ← mkInitialExtensionStates;
let env : Environment := {
  const2ModIdx := const2ModIdx,
  constants    := constants,
  extensions   := exts,
  header       := {
    quotInit     := !modNames.isEmpty, -- We assume `core.lean` initializes quotient module
    trustLevel   := trustLevel,
    imports      := modNames.toArray
  }
};
env ← setImportedEntries env mods;
env ← finalizePersistentExtensions env;
env ← mods.miterate env $ fun _ mod env => performModifications env mod.serialized;
pure env

namespace Environment

@[export lean.display_stats_core]
def displayStats (env : Environment) : IO Unit :=
do
pExtDescrs ← persistentEnvExtensionsRef.get;
let numModules := ((pExtDescrs.get 0).toEnvExtension.getState env).importedEntries.size;
IO.println ("direct imports:                        " ++ toString env.header.imports);
IO.println ("number of imported modules:            " ++ toString numModules);
IO.println ("number of consts:                      " ++ toString env.constants.size);
IO.println ("number of imported consts:             " ++ toString env.constants.stageSizes.1);
IO.println ("number of local consts:                " ++ toString env.constants.stageSizes.2);
IO.println ("number of buckets for imported consts: " ++ toString env.constants.numBuckets);
IO.println ("map depth for local consts:            " ++ toString env.constants.maxDepth);
IO.println ("trust level:                           " ++ toString env.header.trustLevel);
IO.println ("number of extensions:                  " ++ toString env.extensions.size);
pExtDescrs.mfor $ fun extDescr => do {
  IO.println ("extension '" ++ toString extDescr.name ++ "'");
  let s := extDescr.toEnvExtension.getState env;
  let fmt := extDescr.statsFn s.state;
  unless fmt.isNil (IO.println ("  " ++ toString (Format.nest 2 (extDescr.statsFn s.state))));
  IO.println ("  number of imported entries: " ++ toString (s.importedEntries.foldl (fun sum es => sum + es.size) 0));
  pure ()
};
pure ()

end Environment
end Lean
