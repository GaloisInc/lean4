// Lean compiler output
// Module: init.lean.compiler.ir.emitcpp
// Imports: init.control.conditional init.lean.runtime init.lean.compiler.namemangling init.lean.compiler.exportattr init.lean.compiler.initattr init.lean.compiler.ir.compilerm init.lean.compiler.ir.emitutil init.lean.compiler.ir.normids init.lean.compiler.ir.simpcase init.lean.compiler.ir.boxing
#include "runtime/object.h"
#include "runtime/apply.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
obj* l_Lean_IR_EmitCpp_emitProj___closed__1;
extern obj* l_Lean_IR_getDecl___closed__1;
obj* l_Lean_Name_mangle(obj*, obj*);
obj* l_Lean_IR_EmitCpp_isObj(obj*, obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__3___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_declareVars(obj*, uint8, obj*, obj*);
obj* l_HashMapImp_find___at_Lean_IR_EmitCpp_getJPParams___spec__1___boxed(obj*, obj*);
obj* l_Lean_IR_EmitCpp_toCppType___main___closed__1;
obj* l_Lean_IR_EmitCpp_emitNumLit___closed__1;
obj* l_Lean_IR_EmitCpp_leanMainFn;
obj* l_Lean_IR_EmitCpp_emitSetTag___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emit(obj*);
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__1;
obj* l_Lean_getExternNameFor(obj*, obj*, obj*);
extern "C" uint8 lean_name_dec_eq(obj*, obj*);
obj* l_Lean_IR_EmitCpp_hasMainFn___boxed(obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitLns___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitArgs___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitFileHeader___closed__5;
obj* l_Lean_IR_EmitCpp_emitCtorSetArgs(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitOffset___closed__2;
obj* l_Lean_IR_EmitCpp_emit___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_getJPParams___closed__1;
obj* l_Lean_IR_EmitCpp_emitReuse___closed__2;
obj* l_Lean_IR_EmitCpp_throwInvalidExportName___rarg___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_toCppType(uint8);
obj* l_Lean_IR_EmitCpp_emitTailCall___closed__3;
obj* l_List_map___main___at_Lean_IR_EmitCpp_toStringArgs___spec__1(obj*);
extern obj* l_Array_empty___closed__1;
obj* l_RBTree_toList___at_Lean_IR_EmitCpp_emitFnDecls___spec__3___boxed(obj*);
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_Lean_IR_EmitCpp_emitJmp___closed__1;
obj* l_Lean_IR_EmitCpp_emitBoxFn___closed__5;
obj* l_Lean_IR_EmitCpp_emitMainFn___closed__14;
obj* l_Lean_IR_EmitCpp_emitReset___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitFnDeclAux___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitTailCall(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitBoxFn___closed__4;
obj* l_Lean_IR_EmitCpp_emitMainFn___closed__1;
obj* l_Lean_IR_EmitCpp_emitMainFn___closed__8;
obj* l_Lean_IR_EmitCpp_emitInitFn___closed__4;
obj* l_Lean_IR_EmitCpp_emitFnDecls___boxed(obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitSProj___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_closeNamespacesFor(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitUSet___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitUProj___closed__2;
uint8 l_Lean_IR_IRType_isIrrelevant___main(uint8);
obj* l_List_foldl___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__1(obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
extern obj* l_Lean_IR_JoinPointId_HasToString___closed__1;
obj* l_Lean_IR_EmitCpp_emitArg___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitAllocCtor___closed__1;
obj* l_Lean_IR_EmitCpp_emitSetTag(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_quoteNameAux(obj*);
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitFns___spec__1(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_toCppName___boxed(obj*, obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitFnDeclAux___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitDec(obj*, obj*, uint8, obj*, obj*);
obj* l_Lean_IR_EmitCpp_closeNamespacesAux(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitIf___closed__2;
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitFileHeader___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_declareVars___main___boxed(obj*, obj*, obj*, obj*);
uint8 l_Lean_IR_EmitCpp_overwriteParam(obj*, obj*);
obj* l_Lean_IR_EmitCpp_closeNamespaces___boxed(obj*, obj*, obj*);
obj* l_HashMapImp_find___at_Lean_IR_EmitCpp_isObj___spec__1___boxed(obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitDel___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emit___rarg(obj*, obj*, obj*, obj*);
extern obj* l_Char_quoteCore___closed__3;
obj* l_Lean_IR_EmitCpp_emitBlock___main___closed__1;
obj* l_Lean_IR_EmitCpp_openNamespacesAux___boxed(obj*, obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__3(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_closeNamespaces(obj*, obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__2;
obj* l_Lean_IR_EmitCpp_emitLit___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_getDecl___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitTailCall___closed__2;
obj* l_Lean_IR_EmitCpp_emitMainFn___closed__11;
obj* l_Lean_IR_EmitCpp_emitUProj(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_toCppType___main___closed__7;
obj* l_Lean_IR_EmitCpp_emitApp(obj*, obj*, obj*, obj*, obj*);
namespace lean {
obj* get_init_fn_name_for_core(obj*, obj*);
}
obj* l_Lean_IR_EmitCpp_emitInc___closed__2;
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitPartialApp___spec__1___closed__1;
obj* l_Lean_IR_Decl_normalizeIds(obj*);
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__1;
obj* l_Lean_IR_EmitCpp_emitIsTaggedPtr___closed__1;
obj* l_Lean_IR_EmitCpp_emitCtorScalarSize___closed__1;
obj* l_Lean_IR_EmitCpp_emitJPs(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitMainFn___boxed(obj*, obj*);
uint8 l_Lean_IR_Decl_resultType___main(obj*);
obj* l_Lean_IR_EmitCpp_emitTailCall___closed__4;
obj* l_Lean_IR_EmitCpp_emitCppName(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitVDecl(obj*, uint8, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_closeNamespacesFor___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitFnDeclAux___closed__3;
obj* l_Lean_IR_EmitCpp_emitDeclAux___closed__1;
obj* l_Lean_IR_EmitCpp_emitDeclInit(obj*, obj*, obj*);
uint8 l_Lean_isIOUnitInitFn(obj*, obj*);
obj* l_List_reverse___rarg(obj*);
obj* l_Lean_mkExternCall(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitMainFn___closed__13;
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_isIf(obj*);
obj* l_List_foldr___main___at_Lean_IR_EmitCpp_hasMainFn___spec__1___boxed(obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitCtorSetArgs___spec__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_closeNamespacesAux___main(obj*, obj*, obj*);
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_ensureHasDefault(obj*);
obj* l_Lean_IR_EmitCpp_paramEqArg___boxed(obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___closed__1;
uint8 l_List_foldr___main___at_Lean_IR_EmitCpp_hasMainFn___spec__1(uint8, obj*);
obj* l_Lean_IR_EmitCpp_emitUnbox___closed__2;
namespace lean {
namespace ir {
obj* decl_to_string_core(obj*);
}
}
obj* l_Lean_IR_EmitCpp_emitDecl(obj*, obj*, obj*);
obj* l_Array_uget(obj*, obj*, usize, obj*);
obj* l_Lean_Name_toStringWithSep___main(obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__3;
obj* l_Lean_IR_EmitCpp_openNamespaces___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_isObj___boxed(obj*, obj*, obj*);
obj* l_String_foldlAux___main___at_Lean_IR_EmitCpp_quoteString___spec__1(obj*, obj*, obj*, obj*);
uint8 l_Lean_IR_ExplicitBoxing_isBoxedName___main(obj*);
obj* l_Lean_IR_EmitCpp_emitDeclInit___closed__2;
obj* l_Lean_IR_EmitCpp_emitCase___closed__1;
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__2;
obj* l_Lean_IR_EmitCpp_emitFileHeader(obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitUnbox___closed__3;
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitInitFn___spec__3(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitSProj___closed__1;
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitLn___rarg(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitFnDecl(obj*, uint8, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitReset___closed__3;
uint8 l_Lean_IR_IRType_isObj___main(uint8);
obj* l_Lean_IR_EmitCpp_emitCtor___closed__1;
obj* l_Lean_IR_EmitCpp_emitJmp___closed__2;
extern obj* l_uint32Sz;
obj* l_Lean_IR_EmitCpp_emitCtorSetArgs___boxed(obj*, obj*, obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitPartialApp___spec__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitBoxFn___closed__2;
obj* l_Lean_IR_EmitCpp_emitApp___closed__1;
obj* l_Lean_IR_EmitCpp_emitDeclInit___closed__8;
obj* l_String_foldlAux___main___at_Lean_IR_EmitCpp_quoteString___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitIsTaggedPtr(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_throwUnknownVar___rarg___closed__1;
obj* l_Lean_IR_EmitCpp_emitBlock___main(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitInc___closed__1;
obj* l_AssocList_find___main___at_Lean_IR_EmitCpp_getJPParams___spec__2___boxed(obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitSSet___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_toBaseCppName(obj*, obj*, obj*);
obj* l_Lean_IR_emitCpp___closed__1;
obj* l_Lean_IR_EmitCpp_toCppType___main___closed__5;
obj* l_Lean_IR_EmitCpp_emitNumLit___boxed(obj*, obj*, obj*, obj*);
extern obj* l_Char_quoteCore___closed__1;
obj* l_Lean_IR_EmitCpp_emitFileHeader___boxed(obj*, obj*);
obj* l_Lean_IR_EmitCpp_isTailCall(obj*, obj*, obj*, obj*, obj*);
namespace lean {
obj* string_push(obj*, uint32);
}
obj* l_Lean_IR_EmitCpp_emitSet___closed__1;
obj* l_Lean_IR_EmitCpp_getJPParams___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitReset___closed__4;
obj* l_Lean_SimplePersistentEnvExtension_getEntries___rarg(obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitReset(obj*, obj*, obj*, obj*, obj*);
obj* l_Array_toList___rarg(obj*);
obj* l_Lean_IR_EmitCpp_emitLhs(obj*, obj*, obj*);
obj* l_Lean_IR_usesLeanNamespace___main(obj*, obj*);
uint8 l_Lean_NameSet_contains(obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitReset___closed__5;
obj* l_Lean_IR_EmitCpp_hasMainFn(obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitReset___spec__1___closed__1;
obj* l_Lean_IR_EmitCpp_emitNumLit___closed__2;
obj* l_Lean_IR_EmitCpp_emitPartialApp___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Nat_repr(obj*);
obj* l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
extern obj* l_String_quote___closed__1;
obj* l_Lean_IR_EmitCpp_declareParams___boxed(obj*, obj*, obj*);
uint8 l_Lean_hasInitAttr(obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitFnDeclAux___closed__4;
obj* l_RBNode_insert___at_Lean_NameSet_insert___spec__1(obj*, obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitArgs___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitCppInitName___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_quoteName(obj*);
obj* l_Lean_IR_mkVarJPMaps(obj*);
obj* l_Lean_IR_EmitCpp_emitUProj___closed__1;
obj* l_Lean_IR_EmitCpp_emitJPs___main(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitFileHeader___closed__7;
obj* l_Lean_IR_EmitCpp_getModName___boxed(obj*, obj*);
obj* l_Lean_IR_EmitCpp_closeNamespacesAux___main___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitMainFn___closed__6;
obj* l_Lean_IR_EmitCpp_emitInc___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitIsShared___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitInitFn___closed__1;
obj* l_Lean_IR_EmitCpp_throwInvalidExportName___rarg___closed__1;
obj* l_Lean_IR_EmitCpp_toCppType___main___closed__4;
obj* l_Lean_IR_EmitCpp_emitApp___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__1;
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__2(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitMainFn___closed__7;
obj* l_Lean_IR_EmitCpp_quoteNameAux___main(obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitCtorSetArgs___spec__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitArgs___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitFnDecls(obj*, obj*);
obj* l_Lean_IR_EmitCpp_closeNamespacesAux___boxed(obj*, obj*, obj*);
extern obj* l_Char_quoteCore___closed__2;
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitOffset___closed__1;
obj* l_Lean_IR_EmitCpp_quoteNameAux___main___closed__1;
obj* l_Lean_IR_EmitCpp_emitExternDeclAux___closed__2;
uint8 l_Nat_anyAux___main___at_Lean_IR_EmitCpp_overwriteParam___spec__2(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitFileHeader___closed__4;
namespace lean {
obj* string_append(obj*, obj*);
}
obj* l_Lean_IR_EmitCpp_emitOffset(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitReset___closed__2;
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitNumLit___closed__4;
obj* l_Lean_IR_EmitCpp_getDecl(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitTag___closed__1;
obj* l_Lean_IR_EmitCpp_emitUnbox(obj*, uint8, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitLns___at_Lean_IR_EmitCpp_emitMainFn___spec__1(obj*, obj*, obj*);
extern obj* l_List_reprAux___main___rarg___closed__1;
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__5___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitUnbox___closed__4;
uint8 l_Lean_IR_isTailCallTo(obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitInitFn___closed__5;
obj* l_Lean_IR_EmitCpp_emitNumLit(uint8, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitExternDeclAux___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitUSet(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitLn(obj*);
obj* l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
extern obj* l_Option_HasRepr___rarg___closed__3;
uint8 l_Lean_IR_EmitCpp_paramEqArg(obj*, obj*);
namespace lean {
uint8 nat_dec_lt(obj*, obj*);
}
obj* l_Lean_IR_EmitCpp_emitMainFn(obj*, obj*);
uint8 l_Lean_isExternC(obj*, obj*);
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_declareParams___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Nat_anyAux___main___at_Lean_IR_EmitCpp_overwriteParam___spec__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_RBTree_toList___at_Lean_IR_EmitCpp_emitFnDecls___spec__3(obj*);
obj* l_Lean_IR_EmitCpp_emitCase___closed__2;
obj* l_Lean_IR_EmitCpp_emitInitFn___closed__3;
obj* l_Lean_IR_EmitCpp_emitSProj___closed__2;
namespace lean {
obj* nat_mod(obj*, obj*);
}
obj* l_HashMapImp_find___at_Lean_IR_EmitCpp_isObj___spec__1(obj*, obj*);
uint8 l_Lean_IR_FnBody_isTerminal___main(obj*);
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitSetTag___closed__1;
obj* l_Lean_IR_EmitCpp_emitLit(obj*, uint8, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitFns(obj*, obj*);
extern obj* l_Char_HasRepr___closed__1;
obj* l_Lean_IR_EmitCpp_emitProj___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitReuse___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_Lean_IR_declMapExt;
obj* l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__3;
obj* l_Array_fget(obj*, obj*, obj*);
extern "C" obj* lean_name_mk_string(obj*, obj*);
obj* l_Lean_IR_EmitCpp_openNamespacesAux(obj*, obj*, obj*);
obj* l_Lean_IR_Decl_name___main(obj*);
obj* l_Lean_IR_EmitCpp_toCppType___main(uint8);
obj* l_Lean_IR_EmitCpp_emitReuse___closed__1;
obj* l_Lean_IR_EmitCpp_argToCppString(obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__1;
obj* l_Lean_IR_EmitCpp_emitApp___closed__2;
extern obj* l_Char_quoteCore___closed__5;
namespace lean {
obj* nat_add(obj*, obj*);
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitBoxFn(uint8, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitDeclInit___closed__6;
obj* l_Lean_IR_EmitCpp_emitBlock___main___closed__2;
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
obj* l_Lean_IR_EmitCpp_emitJmp(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitBoxFn___closed__3;
extern obj* l_Prod_HasRepr___rarg___closed__1;
extern obj* l_Lean_IR_paramInh;
obj* l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__2;
uint8 l_Array_isEmpty___rarg(obj*);
obj* l_Lean_IR_EmitCpp_emitIsTaggedPtr___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitProj(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_argToCppString___closed__1;
obj* l_Lean_IR_EmitCpp_emitCase(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitCtorScalarSize(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitMainFn___closed__12;
obj* l_Lean_IR_EmitCpp_emitSet(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitFnDeclAux(obj*, obj*, uint8, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitMainFn___closed__2;
obj* l_Lean_IR_EmitCpp_emitDeclAux___closed__2;
obj* l_Lean_IR_EmitCpp_emitFullApp___closed__1;
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__2(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitReset___closed__1;
obj* l_Lean_IR_EmitCpp_emitMainFn___closed__3;
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__2(obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_Lean_IR_altInh;
obj* l_Lean_IR_EmitCpp_emitMainFn___closed__4;
namespace lean {
uint32 string_utf8_get(obj*, obj*);
}
obj* l_Lean_IR_EmitCpp_emitDeclInit___closed__5;
obj* l_Lean_IR_EmitCpp_emitJmp___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitDeclInit___closed__1;
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitLns___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitFileHeader___closed__2;
obj* l_Lean_IR_collectUsedDecls(obj*, obj*, obj*);
uint8 l_UInt32_decEq(uint32, uint32);
obj* l_Lean_IR_EmitCpp_emitCppInitName(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitBox(obj*, obj*, uint8, obj*, obj*);
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__2;
obj* l_Lean_IR_EmitCpp_toCppInitName___closed__1;
obj* l_Lean_IR_EmitCpp_emitVDecl___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitReset___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_declareVars___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_ParametricAttribute_getParam___at_Lean_isIOUnitInitFn___spec__1(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitDeclInit___closed__7;
obj* l_Lean_IR_EmitCpp_emitArg(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitInc___closed__3;
obj* l_Lean_IR_EmitCpp_emitSProj(obj*, uint8, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_toCppType___main___boxed(obj*);
obj* l_Lean_IR_EmitCpp_quoteString___boxed(obj*);
obj* l_Nat_anyAux___main___at_Lean_IR_EmitCpp_overwriteParam___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitLhs___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitBox___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitBlock(obj*, obj*, obj*, obj*);
obj* l_HashMapImp_find___at_Lean_IR_EmitCpp_getJPParams___spec__1(obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitLit___closed__1;
obj* l_Lean_IR_EmitCpp_emitFnBody___main___closed__1;
obj* l_Lean_IR_EmitCpp_emitApp___closed__4;
obj* l_Lean_IR_EmitCpp_toBaseCppName___closed__2;
obj* l_Lean_IR_EmitCpp_emitDeclInit___closed__4;
obj* l_Lean_IR_EmitCpp_emitCppName___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitDeclInit___boxed(obj*, obj*, obj*);
obj* l_RBNode_revFold___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__4___boxed(obj*, obj*);
obj* l_Lean_IR_EmitCpp_main(obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitExternDeclAux___closed__1;
obj* l_Lean_IR_EmitCpp_cppQualifiedNameToName(obj*);
obj* l_Lean_IR_EmitCpp_emitTag___boxed(obj*, obj*, obj*);
obj* l_String_split(obj*, obj*);
extern obj* l_Lean_closureMaxArgs;
obj* l_Lean_IR_EmitCpp_emitApp___closed__5;
obj* l_Lean_IR_EmitCpp_emitCtor(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitInitFn(obj*, obj*);
obj* l_Lean_IR_AltCore_body___main(obj*);
obj* l_Lean_IR_EmitCpp_emitLns___rarg(obj*, obj*, obj*, obj*);
extern obj* l_Lean_exportAttr;
uint8 l_Lean_IR_ExplicitBoxing_requiresBoxedVersion(obj*, obj*);
obj* l_Lean_IR_EmitCpp_toCppInitName(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitOffset___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_findEnvDecl(obj*, obj*);
extern obj* l_Lean_IR_ExplicitBoxing_mkBoxedName___closed__1;
namespace lean {
usize usize_modn(usize, obj*);
}
obj* l_Lean_IR_EmitCpp_toCppName(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitInitFn___closed__2;
obj* l_Lean_IR_EmitCpp_getJPParams(obj*, obj*, obj*);
obj* l_AssocList_find___main___at_Lean_IR_EmitCpp_isObj___spec__2(obj*, obj*);
obj* l_Lean_IR_EmitCpp_overwriteParam___boxed(obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitFnBody___main(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_throwUnknownVar(obj*);
obj* l_Lean_IR_EmitCpp_emitNumLit___closed__3;
obj* l_Lean_IR_EmitCpp_emitIsShared(obj*, obj*, obj*, obj*);
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_declareParams___spec__1(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitIf___closed__1;
obj* l_Lean_IR_EmitCpp_emitAllocCtor(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_getModName(obj*, obj*);
extern obj* l_HashMap_Inhabited___closed__1;
obj* l_Lean_IR_EmitCpp_emitFnDeclAux___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitLn___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__3;
obj* l_Lean_IR_EmitCpp_emitPartialApp___closed__1;
extern obj* l_Lean_IR_VarId_HasToString___closed__1;
obj* l_Lean_IR_Decl_params___main(obj*);
obj* l_Array_size(obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitMainFn___closed__5;
obj* l_Lean_IR_EmitCpp_emitIf___closed__3;
obj* l_Lean_IR_EmitCpp_emitTailCall___closed__1;
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__5___closed__1;
obj* l_Lean_IR_EmitCpp_emitSet___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitDel(obj*, obj*, obj*);
obj* l_List_foldl___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__1___boxed(obj*, obj*);
obj* l_RBNode_revFold___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__4(obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitInitFn___boxed(obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_openNamespacesFor___boxed(obj*, obj*, obj*);
obj* l_List_foldl___main___at_Lean_IR_EmitCpp_cppQualifiedNameToName___spec__1(obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitFileHeader___closed__6;
obj* l_Lean_IR_EmitCpp_emitReuse(obj*, obj*, obj*, uint8, obj*, obj*, obj*);
obj* l_Array_get(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_toBaseCppName___closed__1;
obj* l_Lean_Name_getPrefix___main(obj*);
obj* l_Lean_IR_EmitCpp_emitFullApp(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_toCppType___main___closed__3;
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_throwUnknownVar___rarg(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitCtorScalarSize___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_toCppName___closed__1;
obj* l_Lean_Environment_imports(obj*);
obj* l_AssocList_find___main___at_Lean_IR_EmitCpp_getJPParams___spec__2(obj*, obj*);
obj* l_List_foldl___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__2(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitArgs(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_toCppType___main___closed__2;
namespace lean {
obj* string_utf8_next(obj*, obj*);
}
obj* l_Lean_IR_EmitCpp_emitBoxFn___closed__1;
obj* l_Lean_IR_EmitCpp_emitCtor___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_FnBody_body___main(obj*);
extern obj* l_Lean_Name_toString___closed__1;
obj* l_Lean_IR_EmitCpp_emitDec___closed__2;
obj* l_Lean_IR_EmitCpp_declareVar(obj*, uint8, obj*, obj*);
obj* l_Lean_IR_EmitCpp_toCppType___boxed(obj*);
obj* l_Lean_IR_EmitCpp_openNamespacesFor(obj*, obj*, obj*);
namespace lean {
uint8 nat_dec_le(obj*, obj*);
}
obj* l_Lean_IR_EmitCpp_emitAllocCtor___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_toCppInitName___boxed(obj*, obj*, obj*);
obj* l_AssocList_find___main___at_Lean_IR_EmitCpp_isObj___spec__2___boxed(obj*, obj*);
obj* l_Lean_IR_EmitCpp_toStringArgs___boxed(obj*);
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitLns___spec__1(obj*);
obj* l_Lean_IR_EmitCpp_emitFileHeader___closed__3;
namespace lean {
usize usize_of_nat(obj*);
}
obj* l_Lean_IR_EmitCpp_declareVar___closed__1;
obj* l_Lean_IR_EmitCpp_openNamespaces(obj*, obj*, obj*);
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitFileHeader___spec__1(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitPartialApp(obj*, obj*, obj*, obj*, obj*);
namespace lean {
obj* string_utf8_byte_size(obj*);
}
namespace lean {
obj* nat_div(obj*, obj*);
}
obj* l_Lean_IR_EmitCpp_emitDec___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitIsShared___closed__1;
obj* l_Lean_IR_EmitCpp_emitFnBody(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitApp___closed__3;
obj* l_Lean_IR_EmitCpp_emitUnbox___closed__1;
namespace lean {
obj* uint32_to_nat(uint32);
}
obj* l_Lean_IR_EmitCpp_quoteString(obj*);
obj* l_Lean_IR_EmitCpp_emitLns___at_Lean_IR_EmitCpp_emitMainFn___spec__1___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitInc(obj*, obj*, uint8, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitUSet___closed__1;
uint32 l_Nat_digitChar(obj*);
obj* l_Lean_IR_EmitCpp_toHexDigit___boxed(obj*);
obj* l_Lean_IR_EmitCpp_emitExternDeclAux(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_declareVar___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_declareParams(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitDecl___closed__1;
obj* l_Lean_IR_EmitCpp_emitTag(obj*, obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitPartialApp___spec__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitDec___closed__1;
obj* l_Lean_IR_EmitCpp_emitDeclAux(obj*, obj*, obj*);
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__5(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitBoxFn___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitFullApp___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_String_quote(obj*);
obj* l_Lean_IR_EmitCpp_throwInvalidExportName___rarg(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitMainFn___closed__10;
obj* l_Lean_IR_EmitCpp_emitFnDecl___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_declareVars___main(obj*, uint8, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
obj* l_Lean_IR_EmitCpp_toCppType___main___closed__6;
uint8 l_Lean_Name_isInternal___main(obj*);
namespace lean {
namespace ir {
obj* emit_cpp_core(obj*, obj*);
}
}
obj* l_Lean_IR_EmitCpp_throwInvalidExportName(obj*);
obj* l_Lean_IR_EmitCpp_emitSSet(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitMainFn___closed__9;
obj* l_Lean_IR_EmitCpp_emitIf(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_toStringArgs(obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitReset___spec__1(obj*, obj*, obj*, obj*, obj*);
extern obj* l_IO_println___rarg___closed__1;
obj* l_Lean_IR_EmitCpp_emitTailCall___boxed(obj*, obj*, obj*);
uint8 l_Nat_anyAux___main___at_Lean_IR_EmitCpp_overwriteParam___spec__1(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitFileHeader___closed__1;
obj* l_Lean_IR_EmitCpp_openNamespacesAux___main___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitUProj___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitMainFnIfNeeded(obj*, obj*);
obj* l_Lean_IR_EmitCpp_throwUnknownVar___rarg___boxed(obj*, obj*, obj*);
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__2___closed__1;
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_toHexDigit(obj*);
obj* l_Lean_IR_EmitCpp_openNamespacesAux___main(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_isIf___boxed(obj*);
obj* l_Lean_IR_EmitCpp_emitUnbox___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_toBaseCppName___boxed(obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1;
obj* l_Lean_IR_EmitCpp_emitLns(obj*);
extern obj* l_Lean_IR_Arg_Inhabited;
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__3___closed__1;
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitInitFn___spec__3___boxed(obj*, obj*, obj*);
extern obj* l_Unit_HasRepr___closed__1;
obj* l_Lean_IR_EmitCpp_emitPartialApp___closed__2;
obj* l_Lean_IR_EmitCpp_isTailCall___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_getEnv___boxed(obj*, obj*);
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitLns___spec__1___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_IR_EmitCpp_emitMainFnIfNeeded___boxed(obj*, obj*);
obj* l_Lean_IR_EmitCpp_getEnv(obj*, obj*);
extern obj* l_String_splitAux___main___closed__1;
obj* l_Lean_IR_EmitCpp_emitDel___closed__1;
obj* _init_l_Lean_IR_EmitCpp_leanMainFn() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("_lean_main");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_getEnv(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = !lean::is_exclusive(x_2);
if (x_3 == 0)
{
obj* x_4; obj* x_5; 
x_4 = lean::cnstr_get(x_2, 0);
lean::dec(x_4);
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
lean::cnstr_set(x_2, 0, x_5);
return x_2;
}
else
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = lean::cnstr_get(x_2, 1);
lean::inc(x_6);
lean::dec(x_2);
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_6);
return x_8;
}
}
}
obj* l_Lean_IR_EmitCpp_getEnv___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_EmitCpp_getEnv(x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_IR_EmitCpp_getModName(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = !lean::is_exclusive(x_2);
if (x_3 == 0)
{
obj* x_4; obj* x_5; 
x_4 = lean::cnstr_get(x_2, 0);
lean::dec(x_4);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::cnstr_set(x_2, 0, x_5);
return x_2;
}
else
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = lean::cnstr_get(x_2, 1);
lean::inc(x_6);
lean::dec(x_2);
x_7 = lean::cnstr_get(x_1, 1);
lean::inc(x_7);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_6);
return x_8;
}
}
}
obj* l_Lean_IR_EmitCpp_getModName___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_EmitCpp_getModName(x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_IR_EmitCpp_getDecl(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_getEnv(x_2, x_3);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; 
x_6 = lean::cnstr_get(x_4, 0);
x_7 = l_Lean_IR_findEnvDecl(x_6, x_1);
lean::dec(x_6);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_8 = l_Lean_Name_toString___closed__1;
x_9 = l_Lean_Name_toStringWithSep___main(x_8, x_1);
x_10 = l_Lean_IR_getDecl___closed__1;
x_11 = lean::string_append(x_10, x_9);
lean::dec(x_9);
x_12 = l_Char_HasRepr___closed__1;
x_13 = lean::string_append(x_11, x_12);
lean::cnstr_set_tag(x_4, 1);
lean::cnstr_set(x_4, 0, x_13);
return x_4;
}
else
{
obj* x_14; 
lean::dec(x_1);
x_14 = lean::cnstr_get(x_7, 0);
lean::inc(x_14);
lean::dec(x_7);
lean::cnstr_set(x_4, 0, x_14);
return x_4;
}
}
else
{
obj* x_15; obj* x_16; obj* x_17; 
x_15 = lean::cnstr_get(x_4, 0);
x_16 = lean::cnstr_get(x_4, 1);
lean::inc(x_16);
lean::inc(x_15);
lean::dec(x_4);
x_17 = l_Lean_IR_findEnvDecl(x_15, x_1);
lean::dec(x_15);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_18 = l_Lean_Name_toString___closed__1;
x_19 = l_Lean_Name_toStringWithSep___main(x_18, x_1);
x_20 = l_Lean_IR_getDecl___closed__1;
x_21 = lean::string_append(x_20, x_19);
lean::dec(x_19);
x_22 = l_Char_HasRepr___closed__1;
x_23 = lean::string_append(x_21, x_22);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_16);
return x_24;
}
else
{
obj* x_25; obj* x_26; 
lean::dec(x_1);
x_25 = lean::cnstr_get(x_17, 0);
lean::inc(x_25);
lean::dec(x_17);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_16);
return x_26;
}
}
}
else
{
uint8 x_27; 
lean::dec(x_1);
x_27 = !lean::is_exclusive(x_4);
if (x_27 == 0)
{
return x_4;
}
else
{
obj* x_28; obj* x_29; obj* x_30; 
x_28 = lean::cnstr_get(x_4, 0);
x_29 = lean::cnstr_get(x_4, 1);
lean::inc(x_29);
lean::inc(x_28);
lean::dec(x_4);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_28);
lean::cnstr_set(x_30, 1, x_29);
return x_30;
}
}
}
}
obj* l_Lean_IR_EmitCpp_getDecl___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_getDecl(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Lean_IR_EmitCpp_emit___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_4, 1);
x_7 = lean::cnstr_get(x_4, 0);
lean::dec(x_7);
x_8 = lean::apply_1(x_1, x_2);
x_9 = lean::string_append(x_6, x_8);
lean::dec(x_8);
x_10 = lean::box(0);
lean::cnstr_set(x_4, 1, x_9);
lean::cnstr_set(x_4, 0, x_10);
return x_4;
}
else
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_11 = lean::cnstr_get(x_4, 1);
lean::inc(x_11);
lean::dec(x_4);
x_12 = lean::apply_1(x_1, x_2);
x_13 = lean::string_append(x_11, x_12);
lean::dec(x_12);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_13);
return x_15;
}
}
}
obj* l_Lean_IR_EmitCpp_emit(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_IR_EmitCpp_emit___rarg___boxed), 4, 0);
return x_2;
}
}
obj* l_Lean_IR_EmitCpp_emit___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_emit___rarg(x_1, x_2, x_3, x_4);
lean::dec(x_3);
return x_5;
}
}
obj* l_Lean_IR_EmitCpp_emitLn___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_6 = lean::cnstr_get(x_4, 1);
x_7 = lean::cnstr_get(x_4, 0);
lean::dec(x_7);
x_8 = lean::apply_1(x_1, x_2);
x_9 = lean::string_append(x_6, x_8);
lean::dec(x_8);
x_10 = l_IO_println___rarg___closed__1;
x_11 = lean::string_append(x_9, x_10);
x_12 = lean::box(0);
lean::cnstr_set(x_4, 1, x_11);
lean::cnstr_set(x_4, 0, x_12);
return x_4;
}
else
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_13 = lean::cnstr_get(x_4, 1);
lean::inc(x_13);
lean::dec(x_4);
x_14 = lean::apply_1(x_1, x_2);
x_15 = lean::string_append(x_13, x_14);
lean::dec(x_14);
x_16 = l_IO_println___rarg___closed__1;
x_17 = lean::string_append(x_15, x_16);
x_18 = lean::box(0);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_17);
return x_19;
}
}
}
obj* l_Lean_IR_EmitCpp_emitLn(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_IR_EmitCpp_emitLn___rarg___boxed), 4, 0);
return x_2;
}
}
obj* l_Lean_IR_EmitCpp_emitLn___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_emitLn___rarg(x_1, x_2, x_3, x_4);
lean::dec(x_3);
return x_5;
}
}
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitLns___spec__1___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
uint8 x_5; 
lean::dec(x_1);
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; 
x_6 = lean::cnstr_get(x_4, 0);
lean::dec(x_6);
x_7 = lean::box(0);
lean::cnstr_set(x_4, 0, x_7);
return x_4;
}
else
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = lean::cnstr_get(x_4, 1);
lean::inc(x_8);
lean::dec(x_4);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_8);
return x_10;
}
}
else
{
obj* x_11; obj* x_12; uint8 x_13; 
x_11 = lean::cnstr_get(x_2, 0);
lean::inc(x_11);
x_12 = lean::cnstr_get(x_2, 1);
lean::inc(x_12);
lean::dec(x_2);
x_13 = !lean::is_exclusive(x_4);
if (x_13 == 0)
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_14 = lean::cnstr_get(x_4, 1);
x_15 = lean::cnstr_get(x_4, 0);
lean::dec(x_15);
lean::inc(x_1);
x_16 = lean::apply_1(x_1, x_11);
x_17 = lean::string_append(x_14, x_16);
lean::dec(x_16);
x_18 = l_IO_println___rarg___closed__1;
x_19 = lean::string_append(x_17, x_18);
x_20 = lean::box(0);
lean::cnstr_set(x_4, 1, x_19);
lean::cnstr_set(x_4, 0, x_20);
x_2 = x_12;
goto _start;
}
else
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_22 = lean::cnstr_get(x_4, 1);
lean::inc(x_22);
lean::dec(x_4);
lean::inc(x_1);
x_23 = lean::apply_1(x_1, x_11);
x_24 = lean::string_append(x_22, x_23);
lean::dec(x_23);
x_25 = l_IO_println___rarg___closed__1;
x_26 = lean::string_append(x_24, x_25);
x_27 = lean::box(0);
x_28 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_26);
x_2 = x_12;
x_4 = x_28;
goto _start;
}
}
}
}
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitLns___spec__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_List_mfor___main___at_Lean_IR_EmitCpp_emitLns___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
obj* l_Lean_IR_EmitCpp_emitLns___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitLns___spec__1___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
obj* l_Lean_IR_EmitCpp_emitLns(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_IR_EmitCpp_emitLns___rarg___boxed), 4, 0);
return x_2;
}
}
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitLns___spec__1___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitLns___spec__1___rarg(x_1, x_2, x_3, x_4);
lean::dec(x_3);
return x_5;
}
}
obj* l_Lean_IR_EmitCpp_emitLns___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_emitLns___rarg(x_1, x_2, x_3, x_4);
lean::dec(x_3);
return x_5;
}
}
obj* _init_l_Lean_IR_EmitCpp_argToCppString___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::box(0)");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_argToCppString(obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
lean::dec(x_1);
x_3 = l_Nat_repr(x_2);
x_4 = l_Lean_IR_VarId_HasToString___closed__1;
x_5 = lean::string_append(x_4, x_3);
lean::dec(x_3);
return x_5;
}
else
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_argToCppString___closed__1;
return x_6;
}
}
}
obj* l_Lean_IR_EmitCpp_emitArg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_5 = lean::cnstr_get(x_3, 1);
x_6 = lean::cnstr_get(x_3, 0);
lean::dec(x_6);
x_7 = l_Lean_IR_EmitCpp_argToCppString(x_1);
x_8 = lean::string_append(x_5, x_7);
lean::dec(x_7);
x_9 = lean::box(0);
lean::cnstr_set(x_3, 1, x_8);
lean::cnstr_set(x_3, 0, x_9);
return x_3;
}
else
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_10 = lean::cnstr_get(x_3, 1);
lean::inc(x_10);
lean::dec(x_3);
x_11 = l_Lean_IR_EmitCpp_argToCppString(x_1);
x_12 = lean::string_append(x_10, x_11);
lean::dec(x_11);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_12);
return x_14;
}
}
}
obj* l_Lean_IR_EmitCpp_emitArg___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_emitArg(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* _init_l_Lean_IR_EmitCpp_toCppType___main___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("double");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_toCppType___main___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("uint8");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_toCppType___main___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("uint16");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_toCppType___main___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("uint32");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_toCppType___main___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("uint64");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_toCppType___main___closed__6() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("usize");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_toCppType___main___closed__7() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("obj*");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_toCppType___main(uint8 x_1) {
_start:
{
obj* x_2; 
x_2 = lean::box(x_1);
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_3; 
x_3 = l_Lean_IR_EmitCpp_toCppType___main___closed__1;
return x_3;
}
case 1:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_toCppType___main___closed__2;
return x_4;
}
case 2:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_toCppType___main___closed__3;
return x_5;
}
case 3:
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_toCppType___main___closed__4;
return x_6;
}
case 4:
{
obj* x_7; 
x_7 = l_Lean_IR_EmitCpp_toCppType___main___closed__5;
return x_7;
}
case 5:
{
obj* x_8; 
x_8 = l_Lean_IR_EmitCpp_toCppType___main___closed__6;
return x_8;
}
default: 
{
obj* x_9; 
lean::dec(x_2);
x_9 = l_Lean_IR_EmitCpp_toCppType___main___closed__7;
return x_9;
}
}
}
}
obj* l_Lean_IR_EmitCpp_toCppType___main___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Lean_IR_EmitCpp_toCppType___main(x_2);
return x_3;
}
}
obj* l_Lean_IR_EmitCpp_toCppType(uint8 x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_IR_EmitCpp_toCppType___main(x_1);
return x_2;
}
}
obj* l_Lean_IR_EmitCpp_toCppType___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Lean_IR_EmitCpp_toCppType(x_2);
return x_3;
}
}
obj* _init_l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("namespace ");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" {");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("invalid namespace '");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_openNamespacesAux___main(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
switch (lean::obj_tag(x_1)) {
case 0:
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; 
x_5 = lean::cnstr_get(x_3, 0);
lean::dec(x_5);
x_6 = lean::box(0);
lean::cnstr_set(x_3, 0, x_6);
return x_3;
}
else
{
obj* x_7; obj* x_8; obj* x_9; 
x_7 = lean::cnstr_get(x_3, 1);
lean::inc(x_7);
lean::dec(x_3);
x_8 = lean::box(0);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
return x_9;
}
}
case 1:
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_11 = lean::cnstr_get(x_1, 1);
lean::inc(x_11);
lean::dec(x_1);
x_12 = l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__1;
x_13 = lean::string_append(x_12, x_11);
lean::dec(x_11);
x_14 = l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__2;
x_15 = lean::string_append(x_13, x_14);
x_16 = l_Lean_IR_EmitCpp_openNamespacesAux___main(x_10, x_2, x_3);
if (lean::obj_tag(x_16) == 0)
{
uint8 x_17; 
x_17 = !lean::is_exclusive(x_16);
if (x_17 == 0)
{
obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_18 = lean::cnstr_get(x_16, 1);
x_19 = lean::cnstr_get(x_16, 0);
lean::dec(x_19);
x_20 = lean::string_append(x_18, x_15);
lean::dec(x_15);
x_21 = l_IO_println___rarg___closed__1;
x_22 = lean::string_append(x_20, x_21);
x_23 = lean::box(0);
lean::cnstr_set(x_16, 1, x_22);
lean::cnstr_set(x_16, 0, x_23);
return x_16;
}
else
{
obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_24 = lean::cnstr_get(x_16, 1);
lean::inc(x_24);
lean::dec(x_16);
x_25 = lean::string_append(x_24, x_15);
lean::dec(x_15);
x_26 = l_IO_println___rarg___closed__1;
x_27 = lean::string_append(x_25, x_26);
x_28 = lean::box(0);
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_27);
return x_29;
}
}
else
{
uint8 x_30; 
lean::dec(x_15);
x_30 = !lean::is_exclusive(x_16);
if (x_30 == 0)
{
return x_16;
}
else
{
obj* x_31; obj* x_32; obj* x_33; 
x_31 = lean::cnstr_get(x_16, 0);
x_32 = lean::cnstr_get(x_16, 1);
lean::inc(x_32);
lean::inc(x_31);
lean::dec(x_16);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_31);
lean::cnstr_set(x_33, 1, x_32);
return x_33;
}
}
}
default: 
{
uint8 x_34; 
x_34 = !lean::is_exclusive(x_3);
if (x_34 == 0)
{
obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
x_35 = lean::cnstr_get(x_3, 0);
lean::dec(x_35);
x_36 = l_Lean_Name_toString___closed__1;
x_37 = l_Lean_Name_toStringWithSep___main(x_36, x_1);
x_38 = l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__3;
x_39 = lean::string_append(x_38, x_37);
lean::dec(x_37);
x_40 = l_Char_HasRepr___closed__1;
x_41 = lean::string_append(x_39, x_40);
lean::cnstr_set_tag(x_3, 1);
lean::cnstr_set(x_3, 0, x_41);
return x_3;
}
else
{
obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
x_42 = lean::cnstr_get(x_3, 1);
lean::inc(x_42);
lean::dec(x_3);
x_43 = l_Lean_Name_toString___closed__1;
x_44 = l_Lean_Name_toStringWithSep___main(x_43, x_1);
x_45 = l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__3;
x_46 = lean::string_append(x_45, x_44);
lean::dec(x_44);
x_47 = l_Char_HasRepr___closed__1;
x_48 = lean::string_append(x_46, x_47);
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_48);
lean::cnstr_set(x_49, 1, x_42);
return x_49;
}
}
}
}
}
obj* l_Lean_IR_EmitCpp_openNamespacesAux___main___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_openNamespacesAux___main(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Lean_IR_EmitCpp_openNamespacesAux(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_openNamespacesAux___main(x_1, x_2, x_3);
return x_4;
}
}
obj* l_Lean_IR_EmitCpp_openNamespacesAux___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_openNamespacesAux(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Lean_IR_EmitCpp_openNamespaces(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = l_Lean_Name_getPrefix___main(x_1);
x_5 = l_Lean_IR_EmitCpp_openNamespacesAux___main(x_4, x_2, x_3);
return x_5;
}
}
obj* l_Lean_IR_EmitCpp_openNamespaces___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_openNamespaces(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_IR_EmitCpp_openNamespacesFor(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_getEnv(x_2, x_3);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
x_8 = lean::box(0);
lean::inc(x_7);
lean::cnstr_set(x_4, 0, x_8);
x_9 = l_Lean_exportAttr;
x_10 = l_Lean_ParametricAttribute_getParam___at_Lean_isIOUnitInitFn___spec__1(x_9, x_6, x_1);
lean::dec(x_6);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; 
lean::dec(x_4);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_7);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_7);
x_12 = lean::cnstr_get(x_10, 0);
lean::inc(x_12);
lean::dec(x_10);
x_13 = l_Lean_IR_EmitCpp_openNamespaces(x_12, x_2, x_4);
lean::dec(x_12);
return x_13;
}
}
else
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_14 = lean::cnstr_get(x_4, 0);
x_15 = lean::cnstr_get(x_4, 1);
lean::inc(x_15);
lean::inc(x_14);
lean::dec(x_4);
x_16 = lean::box(0);
lean::inc(x_15);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_15);
x_18 = l_Lean_exportAttr;
x_19 = l_Lean_ParametricAttribute_getParam___at_Lean_isIOUnitInitFn___spec__1(x_18, x_14, x_1);
lean::dec(x_14);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; 
lean::dec(x_17);
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_16);
lean::cnstr_set(x_20, 1, x_15);
return x_20;
}
else
{
obj* x_21; obj* x_22; 
lean::dec(x_15);
x_21 = lean::cnstr_get(x_19, 0);
lean::inc(x_21);
lean::dec(x_19);
x_22 = l_Lean_IR_EmitCpp_openNamespaces(x_21, x_2, x_17);
lean::dec(x_21);
return x_22;
}
}
}
else
{
uint8 x_23; 
lean::dec(x_1);
x_23 = !lean::is_exclusive(x_4);
if (x_23 == 0)
{
return x_4;
}
else
{
obj* x_24; obj* x_25; obj* x_26; 
x_24 = lean::cnstr_get(x_4, 0);
x_25 = lean::cnstr_get(x_4, 1);
lean::inc(x_25);
lean::inc(x_24);
lean::dec(x_4);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_24);
lean::cnstr_set(x_26, 1, x_25);
return x_26;
}
}
}
}
obj* l_Lean_IR_EmitCpp_openNamespacesFor___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_openNamespacesFor(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* _init_l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("}");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_closeNamespacesAux___main(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
switch (lean::obj_tag(x_1)) {
case 0:
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; 
x_5 = lean::cnstr_get(x_3, 0);
lean::dec(x_5);
x_6 = lean::box(0);
lean::cnstr_set(x_3, 0, x_6);
return x_3;
}
else
{
obj* x_7; obj* x_8; obj* x_9; 
x_7 = lean::cnstr_get(x_3, 1);
lean::inc(x_7);
lean::dec(x_3);
x_8 = lean::box(0);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
return x_9;
}
}
case 1:
{
obj* x_10; uint8 x_11; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
lean::dec(x_1);
x_11 = !lean::is_exclusive(x_3);
if (x_11 == 0)
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_12 = lean::cnstr_get(x_3, 1);
x_13 = lean::cnstr_get(x_3, 0);
lean::dec(x_13);
x_14 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_15 = lean::string_append(x_12, x_14);
x_16 = l_IO_println___rarg___closed__1;
x_17 = lean::string_append(x_15, x_16);
x_18 = lean::box(0);
lean::cnstr_set(x_3, 1, x_17);
lean::cnstr_set(x_3, 0, x_18);
x_1 = x_10;
goto _start;
}
else
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_20 = lean::cnstr_get(x_3, 1);
lean::inc(x_20);
lean::dec(x_3);
x_21 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_22 = lean::string_append(x_20, x_21);
x_23 = l_IO_println___rarg___closed__1;
x_24 = lean::string_append(x_22, x_23);
x_25 = lean::box(0);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_24);
x_1 = x_10;
x_3 = x_26;
goto _start;
}
}
default: 
{
uint8 x_28; 
x_28 = !lean::is_exclusive(x_3);
if (x_28 == 0)
{
obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
x_29 = lean::cnstr_get(x_3, 0);
lean::dec(x_29);
x_30 = l_Lean_Name_toString___closed__1;
x_31 = l_Lean_Name_toStringWithSep___main(x_30, x_1);
x_32 = l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__3;
x_33 = lean::string_append(x_32, x_31);
lean::dec(x_31);
x_34 = l_Char_HasRepr___closed__1;
x_35 = lean::string_append(x_33, x_34);
lean::cnstr_set_tag(x_3, 1);
lean::cnstr_set(x_3, 0, x_35);
return x_3;
}
else
{
obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_36 = lean::cnstr_get(x_3, 1);
lean::inc(x_36);
lean::dec(x_3);
x_37 = l_Lean_Name_toString___closed__1;
x_38 = l_Lean_Name_toStringWithSep___main(x_37, x_1);
x_39 = l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__3;
x_40 = lean::string_append(x_39, x_38);
lean::dec(x_38);
x_41 = l_Char_HasRepr___closed__1;
x_42 = lean::string_append(x_40, x_41);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_42);
lean::cnstr_set(x_43, 1, x_36);
return x_43;
}
}
}
}
}
obj* l_Lean_IR_EmitCpp_closeNamespacesAux___main___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_closeNamespacesAux___main(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Lean_IR_EmitCpp_closeNamespacesAux(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_closeNamespacesAux___main(x_1, x_2, x_3);
return x_4;
}
}
obj* l_Lean_IR_EmitCpp_closeNamespacesAux___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_closeNamespacesAux(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Lean_IR_EmitCpp_closeNamespaces(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = l_Lean_Name_getPrefix___main(x_1);
x_5 = l_Lean_IR_EmitCpp_closeNamespacesAux___main(x_4, x_2, x_3);
return x_5;
}
}
obj* l_Lean_IR_EmitCpp_closeNamespaces___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_closeNamespaces(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_IR_EmitCpp_closeNamespacesFor(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_getEnv(x_2, x_3);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
x_8 = lean::box(0);
lean::inc(x_7);
lean::cnstr_set(x_4, 0, x_8);
x_9 = l_Lean_exportAttr;
x_10 = l_Lean_ParametricAttribute_getParam___at_Lean_isIOUnitInitFn___spec__1(x_9, x_6, x_1);
lean::dec(x_6);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; 
lean::dec(x_4);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_7);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_7);
x_12 = lean::cnstr_get(x_10, 0);
lean::inc(x_12);
lean::dec(x_10);
x_13 = l_Lean_IR_EmitCpp_closeNamespaces(x_12, x_2, x_4);
lean::dec(x_12);
return x_13;
}
}
else
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_14 = lean::cnstr_get(x_4, 0);
x_15 = lean::cnstr_get(x_4, 1);
lean::inc(x_15);
lean::inc(x_14);
lean::dec(x_4);
x_16 = lean::box(0);
lean::inc(x_15);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_15);
x_18 = l_Lean_exportAttr;
x_19 = l_Lean_ParametricAttribute_getParam___at_Lean_isIOUnitInitFn___spec__1(x_18, x_14, x_1);
lean::dec(x_14);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; 
lean::dec(x_17);
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_16);
lean::cnstr_set(x_20, 1, x_15);
return x_20;
}
else
{
obj* x_21; obj* x_22; 
lean::dec(x_15);
x_21 = lean::cnstr_get(x_19, 0);
lean::inc(x_21);
lean::dec(x_19);
x_22 = l_Lean_IR_EmitCpp_closeNamespaces(x_21, x_2, x_17);
lean::dec(x_21);
return x_22;
}
}
}
else
{
uint8 x_23; 
lean::dec(x_1);
x_23 = !lean::is_exclusive(x_4);
if (x_23 == 0)
{
return x_4;
}
else
{
obj* x_24; obj* x_25; obj* x_26; 
x_24 = lean::cnstr_get(x_4, 0);
x_25 = lean::cnstr_get(x_4, 1);
lean::inc(x_25);
lean::inc(x_24);
lean::dec(x_4);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_24);
lean::cnstr_set(x_26, 1, x_25);
return x_26;
}
}
}
}
obj* l_Lean_IR_EmitCpp_closeNamespacesFor___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* _init_l_Lean_IR_EmitCpp_throwInvalidExportName___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("invalid export name '");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_throwInvalidExportName___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_5 = lean::cnstr_get(x_3, 0);
lean::dec(x_5);
x_6 = l_Lean_Name_toString___closed__1;
x_7 = l_Lean_Name_toStringWithSep___main(x_6, x_1);
x_8 = l_Lean_IR_EmitCpp_throwInvalidExportName___rarg___closed__1;
x_9 = lean::string_append(x_8, x_7);
lean::dec(x_7);
x_10 = l_Char_HasRepr___closed__1;
x_11 = lean::string_append(x_9, x_10);
lean::cnstr_set_tag(x_3, 1);
lean::cnstr_set(x_3, 0, x_11);
return x_3;
}
else
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_12 = lean::cnstr_get(x_3, 1);
lean::inc(x_12);
lean::dec(x_3);
x_13 = l_Lean_Name_toString___closed__1;
x_14 = l_Lean_Name_toStringWithSep___main(x_13, x_1);
x_15 = l_Lean_IR_EmitCpp_throwInvalidExportName___rarg___closed__1;
x_16 = lean::string_append(x_15, x_14);
lean::dec(x_14);
x_17 = l_Char_HasRepr___closed__1;
x_18 = lean::string_append(x_16, x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_12);
return x_19;
}
}
}
obj* l_Lean_IR_EmitCpp_throwInvalidExportName(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_IR_EmitCpp_throwInvalidExportName___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l_Lean_IR_EmitCpp_throwInvalidExportName___rarg___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_throwInvalidExportName___rarg(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* _init_l_Lean_IR_EmitCpp_toBaseCppName___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = lean::mk_string("main");
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_IR_EmitCpp_toBaseCppName___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("l_");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_toBaseCppName(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_getEnv(x_2, x_3);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
x_8 = lean::box(0);
lean::inc(x_7);
lean::cnstr_set(x_4, 0, x_8);
x_9 = l_Lean_exportAttr;
lean::inc(x_1);
x_10 = l_Lean_ParametricAttribute_getParam___at_Lean_isIOUnitInitFn___spec__1(x_9, x_6, x_1);
lean::dec(x_6);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; uint8 x_12; 
lean::dec(x_4);
x_11 = l_Lean_IR_EmitCpp_toBaseCppName___closed__1;
x_12 = lean_name_dec_eq(x_1, x_11);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_15; 
x_13 = l_Lean_IR_EmitCpp_toBaseCppName___closed__2;
x_14 = l_Lean_Name_mangle(x_1, x_13);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_7);
return x_15;
}
else
{
obj* x_16; obj* x_17; 
lean::dec(x_1);
x_16 = l_Lean_IR_EmitCpp_leanMainFn;
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_7);
return x_17;
}
}
else
{
obj* x_18; 
x_18 = lean::cnstr_get(x_10, 0);
lean::inc(x_18);
lean::dec(x_10);
if (lean::obj_tag(x_18) == 1)
{
obj* x_19; obj* x_20; 
lean::dec(x_4);
lean::dec(x_1);
x_19 = lean::cnstr_get(x_18, 1);
lean::inc(x_19);
lean::dec(x_18);
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_7);
return x_20;
}
else
{
obj* x_21; 
lean::dec(x_18);
lean::dec(x_7);
x_21 = l_Lean_IR_EmitCpp_throwInvalidExportName___rarg(x_1, x_2, x_4);
return x_21;
}
}
}
else
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_22 = lean::cnstr_get(x_4, 0);
x_23 = lean::cnstr_get(x_4, 1);
lean::inc(x_23);
lean::inc(x_22);
lean::dec(x_4);
x_24 = lean::box(0);
lean::inc(x_23);
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_23);
x_26 = l_Lean_exportAttr;
lean::inc(x_1);
x_27 = l_Lean_ParametricAttribute_getParam___at_Lean_isIOUnitInitFn___spec__1(x_26, x_22, x_1);
lean::dec(x_22);
if (lean::obj_tag(x_27) == 0)
{
obj* x_28; uint8 x_29; 
lean::dec(x_25);
x_28 = l_Lean_IR_EmitCpp_toBaseCppName___closed__1;
x_29 = lean_name_dec_eq(x_1, x_28);
if (x_29 == 0)
{
obj* x_30; obj* x_31; obj* x_32; 
x_30 = l_Lean_IR_EmitCpp_toBaseCppName___closed__2;
x_31 = l_Lean_Name_mangle(x_1, x_30);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_23);
return x_32;
}
else
{
obj* x_33; obj* x_34; 
lean::dec(x_1);
x_33 = l_Lean_IR_EmitCpp_leanMainFn;
x_34 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_23);
return x_34;
}
}
else
{
obj* x_35; 
x_35 = lean::cnstr_get(x_27, 0);
lean::inc(x_35);
lean::dec(x_27);
if (lean::obj_tag(x_35) == 1)
{
obj* x_36; obj* x_37; 
lean::dec(x_25);
lean::dec(x_1);
x_36 = lean::cnstr_get(x_35, 1);
lean::inc(x_36);
lean::dec(x_35);
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_23);
return x_37;
}
else
{
obj* x_38; 
lean::dec(x_35);
lean::dec(x_23);
x_38 = l_Lean_IR_EmitCpp_throwInvalidExportName___rarg(x_1, x_2, x_25);
return x_38;
}
}
}
}
else
{
uint8 x_39; 
lean::dec(x_1);
x_39 = !lean::is_exclusive(x_4);
if (x_39 == 0)
{
return x_4;
}
else
{
obj* x_40; obj* x_41; obj* x_42; 
x_40 = lean::cnstr_get(x_4, 0);
x_41 = lean::cnstr_get(x_4, 1);
lean::inc(x_41);
lean::inc(x_40);
lean::dec(x_4);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_40);
lean::cnstr_set(x_42, 1, x_41);
return x_42;
}
}
}
}
obj* l_Lean_IR_EmitCpp_toBaseCppName___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_toBaseCppName(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* _init_l_Lean_IR_EmitCpp_toCppName___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("::");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_toCppName(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_getEnv(x_2, x_3);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = lean::cnstr_get(x_4, 0);
x_7 = l_Lean_exportAttr;
lean::inc(x_1);
x_8 = l_Lean_ParametricAttribute_getParam___at_Lean_isIOUnitInitFn___spec__1(x_7, x_6, x_1);
lean::dec(x_6);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; uint8 x_10; 
x_9 = l_Lean_IR_EmitCpp_toBaseCppName___closed__1;
x_10 = lean_name_dec_eq(x_1, x_9);
if (x_10 == 0)
{
obj* x_11; obj* x_12; 
x_11 = l_Lean_IR_EmitCpp_toBaseCppName___closed__2;
x_12 = l_Lean_Name_mangle(x_1, x_11);
lean::cnstr_set(x_4, 0, x_12);
return x_4;
}
else
{
obj* x_13; 
lean::dec(x_1);
x_13 = l_Lean_IR_EmitCpp_leanMainFn;
lean::cnstr_set(x_4, 0, x_13);
return x_4;
}
}
else
{
obj* x_14; obj* x_15; obj* x_16; 
lean::dec(x_1);
x_14 = lean::cnstr_get(x_8, 0);
lean::inc(x_14);
lean::dec(x_8);
x_15 = l_Lean_IR_EmitCpp_toCppName___closed__1;
x_16 = l_Lean_Name_toStringWithSep___main(x_15, x_14);
lean::cnstr_set(x_4, 0, x_16);
return x_4;
}
}
else
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_17 = lean::cnstr_get(x_4, 0);
x_18 = lean::cnstr_get(x_4, 1);
lean::inc(x_18);
lean::inc(x_17);
lean::dec(x_4);
x_19 = l_Lean_exportAttr;
lean::inc(x_1);
x_20 = l_Lean_ParametricAttribute_getParam___at_Lean_isIOUnitInitFn___spec__1(x_19, x_17, x_1);
lean::dec(x_17);
if (lean::obj_tag(x_20) == 0)
{
obj* x_21; uint8 x_22; 
x_21 = l_Lean_IR_EmitCpp_toBaseCppName___closed__1;
x_22 = lean_name_dec_eq(x_1, x_21);
if (x_22 == 0)
{
obj* x_23; obj* x_24; obj* x_25; 
x_23 = l_Lean_IR_EmitCpp_toBaseCppName___closed__2;
x_24 = l_Lean_Name_mangle(x_1, x_23);
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_18);
return x_25;
}
else
{
obj* x_26; obj* x_27; 
lean::dec(x_1);
x_26 = l_Lean_IR_EmitCpp_leanMainFn;
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_18);
return x_27;
}
}
else
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
lean::dec(x_1);
x_28 = lean::cnstr_get(x_20, 0);
lean::inc(x_28);
lean::dec(x_20);
x_29 = l_Lean_IR_EmitCpp_toCppName___closed__1;
x_30 = l_Lean_Name_toStringWithSep___main(x_29, x_28);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_18);
return x_31;
}
}
}
else
{
uint8 x_32; 
lean::dec(x_1);
x_32 = !lean::is_exclusive(x_4);
if (x_32 == 0)
{
return x_4;
}
else
{
obj* x_33; obj* x_34; obj* x_35; 
x_33 = lean::cnstr_get(x_4, 0);
x_34 = lean::cnstr_get(x_4, 1);
lean::inc(x_34);
lean::inc(x_33);
lean::dec(x_4);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_33);
lean::cnstr_set(x_35, 1, x_34);
return x_35;
}
}
}
}
obj* l_Lean_IR_EmitCpp_toCppName___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_toCppName(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Lean_IR_EmitCpp_emitCppName(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_toCppName(x_1, x_2, x_3);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
x_8 = lean::string_append(x_7, x_6);
lean::dec(x_6);
x_9 = lean::box(0);
lean::cnstr_set(x_4, 1, x_8);
lean::cnstr_set(x_4, 0, x_9);
return x_4;
}
else
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_10 = lean::cnstr_get(x_4, 0);
x_11 = lean::cnstr_get(x_4, 1);
lean::inc(x_11);
lean::inc(x_10);
lean::dec(x_4);
x_12 = lean::string_append(x_11, x_10);
lean::dec(x_10);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_12);
return x_14;
}
}
else
{
uint8 x_15; 
x_15 = !lean::is_exclusive(x_4);
if (x_15 == 0)
{
return x_4;
}
else
{
obj* x_16; obj* x_17; obj* x_18; 
x_16 = lean::cnstr_get(x_4, 0);
x_17 = lean::cnstr_get(x_4, 1);
lean::inc(x_17);
lean::inc(x_16);
lean::dec(x_4);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_17);
return x_18;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitCppName___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_emitCppName(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* _init_l_Lean_IR_EmitCpp_toCppInitName___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("_init_");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_toCppInitName(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_getEnv(x_2, x_3);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
x_8 = lean::box(0);
lean::inc(x_7);
lean::cnstr_set(x_4, 0, x_8);
x_9 = l_Lean_exportAttr;
lean::inc(x_1);
x_10 = l_Lean_ParametricAttribute_getParam___at_Lean_isIOUnitInitFn___spec__1(x_9, x_6, x_1);
lean::dec(x_6);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
lean::dec(x_4);
x_11 = l_Lean_IR_EmitCpp_toBaseCppName___closed__2;
x_12 = l_Lean_Name_mangle(x_1, x_11);
x_13 = l_Lean_IR_EmitCpp_toCppInitName___closed__1;
x_14 = lean::string_append(x_13, x_12);
lean::dec(x_12);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_7);
return x_15;
}
else
{
obj* x_16; 
x_16 = lean::cnstr_get(x_10, 0);
lean::inc(x_16);
lean::dec(x_10);
if (lean::obj_tag(x_16) == 1)
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
lean::dec(x_4);
lean::dec(x_1);
x_17 = lean::cnstr_get(x_16, 0);
lean::inc(x_17);
x_18 = lean::cnstr_get(x_16, 1);
lean::inc(x_18);
lean::dec(x_16);
x_19 = l_Lean_IR_EmitCpp_toCppInitName___closed__1;
x_20 = lean::string_append(x_19, x_18);
lean::dec(x_18);
x_21 = lean_name_mk_string(x_17, x_20);
x_22 = l_Lean_IR_EmitCpp_toCppName___closed__1;
x_23 = l_Lean_Name_toStringWithSep___main(x_22, x_21);
x_24 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_7);
return x_24;
}
else
{
obj* x_25; 
lean::dec(x_16);
lean::dec(x_7);
x_25 = l_Lean_IR_EmitCpp_throwInvalidExportName___rarg(x_1, x_2, x_4);
return x_25;
}
}
}
else
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_26 = lean::cnstr_get(x_4, 0);
x_27 = lean::cnstr_get(x_4, 1);
lean::inc(x_27);
lean::inc(x_26);
lean::dec(x_4);
x_28 = lean::box(0);
lean::inc(x_27);
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_27);
x_30 = l_Lean_exportAttr;
lean::inc(x_1);
x_31 = l_Lean_ParametricAttribute_getParam___at_Lean_isIOUnitInitFn___spec__1(x_30, x_26, x_1);
lean::dec(x_26);
if (lean::obj_tag(x_31) == 0)
{
obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; 
lean::dec(x_29);
x_32 = l_Lean_IR_EmitCpp_toBaseCppName___closed__2;
x_33 = l_Lean_Name_mangle(x_1, x_32);
x_34 = l_Lean_IR_EmitCpp_toCppInitName___closed__1;
x_35 = lean::string_append(x_34, x_33);
lean::dec(x_33);
x_36 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_36, 0, x_35);
lean::cnstr_set(x_36, 1, x_27);
return x_36;
}
else
{
obj* x_37; 
x_37 = lean::cnstr_get(x_31, 0);
lean::inc(x_37);
lean::dec(x_31);
if (lean::obj_tag(x_37) == 1)
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; 
lean::dec(x_29);
lean::dec(x_1);
x_38 = lean::cnstr_get(x_37, 0);
lean::inc(x_38);
x_39 = lean::cnstr_get(x_37, 1);
lean::inc(x_39);
lean::dec(x_37);
x_40 = l_Lean_IR_EmitCpp_toCppInitName___closed__1;
x_41 = lean::string_append(x_40, x_39);
lean::dec(x_39);
x_42 = lean_name_mk_string(x_38, x_41);
x_43 = l_Lean_IR_EmitCpp_toCppName___closed__1;
x_44 = l_Lean_Name_toStringWithSep___main(x_43, x_42);
x_45 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_27);
return x_45;
}
else
{
obj* x_46; 
lean::dec(x_37);
lean::dec(x_27);
x_46 = l_Lean_IR_EmitCpp_throwInvalidExportName___rarg(x_1, x_2, x_29);
return x_46;
}
}
}
}
else
{
uint8 x_47; 
lean::dec(x_1);
x_47 = !lean::is_exclusive(x_4);
if (x_47 == 0)
{
return x_4;
}
else
{
obj* x_48; obj* x_49; obj* x_50; 
x_48 = lean::cnstr_get(x_4, 0);
x_49 = lean::cnstr_get(x_4, 1);
lean::inc(x_49);
lean::inc(x_48);
lean::dec(x_4);
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_48);
lean::cnstr_set(x_50, 1, x_49);
return x_50;
}
}
}
}
obj* l_Lean_IR_EmitCpp_toCppInitName___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_toCppInitName(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Lean_IR_EmitCpp_emitCppInitName(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_toCppInitName(x_1, x_2, x_3);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
x_8 = lean::string_append(x_7, x_6);
lean::dec(x_6);
x_9 = lean::box(0);
lean::cnstr_set(x_4, 1, x_8);
lean::cnstr_set(x_4, 0, x_9);
return x_4;
}
else
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_10 = lean::cnstr_get(x_4, 0);
x_11 = lean::cnstr_get(x_4, 1);
lean::inc(x_11);
lean::inc(x_10);
lean::dec(x_4);
x_12 = lean::string_append(x_11, x_10);
lean::dec(x_10);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_12);
return x_14;
}
}
else
{
uint8 x_15; 
x_15 = !lean::is_exclusive(x_4);
if (x_15 == 0)
{
return x_4;
}
else
{
obj* x_16; obj* x_17; obj* x_18; 
x_16 = lean::cnstr_get(x_4, 0);
x_17 = lean::cnstr_get(x_4, 1);
lean::inc(x_17);
lean::inc(x_16);
lean::dec(x_4);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_17);
return x_18;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitCppInitName___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_emitCppInitName(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitFnDeclAux___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; uint8 x_7; 
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; uint8 x_12; 
x_8 = lean::mk_nat_obj(1u);
x_9 = lean::nat_sub(x_3, x_8);
lean::dec(x_3);
x_10 = lean::nat_sub(x_2, x_9);
x_11 = lean::nat_sub(x_10, x_8);
lean::dec(x_10);
x_12 = lean::nat_dec_lt(x_6, x_11);
if (x_12 == 0)
{
uint8 x_13; 
x_13 = !lean::is_exclusive(x_5);
if (x_13 == 0)
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; uint8 x_18; obj* x_19; obj* x_20; obj* x_21; 
x_14 = lean::cnstr_get(x_5, 1);
x_15 = lean::cnstr_get(x_5, 0);
lean::dec(x_15);
x_16 = l_Lean_IR_paramInh;
x_17 = lean::array_get(x_16, x_1, x_11);
lean::dec(x_11);
x_18 = lean::cnstr_get_scalar<uint8>(x_17, sizeof(void*)*1 + 1);
lean::dec(x_17);
x_19 = l_Lean_IR_EmitCpp_toCppType___main(x_18);
x_20 = lean::string_append(x_14, x_19);
lean::dec(x_19);
x_21 = lean::box(0);
lean::cnstr_set(x_5, 1, x_20);
lean::cnstr_set(x_5, 0, x_21);
x_3 = x_9;
goto _start;
}
else
{
obj* x_23; obj* x_24; obj* x_25; uint8 x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_23 = lean::cnstr_get(x_5, 1);
lean::inc(x_23);
lean::dec(x_5);
x_24 = l_Lean_IR_paramInh;
x_25 = lean::array_get(x_24, x_1, x_11);
lean::dec(x_11);
x_26 = lean::cnstr_get_scalar<uint8>(x_25, sizeof(void*)*1 + 1);
lean::dec(x_25);
x_27 = l_Lean_IR_EmitCpp_toCppType___main(x_26);
x_28 = lean::string_append(x_23, x_27);
lean::dec(x_27);
x_29 = lean::box(0);
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_28);
x_3 = x_9;
x_5 = x_30;
goto _start;
}
}
else
{
uint8 x_32; 
x_32 = !lean::is_exclusive(x_5);
if (x_32 == 0)
{
obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; uint8 x_39; obj* x_40; obj* x_41; obj* x_42; 
x_33 = lean::cnstr_get(x_5, 1);
x_34 = lean::cnstr_get(x_5, 0);
lean::dec(x_34);
x_35 = l_List_reprAux___main___rarg___closed__1;
x_36 = lean::string_append(x_33, x_35);
x_37 = l_Lean_IR_paramInh;
x_38 = lean::array_get(x_37, x_1, x_11);
lean::dec(x_11);
x_39 = lean::cnstr_get_scalar<uint8>(x_38, sizeof(void*)*1 + 1);
lean::dec(x_38);
x_40 = l_Lean_IR_EmitCpp_toCppType___main(x_39);
x_41 = lean::string_append(x_36, x_40);
lean::dec(x_40);
x_42 = lean::box(0);
lean::cnstr_set(x_5, 1, x_41);
lean::cnstr_set(x_5, 0, x_42);
x_3 = x_9;
goto _start;
}
else
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; uint8 x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_44 = lean::cnstr_get(x_5, 1);
lean::inc(x_44);
lean::dec(x_5);
x_45 = l_List_reprAux___main___rarg___closed__1;
x_46 = lean::string_append(x_44, x_45);
x_47 = l_Lean_IR_paramInh;
x_48 = lean::array_get(x_47, x_1, x_11);
lean::dec(x_11);
x_49 = lean::cnstr_get_scalar<uint8>(x_48, sizeof(void*)*1 + 1);
lean::dec(x_48);
x_50 = l_Lean_IR_EmitCpp_toCppType___main(x_49);
x_51 = lean::string_append(x_46, x_50);
lean::dec(x_50);
x_52 = lean::box(0);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_51);
x_3 = x_9;
x_5 = x_53;
goto _start;
}
}
}
else
{
uint8 x_55; 
lean::dec(x_3);
x_55 = !lean::is_exclusive(x_5);
if (x_55 == 0)
{
obj* x_56; obj* x_57; 
x_56 = lean::cnstr_get(x_5, 0);
lean::dec(x_56);
x_57 = lean::box(0);
lean::cnstr_set(x_5, 0, x_57);
return x_5;
}
else
{
obj* x_58; obj* x_59; obj* x_60; 
x_58 = lean::cnstr_get(x_5, 1);
lean::inc(x_58);
lean::dec(x_5);
x_59 = lean::box(0);
x_60 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_60, 0, x_59);
lean::cnstr_set(x_60, 1, x_58);
return x_60;
}
}
}
}
obj* _init_l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" ");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(";");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitFnDeclAux___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("obj**");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitFnDeclAux___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("extern ");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitFnDeclAux(obj* x_1, obj* x_2, uint8 x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; uint8 x_7; obj* x_8; 
x_6 = l_Lean_IR_Decl_params___main(x_1);
x_7 = l_Array_isEmpty___rarg(x_6);
if (x_7 == 0)
{
obj* x_64; 
x_64 = lean::cnstr_get(x_5, 1);
lean::inc(x_64);
lean::dec(x_5);
x_8 = x_64;
goto block_63;
}
else
{
if (x_3 == 0)
{
obj* x_65; 
x_65 = lean::cnstr_get(x_5, 1);
lean::inc(x_65);
lean::dec(x_5);
x_8 = x_65;
goto block_63;
}
else
{
obj* x_66; obj* x_67; obj* x_68; 
x_66 = lean::cnstr_get(x_5, 1);
lean::inc(x_66);
lean::dec(x_5);
x_67 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__4;
x_68 = lean::string_append(x_66, x_67);
x_8 = x_68;
goto block_63;
}
}
block_63:
{
uint8 x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_9 = l_Lean_IR_Decl_resultType___main(x_1);
x_10 = l_Lean_IR_EmitCpp_toCppType___main(x_9);
x_11 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1;
x_12 = lean::string_append(x_10, x_11);
x_13 = lean::string_append(x_12, x_2);
x_14 = lean::string_append(x_8, x_13);
lean::dec(x_13);
if (x_7 == 0)
{
obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_44; uint8 x_45; 
x_15 = l_Prod_HasRepr___rarg___closed__1;
x_16 = lean::string_append(x_14, x_15);
x_17 = lean::box(0);
lean::inc(x_16);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_16);
x_19 = lean::array_get_size(x_6);
x_44 = l_Lean_closureMaxArgs;
x_45 = lean::nat_dec_lt(x_44, x_19);
if (x_45 == 0)
{
lean::dec(x_16);
x_20 = x_17;
goto block_43;
}
else
{
obj* x_46; uint8 x_47; 
x_46 = l_Lean_IR_Decl_name___main(x_1);
x_47 = l_Lean_IR_ExplicitBoxing_isBoxedName___main(x_46);
lean::dec(x_46);
if (x_47 == 0)
{
lean::dec(x_16);
x_20 = x_17;
goto block_43;
}
else
{
obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; 
lean::dec(x_19);
lean::dec(x_18);
lean::dec(x_6);
x_48 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__3;
x_49 = lean::string_append(x_16, x_48);
x_50 = l_Option_HasRepr___rarg___closed__3;
x_51 = lean::string_append(x_49, x_50);
x_52 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_53 = lean::string_append(x_51, x_52);
x_54 = l_IO_println___rarg___closed__1;
x_55 = lean::string_append(x_53, x_54);
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_17);
lean::cnstr_set(x_56, 1, x_55);
return x_56;
}
}
block_43:
{
obj* x_21; 
lean::dec(x_20);
lean::inc(x_19);
x_21 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitFnDeclAux___spec__1(x_6, x_19, x_19, x_4, x_18);
lean::dec(x_19);
lean::dec(x_6);
if (lean::obj_tag(x_21) == 0)
{
uint8 x_22; 
x_22 = !lean::is_exclusive(x_21);
if (x_22 == 0)
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_23 = lean::cnstr_get(x_21, 1);
x_24 = lean::cnstr_get(x_21, 0);
lean::dec(x_24);
x_25 = l_Option_HasRepr___rarg___closed__3;
x_26 = lean::string_append(x_23, x_25);
x_27 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_28 = lean::string_append(x_26, x_27);
x_29 = l_IO_println___rarg___closed__1;
x_30 = lean::string_append(x_28, x_29);
lean::cnstr_set(x_21, 1, x_30);
lean::cnstr_set(x_21, 0, x_17);
return x_21;
}
else
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_31 = lean::cnstr_get(x_21, 1);
lean::inc(x_31);
lean::dec(x_21);
x_32 = l_Option_HasRepr___rarg___closed__3;
x_33 = lean::string_append(x_31, x_32);
x_34 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_35 = lean::string_append(x_33, x_34);
x_36 = l_IO_println___rarg___closed__1;
x_37 = lean::string_append(x_35, x_36);
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_17);
lean::cnstr_set(x_38, 1, x_37);
return x_38;
}
}
else
{
uint8 x_39; 
x_39 = !lean::is_exclusive(x_21);
if (x_39 == 0)
{
return x_21;
}
else
{
obj* x_40; obj* x_41; obj* x_42; 
x_40 = lean::cnstr_get(x_21, 0);
x_41 = lean::cnstr_get(x_21, 1);
lean::inc(x_41);
lean::inc(x_40);
lean::dec(x_21);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_40);
lean::cnstr_set(x_42, 1, x_41);
return x_42;
}
}
}
}
else
{
obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
lean::dec(x_6);
x_57 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_58 = lean::string_append(x_14, x_57);
x_59 = l_IO_println___rarg___closed__1;
x_60 = lean::string_append(x_58, x_59);
x_61 = lean::box(0);
x_62 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_62, 0, x_61);
lean::cnstr_set(x_62, 1, x_60);
return x_62;
}
}
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitFnDeclAux___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitFnDeclAux___spec__1(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
return x_6;
}
}
obj* l_Lean_IR_EmitCpp_emitFnDeclAux___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_3);
lean::dec(x_3);
x_7 = l_Lean_IR_EmitCpp_emitFnDeclAux(x_1, x_2, x_6, x_4, x_5);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
return x_7;
}
}
obj* l_Lean_IR_EmitCpp_emitFnDecl(obj* x_1, uint8 x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; 
x_5 = l_Lean_IR_Decl_name___main(x_1);
lean::inc(x_5);
x_6 = l_Lean_IR_EmitCpp_openNamespacesFor(x_5, x_3, x_4);
if (lean::obj_tag(x_6) == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = lean::cnstr_get(x_6, 0);
lean::dec(x_8);
x_9 = lean::box(0);
lean::cnstr_set(x_6, 0, x_9);
lean::inc(x_5);
x_10 = l_Lean_IR_EmitCpp_toBaseCppName(x_5, x_3, x_6);
if (lean::obj_tag(x_10) == 0)
{
uint8 x_11; 
x_11 = !lean::is_exclusive(x_10);
if (x_11 == 0)
{
obj* x_12; obj* x_13; 
x_12 = lean::cnstr_get(x_10, 0);
lean::cnstr_set(x_10, 0, x_9);
x_13 = l_Lean_IR_EmitCpp_emitFnDeclAux(x_1, x_12, x_2, x_3, x_10);
lean::dec(x_12);
if (lean::obj_tag(x_13) == 0)
{
uint8 x_14; 
x_14 = !lean::is_exclusive(x_13);
if (x_14 == 0)
{
obj* x_15; obj* x_16; 
x_15 = lean::cnstr_get(x_13, 0);
lean::dec(x_15);
lean::cnstr_set(x_13, 0, x_9);
x_16 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_5, x_3, x_13);
return x_16;
}
else
{
obj* x_17; obj* x_18; obj* x_19; 
x_17 = lean::cnstr_get(x_13, 1);
lean::inc(x_17);
lean::dec(x_13);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_9);
lean::cnstr_set(x_18, 1, x_17);
x_19 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_5, x_3, x_18);
return x_19;
}
}
else
{
uint8 x_20; 
lean::dec(x_5);
x_20 = !lean::is_exclusive(x_13);
if (x_20 == 0)
{
return x_13;
}
else
{
obj* x_21; obj* x_22; obj* x_23; 
x_21 = lean::cnstr_get(x_13, 0);
x_22 = lean::cnstr_get(x_13, 1);
lean::inc(x_22);
lean::inc(x_21);
lean::dec(x_13);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_24 = lean::cnstr_get(x_10, 0);
x_25 = lean::cnstr_get(x_10, 1);
lean::inc(x_25);
lean::inc(x_24);
lean::dec(x_10);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_9);
lean::cnstr_set(x_26, 1, x_25);
x_27 = l_Lean_IR_EmitCpp_emitFnDeclAux(x_1, x_24, x_2, x_3, x_26);
lean::dec(x_24);
if (lean::obj_tag(x_27) == 0)
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_28 = lean::cnstr_get(x_27, 1);
lean::inc(x_28);
if (lean::is_exclusive(x_27)) {
 lean::cnstr_release(x_27, 0);
 lean::cnstr_release(x_27, 1);
 x_29 = x_27;
} else {
 lean::dec_ref(x_27);
 x_29 = lean::box(0);
}
if (lean::is_scalar(x_29)) {
 x_30 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_30 = x_29;
}
lean::cnstr_set(x_30, 0, x_9);
lean::cnstr_set(x_30, 1, x_28);
x_31 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_5, x_3, x_30);
return x_31;
}
else
{
obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
lean::dec(x_5);
x_32 = lean::cnstr_get(x_27, 0);
lean::inc(x_32);
x_33 = lean::cnstr_get(x_27, 1);
lean::inc(x_33);
if (lean::is_exclusive(x_27)) {
 lean::cnstr_release(x_27, 0);
 lean::cnstr_release(x_27, 1);
 x_34 = x_27;
} else {
 lean::dec_ref(x_27);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
lean::cnstr_set(x_35, 1, x_33);
return x_35;
}
}
}
else
{
uint8 x_36; 
lean::dec(x_5);
x_36 = !lean::is_exclusive(x_10);
if (x_36 == 0)
{
return x_10;
}
else
{
obj* x_37; obj* x_38; obj* x_39; 
x_37 = lean::cnstr_get(x_10, 0);
x_38 = lean::cnstr_get(x_10, 1);
lean::inc(x_38);
lean::inc(x_37);
lean::dec(x_10);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_37);
lean::cnstr_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_40 = lean::cnstr_get(x_6, 1);
lean::inc(x_40);
lean::dec(x_6);
x_41 = lean::box(0);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set(x_42, 1, x_40);
lean::inc(x_5);
x_43 = l_Lean_IR_EmitCpp_toBaseCppName(x_5, x_3, x_42);
if (lean::obj_tag(x_43) == 0)
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
x_44 = lean::cnstr_get(x_43, 0);
lean::inc(x_44);
x_45 = lean::cnstr_get(x_43, 1);
lean::inc(x_45);
if (lean::is_exclusive(x_43)) {
 lean::cnstr_release(x_43, 0);
 lean::cnstr_release(x_43, 1);
 x_46 = x_43;
} else {
 lean::dec_ref(x_43);
 x_46 = lean::box(0);
}
if (lean::is_scalar(x_46)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_46;
}
lean::cnstr_set(x_47, 0, x_41);
lean::cnstr_set(x_47, 1, x_45);
x_48 = l_Lean_IR_EmitCpp_emitFnDeclAux(x_1, x_44, x_2, x_3, x_47);
lean::dec(x_44);
if (lean::obj_tag(x_48) == 0)
{
obj* x_49; obj* x_50; obj* x_51; obj* x_52; 
x_49 = lean::cnstr_get(x_48, 1);
lean::inc(x_49);
if (lean::is_exclusive(x_48)) {
 lean::cnstr_release(x_48, 0);
 lean::cnstr_release(x_48, 1);
 x_50 = x_48;
} else {
 lean::dec_ref(x_48);
 x_50 = lean::box(0);
}
if (lean::is_scalar(x_50)) {
 x_51 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_51 = x_50;
}
lean::cnstr_set(x_51, 0, x_41);
lean::cnstr_set(x_51, 1, x_49);
x_52 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_5, x_3, x_51);
return x_52;
}
else
{
obj* x_53; obj* x_54; obj* x_55; obj* x_56; 
lean::dec(x_5);
x_53 = lean::cnstr_get(x_48, 0);
lean::inc(x_53);
x_54 = lean::cnstr_get(x_48, 1);
lean::inc(x_54);
if (lean::is_exclusive(x_48)) {
 lean::cnstr_release(x_48, 0);
 lean::cnstr_release(x_48, 1);
 x_55 = x_48;
} else {
 lean::dec_ref(x_48);
 x_55 = lean::box(0);
}
if (lean::is_scalar(x_55)) {
 x_56 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_56 = x_55;
}
lean::cnstr_set(x_56, 0, x_53);
lean::cnstr_set(x_56, 1, x_54);
return x_56;
}
}
else
{
obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
lean::dec(x_5);
x_57 = lean::cnstr_get(x_43, 0);
lean::inc(x_57);
x_58 = lean::cnstr_get(x_43, 1);
lean::inc(x_58);
if (lean::is_exclusive(x_43)) {
 lean::cnstr_release(x_43, 0);
 lean::cnstr_release(x_43, 1);
 x_59 = x_43;
} else {
 lean::dec_ref(x_43);
 x_59 = lean::box(0);
}
if (lean::is_scalar(x_59)) {
 x_60 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_60 = x_59;
}
lean::cnstr_set(x_60, 0, x_57);
lean::cnstr_set(x_60, 1, x_58);
return x_60;
}
}
}
else
{
uint8 x_61; 
lean::dec(x_5);
x_61 = !lean::is_exclusive(x_6);
if (x_61 == 0)
{
return x_6;
}
else
{
obj* x_62; obj* x_63; obj* x_64; 
x_62 = lean::cnstr_get(x_6, 0);
x_63 = lean::cnstr_get(x_6, 1);
lean::inc(x_63);
lean::inc(x_62);
lean::dec(x_6);
x_64 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_64, 0, x_62);
lean::cnstr_set(x_64, 1, x_63);
return x_64;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitFnDecl___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_2);
lean::dec(x_2);
x_6 = l_Lean_IR_EmitCpp_emitFnDecl(x_1, x_5, x_3, x_4);
lean::dec(x_3);
lean::dec(x_1);
return x_6;
}
}
obj* l_List_foldl___main___at_Lean_IR_EmitCpp_cppQualifiedNameToName___spec__1(obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
return x_1;
}
else
{
obj* x_3; obj* x_4; obj* x_5; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::cnstr_get(x_2, 1);
lean::inc(x_4);
lean::dec(x_2);
x_5 = lean_name_mk_string(x_1, x_3);
x_1 = x_5;
x_2 = x_4;
goto _start;
}
}
}
obj* l_Lean_IR_EmitCpp_cppQualifiedNameToName(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_IR_EmitCpp_toCppName___closed__1;
x_3 = l_String_split(x_1, x_2);
x_4 = lean::box(0);
x_5 = l_List_foldl___main___at_Lean_IR_EmitCpp_cppQualifiedNameToName___spec__1(x_4, x_3);
return x_5;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitExternDeclAux___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("invalid name");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitExternDeclAux___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("extern \"C\" ");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitExternDeclAux(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; 
x_5 = l_Lean_IR_EmitCpp_cppQualifiedNameToName(x_2);
x_6 = l_Lean_IR_EmitCpp_openNamespaces(x_5, x_3, x_4);
if (lean::obj_tag(x_6) == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = lean::cnstr_get(x_6, 0);
lean::dec(x_8);
x_9 = lean::box(0);
lean::cnstr_set(x_6, 0, x_9);
x_10 = l_Lean_IR_EmitCpp_getEnv(x_3, x_6);
if (lean::obj_tag(x_10) == 0)
{
uint8 x_11; 
x_11 = !lean::is_exclusive(x_10);
if (x_11 == 0)
{
obj* x_12; obj* x_13; obj* x_14; uint8 x_15; 
x_12 = lean::cnstr_get(x_10, 0);
x_13 = lean::cnstr_get(x_10, 1);
x_14 = l_Lean_IR_Decl_name___main(x_1);
x_15 = l_Lean_isExternC(x_12, x_14);
lean::dec(x_12);
if (x_15 == 0)
{
if (lean::obj_tag(x_5) == 1)
{
obj* x_16; uint8 x_17; obj* x_18; 
x_16 = lean::cnstr_get(x_5, 1);
lean::inc(x_16);
lean::cnstr_set(x_10, 0, x_9);
x_17 = 1;
x_18 = l_Lean_IR_EmitCpp_emitFnDeclAux(x_1, x_16, x_17, x_3, x_10);
lean::dec(x_16);
if (lean::obj_tag(x_18) == 0)
{
uint8 x_19; 
x_19 = !lean::is_exclusive(x_18);
if (x_19 == 0)
{
obj* x_20; obj* x_21; 
x_20 = lean::cnstr_get(x_18, 0);
lean::dec(x_20);
lean::cnstr_set(x_18, 0, x_9);
x_21 = l_Lean_IR_EmitCpp_closeNamespaces(x_5, x_3, x_18);
lean::dec(x_5);
return x_21;
}
else
{
obj* x_22; obj* x_23; obj* x_24; 
x_22 = lean::cnstr_get(x_18, 1);
lean::inc(x_22);
lean::dec(x_18);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_9);
lean::cnstr_set(x_23, 1, x_22);
x_24 = l_Lean_IR_EmitCpp_closeNamespaces(x_5, x_3, x_23);
lean::dec(x_5);
return x_24;
}
}
else
{
uint8 x_25; 
lean::dec(x_5);
x_25 = !lean::is_exclusive(x_18);
if (x_25 == 0)
{
return x_18;
}
else
{
obj* x_26; obj* x_27; obj* x_28; 
x_26 = lean::cnstr_get(x_18, 0);
x_27 = lean::cnstr_get(x_18, 1);
lean::inc(x_27);
lean::inc(x_26);
lean::dec(x_18);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_26);
lean::cnstr_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
obj* x_29; 
lean::dec(x_5);
x_29 = l_Lean_IR_EmitCpp_emitExternDeclAux___closed__1;
lean::cnstr_set_tag(x_10, 1);
lean::cnstr_set(x_10, 0, x_29);
return x_10;
}
}
else
{
obj* x_30; obj* x_31; 
x_30 = l_Lean_IR_EmitCpp_emitExternDeclAux___closed__2;
x_31 = lean::string_append(x_13, x_30);
if (lean::obj_tag(x_5) == 1)
{
obj* x_32; uint8 x_33; obj* x_34; 
x_32 = lean::cnstr_get(x_5, 1);
lean::inc(x_32);
lean::cnstr_set(x_10, 1, x_31);
lean::cnstr_set(x_10, 0, x_9);
x_33 = 0;
x_34 = l_Lean_IR_EmitCpp_emitFnDeclAux(x_1, x_32, x_33, x_3, x_10);
lean::dec(x_32);
if (lean::obj_tag(x_34) == 0)
{
uint8 x_35; 
x_35 = !lean::is_exclusive(x_34);
if (x_35 == 0)
{
obj* x_36; obj* x_37; 
x_36 = lean::cnstr_get(x_34, 0);
lean::dec(x_36);
lean::cnstr_set(x_34, 0, x_9);
x_37 = l_Lean_IR_EmitCpp_closeNamespaces(x_5, x_3, x_34);
lean::dec(x_5);
return x_37;
}
else
{
obj* x_38; obj* x_39; obj* x_40; 
x_38 = lean::cnstr_get(x_34, 1);
lean::inc(x_38);
lean::dec(x_34);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_9);
lean::cnstr_set(x_39, 1, x_38);
x_40 = l_Lean_IR_EmitCpp_closeNamespaces(x_5, x_3, x_39);
lean::dec(x_5);
return x_40;
}
}
else
{
uint8 x_41; 
lean::dec(x_5);
x_41 = !lean::is_exclusive(x_34);
if (x_41 == 0)
{
return x_34;
}
else
{
obj* x_42; obj* x_43; obj* x_44; 
x_42 = lean::cnstr_get(x_34, 0);
x_43 = lean::cnstr_get(x_34, 1);
lean::inc(x_43);
lean::inc(x_42);
lean::dec(x_34);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_42);
lean::cnstr_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
obj* x_45; 
lean::dec(x_5);
x_45 = l_Lean_IR_EmitCpp_emitExternDeclAux___closed__1;
lean::cnstr_set_tag(x_10, 1);
lean::cnstr_set(x_10, 1, x_31);
lean::cnstr_set(x_10, 0, x_45);
return x_10;
}
}
}
else
{
obj* x_46; obj* x_47; obj* x_48; uint8 x_49; 
x_46 = lean::cnstr_get(x_10, 0);
x_47 = lean::cnstr_get(x_10, 1);
lean::inc(x_47);
lean::inc(x_46);
lean::dec(x_10);
x_48 = l_Lean_IR_Decl_name___main(x_1);
x_49 = l_Lean_isExternC(x_46, x_48);
lean::dec(x_46);
if (x_49 == 0)
{
if (lean::obj_tag(x_5) == 1)
{
obj* x_50; obj* x_51; uint8 x_52; obj* x_53; 
x_50 = lean::cnstr_get(x_5, 1);
lean::inc(x_50);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_9);
lean::cnstr_set(x_51, 1, x_47);
x_52 = 1;
x_53 = l_Lean_IR_EmitCpp_emitFnDeclAux(x_1, x_50, x_52, x_3, x_51);
lean::dec(x_50);
if (lean::obj_tag(x_53) == 0)
{
obj* x_54; obj* x_55; obj* x_56; obj* x_57; 
x_54 = lean::cnstr_get(x_53, 1);
lean::inc(x_54);
if (lean::is_exclusive(x_53)) {
 lean::cnstr_release(x_53, 0);
 lean::cnstr_release(x_53, 1);
 x_55 = x_53;
} else {
 lean::dec_ref(x_53);
 x_55 = lean::box(0);
}
if (lean::is_scalar(x_55)) {
 x_56 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_56 = x_55;
}
lean::cnstr_set(x_56, 0, x_9);
lean::cnstr_set(x_56, 1, x_54);
x_57 = l_Lean_IR_EmitCpp_closeNamespaces(x_5, x_3, x_56);
lean::dec(x_5);
return x_57;
}
else
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
lean::dec(x_5);
x_58 = lean::cnstr_get(x_53, 0);
lean::inc(x_58);
x_59 = lean::cnstr_get(x_53, 1);
lean::inc(x_59);
if (lean::is_exclusive(x_53)) {
 lean::cnstr_release(x_53, 0);
 lean::cnstr_release(x_53, 1);
 x_60 = x_53;
} else {
 lean::dec_ref(x_53);
 x_60 = lean::box(0);
}
if (lean::is_scalar(x_60)) {
 x_61 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_61 = x_60;
}
lean::cnstr_set(x_61, 0, x_58);
lean::cnstr_set(x_61, 1, x_59);
return x_61;
}
}
else
{
obj* x_62; obj* x_63; 
lean::dec(x_5);
x_62 = l_Lean_IR_EmitCpp_emitExternDeclAux___closed__1;
x_63 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_47);
return x_63;
}
}
else
{
obj* x_64; obj* x_65; 
x_64 = l_Lean_IR_EmitCpp_emitExternDeclAux___closed__2;
x_65 = lean::string_append(x_47, x_64);
if (lean::obj_tag(x_5) == 1)
{
obj* x_66; obj* x_67; uint8 x_68; obj* x_69; 
x_66 = lean::cnstr_get(x_5, 1);
lean::inc(x_66);
x_67 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_67, 0, x_9);
lean::cnstr_set(x_67, 1, x_65);
x_68 = 0;
x_69 = l_Lean_IR_EmitCpp_emitFnDeclAux(x_1, x_66, x_68, x_3, x_67);
lean::dec(x_66);
if (lean::obj_tag(x_69) == 0)
{
obj* x_70; obj* x_71; obj* x_72; obj* x_73; 
x_70 = lean::cnstr_get(x_69, 1);
lean::inc(x_70);
if (lean::is_exclusive(x_69)) {
 lean::cnstr_release(x_69, 0);
 lean::cnstr_release(x_69, 1);
 x_71 = x_69;
} else {
 lean::dec_ref(x_69);
 x_71 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_72 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_72 = x_71;
}
lean::cnstr_set(x_72, 0, x_9);
lean::cnstr_set(x_72, 1, x_70);
x_73 = l_Lean_IR_EmitCpp_closeNamespaces(x_5, x_3, x_72);
lean::dec(x_5);
return x_73;
}
else
{
obj* x_74; obj* x_75; obj* x_76; obj* x_77; 
lean::dec(x_5);
x_74 = lean::cnstr_get(x_69, 0);
lean::inc(x_74);
x_75 = lean::cnstr_get(x_69, 1);
lean::inc(x_75);
if (lean::is_exclusive(x_69)) {
 lean::cnstr_release(x_69, 0);
 lean::cnstr_release(x_69, 1);
 x_76 = x_69;
} else {
 lean::dec_ref(x_69);
 x_76 = lean::box(0);
}
if (lean::is_scalar(x_76)) {
 x_77 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_77 = x_76;
}
lean::cnstr_set(x_77, 0, x_74);
lean::cnstr_set(x_77, 1, x_75);
return x_77;
}
}
else
{
obj* x_78; obj* x_79; 
lean::dec(x_5);
x_78 = l_Lean_IR_EmitCpp_emitExternDeclAux___closed__1;
x_79 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_79, 0, x_78);
lean::cnstr_set(x_79, 1, x_65);
return x_79;
}
}
}
}
else
{
uint8 x_80; 
lean::dec(x_5);
x_80 = !lean::is_exclusive(x_10);
if (x_80 == 0)
{
return x_10;
}
else
{
obj* x_81; obj* x_82; obj* x_83; 
x_81 = lean::cnstr_get(x_10, 0);
x_82 = lean::cnstr_get(x_10, 1);
lean::inc(x_82);
lean::inc(x_81);
lean::dec(x_10);
x_83 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_83, 0, x_81);
lean::cnstr_set(x_83, 1, x_82);
return x_83;
}
}
}
else
{
obj* x_84; obj* x_85; obj* x_86; obj* x_87; 
x_84 = lean::cnstr_get(x_6, 1);
lean::inc(x_84);
lean::dec(x_6);
x_85 = lean::box(0);
x_86 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_86, 0, x_85);
lean::cnstr_set(x_86, 1, x_84);
x_87 = l_Lean_IR_EmitCpp_getEnv(x_3, x_86);
if (lean::obj_tag(x_87) == 0)
{
obj* x_88; obj* x_89; obj* x_90; obj* x_91; uint8 x_92; 
x_88 = lean::cnstr_get(x_87, 0);
lean::inc(x_88);
x_89 = lean::cnstr_get(x_87, 1);
lean::inc(x_89);
if (lean::is_exclusive(x_87)) {
 lean::cnstr_release(x_87, 0);
 lean::cnstr_release(x_87, 1);
 x_90 = x_87;
} else {
 lean::dec_ref(x_87);
 x_90 = lean::box(0);
}
x_91 = l_Lean_IR_Decl_name___main(x_1);
x_92 = l_Lean_isExternC(x_88, x_91);
lean::dec(x_88);
if (x_92 == 0)
{
if (lean::obj_tag(x_5) == 1)
{
obj* x_93; obj* x_94; uint8 x_95; obj* x_96; 
x_93 = lean::cnstr_get(x_5, 1);
lean::inc(x_93);
if (lean::is_scalar(x_90)) {
 x_94 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_94 = x_90;
}
lean::cnstr_set(x_94, 0, x_85);
lean::cnstr_set(x_94, 1, x_89);
x_95 = 1;
x_96 = l_Lean_IR_EmitCpp_emitFnDeclAux(x_1, x_93, x_95, x_3, x_94);
lean::dec(x_93);
if (lean::obj_tag(x_96) == 0)
{
obj* x_97; obj* x_98; obj* x_99; obj* x_100; 
x_97 = lean::cnstr_get(x_96, 1);
lean::inc(x_97);
if (lean::is_exclusive(x_96)) {
 lean::cnstr_release(x_96, 0);
 lean::cnstr_release(x_96, 1);
 x_98 = x_96;
} else {
 lean::dec_ref(x_96);
 x_98 = lean::box(0);
}
if (lean::is_scalar(x_98)) {
 x_99 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_99 = x_98;
}
lean::cnstr_set(x_99, 0, x_85);
lean::cnstr_set(x_99, 1, x_97);
x_100 = l_Lean_IR_EmitCpp_closeNamespaces(x_5, x_3, x_99);
lean::dec(x_5);
return x_100;
}
else
{
obj* x_101; obj* x_102; obj* x_103; obj* x_104; 
lean::dec(x_5);
x_101 = lean::cnstr_get(x_96, 0);
lean::inc(x_101);
x_102 = lean::cnstr_get(x_96, 1);
lean::inc(x_102);
if (lean::is_exclusive(x_96)) {
 lean::cnstr_release(x_96, 0);
 lean::cnstr_release(x_96, 1);
 x_103 = x_96;
} else {
 lean::dec_ref(x_96);
 x_103 = lean::box(0);
}
if (lean::is_scalar(x_103)) {
 x_104 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_104 = x_103;
}
lean::cnstr_set(x_104, 0, x_101);
lean::cnstr_set(x_104, 1, x_102);
return x_104;
}
}
else
{
obj* x_105; obj* x_106; 
lean::dec(x_5);
x_105 = l_Lean_IR_EmitCpp_emitExternDeclAux___closed__1;
if (lean::is_scalar(x_90)) {
 x_106 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_106 = x_90;
 lean::cnstr_set_tag(x_106, 1);
}
lean::cnstr_set(x_106, 0, x_105);
lean::cnstr_set(x_106, 1, x_89);
return x_106;
}
}
else
{
obj* x_107; obj* x_108; 
x_107 = l_Lean_IR_EmitCpp_emitExternDeclAux___closed__2;
x_108 = lean::string_append(x_89, x_107);
if (lean::obj_tag(x_5) == 1)
{
obj* x_109; obj* x_110; uint8 x_111; obj* x_112; 
x_109 = lean::cnstr_get(x_5, 1);
lean::inc(x_109);
if (lean::is_scalar(x_90)) {
 x_110 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_110 = x_90;
}
lean::cnstr_set(x_110, 0, x_85);
lean::cnstr_set(x_110, 1, x_108);
x_111 = 0;
x_112 = l_Lean_IR_EmitCpp_emitFnDeclAux(x_1, x_109, x_111, x_3, x_110);
lean::dec(x_109);
if (lean::obj_tag(x_112) == 0)
{
obj* x_113; obj* x_114; obj* x_115; obj* x_116; 
x_113 = lean::cnstr_get(x_112, 1);
lean::inc(x_113);
if (lean::is_exclusive(x_112)) {
 lean::cnstr_release(x_112, 0);
 lean::cnstr_release(x_112, 1);
 x_114 = x_112;
} else {
 lean::dec_ref(x_112);
 x_114 = lean::box(0);
}
if (lean::is_scalar(x_114)) {
 x_115 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_115 = x_114;
}
lean::cnstr_set(x_115, 0, x_85);
lean::cnstr_set(x_115, 1, x_113);
x_116 = l_Lean_IR_EmitCpp_closeNamespaces(x_5, x_3, x_115);
lean::dec(x_5);
return x_116;
}
else
{
obj* x_117; obj* x_118; obj* x_119; obj* x_120; 
lean::dec(x_5);
x_117 = lean::cnstr_get(x_112, 0);
lean::inc(x_117);
x_118 = lean::cnstr_get(x_112, 1);
lean::inc(x_118);
if (lean::is_exclusive(x_112)) {
 lean::cnstr_release(x_112, 0);
 lean::cnstr_release(x_112, 1);
 x_119 = x_112;
} else {
 lean::dec_ref(x_112);
 x_119 = lean::box(0);
}
if (lean::is_scalar(x_119)) {
 x_120 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_120 = x_119;
}
lean::cnstr_set(x_120, 0, x_117);
lean::cnstr_set(x_120, 1, x_118);
return x_120;
}
}
else
{
obj* x_121; obj* x_122; 
lean::dec(x_5);
x_121 = l_Lean_IR_EmitCpp_emitExternDeclAux___closed__1;
if (lean::is_scalar(x_90)) {
 x_122 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_122 = x_90;
 lean::cnstr_set_tag(x_122, 1);
}
lean::cnstr_set(x_122, 0, x_121);
lean::cnstr_set(x_122, 1, x_108);
return x_122;
}
}
}
else
{
obj* x_123; obj* x_124; obj* x_125; obj* x_126; 
lean::dec(x_5);
x_123 = lean::cnstr_get(x_87, 0);
lean::inc(x_123);
x_124 = lean::cnstr_get(x_87, 1);
lean::inc(x_124);
if (lean::is_exclusive(x_87)) {
 lean::cnstr_release(x_87, 0);
 lean::cnstr_release(x_87, 1);
 x_125 = x_87;
} else {
 lean::dec_ref(x_87);
 x_125 = lean::box(0);
}
if (lean::is_scalar(x_125)) {
 x_126 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_126 = x_125;
}
lean::cnstr_set(x_126, 0, x_123);
lean::cnstr_set(x_126, 1, x_124);
return x_126;
}
}
}
else
{
uint8 x_127; 
lean::dec(x_5);
x_127 = !lean::is_exclusive(x_6);
if (x_127 == 0)
{
return x_6;
}
else
{
obj* x_128; obj* x_129; obj* x_130; 
x_128 = lean::cnstr_get(x_6, 0);
x_129 = lean::cnstr_get(x_6, 1);
lean::inc(x_129);
lean::inc(x_128);
lean::dec(x_6);
x_130 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_130, 0, x_128);
lean::cnstr_set(x_130, 1, x_129);
return x_130;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitExternDeclAux___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_emitExternDeclAux(x_1, x_2, x_3, x_4);
lean::dec(x_3);
lean::dec(x_1);
return x_5;
}
}
obj* l_List_foldl___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__1(obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
return x_1;
}
else
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_2, 0);
x_4 = lean::cnstr_get(x_2, 1);
x_5 = l_Lean_IR_Decl_name___main(x_3);
x_6 = lean::box(0);
x_7 = l_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_1, x_5, x_6);
x_1 = x_7;
x_2 = x_4;
goto _start;
}
}
}
obj* l_List_foldl___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__2(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
lean::dec(x_1);
return x_2;
}
else
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
lean::dec(x_3);
x_6 = l_Lean_IR_Decl_name___main(x_4);
x_7 = lean::box(0);
x_8 = l_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_2, x_6, x_7);
lean::inc(x_1);
x_9 = l_Lean_IR_collectUsedDecls(x_1, x_4, x_8);
x_2 = x_9;
x_3 = x_5;
goto _start;
}
}
}
obj* l_RBNode_revFold___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__4(obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
return x_1;
}
else
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_2, 0);
x_4 = lean::cnstr_get(x_2, 1);
x_5 = lean::cnstr_get(x_2, 3);
x_6 = l_RBNode_revFold___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__4(x_1, x_5);
lean::inc(x_4);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_4);
lean::cnstr_set(x_7, 1, x_6);
x_1 = x_7;
x_2 = x_3;
goto _start;
}
}
}
obj* l_RBTree_toList___at_Lean_IR_EmitCpp_emitFnDecls___spec__3(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::box(0);
x_3 = l_RBNode_revFold___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__4(x_2, x_1);
return x_3;
}
}
obj* _init_l_List_mfor___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__5___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = lean::mk_string("cpp");
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__5(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
uint8 x_6; 
x_6 = !lean::is_exclusive(x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; 
x_7 = lean::cnstr_get(x_5, 0);
lean::dec(x_7);
x_8 = lean::box(0);
lean::cnstr_set(x_5, 0, x_8);
return x_5;
}
else
{
obj* x_9; obj* x_10; obj* x_11; 
x_9 = lean::cnstr_get(x_5, 1);
lean::inc(x_9);
lean::dec(x_5);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_9);
return x_11;
}
}
else
{
obj* x_12; obj* x_13; obj* x_14; 
x_12 = lean::cnstr_get(x_3, 0);
lean::inc(x_12);
x_13 = lean::cnstr_get(x_3, 1);
lean::inc(x_13);
lean::dec(x_3);
lean::inc(x_12);
x_14 = l_Lean_IR_EmitCpp_getDecl(x_12, x_4, x_5);
if (lean::obj_tag(x_14) == 0)
{
uint8 x_15; 
x_15 = !lean::is_exclusive(x_14);
if (x_15 == 0)
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_16 = lean::cnstr_get(x_14, 0);
x_17 = lean::box(0);
lean::cnstr_set(x_14, 0, x_17);
x_18 = l_Lean_IR_Decl_name___main(x_16);
x_19 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__5___closed__1;
x_20 = l_Lean_getExternNameFor(x_1, x_19, x_18);
if (lean::obj_tag(x_20) == 0)
{
uint8 x_21; 
x_21 = l_Lean_NameSet_contains(x_2, x_12);
lean::dec(x_12);
if (x_21 == 0)
{
uint8 x_22; obj* x_23; 
x_22 = 1;
x_23 = l_Lean_IR_EmitCpp_emitFnDecl(x_16, x_22, x_4, x_14);
lean::dec(x_16);
if (lean::obj_tag(x_23) == 0)
{
uint8 x_24; 
x_24 = !lean::is_exclusive(x_23);
if (x_24 == 0)
{
obj* x_25; 
x_25 = lean::cnstr_get(x_23, 0);
lean::dec(x_25);
lean::cnstr_set(x_23, 0, x_17);
x_3 = x_13;
x_5 = x_23;
goto _start;
}
else
{
obj* x_27; obj* x_28; 
x_27 = lean::cnstr_get(x_23, 1);
lean::inc(x_27);
lean::dec(x_23);
x_28 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_28, 0, x_17);
lean::cnstr_set(x_28, 1, x_27);
x_3 = x_13;
x_5 = x_28;
goto _start;
}
}
else
{
uint8 x_30; 
lean::dec(x_13);
x_30 = !lean::is_exclusive(x_23);
if (x_30 == 0)
{
return x_23;
}
else
{
obj* x_31; obj* x_32; obj* x_33; 
x_31 = lean::cnstr_get(x_23, 0);
x_32 = lean::cnstr_get(x_23, 1);
lean::inc(x_32);
lean::inc(x_31);
lean::dec(x_23);
x_33 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_33, 0, x_31);
lean::cnstr_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
uint8 x_34; obj* x_35; 
x_34 = 0;
x_35 = l_Lean_IR_EmitCpp_emitFnDecl(x_16, x_34, x_4, x_14);
lean::dec(x_16);
if (lean::obj_tag(x_35) == 0)
{
uint8 x_36; 
x_36 = !lean::is_exclusive(x_35);
if (x_36 == 0)
{
obj* x_37; 
x_37 = lean::cnstr_get(x_35, 0);
lean::dec(x_37);
lean::cnstr_set(x_35, 0, x_17);
x_3 = x_13;
x_5 = x_35;
goto _start;
}
else
{
obj* x_39; obj* x_40; 
x_39 = lean::cnstr_get(x_35, 1);
lean::inc(x_39);
lean::dec(x_35);
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_17);
lean::cnstr_set(x_40, 1, x_39);
x_3 = x_13;
x_5 = x_40;
goto _start;
}
}
else
{
uint8 x_42; 
lean::dec(x_13);
x_42 = !lean::is_exclusive(x_35);
if (x_42 == 0)
{
return x_35;
}
else
{
obj* x_43; obj* x_44; obj* x_45; 
x_43 = lean::cnstr_get(x_35, 0);
x_44 = lean::cnstr_get(x_35, 1);
lean::inc(x_44);
lean::inc(x_43);
lean::dec(x_35);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_43);
lean::cnstr_set(x_45, 1, x_44);
return x_45;
}
}
}
}
else
{
obj* x_46; obj* x_47; 
lean::dec(x_12);
x_46 = lean::cnstr_get(x_20, 0);
lean::inc(x_46);
lean::dec(x_20);
x_47 = l_Lean_IR_EmitCpp_emitExternDeclAux(x_16, x_46, x_4, x_14);
lean::dec(x_16);
if (lean::obj_tag(x_47) == 0)
{
uint8 x_48; 
x_48 = !lean::is_exclusive(x_47);
if (x_48 == 0)
{
obj* x_49; 
x_49 = lean::cnstr_get(x_47, 0);
lean::dec(x_49);
lean::cnstr_set(x_47, 0, x_17);
x_3 = x_13;
x_5 = x_47;
goto _start;
}
else
{
obj* x_51; obj* x_52; 
x_51 = lean::cnstr_get(x_47, 1);
lean::inc(x_51);
lean::dec(x_47);
x_52 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_52, 0, x_17);
lean::cnstr_set(x_52, 1, x_51);
x_3 = x_13;
x_5 = x_52;
goto _start;
}
}
else
{
uint8 x_54; 
lean::dec(x_13);
x_54 = !lean::is_exclusive(x_47);
if (x_54 == 0)
{
return x_47;
}
else
{
obj* x_55; obj* x_56; obj* x_57; 
x_55 = lean::cnstr_get(x_47, 0);
x_56 = lean::cnstr_get(x_47, 1);
lean::inc(x_56);
lean::inc(x_55);
lean::dec(x_47);
x_57 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_57, 0, x_55);
lean::cnstr_set(x_57, 1, x_56);
return x_57;
}
}
}
}
else
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
x_58 = lean::cnstr_get(x_14, 0);
x_59 = lean::cnstr_get(x_14, 1);
lean::inc(x_59);
lean::inc(x_58);
lean::dec(x_14);
x_60 = lean::box(0);
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_60);
lean::cnstr_set(x_61, 1, x_59);
x_62 = l_Lean_IR_Decl_name___main(x_58);
x_63 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__5___closed__1;
x_64 = l_Lean_getExternNameFor(x_1, x_63, x_62);
if (lean::obj_tag(x_64) == 0)
{
uint8 x_65; 
x_65 = l_Lean_NameSet_contains(x_2, x_12);
lean::dec(x_12);
if (x_65 == 0)
{
uint8 x_66; obj* x_67; 
x_66 = 1;
x_67 = l_Lean_IR_EmitCpp_emitFnDecl(x_58, x_66, x_4, x_61);
lean::dec(x_58);
if (lean::obj_tag(x_67) == 0)
{
obj* x_68; obj* x_69; obj* x_70; 
x_68 = lean::cnstr_get(x_67, 1);
lean::inc(x_68);
if (lean::is_exclusive(x_67)) {
 lean::cnstr_release(x_67, 0);
 lean::cnstr_release(x_67, 1);
 x_69 = x_67;
} else {
 lean::dec_ref(x_67);
 x_69 = lean::box(0);
}
if (lean::is_scalar(x_69)) {
 x_70 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_70 = x_69;
}
lean::cnstr_set(x_70, 0, x_60);
lean::cnstr_set(x_70, 1, x_68);
x_3 = x_13;
x_5 = x_70;
goto _start;
}
else
{
obj* x_72; obj* x_73; obj* x_74; obj* x_75; 
lean::dec(x_13);
x_72 = lean::cnstr_get(x_67, 0);
lean::inc(x_72);
x_73 = lean::cnstr_get(x_67, 1);
lean::inc(x_73);
if (lean::is_exclusive(x_67)) {
 lean::cnstr_release(x_67, 0);
 lean::cnstr_release(x_67, 1);
 x_74 = x_67;
} else {
 lean::dec_ref(x_67);
 x_74 = lean::box(0);
}
if (lean::is_scalar(x_74)) {
 x_75 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_75 = x_74;
}
lean::cnstr_set(x_75, 0, x_72);
lean::cnstr_set(x_75, 1, x_73);
return x_75;
}
}
else
{
uint8 x_76; obj* x_77; 
x_76 = 0;
x_77 = l_Lean_IR_EmitCpp_emitFnDecl(x_58, x_76, x_4, x_61);
lean::dec(x_58);
if (lean::obj_tag(x_77) == 0)
{
obj* x_78; obj* x_79; obj* x_80; 
x_78 = lean::cnstr_get(x_77, 1);
lean::inc(x_78);
if (lean::is_exclusive(x_77)) {
 lean::cnstr_release(x_77, 0);
 lean::cnstr_release(x_77, 1);
 x_79 = x_77;
} else {
 lean::dec_ref(x_77);
 x_79 = lean::box(0);
}
if (lean::is_scalar(x_79)) {
 x_80 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_80 = x_79;
}
lean::cnstr_set(x_80, 0, x_60);
lean::cnstr_set(x_80, 1, x_78);
x_3 = x_13;
x_5 = x_80;
goto _start;
}
else
{
obj* x_82; obj* x_83; obj* x_84; obj* x_85; 
lean::dec(x_13);
x_82 = lean::cnstr_get(x_77, 0);
lean::inc(x_82);
x_83 = lean::cnstr_get(x_77, 1);
lean::inc(x_83);
if (lean::is_exclusive(x_77)) {
 lean::cnstr_release(x_77, 0);
 lean::cnstr_release(x_77, 1);
 x_84 = x_77;
} else {
 lean::dec_ref(x_77);
 x_84 = lean::box(0);
}
if (lean::is_scalar(x_84)) {
 x_85 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_85 = x_84;
}
lean::cnstr_set(x_85, 0, x_82);
lean::cnstr_set(x_85, 1, x_83);
return x_85;
}
}
}
else
{
obj* x_86; obj* x_87; 
lean::dec(x_12);
x_86 = lean::cnstr_get(x_64, 0);
lean::inc(x_86);
lean::dec(x_64);
x_87 = l_Lean_IR_EmitCpp_emitExternDeclAux(x_58, x_86, x_4, x_61);
lean::dec(x_58);
if (lean::obj_tag(x_87) == 0)
{
obj* x_88; obj* x_89; obj* x_90; 
x_88 = lean::cnstr_get(x_87, 1);
lean::inc(x_88);
if (lean::is_exclusive(x_87)) {
 lean::cnstr_release(x_87, 0);
 lean::cnstr_release(x_87, 1);
 x_89 = x_87;
} else {
 lean::dec_ref(x_87);
 x_89 = lean::box(0);
}
if (lean::is_scalar(x_89)) {
 x_90 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_90 = x_89;
}
lean::cnstr_set(x_90, 0, x_60);
lean::cnstr_set(x_90, 1, x_88);
x_3 = x_13;
x_5 = x_90;
goto _start;
}
else
{
obj* x_92; obj* x_93; obj* x_94; obj* x_95; 
lean::dec(x_13);
x_92 = lean::cnstr_get(x_87, 0);
lean::inc(x_92);
x_93 = lean::cnstr_get(x_87, 1);
lean::inc(x_93);
if (lean::is_exclusive(x_87)) {
 lean::cnstr_release(x_87, 0);
 lean::cnstr_release(x_87, 1);
 x_94 = x_87;
} else {
 lean::dec_ref(x_87);
 x_94 = lean::box(0);
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_92);
lean::cnstr_set(x_95, 1, x_93);
return x_95;
}
}
}
}
else
{
uint8 x_96; 
lean::dec(x_13);
lean::dec(x_12);
x_96 = !lean::is_exclusive(x_14);
if (x_96 == 0)
{
return x_14;
}
else
{
obj* x_97; obj* x_98; obj* x_99; 
x_97 = lean::cnstr_get(x_14, 0);
x_98 = lean::cnstr_get(x_14, 1);
lean::inc(x_98);
lean::inc(x_97);
lean::dec(x_14);
x_99 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_99, 0, x_97);
lean::cnstr_set(x_99, 1, x_98);
return x_99;
}
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitFnDecls(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_EmitCpp_getEnv(x_1, x_2);
if (lean::obj_tag(x_3) == 0)
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_5 = lean::cnstr_get(x_3, 0);
x_6 = lean::box(0);
lean::cnstr_set(x_3, 0, x_6);
x_7 = l_Lean_IR_declMapExt;
x_8 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_7, x_5);
x_9 = lean::box(0);
x_10 = l_List_foldl___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__1(x_9, x_8);
lean::inc(x_5);
x_11 = l_List_foldl___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__2(x_5, x_9, x_8);
x_12 = l_RBTree_toList___at_Lean_IR_EmitCpp_emitFnDecls___spec__3(x_11);
lean::dec(x_11);
x_13 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__5(x_5, x_10, x_12, x_1, x_3);
lean::dec(x_10);
lean::dec(x_5);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_14 = lean::cnstr_get(x_3, 0);
x_15 = lean::cnstr_get(x_3, 1);
lean::inc(x_15);
lean::inc(x_14);
lean::dec(x_3);
x_16 = lean::box(0);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_15);
x_18 = l_Lean_IR_declMapExt;
x_19 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_18, x_14);
x_20 = lean::box(0);
x_21 = l_List_foldl___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__1(x_20, x_19);
lean::inc(x_14);
x_22 = l_List_foldl___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__2(x_14, x_20, x_19);
x_23 = l_RBTree_toList___at_Lean_IR_EmitCpp_emitFnDecls___spec__3(x_22);
lean::dec(x_22);
x_24 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__5(x_14, x_21, x_23, x_1, x_17);
lean::dec(x_21);
lean::dec(x_14);
return x_24;
}
}
else
{
uint8 x_25; 
x_25 = !lean::is_exclusive(x_3);
if (x_25 == 0)
{
return x_3;
}
else
{
obj* x_26; obj* x_27; obj* x_28; 
x_26 = lean::cnstr_get(x_3, 0);
x_27 = lean::cnstr_get(x_3, 1);
lean::inc(x_27);
lean::inc(x_26);
lean::dec(x_3);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_26);
lean::cnstr_set(x_28, 1, x_27);
return x_28;
}
}
}
}
obj* l_List_foldl___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__1___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_List_foldl___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__1(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_RBNode_revFold___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__4___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_RBNode_revFold___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__4(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_RBTree_toList___at_Lean_IR_EmitCpp_emitFnDecls___spec__3___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_RBTree_toList___at_Lean_IR_EmitCpp_emitFnDecls___spec__3(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__5___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__5(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
return x_6;
}
}
obj* l_Lean_IR_EmitCpp_emitFnDecls___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_EmitCpp_emitFnDecls(x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; 
x_5 = lean::cnstr_get(x_3, 0);
lean::dec(x_5);
x_6 = lean::box(0);
lean::cnstr_set(x_3, 0, x_6);
return x_3;
}
else
{
obj* x_7; obj* x_8; obj* x_9; 
x_7 = lean::cnstr_get(x_3, 1);
lean::inc(x_7);
lean::dec(x_3);
x_8 = lean::box(0);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
return x_9;
}
}
else
{
uint8 x_10; 
x_10 = !lean::is_exclusive(x_3);
if (x_10 == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_11 = lean::cnstr_get(x_1, 0);
x_12 = lean::cnstr_get(x_1, 1);
x_13 = lean::cnstr_get(x_3, 1);
x_14 = lean::cnstr_get(x_3, 0);
lean::dec(x_14);
x_15 = lean::string_append(x_13, x_11);
x_16 = l_IO_println___rarg___closed__1;
x_17 = lean::string_append(x_15, x_16);
x_18 = lean::box(0);
lean::cnstr_set(x_3, 1, x_17);
lean::cnstr_set(x_3, 0, x_18);
x_1 = x_12;
goto _start;
}
else
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_20 = lean::cnstr_get(x_1, 0);
x_21 = lean::cnstr_get(x_1, 1);
x_22 = lean::cnstr_get(x_3, 1);
lean::inc(x_22);
lean::dec(x_3);
x_23 = lean::string_append(x_22, x_20);
x_24 = l_IO_println___rarg___closed__1;
x_25 = lean::string_append(x_23, x_24);
x_26 = lean::box(0);
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_25);
x_1 = x_21;
x_3 = x_27;
goto _start;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitLns___at_Lean_IR_EmitCpp_emitMainFn___spec__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_1, x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitMainFn___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("invalid main function, incorrect arity when generating code");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitMainFn___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("obj * w = lean::io_mk_world();");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitMainFn___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("w = initialize_");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitMainFn___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("(w);");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitMainFn___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_1 = lean::box(0);
x_2 = lean::mk_string("lean::scoped_task_manager tmanager(lean::hardware_concurrency());");
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_string("if (io_result_is_ok(w)) {");
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::mk_string("lean::io_mark_end_initialization();");
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_5);
return x_7;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitMainFn___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = lean::mk_string("w = ");
x_2 = l_Lean_IR_EmitCpp_leanMainFn;
x_3 = lean::string_append(x_1, x_2);
x_4 = lean::mk_string("(w);");
x_5 = lean::string_append(x_3, x_4);
lean::dec(x_4);
return x_5;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitMainFn___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_1 = lean::box(0);
x_2 = lean::mk_string("}");
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_string("  return 1;");
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::mk_string("  lean::dec_ref(w);");
lean::inc(x_6);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_5);
x_8 = lean::mk_string("  lean::io_result_show_error(w);");
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::mk_string("} else {");
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_9);
x_12 = lean::mk_string("  return ret;");
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_11);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_6);
lean::cnstr_set(x_14, 1, x_13);
x_15 = lean::mk_string("  int ret = lean::unbox(io_result_get_value(w));");
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_14);
x_17 = lean::mk_string("if (io_result_is_ok(w)) {");
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_16);
return x_18;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitMainFn___closed__8() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("int main(int argc, char ** argv) {");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitMainFn___closed__9() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::initialize_runtime_module();");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitMainFn___closed__10() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("namespace lean { void initialize(); }");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitMainFn___closed__11() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::initialize();");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitMainFn___closed__12() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_1 = lean::box(0);
x_2 = lean::mk_string("}");
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_string(" in = n;");
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::mk_string(" obj* n = lean::alloc_cnstr(1,2,0); lean::cnstr_set(n, 0, lean::mk_string(argv[i])); lean::cnstr_set(n, 1, in);");
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_5);
x_8 = lean::mk_string(" i--;");
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::mk_string("while (i > 1) {");
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_9);
x_12 = lean::mk_string("int i = argc;");
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_11);
x_14 = lean::mk_string("obj* in = lean::box(0);");
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_13);
return x_15;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitMainFn___closed__13() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = lean::mk_string("w = ");
x_2 = l_Lean_IR_EmitCpp_leanMainFn;
x_3 = lean::string_append(x_1, x_2);
x_4 = lean::mk_string("(in, w);");
x_5 = lean::string_append(x_3, x_4);
lean::dec(x_4);
return x_5;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitMainFn___closed__14() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("function declaration expected");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitMainFn(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_IR_EmitCpp_toBaseCppName___closed__1;
x_4 = l_Lean_IR_EmitCpp_getDecl(x_3, x_1, x_2);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
if (lean::obj_tag(x_5) == 0)
{
uint8 x_6; 
x_6 = !lean::is_exclusive(x_4);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; uint8 x_11; 
x_7 = lean::cnstr_get(x_4, 0);
lean::dec(x_7);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
x_9 = lean::array_get_size(x_8);
lean::dec(x_8);
x_10 = lean::mk_nat_obj(2u);
x_11 = lean::nat_dec_eq(x_9, x_10);
if (x_11 == 0)
{
obj* x_12; uint8 x_13; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_dec_eq(x_9, x_12);
lean::dec(x_9);
if (x_13 == 0)
{
obj* x_14; 
lean::dec(x_5);
x_14 = l_Lean_IR_EmitCpp_emitMainFn___closed__1;
lean::cnstr_set_tag(x_4, 1);
lean::cnstr_set(x_4, 0, x_14);
return x_4;
}
else
{
obj* x_15; obj* x_16; obj* x_125; 
x_15 = lean::box(0);
lean::cnstr_set(x_4, 0, x_15);
x_125 = l_Lean_IR_EmitCpp_getEnv(x_1, x_4);
if (lean::obj_tag(x_125) == 0)
{
obj* x_126; obj* x_127; obj* x_128; uint8 x_129; 
x_126 = lean::cnstr_get(x_125, 0);
lean::inc(x_126);
x_127 = lean::cnstr_get(x_125, 1);
lean::inc(x_127);
lean::dec(x_125);
x_128 = l_Lean_IR_usesLeanNamespace___main(x_126, x_5);
lean::dec(x_126);
x_129 = lean::unbox(x_128);
lean::dec(x_128);
if (x_129 == 0)
{
obj* x_130; obj* x_131; obj* x_132; obj* x_133; obj* x_134; obj* x_135; obj* x_136; 
x_130 = l_Lean_IR_EmitCpp_emitMainFn___closed__8;
x_131 = lean::string_append(x_127, x_130);
x_132 = l_IO_println___rarg___closed__1;
x_133 = lean::string_append(x_131, x_132);
x_134 = l_Lean_IR_EmitCpp_emitMainFn___closed__9;
x_135 = lean::string_append(x_133, x_134);
x_136 = lean::string_append(x_135, x_132);
x_16 = x_136;
goto block_124;
}
else
{
obj* x_137; obj* x_138; obj* x_139; obj* x_140; obj* x_141; obj* x_142; obj* x_143; obj* x_144; obj* x_145; obj* x_146; 
x_137 = l_Lean_IR_EmitCpp_emitMainFn___closed__10;
x_138 = lean::string_append(x_127, x_137);
x_139 = l_IO_println___rarg___closed__1;
x_140 = lean::string_append(x_138, x_139);
x_141 = l_Lean_IR_EmitCpp_emitMainFn___closed__8;
x_142 = lean::string_append(x_140, x_141);
x_143 = lean::string_append(x_142, x_139);
x_144 = l_Lean_IR_EmitCpp_emitMainFn___closed__11;
x_145 = lean::string_append(x_143, x_144);
x_146 = lean::string_append(x_145, x_139);
x_16 = x_146;
goto block_124;
}
}
else
{
uint8 x_147; 
lean::dec(x_5);
x_147 = !lean::is_exclusive(x_125);
if (x_147 == 0)
{
return x_125;
}
else
{
obj* x_148; obj* x_149; obj* x_150; 
x_148 = lean::cnstr_get(x_125, 0);
x_149 = lean::cnstr_get(x_125, 1);
lean::inc(x_149);
lean::inc(x_148);
lean::dec(x_125);
x_150 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_150, 0, x_148);
lean::cnstr_set(x_150, 1, x_149);
return x_150;
}
}
block_124:
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_17 = l_Lean_IR_EmitCpp_emitMainFn___closed__2;
x_18 = lean::string_append(x_16, x_17);
x_19 = l_IO_println___rarg___closed__1;
x_20 = lean::string_append(x_18, x_19);
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_15);
lean::cnstr_set(x_21, 1, x_20);
x_22 = l_Lean_IR_EmitCpp_getModName(x_1, x_21);
if (lean::obj_tag(x_22) == 0)
{
uint8 x_23; 
x_23 = !lean::is_exclusive(x_22);
if (x_23 == 0)
{
obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
x_24 = lean::cnstr_get(x_22, 0);
x_25 = lean::cnstr_get(x_22, 1);
x_26 = l_String_splitAux___main___closed__1;
x_27 = l_Lean_Name_mangle(x_24, x_26);
x_28 = l_Lean_IR_EmitCpp_emitMainFn___closed__3;
x_29 = lean::string_append(x_28, x_27);
lean::dec(x_27);
x_30 = l_Lean_IR_EmitCpp_emitMainFn___closed__4;
x_31 = lean::string_append(x_29, x_30);
x_32 = lean::string_append(x_25, x_31);
lean::dec(x_31);
x_33 = lean::string_append(x_32, x_19);
lean::cnstr_set(x_22, 1, x_33);
lean::cnstr_set(x_22, 0, x_15);
x_34 = l_Lean_IR_EmitCpp_emitMainFn___closed__5;
x_35 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_34, x_1, x_22);
if (lean::obj_tag(x_35) == 0)
{
uint8 x_36; 
x_36 = !lean::is_exclusive(x_35);
if (x_36 == 0)
{
obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_37 = lean::cnstr_get(x_35, 1);
x_38 = lean::cnstr_get(x_35, 0);
lean::dec(x_38);
x_39 = l_Lean_IR_EmitCpp_emitMainFn___closed__6;
x_40 = lean::string_append(x_37, x_39);
x_41 = lean::string_append(x_40, x_19);
x_42 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_43 = lean::string_append(x_41, x_42);
x_44 = lean::string_append(x_43, x_19);
lean::cnstr_set(x_35, 1, x_44);
lean::cnstr_set(x_35, 0, x_15);
x_45 = l_Lean_IR_EmitCpp_emitMainFn___closed__7;
x_46 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_45, x_1, x_35);
if (lean::obj_tag(x_46) == 0)
{
uint8 x_47; 
x_47 = !lean::is_exclusive(x_46);
if (x_47 == 0)
{
obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_48 = lean::cnstr_get(x_46, 1);
x_49 = lean::cnstr_get(x_46, 0);
lean::dec(x_49);
x_50 = lean::string_append(x_48, x_42);
x_51 = lean::string_append(x_50, x_19);
lean::cnstr_set(x_46, 1, x_51);
lean::cnstr_set(x_46, 0, x_15);
return x_46;
}
else
{
obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
x_52 = lean::cnstr_get(x_46, 1);
lean::inc(x_52);
lean::dec(x_46);
x_53 = lean::string_append(x_52, x_42);
x_54 = lean::string_append(x_53, x_19);
x_55 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_55, 0, x_15);
lean::cnstr_set(x_55, 1, x_54);
return x_55;
}
}
else
{
uint8 x_56; 
x_56 = !lean::is_exclusive(x_46);
if (x_56 == 0)
{
return x_46;
}
else
{
obj* x_57; obj* x_58; obj* x_59; 
x_57 = lean::cnstr_get(x_46, 0);
x_58 = lean::cnstr_get(x_46, 1);
lean::inc(x_58);
lean::inc(x_57);
lean::dec(x_46);
x_59 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_59, 0, x_57);
lean::cnstr_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; 
x_60 = lean::cnstr_get(x_35, 1);
lean::inc(x_60);
lean::dec(x_35);
x_61 = l_Lean_IR_EmitCpp_emitMainFn___closed__6;
x_62 = lean::string_append(x_60, x_61);
x_63 = lean::string_append(x_62, x_19);
x_64 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_65 = lean::string_append(x_63, x_64);
x_66 = lean::string_append(x_65, x_19);
x_67 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_67, 0, x_15);
lean::cnstr_set(x_67, 1, x_66);
x_68 = l_Lean_IR_EmitCpp_emitMainFn___closed__7;
x_69 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_68, x_1, x_67);
if (lean::obj_tag(x_69) == 0)
{
obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
x_70 = lean::cnstr_get(x_69, 1);
lean::inc(x_70);
if (lean::is_exclusive(x_69)) {
 lean::cnstr_release(x_69, 0);
 lean::cnstr_release(x_69, 1);
 x_71 = x_69;
} else {
 lean::dec_ref(x_69);
 x_71 = lean::box(0);
}
x_72 = lean::string_append(x_70, x_64);
x_73 = lean::string_append(x_72, x_19);
if (lean::is_scalar(x_71)) {
 x_74 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_74 = x_71;
}
lean::cnstr_set(x_74, 0, x_15);
lean::cnstr_set(x_74, 1, x_73);
return x_74;
}
else
{
obj* x_75; obj* x_76; obj* x_77; obj* x_78; 
x_75 = lean::cnstr_get(x_69, 0);
lean::inc(x_75);
x_76 = lean::cnstr_get(x_69, 1);
lean::inc(x_76);
if (lean::is_exclusive(x_69)) {
 lean::cnstr_release(x_69, 0);
 lean::cnstr_release(x_69, 1);
 x_77 = x_69;
} else {
 lean::dec_ref(x_69);
 x_77 = lean::box(0);
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_75);
lean::cnstr_set(x_78, 1, x_76);
return x_78;
}
}
}
else
{
uint8 x_79; 
x_79 = !lean::is_exclusive(x_35);
if (x_79 == 0)
{
return x_35;
}
else
{
obj* x_80; obj* x_81; obj* x_82; 
x_80 = lean::cnstr_get(x_35, 0);
x_81 = lean::cnstr_get(x_35, 1);
lean::inc(x_81);
lean::inc(x_80);
lean::dec(x_35);
x_82 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_82, 0, x_80);
lean::cnstr_set(x_82, 1, x_81);
return x_82;
}
}
}
else
{
obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; obj* x_94; obj* x_95; 
x_83 = lean::cnstr_get(x_22, 0);
x_84 = lean::cnstr_get(x_22, 1);
lean::inc(x_84);
lean::inc(x_83);
lean::dec(x_22);
x_85 = l_String_splitAux___main___closed__1;
x_86 = l_Lean_Name_mangle(x_83, x_85);
x_87 = l_Lean_IR_EmitCpp_emitMainFn___closed__3;
x_88 = lean::string_append(x_87, x_86);
lean::dec(x_86);
x_89 = l_Lean_IR_EmitCpp_emitMainFn___closed__4;
x_90 = lean::string_append(x_88, x_89);
x_91 = lean::string_append(x_84, x_90);
lean::dec(x_90);
x_92 = lean::string_append(x_91, x_19);
x_93 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_93, 0, x_15);
lean::cnstr_set(x_93, 1, x_92);
x_94 = l_Lean_IR_EmitCpp_emitMainFn___closed__5;
x_95 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_94, x_1, x_93);
if (lean::obj_tag(x_95) == 0)
{
obj* x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; 
x_96 = lean::cnstr_get(x_95, 1);
lean::inc(x_96);
if (lean::is_exclusive(x_95)) {
 lean::cnstr_release(x_95, 0);
 lean::cnstr_release(x_95, 1);
 x_97 = x_95;
} else {
 lean::dec_ref(x_95);
 x_97 = lean::box(0);
}
x_98 = l_Lean_IR_EmitCpp_emitMainFn___closed__6;
x_99 = lean::string_append(x_96, x_98);
x_100 = lean::string_append(x_99, x_19);
x_101 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_102 = lean::string_append(x_100, x_101);
x_103 = lean::string_append(x_102, x_19);
if (lean::is_scalar(x_97)) {
 x_104 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_104 = x_97;
}
lean::cnstr_set(x_104, 0, x_15);
lean::cnstr_set(x_104, 1, x_103);
x_105 = l_Lean_IR_EmitCpp_emitMainFn___closed__7;
x_106 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_105, x_1, x_104);
if (lean::obj_tag(x_106) == 0)
{
obj* x_107; obj* x_108; obj* x_109; obj* x_110; obj* x_111; 
x_107 = lean::cnstr_get(x_106, 1);
lean::inc(x_107);
if (lean::is_exclusive(x_106)) {
 lean::cnstr_release(x_106, 0);
 lean::cnstr_release(x_106, 1);
 x_108 = x_106;
} else {
 lean::dec_ref(x_106);
 x_108 = lean::box(0);
}
x_109 = lean::string_append(x_107, x_101);
x_110 = lean::string_append(x_109, x_19);
if (lean::is_scalar(x_108)) {
 x_111 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_111 = x_108;
}
lean::cnstr_set(x_111, 0, x_15);
lean::cnstr_set(x_111, 1, x_110);
return x_111;
}
else
{
obj* x_112; obj* x_113; obj* x_114; obj* x_115; 
x_112 = lean::cnstr_get(x_106, 0);
lean::inc(x_112);
x_113 = lean::cnstr_get(x_106, 1);
lean::inc(x_113);
if (lean::is_exclusive(x_106)) {
 lean::cnstr_release(x_106, 0);
 lean::cnstr_release(x_106, 1);
 x_114 = x_106;
} else {
 lean::dec_ref(x_106);
 x_114 = lean::box(0);
}
if (lean::is_scalar(x_114)) {
 x_115 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_115 = x_114;
}
lean::cnstr_set(x_115, 0, x_112);
lean::cnstr_set(x_115, 1, x_113);
return x_115;
}
}
else
{
obj* x_116; obj* x_117; obj* x_118; obj* x_119; 
x_116 = lean::cnstr_get(x_95, 0);
lean::inc(x_116);
x_117 = lean::cnstr_get(x_95, 1);
lean::inc(x_117);
if (lean::is_exclusive(x_95)) {
 lean::cnstr_release(x_95, 0);
 lean::cnstr_release(x_95, 1);
 x_118 = x_95;
} else {
 lean::dec_ref(x_95);
 x_118 = lean::box(0);
}
if (lean::is_scalar(x_118)) {
 x_119 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_119 = x_118;
}
lean::cnstr_set(x_119, 0, x_116);
lean::cnstr_set(x_119, 1, x_117);
return x_119;
}
}
}
else
{
uint8 x_120; 
x_120 = !lean::is_exclusive(x_22);
if (x_120 == 0)
{
return x_22;
}
else
{
obj* x_121; obj* x_122; obj* x_123; 
x_121 = lean::cnstr_get(x_22, 0);
x_122 = lean::cnstr_get(x_22, 1);
lean::inc(x_122);
lean::inc(x_121);
lean::dec(x_22);
x_123 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_123, 0, x_121);
lean::cnstr_set(x_123, 1, x_122);
return x_123;
}
}
}
}
}
else
{
obj* x_151; obj* x_152; obj* x_306; 
lean::dec(x_9);
x_151 = lean::box(0);
lean::cnstr_set(x_4, 0, x_151);
x_306 = l_Lean_IR_EmitCpp_getEnv(x_1, x_4);
if (lean::obj_tag(x_306) == 0)
{
obj* x_307; obj* x_308; obj* x_309; uint8 x_310; 
x_307 = lean::cnstr_get(x_306, 0);
lean::inc(x_307);
x_308 = lean::cnstr_get(x_306, 1);
lean::inc(x_308);
lean::dec(x_306);
x_309 = l_Lean_IR_usesLeanNamespace___main(x_307, x_5);
lean::dec(x_307);
x_310 = lean::unbox(x_309);
lean::dec(x_309);
if (x_310 == 0)
{
obj* x_311; obj* x_312; obj* x_313; obj* x_314; obj* x_315; obj* x_316; obj* x_317; 
x_311 = l_Lean_IR_EmitCpp_emitMainFn___closed__8;
x_312 = lean::string_append(x_308, x_311);
x_313 = l_IO_println___rarg___closed__1;
x_314 = lean::string_append(x_312, x_313);
x_315 = l_Lean_IR_EmitCpp_emitMainFn___closed__9;
x_316 = lean::string_append(x_314, x_315);
x_317 = lean::string_append(x_316, x_313);
x_152 = x_317;
goto block_305;
}
else
{
obj* x_318; obj* x_319; obj* x_320; obj* x_321; obj* x_322; obj* x_323; obj* x_324; obj* x_325; obj* x_326; obj* x_327; 
x_318 = l_Lean_IR_EmitCpp_emitMainFn___closed__10;
x_319 = lean::string_append(x_308, x_318);
x_320 = l_IO_println___rarg___closed__1;
x_321 = lean::string_append(x_319, x_320);
x_322 = l_Lean_IR_EmitCpp_emitMainFn___closed__8;
x_323 = lean::string_append(x_321, x_322);
x_324 = lean::string_append(x_323, x_320);
x_325 = l_Lean_IR_EmitCpp_emitMainFn___closed__11;
x_326 = lean::string_append(x_324, x_325);
x_327 = lean::string_append(x_326, x_320);
x_152 = x_327;
goto block_305;
}
}
else
{
uint8 x_328; 
lean::dec(x_5);
x_328 = !lean::is_exclusive(x_306);
if (x_328 == 0)
{
return x_306;
}
else
{
obj* x_329; obj* x_330; obj* x_331; 
x_329 = lean::cnstr_get(x_306, 0);
x_330 = lean::cnstr_get(x_306, 1);
lean::inc(x_330);
lean::inc(x_329);
lean::dec(x_306);
x_331 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_331, 0, x_329);
lean::cnstr_set(x_331, 1, x_330);
return x_331;
}
}
block_305:
{
obj* x_153; obj* x_154; obj* x_155; obj* x_156; obj* x_157; obj* x_158; 
x_153 = l_Lean_IR_EmitCpp_emitMainFn___closed__2;
x_154 = lean::string_append(x_152, x_153);
x_155 = l_IO_println___rarg___closed__1;
x_156 = lean::string_append(x_154, x_155);
x_157 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_157, 0, x_151);
lean::cnstr_set(x_157, 1, x_156);
x_158 = l_Lean_IR_EmitCpp_getModName(x_1, x_157);
if (lean::obj_tag(x_158) == 0)
{
uint8 x_159; 
x_159 = !lean::is_exclusive(x_158);
if (x_159 == 0)
{
obj* x_160; obj* x_161; obj* x_162; obj* x_163; obj* x_164; obj* x_165; obj* x_166; obj* x_167; obj* x_168; obj* x_169; obj* x_170; obj* x_171; 
x_160 = lean::cnstr_get(x_158, 0);
x_161 = lean::cnstr_get(x_158, 1);
x_162 = l_String_splitAux___main___closed__1;
x_163 = l_Lean_Name_mangle(x_160, x_162);
x_164 = l_Lean_IR_EmitCpp_emitMainFn___closed__3;
x_165 = lean::string_append(x_164, x_163);
lean::dec(x_163);
x_166 = l_Lean_IR_EmitCpp_emitMainFn___closed__4;
x_167 = lean::string_append(x_165, x_166);
x_168 = lean::string_append(x_161, x_167);
lean::dec(x_167);
x_169 = lean::string_append(x_168, x_155);
lean::cnstr_set(x_158, 1, x_169);
lean::cnstr_set(x_158, 0, x_151);
x_170 = l_Lean_IR_EmitCpp_emitMainFn___closed__5;
x_171 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_170, x_1, x_158);
if (lean::obj_tag(x_171) == 0)
{
uint8 x_172; 
x_172 = !lean::is_exclusive(x_171);
if (x_172 == 0)
{
obj* x_173; obj* x_174; obj* x_175; 
x_173 = lean::cnstr_get(x_171, 0);
lean::dec(x_173);
lean::cnstr_set(x_171, 0, x_151);
x_174 = l_Lean_IR_EmitCpp_emitMainFn___closed__12;
x_175 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_174, x_1, x_171);
if (lean::obj_tag(x_175) == 0)
{
uint8 x_176; 
x_176 = !lean::is_exclusive(x_175);
if (x_176 == 0)
{
obj* x_177; obj* x_178; obj* x_179; obj* x_180; obj* x_181; obj* x_182; obj* x_183; obj* x_184; obj* x_185; obj* x_186; 
x_177 = lean::cnstr_get(x_175, 1);
x_178 = lean::cnstr_get(x_175, 0);
lean::dec(x_178);
x_179 = l_Lean_IR_EmitCpp_emitMainFn___closed__13;
x_180 = lean::string_append(x_177, x_179);
x_181 = lean::string_append(x_180, x_155);
x_182 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_183 = lean::string_append(x_181, x_182);
x_184 = lean::string_append(x_183, x_155);
lean::cnstr_set(x_175, 1, x_184);
lean::cnstr_set(x_175, 0, x_151);
x_185 = l_Lean_IR_EmitCpp_emitMainFn___closed__7;
x_186 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_185, x_1, x_175);
if (lean::obj_tag(x_186) == 0)
{
uint8 x_187; 
x_187 = !lean::is_exclusive(x_186);
if (x_187 == 0)
{
obj* x_188; obj* x_189; obj* x_190; obj* x_191; 
x_188 = lean::cnstr_get(x_186, 1);
x_189 = lean::cnstr_get(x_186, 0);
lean::dec(x_189);
x_190 = lean::string_append(x_188, x_182);
x_191 = lean::string_append(x_190, x_155);
lean::cnstr_set(x_186, 1, x_191);
lean::cnstr_set(x_186, 0, x_151);
return x_186;
}
else
{
obj* x_192; obj* x_193; obj* x_194; obj* x_195; 
x_192 = lean::cnstr_get(x_186, 1);
lean::inc(x_192);
lean::dec(x_186);
x_193 = lean::string_append(x_192, x_182);
x_194 = lean::string_append(x_193, x_155);
x_195 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_195, 0, x_151);
lean::cnstr_set(x_195, 1, x_194);
return x_195;
}
}
else
{
uint8 x_196; 
x_196 = !lean::is_exclusive(x_186);
if (x_196 == 0)
{
return x_186;
}
else
{
obj* x_197; obj* x_198; obj* x_199; 
x_197 = lean::cnstr_get(x_186, 0);
x_198 = lean::cnstr_get(x_186, 1);
lean::inc(x_198);
lean::inc(x_197);
lean::dec(x_186);
x_199 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_199, 0, x_197);
lean::cnstr_set(x_199, 1, x_198);
return x_199;
}
}
}
else
{
obj* x_200; obj* x_201; obj* x_202; obj* x_203; obj* x_204; obj* x_205; obj* x_206; obj* x_207; obj* x_208; obj* x_209; 
x_200 = lean::cnstr_get(x_175, 1);
lean::inc(x_200);
lean::dec(x_175);
x_201 = l_Lean_IR_EmitCpp_emitMainFn___closed__13;
x_202 = lean::string_append(x_200, x_201);
x_203 = lean::string_append(x_202, x_155);
x_204 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_205 = lean::string_append(x_203, x_204);
x_206 = lean::string_append(x_205, x_155);
x_207 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_207, 0, x_151);
lean::cnstr_set(x_207, 1, x_206);
x_208 = l_Lean_IR_EmitCpp_emitMainFn___closed__7;
x_209 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_208, x_1, x_207);
if (lean::obj_tag(x_209) == 0)
{
obj* x_210; obj* x_211; obj* x_212; obj* x_213; obj* x_214; 
x_210 = lean::cnstr_get(x_209, 1);
lean::inc(x_210);
if (lean::is_exclusive(x_209)) {
 lean::cnstr_release(x_209, 0);
 lean::cnstr_release(x_209, 1);
 x_211 = x_209;
} else {
 lean::dec_ref(x_209);
 x_211 = lean::box(0);
}
x_212 = lean::string_append(x_210, x_204);
x_213 = lean::string_append(x_212, x_155);
if (lean::is_scalar(x_211)) {
 x_214 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_214 = x_211;
}
lean::cnstr_set(x_214, 0, x_151);
lean::cnstr_set(x_214, 1, x_213);
return x_214;
}
else
{
obj* x_215; obj* x_216; obj* x_217; obj* x_218; 
x_215 = lean::cnstr_get(x_209, 0);
lean::inc(x_215);
x_216 = lean::cnstr_get(x_209, 1);
lean::inc(x_216);
if (lean::is_exclusive(x_209)) {
 lean::cnstr_release(x_209, 0);
 lean::cnstr_release(x_209, 1);
 x_217 = x_209;
} else {
 lean::dec_ref(x_209);
 x_217 = lean::box(0);
}
if (lean::is_scalar(x_217)) {
 x_218 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_218 = x_217;
}
lean::cnstr_set(x_218, 0, x_215);
lean::cnstr_set(x_218, 1, x_216);
return x_218;
}
}
}
else
{
uint8 x_219; 
x_219 = !lean::is_exclusive(x_175);
if (x_219 == 0)
{
return x_175;
}
else
{
obj* x_220; obj* x_221; obj* x_222; 
x_220 = lean::cnstr_get(x_175, 0);
x_221 = lean::cnstr_get(x_175, 1);
lean::inc(x_221);
lean::inc(x_220);
lean::dec(x_175);
x_222 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_222, 0, x_220);
lean::cnstr_set(x_222, 1, x_221);
return x_222;
}
}
}
else
{
obj* x_223; obj* x_224; obj* x_225; obj* x_226; 
x_223 = lean::cnstr_get(x_171, 1);
lean::inc(x_223);
lean::dec(x_171);
x_224 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_224, 0, x_151);
lean::cnstr_set(x_224, 1, x_223);
x_225 = l_Lean_IR_EmitCpp_emitMainFn___closed__12;
x_226 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_225, x_1, x_224);
if (lean::obj_tag(x_226) == 0)
{
obj* x_227; obj* x_228; obj* x_229; obj* x_230; obj* x_231; obj* x_232; obj* x_233; obj* x_234; obj* x_235; obj* x_236; obj* x_237; 
x_227 = lean::cnstr_get(x_226, 1);
lean::inc(x_227);
if (lean::is_exclusive(x_226)) {
 lean::cnstr_release(x_226, 0);
 lean::cnstr_release(x_226, 1);
 x_228 = x_226;
} else {
 lean::dec_ref(x_226);
 x_228 = lean::box(0);
}
x_229 = l_Lean_IR_EmitCpp_emitMainFn___closed__13;
x_230 = lean::string_append(x_227, x_229);
x_231 = lean::string_append(x_230, x_155);
x_232 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_233 = lean::string_append(x_231, x_232);
x_234 = lean::string_append(x_233, x_155);
if (lean::is_scalar(x_228)) {
 x_235 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_235 = x_228;
}
lean::cnstr_set(x_235, 0, x_151);
lean::cnstr_set(x_235, 1, x_234);
x_236 = l_Lean_IR_EmitCpp_emitMainFn___closed__7;
x_237 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_236, x_1, x_235);
if (lean::obj_tag(x_237) == 0)
{
obj* x_238; obj* x_239; obj* x_240; obj* x_241; obj* x_242; 
x_238 = lean::cnstr_get(x_237, 1);
lean::inc(x_238);
if (lean::is_exclusive(x_237)) {
 lean::cnstr_release(x_237, 0);
 lean::cnstr_release(x_237, 1);
 x_239 = x_237;
} else {
 lean::dec_ref(x_237);
 x_239 = lean::box(0);
}
x_240 = lean::string_append(x_238, x_232);
x_241 = lean::string_append(x_240, x_155);
if (lean::is_scalar(x_239)) {
 x_242 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_242 = x_239;
}
lean::cnstr_set(x_242, 0, x_151);
lean::cnstr_set(x_242, 1, x_241);
return x_242;
}
else
{
obj* x_243; obj* x_244; obj* x_245; obj* x_246; 
x_243 = lean::cnstr_get(x_237, 0);
lean::inc(x_243);
x_244 = lean::cnstr_get(x_237, 1);
lean::inc(x_244);
if (lean::is_exclusive(x_237)) {
 lean::cnstr_release(x_237, 0);
 lean::cnstr_release(x_237, 1);
 x_245 = x_237;
} else {
 lean::dec_ref(x_237);
 x_245 = lean::box(0);
}
if (lean::is_scalar(x_245)) {
 x_246 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_246 = x_245;
}
lean::cnstr_set(x_246, 0, x_243);
lean::cnstr_set(x_246, 1, x_244);
return x_246;
}
}
else
{
obj* x_247; obj* x_248; obj* x_249; obj* x_250; 
x_247 = lean::cnstr_get(x_226, 0);
lean::inc(x_247);
x_248 = lean::cnstr_get(x_226, 1);
lean::inc(x_248);
if (lean::is_exclusive(x_226)) {
 lean::cnstr_release(x_226, 0);
 lean::cnstr_release(x_226, 1);
 x_249 = x_226;
} else {
 lean::dec_ref(x_226);
 x_249 = lean::box(0);
}
if (lean::is_scalar(x_249)) {
 x_250 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_250 = x_249;
}
lean::cnstr_set(x_250, 0, x_247);
lean::cnstr_set(x_250, 1, x_248);
return x_250;
}
}
}
else
{
uint8 x_251; 
x_251 = !lean::is_exclusive(x_171);
if (x_251 == 0)
{
return x_171;
}
else
{
obj* x_252; obj* x_253; obj* x_254; 
x_252 = lean::cnstr_get(x_171, 0);
x_253 = lean::cnstr_get(x_171, 1);
lean::inc(x_253);
lean::inc(x_252);
lean::dec(x_171);
x_254 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_254, 0, x_252);
lean::cnstr_set(x_254, 1, x_253);
return x_254;
}
}
}
else
{
obj* x_255; obj* x_256; obj* x_257; obj* x_258; obj* x_259; obj* x_260; obj* x_261; obj* x_262; obj* x_263; obj* x_264; obj* x_265; obj* x_266; obj* x_267; 
x_255 = lean::cnstr_get(x_158, 0);
x_256 = lean::cnstr_get(x_158, 1);
lean::inc(x_256);
lean::inc(x_255);
lean::dec(x_158);
x_257 = l_String_splitAux___main___closed__1;
x_258 = l_Lean_Name_mangle(x_255, x_257);
x_259 = l_Lean_IR_EmitCpp_emitMainFn___closed__3;
x_260 = lean::string_append(x_259, x_258);
lean::dec(x_258);
x_261 = l_Lean_IR_EmitCpp_emitMainFn___closed__4;
x_262 = lean::string_append(x_260, x_261);
x_263 = lean::string_append(x_256, x_262);
lean::dec(x_262);
x_264 = lean::string_append(x_263, x_155);
x_265 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_265, 0, x_151);
lean::cnstr_set(x_265, 1, x_264);
x_266 = l_Lean_IR_EmitCpp_emitMainFn___closed__5;
x_267 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_266, x_1, x_265);
if (lean::obj_tag(x_267) == 0)
{
obj* x_268; obj* x_269; obj* x_270; obj* x_271; obj* x_272; 
x_268 = lean::cnstr_get(x_267, 1);
lean::inc(x_268);
if (lean::is_exclusive(x_267)) {
 lean::cnstr_release(x_267, 0);
 lean::cnstr_release(x_267, 1);
 x_269 = x_267;
} else {
 lean::dec_ref(x_267);
 x_269 = lean::box(0);
}
if (lean::is_scalar(x_269)) {
 x_270 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_270 = x_269;
}
lean::cnstr_set(x_270, 0, x_151);
lean::cnstr_set(x_270, 1, x_268);
x_271 = l_Lean_IR_EmitCpp_emitMainFn___closed__12;
x_272 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_271, x_1, x_270);
if (lean::obj_tag(x_272) == 0)
{
obj* x_273; obj* x_274; obj* x_275; obj* x_276; obj* x_277; obj* x_278; obj* x_279; obj* x_280; obj* x_281; obj* x_282; obj* x_283; 
x_273 = lean::cnstr_get(x_272, 1);
lean::inc(x_273);
if (lean::is_exclusive(x_272)) {
 lean::cnstr_release(x_272, 0);
 lean::cnstr_release(x_272, 1);
 x_274 = x_272;
} else {
 lean::dec_ref(x_272);
 x_274 = lean::box(0);
}
x_275 = l_Lean_IR_EmitCpp_emitMainFn___closed__13;
x_276 = lean::string_append(x_273, x_275);
x_277 = lean::string_append(x_276, x_155);
x_278 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_279 = lean::string_append(x_277, x_278);
x_280 = lean::string_append(x_279, x_155);
if (lean::is_scalar(x_274)) {
 x_281 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_281 = x_274;
}
lean::cnstr_set(x_281, 0, x_151);
lean::cnstr_set(x_281, 1, x_280);
x_282 = l_Lean_IR_EmitCpp_emitMainFn___closed__7;
x_283 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_282, x_1, x_281);
if (lean::obj_tag(x_283) == 0)
{
obj* x_284; obj* x_285; obj* x_286; obj* x_287; obj* x_288; 
x_284 = lean::cnstr_get(x_283, 1);
lean::inc(x_284);
if (lean::is_exclusive(x_283)) {
 lean::cnstr_release(x_283, 0);
 lean::cnstr_release(x_283, 1);
 x_285 = x_283;
} else {
 lean::dec_ref(x_283);
 x_285 = lean::box(0);
}
x_286 = lean::string_append(x_284, x_278);
x_287 = lean::string_append(x_286, x_155);
if (lean::is_scalar(x_285)) {
 x_288 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_288 = x_285;
}
lean::cnstr_set(x_288, 0, x_151);
lean::cnstr_set(x_288, 1, x_287);
return x_288;
}
else
{
obj* x_289; obj* x_290; obj* x_291; obj* x_292; 
x_289 = lean::cnstr_get(x_283, 0);
lean::inc(x_289);
x_290 = lean::cnstr_get(x_283, 1);
lean::inc(x_290);
if (lean::is_exclusive(x_283)) {
 lean::cnstr_release(x_283, 0);
 lean::cnstr_release(x_283, 1);
 x_291 = x_283;
} else {
 lean::dec_ref(x_283);
 x_291 = lean::box(0);
}
if (lean::is_scalar(x_291)) {
 x_292 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_292 = x_291;
}
lean::cnstr_set(x_292, 0, x_289);
lean::cnstr_set(x_292, 1, x_290);
return x_292;
}
}
else
{
obj* x_293; obj* x_294; obj* x_295; obj* x_296; 
x_293 = lean::cnstr_get(x_272, 0);
lean::inc(x_293);
x_294 = lean::cnstr_get(x_272, 1);
lean::inc(x_294);
if (lean::is_exclusive(x_272)) {
 lean::cnstr_release(x_272, 0);
 lean::cnstr_release(x_272, 1);
 x_295 = x_272;
} else {
 lean::dec_ref(x_272);
 x_295 = lean::box(0);
}
if (lean::is_scalar(x_295)) {
 x_296 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_296 = x_295;
}
lean::cnstr_set(x_296, 0, x_293);
lean::cnstr_set(x_296, 1, x_294);
return x_296;
}
}
else
{
obj* x_297; obj* x_298; obj* x_299; obj* x_300; 
x_297 = lean::cnstr_get(x_267, 0);
lean::inc(x_297);
x_298 = lean::cnstr_get(x_267, 1);
lean::inc(x_298);
if (lean::is_exclusive(x_267)) {
 lean::cnstr_release(x_267, 0);
 lean::cnstr_release(x_267, 1);
 x_299 = x_267;
} else {
 lean::dec_ref(x_267);
 x_299 = lean::box(0);
}
if (lean::is_scalar(x_299)) {
 x_300 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_300 = x_299;
}
lean::cnstr_set(x_300, 0, x_297);
lean::cnstr_set(x_300, 1, x_298);
return x_300;
}
}
}
else
{
uint8 x_301; 
x_301 = !lean::is_exclusive(x_158);
if (x_301 == 0)
{
return x_158;
}
else
{
obj* x_302; obj* x_303; obj* x_304; 
x_302 = lean::cnstr_get(x_158, 0);
x_303 = lean::cnstr_get(x_158, 1);
lean::inc(x_303);
lean::inc(x_302);
lean::dec(x_158);
x_304 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_304, 0, x_302);
lean::cnstr_set(x_304, 1, x_303);
return x_304;
}
}
}
}
}
else
{
obj* x_332; obj* x_333; obj* x_334; obj* x_335; uint8 x_336; 
x_332 = lean::cnstr_get(x_4, 1);
lean::inc(x_332);
lean::dec(x_4);
x_333 = lean::cnstr_get(x_5, 1);
lean::inc(x_333);
x_334 = lean::array_get_size(x_333);
lean::dec(x_333);
x_335 = lean::mk_nat_obj(2u);
x_336 = lean::nat_dec_eq(x_334, x_335);
if (x_336 == 0)
{
obj* x_337; uint8 x_338; 
x_337 = lean::mk_nat_obj(1u);
x_338 = lean::nat_dec_eq(x_334, x_337);
lean::dec(x_334);
if (x_338 == 0)
{
obj* x_339; obj* x_340; 
lean::dec(x_5);
x_339 = l_Lean_IR_EmitCpp_emitMainFn___closed__1;
x_340 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_340, 0, x_339);
lean::cnstr_set(x_340, 1, x_332);
return x_340;
}
else
{
obj* x_341; obj* x_342; obj* x_343; obj* x_393; 
x_341 = lean::box(0);
x_342 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_342, 0, x_341);
lean::cnstr_set(x_342, 1, x_332);
x_393 = l_Lean_IR_EmitCpp_getEnv(x_1, x_342);
if (lean::obj_tag(x_393) == 0)
{
obj* x_394; obj* x_395; obj* x_396; uint8 x_397; 
x_394 = lean::cnstr_get(x_393, 0);
lean::inc(x_394);
x_395 = lean::cnstr_get(x_393, 1);
lean::inc(x_395);
lean::dec(x_393);
x_396 = l_Lean_IR_usesLeanNamespace___main(x_394, x_5);
lean::dec(x_394);
x_397 = lean::unbox(x_396);
lean::dec(x_396);
if (x_397 == 0)
{
obj* x_398; obj* x_399; obj* x_400; obj* x_401; obj* x_402; obj* x_403; obj* x_404; 
x_398 = l_Lean_IR_EmitCpp_emitMainFn___closed__8;
x_399 = lean::string_append(x_395, x_398);
x_400 = l_IO_println___rarg___closed__1;
x_401 = lean::string_append(x_399, x_400);
x_402 = l_Lean_IR_EmitCpp_emitMainFn___closed__9;
x_403 = lean::string_append(x_401, x_402);
x_404 = lean::string_append(x_403, x_400);
x_343 = x_404;
goto block_392;
}
else
{
obj* x_405; obj* x_406; obj* x_407; obj* x_408; obj* x_409; obj* x_410; obj* x_411; obj* x_412; obj* x_413; obj* x_414; 
x_405 = l_Lean_IR_EmitCpp_emitMainFn___closed__10;
x_406 = lean::string_append(x_395, x_405);
x_407 = l_IO_println___rarg___closed__1;
x_408 = lean::string_append(x_406, x_407);
x_409 = l_Lean_IR_EmitCpp_emitMainFn___closed__8;
x_410 = lean::string_append(x_408, x_409);
x_411 = lean::string_append(x_410, x_407);
x_412 = l_Lean_IR_EmitCpp_emitMainFn___closed__11;
x_413 = lean::string_append(x_411, x_412);
x_414 = lean::string_append(x_413, x_407);
x_343 = x_414;
goto block_392;
}
}
else
{
obj* x_415; obj* x_416; obj* x_417; obj* x_418; 
lean::dec(x_5);
x_415 = lean::cnstr_get(x_393, 0);
lean::inc(x_415);
x_416 = lean::cnstr_get(x_393, 1);
lean::inc(x_416);
if (lean::is_exclusive(x_393)) {
 lean::cnstr_release(x_393, 0);
 lean::cnstr_release(x_393, 1);
 x_417 = x_393;
} else {
 lean::dec_ref(x_393);
 x_417 = lean::box(0);
}
if (lean::is_scalar(x_417)) {
 x_418 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_418 = x_417;
}
lean::cnstr_set(x_418, 0, x_415);
lean::cnstr_set(x_418, 1, x_416);
return x_418;
}
block_392:
{
obj* x_344; obj* x_345; obj* x_346; obj* x_347; obj* x_348; obj* x_349; 
x_344 = l_Lean_IR_EmitCpp_emitMainFn___closed__2;
x_345 = lean::string_append(x_343, x_344);
x_346 = l_IO_println___rarg___closed__1;
x_347 = lean::string_append(x_345, x_346);
x_348 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_348, 0, x_341);
lean::cnstr_set(x_348, 1, x_347);
x_349 = l_Lean_IR_EmitCpp_getModName(x_1, x_348);
if (lean::obj_tag(x_349) == 0)
{
obj* x_350; obj* x_351; obj* x_352; obj* x_353; obj* x_354; obj* x_355; obj* x_356; obj* x_357; obj* x_358; obj* x_359; obj* x_360; obj* x_361; obj* x_362; obj* x_363; 
x_350 = lean::cnstr_get(x_349, 0);
lean::inc(x_350);
x_351 = lean::cnstr_get(x_349, 1);
lean::inc(x_351);
if (lean::is_exclusive(x_349)) {
 lean::cnstr_release(x_349, 0);
 lean::cnstr_release(x_349, 1);
 x_352 = x_349;
} else {
 lean::dec_ref(x_349);
 x_352 = lean::box(0);
}
x_353 = l_String_splitAux___main___closed__1;
x_354 = l_Lean_Name_mangle(x_350, x_353);
x_355 = l_Lean_IR_EmitCpp_emitMainFn___closed__3;
x_356 = lean::string_append(x_355, x_354);
lean::dec(x_354);
x_357 = l_Lean_IR_EmitCpp_emitMainFn___closed__4;
x_358 = lean::string_append(x_356, x_357);
x_359 = lean::string_append(x_351, x_358);
lean::dec(x_358);
x_360 = lean::string_append(x_359, x_346);
if (lean::is_scalar(x_352)) {
 x_361 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_361 = x_352;
}
lean::cnstr_set(x_361, 0, x_341);
lean::cnstr_set(x_361, 1, x_360);
x_362 = l_Lean_IR_EmitCpp_emitMainFn___closed__5;
x_363 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_362, x_1, x_361);
if (lean::obj_tag(x_363) == 0)
{
obj* x_364; obj* x_365; obj* x_366; obj* x_367; obj* x_368; obj* x_369; obj* x_370; obj* x_371; obj* x_372; obj* x_373; obj* x_374; 
x_364 = lean::cnstr_get(x_363, 1);
lean::inc(x_364);
if (lean::is_exclusive(x_363)) {
 lean::cnstr_release(x_363, 0);
 lean::cnstr_release(x_363, 1);
 x_365 = x_363;
} else {
 lean::dec_ref(x_363);
 x_365 = lean::box(0);
}
x_366 = l_Lean_IR_EmitCpp_emitMainFn___closed__6;
x_367 = lean::string_append(x_364, x_366);
x_368 = lean::string_append(x_367, x_346);
x_369 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_370 = lean::string_append(x_368, x_369);
x_371 = lean::string_append(x_370, x_346);
if (lean::is_scalar(x_365)) {
 x_372 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_372 = x_365;
}
lean::cnstr_set(x_372, 0, x_341);
lean::cnstr_set(x_372, 1, x_371);
x_373 = l_Lean_IR_EmitCpp_emitMainFn___closed__7;
x_374 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_373, x_1, x_372);
if (lean::obj_tag(x_374) == 0)
{
obj* x_375; obj* x_376; obj* x_377; obj* x_378; obj* x_379; 
x_375 = lean::cnstr_get(x_374, 1);
lean::inc(x_375);
if (lean::is_exclusive(x_374)) {
 lean::cnstr_release(x_374, 0);
 lean::cnstr_release(x_374, 1);
 x_376 = x_374;
} else {
 lean::dec_ref(x_374);
 x_376 = lean::box(0);
}
x_377 = lean::string_append(x_375, x_369);
x_378 = lean::string_append(x_377, x_346);
if (lean::is_scalar(x_376)) {
 x_379 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_379 = x_376;
}
lean::cnstr_set(x_379, 0, x_341);
lean::cnstr_set(x_379, 1, x_378);
return x_379;
}
else
{
obj* x_380; obj* x_381; obj* x_382; obj* x_383; 
x_380 = lean::cnstr_get(x_374, 0);
lean::inc(x_380);
x_381 = lean::cnstr_get(x_374, 1);
lean::inc(x_381);
if (lean::is_exclusive(x_374)) {
 lean::cnstr_release(x_374, 0);
 lean::cnstr_release(x_374, 1);
 x_382 = x_374;
} else {
 lean::dec_ref(x_374);
 x_382 = lean::box(0);
}
if (lean::is_scalar(x_382)) {
 x_383 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_383 = x_382;
}
lean::cnstr_set(x_383, 0, x_380);
lean::cnstr_set(x_383, 1, x_381);
return x_383;
}
}
else
{
obj* x_384; obj* x_385; obj* x_386; obj* x_387; 
x_384 = lean::cnstr_get(x_363, 0);
lean::inc(x_384);
x_385 = lean::cnstr_get(x_363, 1);
lean::inc(x_385);
if (lean::is_exclusive(x_363)) {
 lean::cnstr_release(x_363, 0);
 lean::cnstr_release(x_363, 1);
 x_386 = x_363;
} else {
 lean::dec_ref(x_363);
 x_386 = lean::box(0);
}
if (lean::is_scalar(x_386)) {
 x_387 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_387 = x_386;
}
lean::cnstr_set(x_387, 0, x_384);
lean::cnstr_set(x_387, 1, x_385);
return x_387;
}
}
else
{
obj* x_388; obj* x_389; obj* x_390; obj* x_391; 
x_388 = lean::cnstr_get(x_349, 0);
lean::inc(x_388);
x_389 = lean::cnstr_get(x_349, 1);
lean::inc(x_389);
if (lean::is_exclusive(x_349)) {
 lean::cnstr_release(x_349, 0);
 lean::cnstr_release(x_349, 1);
 x_390 = x_349;
} else {
 lean::dec_ref(x_349);
 x_390 = lean::box(0);
}
if (lean::is_scalar(x_390)) {
 x_391 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_391 = x_390;
}
lean::cnstr_set(x_391, 0, x_388);
lean::cnstr_set(x_391, 1, x_389);
return x_391;
}
}
}
}
else
{
obj* x_419; obj* x_420; obj* x_421; obj* x_480; 
lean::dec(x_334);
x_419 = lean::box(0);
x_420 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_420, 0, x_419);
lean::cnstr_set(x_420, 1, x_332);
x_480 = l_Lean_IR_EmitCpp_getEnv(x_1, x_420);
if (lean::obj_tag(x_480) == 0)
{
obj* x_481; obj* x_482; obj* x_483; uint8 x_484; 
x_481 = lean::cnstr_get(x_480, 0);
lean::inc(x_481);
x_482 = lean::cnstr_get(x_480, 1);
lean::inc(x_482);
lean::dec(x_480);
x_483 = l_Lean_IR_usesLeanNamespace___main(x_481, x_5);
lean::dec(x_481);
x_484 = lean::unbox(x_483);
lean::dec(x_483);
if (x_484 == 0)
{
obj* x_485; obj* x_486; obj* x_487; obj* x_488; obj* x_489; obj* x_490; obj* x_491; 
x_485 = l_Lean_IR_EmitCpp_emitMainFn___closed__8;
x_486 = lean::string_append(x_482, x_485);
x_487 = l_IO_println___rarg___closed__1;
x_488 = lean::string_append(x_486, x_487);
x_489 = l_Lean_IR_EmitCpp_emitMainFn___closed__9;
x_490 = lean::string_append(x_488, x_489);
x_491 = lean::string_append(x_490, x_487);
x_421 = x_491;
goto block_479;
}
else
{
obj* x_492; obj* x_493; obj* x_494; obj* x_495; obj* x_496; obj* x_497; obj* x_498; obj* x_499; obj* x_500; obj* x_501; 
x_492 = l_Lean_IR_EmitCpp_emitMainFn___closed__10;
x_493 = lean::string_append(x_482, x_492);
x_494 = l_IO_println___rarg___closed__1;
x_495 = lean::string_append(x_493, x_494);
x_496 = l_Lean_IR_EmitCpp_emitMainFn___closed__8;
x_497 = lean::string_append(x_495, x_496);
x_498 = lean::string_append(x_497, x_494);
x_499 = l_Lean_IR_EmitCpp_emitMainFn___closed__11;
x_500 = lean::string_append(x_498, x_499);
x_501 = lean::string_append(x_500, x_494);
x_421 = x_501;
goto block_479;
}
}
else
{
obj* x_502; obj* x_503; obj* x_504; obj* x_505; 
lean::dec(x_5);
x_502 = lean::cnstr_get(x_480, 0);
lean::inc(x_502);
x_503 = lean::cnstr_get(x_480, 1);
lean::inc(x_503);
if (lean::is_exclusive(x_480)) {
 lean::cnstr_release(x_480, 0);
 lean::cnstr_release(x_480, 1);
 x_504 = x_480;
} else {
 lean::dec_ref(x_480);
 x_504 = lean::box(0);
}
if (lean::is_scalar(x_504)) {
 x_505 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_505 = x_504;
}
lean::cnstr_set(x_505, 0, x_502);
lean::cnstr_set(x_505, 1, x_503);
return x_505;
}
block_479:
{
obj* x_422; obj* x_423; obj* x_424; obj* x_425; obj* x_426; obj* x_427; 
x_422 = l_Lean_IR_EmitCpp_emitMainFn___closed__2;
x_423 = lean::string_append(x_421, x_422);
x_424 = l_IO_println___rarg___closed__1;
x_425 = lean::string_append(x_423, x_424);
x_426 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_426, 0, x_419);
lean::cnstr_set(x_426, 1, x_425);
x_427 = l_Lean_IR_EmitCpp_getModName(x_1, x_426);
if (lean::obj_tag(x_427) == 0)
{
obj* x_428; obj* x_429; obj* x_430; obj* x_431; obj* x_432; obj* x_433; obj* x_434; obj* x_435; obj* x_436; obj* x_437; obj* x_438; obj* x_439; obj* x_440; obj* x_441; 
x_428 = lean::cnstr_get(x_427, 0);
lean::inc(x_428);
x_429 = lean::cnstr_get(x_427, 1);
lean::inc(x_429);
if (lean::is_exclusive(x_427)) {
 lean::cnstr_release(x_427, 0);
 lean::cnstr_release(x_427, 1);
 x_430 = x_427;
} else {
 lean::dec_ref(x_427);
 x_430 = lean::box(0);
}
x_431 = l_String_splitAux___main___closed__1;
x_432 = l_Lean_Name_mangle(x_428, x_431);
x_433 = l_Lean_IR_EmitCpp_emitMainFn___closed__3;
x_434 = lean::string_append(x_433, x_432);
lean::dec(x_432);
x_435 = l_Lean_IR_EmitCpp_emitMainFn___closed__4;
x_436 = lean::string_append(x_434, x_435);
x_437 = lean::string_append(x_429, x_436);
lean::dec(x_436);
x_438 = lean::string_append(x_437, x_424);
if (lean::is_scalar(x_430)) {
 x_439 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_439 = x_430;
}
lean::cnstr_set(x_439, 0, x_419);
lean::cnstr_set(x_439, 1, x_438);
x_440 = l_Lean_IR_EmitCpp_emitMainFn___closed__5;
x_441 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_440, x_1, x_439);
if (lean::obj_tag(x_441) == 0)
{
obj* x_442; obj* x_443; obj* x_444; obj* x_445; obj* x_446; 
x_442 = lean::cnstr_get(x_441, 1);
lean::inc(x_442);
if (lean::is_exclusive(x_441)) {
 lean::cnstr_release(x_441, 0);
 lean::cnstr_release(x_441, 1);
 x_443 = x_441;
} else {
 lean::dec_ref(x_441);
 x_443 = lean::box(0);
}
if (lean::is_scalar(x_443)) {
 x_444 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_444 = x_443;
}
lean::cnstr_set(x_444, 0, x_419);
lean::cnstr_set(x_444, 1, x_442);
x_445 = l_Lean_IR_EmitCpp_emitMainFn___closed__12;
x_446 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_445, x_1, x_444);
if (lean::obj_tag(x_446) == 0)
{
obj* x_447; obj* x_448; obj* x_449; obj* x_450; obj* x_451; obj* x_452; obj* x_453; obj* x_454; obj* x_455; obj* x_456; obj* x_457; 
x_447 = lean::cnstr_get(x_446, 1);
lean::inc(x_447);
if (lean::is_exclusive(x_446)) {
 lean::cnstr_release(x_446, 0);
 lean::cnstr_release(x_446, 1);
 x_448 = x_446;
} else {
 lean::dec_ref(x_446);
 x_448 = lean::box(0);
}
x_449 = l_Lean_IR_EmitCpp_emitMainFn___closed__13;
x_450 = lean::string_append(x_447, x_449);
x_451 = lean::string_append(x_450, x_424);
x_452 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_453 = lean::string_append(x_451, x_452);
x_454 = lean::string_append(x_453, x_424);
if (lean::is_scalar(x_448)) {
 x_455 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_455 = x_448;
}
lean::cnstr_set(x_455, 0, x_419);
lean::cnstr_set(x_455, 1, x_454);
x_456 = l_Lean_IR_EmitCpp_emitMainFn___closed__7;
x_457 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_456, x_1, x_455);
if (lean::obj_tag(x_457) == 0)
{
obj* x_458; obj* x_459; obj* x_460; obj* x_461; obj* x_462; 
x_458 = lean::cnstr_get(x_457, 1);
lean::inc(x_458);
if (lean::is_exclusive(x_457)) {
 lean::cnstr_release(x_457, 0);
 lean::cnstr_release(x_457, 1);
 x_459 = x_457;
} else {
 lean::dec_ref(x_457);
 x_459 = lean::box(0);
}
x_460 = lean::string_append(x_458, x_452);
x_461 = lean::string_append(x_460, x_424);
if (lean::is_scalar(x_459)) {
 x_462 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_462 = x_459;
}
lean::cnstr_set(x_462, 0, x_419);
lean::cnstr_set(x_462, 1, x_461);
return x_462;
}
else
{
obj* x_463; obj* x_464; obj* x_465; obj* x_466; 
x_463 = lean::cnstr_get(x_457, 0);
lean::inc(x_463);
x_464 = lean::cnstr_get(x_457, 1);
lean::inc(x_464);
if (lean::is_exclusive(x_457)) {
 lean::cnstr_release(x_457, 0);
 lean::cnstr_release(x_457, 1);
 x_465 = x_457;
} else {
 lean::dec_ref(x_457);
 x_465 = lean::box(0);
}
if (lean::is_scalar(x_465)) {
 x_466 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_466 = x_465;
}
lean::cnstr_set(x_466, 0, x_463);
lean::cnstr_set(x_466, 1, x_464);
return x_466;
}
}
else
{
obj* x_467; obj* x_468; obj* x_469; obj* x_470; 
x_467 = lean::cnstr_get(x_446, 0);
lean::inc(x_467);
x_468 = lean::cnstr_get(x_446, 1);
lean::inc(x_468);
if (lean::is_exclusive(x_446)) {
 lean::cnstr_release(x_446, 0);
 lean::cnstr_release(x_446, 1);
 x_469 = x_446;
} else {
 lean::dec_ref(x_446);
 x_469 = lean::box(0);
}
if (lean::is_scalar(x_469)) {
 x_470 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_470 = x_469;
}
lean::cnstr_set(x_470, 0, x_467);
lean::cnstr_set(x_470, 1, x_468);
return x_470;
}
}
else
{
obj* x_471; obj* x_472; obj* x_473; obj* x_474; 
x_471 = lean::cnstr_get(x_441, 0);
lean::inc(x_471);
x_472 = lean::cnstr_get(x_441, 1);
lean::inc(x_472);
if (lean::is_exclusive(x_441)) {
 lean::cnstr_release(x_441, 0);
 lean::cnstr_release(x_441, 1);
 x_473 = x_441;
} else {
 lean::dec_ref(x_441);
 x_473 = lean::box(0);
}
if (lean::is_scalar(x_473)) {
 x_474 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_474 = x_473;
}
lean::cnstr_set(x_474, 0, x_471);
lean::cnstr_set(x_474, 1, x_472);
return x_474;
}
}
else
{
obj* x_475; obj* x_476; obj* x_477; obj* x_478; 
x_475 = lean::cnstr_get(x_427, 0);
lean::inc(x_475);
x_476 = lean::cnstr_get(x_427, 1);
lean::inc(x_476);
if (lean::is_exclusive(x_427)) {
 lean::cnstr_release(x_427, 0);
 lean::cnstr_release(x_427, 1);
 x_477 = x_427;
} else {
 lean::dec_ref(x_427);
 x_477 = lean::box(0);
}
if (lean::is_scalar(x_477)) {
 x_478 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_478 = x_477;
}
lean::cnstr_set(x_478, 0, x_475);
lean::cnstr_set(x_478, 1, x_476);
return x_478;
}
}
}
}
}
else
{
uint8 x_506; 
lean::dec(x_5);
x_506 = !lean::is_exclusive(x_4);
if (x_506 == 0)
{
obj* x_507; obj* x_508; 
x_507 = lean::cnstr_get(x_4, 0);
lean::dec(x_507);
x_508 = l_Lean_IR_EmitCpp_emitMainFn___closed__14;
lean::cnstr_set_tag(x_4, 1);
lean::cnstr_set(x_4, 0, x_508);
return x_4;
}
else
{
obj* x_509; obj* x_510; obj* x_511; 
x_509 = lean::cnstr_get(x_4, 1);
lean::inc(x_509);
lean::dec(x_4);
x_510 = l_Lean_IR_EmitCpp_emitMainFn___closed__14;
x_511 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_511, 0, x_510);
lean::cnstr_set(x_511, 1, x_509);
return x_511;
}
}
}
else
{
uint8 x_512; 
x_512 = !lean::is_exclusive(x_4);
if (x_512 == 0)
{
return x_4;
}
else
{
obj* x_513; obj* x_514; obj* x_515; 
x_513 = lean::cnstr_get(x_4, 0);
x_514 = lean::cnstr_get(x_4, 1);
lean::inc(x_514);
lean::inc(x_513);
lean::dec(x_4);
x_515 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_515, 0, x_513);
lean::cnstr_set(x_515, 1, x_514);
return x_515;
}
}
}
}
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_IR_EmitCpp_emitLns___at_Lean_IR_EmitCpp_emitMainFn___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_emitLns___at_Lean_IR_EmitCpp_emitMainFn___spec__1(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_IR_EmitCpp_emitMainFn___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_EmitCpp_emitMainFn(x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
uint8 l_List_foldr___main___at_Lean_IR_EmitCpp_hasMainFn___spec__1(uint8 x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
return x_1;
}
else
{
obj* x_3; obj* x_4; uint8 x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_3 = lean::cnstr_get(x_2, 0);
x_4 = lean::cnstr_get(x_2, 1);
x_5 = l_List_foldr___main___at_Lean_IR_EmitCpp_hasMainFn___spec__1(x_1, x_4);
x_6 = l_Lean_IR_Decl_name___main(x_3);
x_7 = l_Lean_IR_EmitCpp_toBaseCppName___closed__1;
x_8 = lean_name_dec_eq(x_6, x_7);
lean::dec(x_6);
if (x_8 == 0)
{
return x_5;
}
else
{
uint8 x_9; 
x_9 = 1;
return x_9;
}
}
}
}
obj* l_Lean_IR_EmitCpp_hasMainFn(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_EmitCpp_getEnv(x_1, x_2);
if (lean::obj_tag(x_3) == 0)
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; uint8 x_8; uint8 x_9; obj* x_10; 
x_5 = lean::cnstr_get(x_3, 0);
x_6 = l_Lean_IR_declMapExt;
x_7 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_6, x_5);
lean::dec(x_5);
x_8 = 0;
x_9 = l_List_foldr___main___at_Lean_IR_EmitCpp_hasMainFn___spec__1(x_8, x_7);
lean::dec(x_7);
x_10 = lean::box(x_9);
lean::cnstr_set(x_3, 0, x_10);
return x_3;
}
else
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; uint8 x_15; uint8 x_16; obj* x_17; obj* x_18; 
x_11 = lean::cnstr_get(x_3, 0);
x_12 = lean::cnstr_get(x_3, 1);
lean::inc(x_12);
lean::inc(x_11);
lean::dec(x_3);
x_13 = l_Lean_IR_declMapExt;
x_14 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_13, x_11);
lean::dec(x_11);
x_15 = 0;
x_16 = l_List_foldr___main___at_Lean_IR_EmitCpp_hasMainFn___spec__1(x_15, x_14);
lean::dec(x_14);
x_17 = lean::box(x_16);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_12);
return x_18;
}
}
else
{
uint8 x_19; 
x_19 = !lean::is_exclusive(x_3);
if (x_19 == 0)
{
return x_3;
}
else
{
obj* x_20; obj* x_21; obj* x_22; 
x_20 = lean::cnstr_get(x_3, 0);
x_21 = lean::cnstr_get(x_3, 1);
lean::inc(x_21);
lean::inc(x_20);
lean::dec(x_3);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_20);
lean::cnstr_set(x_22, 1, x_21);
return x_22;
}
}
}
}
obj* l_List_foldr___main___at_Lean_IR_EmitCpp_hasMainFn___spec__1___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; obj* x_5; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = l_List_foldr___main___at_Lean_IR_EmitCpp_hasMainFn___spec__1(x_3, x_2);
lean::dec(x_2);
x_5 = lean::box(x_4);
return x_5;
}
}
obj* l_Lean_IR_EmitCpp_hasMainFn___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_EmitCpp_hasMainFn(x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_IR_EmitCpp_emitMainFnIfNeeded(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_EmitCpp_hasMainFn(x_1, x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; uint8 x_5; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::unbox(x_4);
lean::dec(x_4);
if (x_5 == 0)
{
uint8 x_6; 
x_6 = !lean::is_exclusive(x_3);
if (x_6 == 0)
{
obj* x_7; obj* x_8; 
x_7 = lean::cnstr_get(x_3, 0);
lean::dec(x_7);
x_8 = lean::box(0);
lean::cnstr_set(x_3, 0, x_8);
return x_3;
}
else
{
obj* x_9; obj* x_10; obj* x_11; 
x_9 = lean::cnstr_get(x_3, 1);
lean::inc(x_9);
lean::dec(x_3);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_9);
return x_11;
}
}
else
{
uint8 x_12; 
x_12 = !lean::is_exclusive(x_3);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_15; 
x_13 = lean::cnstr_get(x_3, 0);
lean::dec(x_13);
x_14 = lean::box(0);
lean::cnstr_set(x_3, 0, x_14);
x_15 = l_Lean_IR_EmitCpp_emitMainFn(x_1, x_3);
return x_15;
}
else
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_16 = lean::cnstr_get(x_3, 1);
lean::inc(x_16);
lean::dec(x_3);
x_17 = lean::box(0);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_16);
x_19 = l_Lean_IR_EmitCpp_emitMainFn(x_1, x_18);
return x_19;
}
}
}
else
{
uint8 x_20; 
x_20 = !lean::is_exclusive(x_3);
if (x_20 == 0)
{
return x_3;
}
else
{
obj* x_21; obj* x_22; obj* x_23; 
x_21 = lean::cnstr_get(x_3, 0);
x_22 = lean::cnstr_get(x_3, 1);
lean::inc(x_22);
lean::inc(x_21);
lean::dec(x_3);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_22);
return x_23;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitMainFnIfNeeded___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_EmitCpp_emitMainFnIfNeeded(x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitFileHeader___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::array_get_size(x_1);
x_6 = lean::nat_dec_lt(x_2, x_5);
lean::dec(x_5);
if (x_6 == 0)
{
uint8 x_7; 
lean::dec(x_2);
x_7 = !lean::is_exclusive(x_4);
if (x_7 == 0)
{
obj* x_8; obj* x_9; 
x_8 = lean::cnstr_get(x_4, 0);
lean::dec(x_8);
x_9 = lean::box(0);
lean::cnstr_set(x_4, 0, x_9);
return x_4;
}
else
{
obj* x_10; obj* x_11; obj* x_12; 
x_10 = lean::cnstr_get(x_4, 1);
lean::inc(x_10);
lean::dec(x_4);
x_11 = lean::box(0);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_10);
return x_12;
}
}
else
{
uint8 x_13; 
x_13 = !lean::is_exclusive(x_4);
if (x_13 == 0)
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_14 = lean::cnstr_get(x_4, 1);
x_15 = lean::cnstr_get(x_4, 0);
lean::dec(x_15);
x_16 = lean::array_fget(x_1, x_2);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_2, x_17);
lean::dec(x_2);
x_19 = l_Lean_Name_toString___closed__1;
x_20 = l_Lean_Name_toStringWithSep___main(x_19, x_16);
x_21 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1;
x_22 = lean::string_append(x_21, x_20);
lean::dec(x_20);
x_23 = lean::string_append(x_14, x_22);
lean::dec(x_22);
x_24 = lean::box(0);
lean::cnstr_set(x_4, 1, x_23);
lean::cnstr_set(x_4, 0, x_24);
x_2 = x_18;
goto _start;
}
else
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; 
x_26 = lean::cnstr_get(x_4, 1);
lean::inc(x_26);
lean::dec(x_4);
x_27 = lean::array_fget(x_1, x_2);
x_28 = lean::mk_nat_obj(1u);
x_29 = lean::nat_add(x_2, x_28);
lean::dec(x_2);
x_30 = l_Lean_Name_toString___closed__1;
x_31 = l_Lean_Name_toStringWithSep___main(x_30, x_27);
x_32 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1;
x_33 = lean::string_append(x_32, x_31);
lean::dec(x_31);
x_34 = lean::string_append(x_26, x_33);
lean::dec(x_33);
x_35 = lean::box(0);
x_36 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_36, 0, x_35);
lean::cnstr_set(x_36, 1, x_34);
x_2 = x_29;
x_4 = x_36;
goto _start;
}
}
}
}
obj* _init_l_Lean_IR_EmitCpp_emitFileHeader___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_1 = lean::box(0);
x_2 = lean::mk_string("#endif");
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_string("#pragma GCC diagnostic ignored \"-Wunused-but-set-variable\"");
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::mk_string("#pragma GCC diagnostic ignored \"-Wunused-label\"");
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_5);
x_8 = lean::mk_string("#pragma GCC diagnostic ignored \"-Wunused-parameter\"");
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::mk_string("#elif defined(__GNUC__) && !defined(__CLANG__)");
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_9);
x_12 = lean::mk_string("#pragma clang diagnostic ignored \"-Wunused-label\"");
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_11);
x_14 = lean::mk_string("#pragma clang diagnostic ignored \"-Wunused-parameter\"");
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_13);
x_16 = lean::mk_string("#if defined(__clang__)");
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_15);
x_18 = lean::mk_string("typedef lean::uint32 uint32; typedef lean::uint64 uint64;");
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_17);
x_20 = lean::mk_string("typedef lean::uint8  uint8;  typedef lean::uint16 uint16;");
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_19);
x_22 = lean::mk_string("typedef lean::object obj;    typedef lean::usize  usize;");
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_21);
return x_23;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitFileHeader___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("// Lean compiler output");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitFileHeader___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("// Module: ");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitFileHeader___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("// Imports:");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitFileHeader___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("#include \"runtime/object.h\"");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitFileHeader___closed__6() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("#include \"runtime/apply.h\"");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitFileHeader___closed__7() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("#include \"runtime/init_module.h\"");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitFileHeader(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_EmitCpp_getEnv(x_1, x_2);
if (lean::obj_tag(x_3) == 0)
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = lean::cnstr_get(x_3, 0);
x_6 = lean::box(0);
lean::cnstr_set(x_3, 0, x_6);
x_7 = l_Lean_IR_EmitCpp_getModName(x_1, x_3);
if (lean::obj_tag(x_7) == 0)
{
uint8 x_8; 
x_8 = !lean::is_exclusive(x_7);
if (x_8 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_9 = lean::cnstr_get(x_7, 0);
x_10 = lean::cnstr_get(x_7, 1);
x_11 = l_Lean_IR_EmitCpp_emitFileHeader___closed__2;
x_12 = lean::string_append(x_10, x_11);
x_13 = l_IO_println___rarg___closed__1;
x_14 = lean::string_append(x_12, x_13);
x_15 = l_Lean_Name_toString___closed__1;
x_16 = l_Lean_Name_toStringWithSep___main(x_15, x_9);
x_17 = l_Lean_IR_EmitCpp_emitFileHeader___closed__3;
x_18 = lean::string_append(x_17, x_16);
lean::dec(x_16);
x_19 = lean::string_append(x_14, x_18);
lean::dec(x_18);
x_20 = lean::string_append(x_19, x_13);
x_21 = l_Lean_IR_EmitCpp_emitFileHeader___closed__4;
x_22 = lean::string_append(x_20, x_21);
lean::cnstr_set(x_7, 1, x_22);
lean::cnstr_set(x_7, 0, x_6);
x_23 = l_Lean_Environment_imports(x_5);
lean::dec(x_5);
x_24 = lean::mk_nat_obj(0u);
x_25 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitFileHeader___spec__1(x_23, x_24, x_1, x_7);
lean::dec(x_23);
if (lean::obj_tag(x_25) == 0)
{
uint8 x_26; 
x_26 = !lean::is_exclusive(x_25);
if (x_26 == 0)
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_27 = lean::cnstr_get(x_25, 1);
x_28 = lean::cnstr_get(x_25, 0);
lean::dec(x_28);
x_29 = l_String_splitAux___main___closed__1;
x_30 = lean::string_append(x_27, x_29);
x_31 = lean::string_append(x_30, x_13);
x_32 = l_Lean_IR_EmitCpp_emitFileHeader___closed__5;
x_33 = lean::string_append(x_31, x_32);
x_34 = lean::string_append(x_33, x_13);
x_35 = l_Lean_IR_EmitCpp_emitFileHeader___closed__6;
x_36 = lean::string_append(x_34, x_35);
x_37 = lean::string_append(x_36, x_13);
lean::cnstr_set(x_25, 1, x_37);
lean::cnstr_set(x_25, 0, x_6);
x_38 = l_Lean_IR_EmitCpp_hasMainFn(x_1, x_25);
if (lean::obj_tag(x_38) == 0)
{
obj* x_39; uint8 x_40; 
x_39 = lean::cnstr_get(x_38, 0);
lean::inc(x_39);
x_40 = lean::unbox(x_39);
lean::dec(x_39);
if (x_40 == 0)
{
uint8 x_41; 
x_41 = !lean::is_exclusive(x_38);
if (x_41 == 0)
{
obj* x_42; obj* x_43; obj* x_44; 
x_42 = lean::cnstr_get(x_38, 0);
lean::dec(x_42);
lean::cnstr_set(x_38, 0, x_6);
x_43 = l_Lean_IR_EmitCpp_emitFileHeader___closed__1;
x_44 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_43, x_1, x_38);
return x_44;
}
else
{
obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
x_45 = lean::cnstr_get(x_38, 1);
lean::inc(x_45);
lean::dec(x_38);
x_46 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_46, 0, x_6);
lean::cnstr_set(x_46, 1, x_45);
x_47 = l_Lean_IR_EmitCpp_emitFileHeader___closed__1;
x_48 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_47, x_1, x_46);
return x_48;
}
}
else
{
uint8 x_49; 
x_49 = !lean::is_exclusive(x_38);
if (x_49 == 0)
{
obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; 
x_50 = lean::cnstr_get(x_38, 1);
x_51 = lean::cnstr_get(x_38, 0);
lean::dec(x_51);
x_52 = l_Lean_IR_EmitCpp_emitFileHeader___closed__7;
x_53 = lean::string_append(x_50, x_52);
x_54 = lean::string_append(x_53, x_13);
lean::cnstr_set(x_38, 1, x_54);
lean::cnstr_set(x_38, 0, x_6);
x_55 = l_Lean_IR_EmitCpp_emitFileHeader___closed__1;
x_56 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_55, x_1, x_38);
return x_56;
}
else
{
obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
x_57 = lean::cnstr_get(x_38, 1);
lean::inc(x_57);
lean::dec(x_38);
x_58 = l_Lean_IR_EmitCpp_emitFileHeader___closed__7;
x_59 = lean::string_append(x_57, x_58);
x_60 = lean::string_append(x_59, x_13);
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_6);
lean::cnstr_set(x_61, 1, x_60);
x_62 = l_Lean_IR_EmitCpp_emitFileHeader___closed__1;
x_63 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_62, x_1, x_61);
return x_63;
}
}
}
else
{
uint8 x_64; 
x_64 = !lean::is_exclusive(x_38);
if (x_64 == 0)
{
return x_38;
}
else
{
obj* x_65; obj* x_66; obj* x_67; 
x_65 = lean::cnstr_get(x_38, 0);
x_66 = lean::cnstr_get(x_38, 1);
lean::inc(x_66);
lean::inc(x_65);
lean::dec(x_38);
x_67 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_67, 0, x_65);
lean::cnstr_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; 
x_68 = lean::cnstr_get(x_25, 1);
lean::inc(x_68);
lean::dec(x_25);
x_69 = l_String_splitAux___main___closed__1;
x_70 = lean::string_append(x_68, x_69);
x_71 = lean::string_append(x_70, x_13);
x_72 = l_Lean_IR_EmitCpp_emitFileHeader___closed__5;
x_73 = lean::string_append(x_71, x_72);
x_74 = lean::string_append(x_73, x_13);
x_75 = l_Lean_IR_EmitCpp_emitFileHeader___closed__6;
x_76 = lean::string_append(x_74, x_75);
x_77 = lean::string_append(x_76, x_13);
x_78 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_78, 0, x_6);
lean::cnstr_set(x_78, 1, x_77);
x_79 = l_Lean_IR_EmitCpp_hasMainFn(x_1, x_78);
if (lean::obj_tag(x_79) == 0)
{
obj* x_80; uint8 x_81; 
x_80 = lean::cnstr_get(x_79, 0);
lean::inc(x_80);
x_81 = lean::unbox(x_80);
lean::dec(x_80);
if (x_81 == 0)
{
obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; 
x_82 = lean::cnstr_get(x_79, 1);
lean::inc(x_82);
if (lean::is_exclusive(x_79)) {
 lean::cnstr_release(x_79, 0);
 lean::cnstr_release(x_79, 1);
 x_83 = x_79;
} else {
 lean::dec_ref(x_79);
 x_83 = lean::box(0);
}
if (lean::is_scalar(x_83)) {
 x_84 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_84 = x_83;
}
lean::cnstr_set(x_84, 0, x_6);
lean::cnstr_set(x_84, 1, x_82);
x_85 = l_Lean_IR_EmitCpp_emitFileHeader___closed__1;
x_86 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_85, x_1, x_84);
return x_86;
}
else
{
obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; obj* x_94; 
x_87 = lean::cnstr_get(x_79, 1);
lean::inc(x_87);
if (lean::is_exclusive(x_79)) {
 lean::cnstr_release(x_79, 0);
 lean::cnstr_release(x_79, 1);
 x_88 = x_79;
} else {
 lean::dec_ref(x_79);
 x_88 = lean::box(0);
}
x_89 = l_Lean_IR_EmitCpp_emitFileHeader___closed__7;
x_90 = lean::string_append(x_87, x_89);
x_91 = lean::string_append(x_90, x_13);
if (lean::is_scalar(x_88)) {
 x_92 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_92 = x_88;
}
lean::cnstr_set(x_92, 0, x_6);
lean::cnstr_set(x_92, 1, x_91);
x_93 = l_Lean_IR_EmitCpp_emitFileHeader___closed__1;
x_94 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_93, x_1, x_92);
return x_94;
}
}
else
{
obj* x_95; obj* x_96; obj* x_97; obj* x_98; 
x_95 = lean::cnstr_get(x_79, 0);
lean::inc(x_95);
x_96 = lean::cnstr_get(x_79, 1);
lean::inc(x_96);
if (lean::is_exclusive(x_79)) {
 lean::cnstr_release(x_79, 0);
 lean::cnstr_release(x_79, 1);
 x_97 = x_79;
} else {
 lean::dec_ref(x_79);
 x_97 = lean::box(0);
}
if (lean::is_scalar(x_97)) {
 x_98 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_98 = x_97;
}
lean::cnstr_set(x_98, 0, x_95);
lean::cnstr_set(x_98, 1, x_96);
return x_98;
}
}
}
else
{
uint8 x_99; 
x_99 = !lean::is_exclusive(x_25);
if (x_99 == 0)
{
return x_25;
}
else
{
obj* x_100; obj* x_101; obj* x_102; 
x_100 = lean::cnstr_get(x_25, 0);
x_101 = lean::cnstr_get(x_25, 1);
lean::inc(x_101);
lean::inc(x_100);
lean::dec(x_25);
x_102 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_102, 0, x_100);
lean::cnstr_set(x_102, 1, x_101);
return x_102;
}
}
}
else
{
obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; obj* x_108; obj* x_109; obj* x_110; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; obj* x_120; 
x_103 = lean::cnstr_get(x_7, 0);
x_104 = lean::cnstr_get(x_7, 1);
lean::inc(x_104);
lean::inc(x_103);
lean::dec(x_7);
x_105 = l_Lean_IR_EmitCpp_emitFileHeader___closed__2;
x_106 = lean::string_append(x_104, x_105);
x_107 = l_IO_println___rarg___closed__1;
x_108 = lean::string_append(x_106, x_107);
x_109 = l_Lean_Name_toString___closed__1;
x_110 = l_Lean_Name_toStringWithSep___main(x_109, x_103);
x_111 = l_Lean_IR_EmitCpp_emitFileHeader___closed__3;
x_112 = lean::string_append(x_111, x_110);
lean::dec(x_110);
x_113 = lean::string_append(x_108, x_112);
lean::dec(x_112);
x_114 = lean::string_append(x_113, x_107);
x_115 = l_Lean_IR_EmitCpp_emitFileHeader___closed__4;
x_116 = lean::string_append(x_114, x_115);
x_117 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_117, 0, x_6);
lean::cnstr_set(x_117, 1, x_116);
x_118 = l_Lean_Environment_imports(x_5);
lean::dec(x_5);
x_119 = lean::mk_nat_obj(0u);
x_120 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitFileHeader___spec__1(x_118, x_119, x_1, x_117);
lean::dec(x_118);
if (lean::obj_tag(x_120) == 0)
{
obj* x_121; obj* x_122; obj* x_123; obj* x_124; obj* x_125; obj* x_126; obj* x_127; obj* x_128; obj* x_129; obj* x_130; obj* x_131; obj* x_132; obj* x_133; 
x_121 = lean::cnstr_get(x_120, 1);
lean::inc(x_121);
if (lean::is_exclusive(x_120)) {
 lean::cnstr_release(x_120, 0);
 lean::cnstr_release(x_120, 1);
 x_122 = x_120;
} else {
 lean::dec_ref(x_120);
 x_122 = lean::box(0);
}
x_123 = l_String_splitAux___main___closed__1;
x_124 = lean::string_append(x_121, x_123);
x_125 = lean::string_append(x_124, x_107);
x_126 = l_Lean_IR_EmitCpp_emitFileHeader___closed__5;
x_127 = lean::string_append(x_125, x_126);
x_128 = lean::string_append(x_127, x_107);
x_129 = l_Lean_IR_EmitCpp_emitFileHeader___closed__6;
x_130 = lean::string_append(x_128, x_129);
x_131 = lean::string_append(x_130, x_107);
if (lean::is_scalar(x_122)) {
 x_132 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_132 = x_122;
}
lean::cnstr_set(x_132, 0, x_6);
lean::cnstr_set(x_132, 1, x_131);
x_133 = l_Lean_IR_EmitCpp_hasMainFn(x_1, x_132);
if (lean::obj_tag(x_133) == 0)
{
obj* x_134; uint8 x_135; 
x_134 = lean::cnstr_get(x_133, 0);
lean::inc(x_134);
x_135 = lean::unbox(x_134);
lean::dec(x_134);
if (x_135 == 0)
{
obj* x_136; obj* x_137; obj* x_138; obj* x_139; obj* x_140; 
x_136 = lean::cnstr_get(x_133, 1);
lean::inc(x_136);
if (lean::is_exclusive(x_133)) {
 lean::cnstr_release(x_133, 0);
 lean::cnstr_release(x_133, 1);
 x_137 = x_133;
} else {
 lean::dec_ref(x_133);
 x_137 = lean::box(0);
}
if (lean::is_scalar(x_137)) {
 x_138 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_138 = x_137;
}
lean::cnstr_set(x_138, 0, x_6);
lean::cnstr_set(x_138, 1, x_136);
x_139 = l_Lean_IR_EmitCpp_emitFileHeader___closed__1;
x_140 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_139, x_1, x_138);
return x_140;
}
else
{
obj* x_141; obj* x_142; obj* x_143; obj* x_144; obj* x_145; obj* x_146; obj* x_147; obj* x_148; 
x_141 = lean::cnstr_get(x_133, 1);
lean::inc(x_141);
if (lean::is_exclusive(x_133)) {
 lean::cnstr_release(x_133, 0);
 lean::cnstr_release(x_133, 1);
 x_142 = x_133;
} else {
 lean::dec_ref(x_133);
 x_142 = lean::box(0);
}
x_143 = l_Lean_IR_EmitCpp_emitFileHeader___closed__7;
x_144 = lean::string_append(x_141, x_143);
x_145 = lean::string_append(x_144, x_107);
if (lean::is_scalar(x_142)) {
 x_146 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_146 = x_142;
}
lean::cnstr_set(x_146, 0, x_6);
lean::cnstr_set(x_146, 1, x_145);
x_147 = l_Lean_IR_EmitCpp_emitFileHeader___closed__1;
x_148 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_147, x_1, x_146);
return x_148;
}
}
else
{
obj* x_149; obj* x_150; obj* x_151; obj* x_152; 
x_149 = lean::cnstr_get(x_133, 0);
lean::inc(x_149);
x_150 = lean::cnstr_get(x_133, 1);
lean::inc(x_150);
if (lean::is_exclusive(x_133)) {
 lean::cnstr_release(x_133, 0);
 lean::cnstr_release(x_133, 1);
 x_151 = x_133;
} else {
 lean::dec_ref(x_133);
 x_151 = lean::box(0);
}
if (lean::is_scalar(x_151)) {
 x_152 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_152 = x_151;
}
lean::cnstr_set(x_152, 0, x_149);
lean::cnstr_set(x_152, 1, x_150);
return x_152;
}
}
else
{
obj* x_153; obj* x_154; obj* x_155; obj* x_156; 
x_153 = lean::cnstr_get(x_120, 0);
lean::inc(x_153);
x_154 = lean::cnstr_get(x_120, 1);
lean::inc(x_154);
if (lean::is_exclusive(x_120)) {
 lean::cnstr_release(x_120, 0);
 lean::cnstr_release(x_120, 1);
 x_155 = x_120;
} else {
 lean::dec_ref(x_120);
 x_155 = lean::box(0);
}
if (lean::is_scalar(x_155)) {
 x_156 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_156 = x_155;
}
lean::cnstr_set(x_156, 0, x_153);
lean::cnstr_set(x_156, 1, x_154);
return x_156;
}
}
}
else
{
uint8 x_157; 
lean::dec(x_5);
x_157 = !lean::is_exclusive(x_7);
if (x_157 == 0)
{
return x_7;
}
else
{
obj* x_158; obj* x_159; obj* x_160; 
x_158 = lean::cnstr_get(x_7, 0);
x_159 = lean::cnstr_get(x_7, 1);
lean::inc(x_159);
lean::inc(x_158);
lean::dec(x_7);
x_160 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_160, 0, x_158);
lean::cnstr_set(x_160, 1, x_159);
return x_160;
}
}
}
else
{
obj* x_161; obj* x_162; obj* x_163; obj* x_164; obj* x_165; 
x_161 = lean::cnstr_get(x_3, 0);
x_162 = lean::cnstr_get(x_3, 1);
lean::inc(x_162);
lean::inc(x_161);
lean::dec(x_3);
x_163 = lean::box(0);
x_164 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_164, 0, x_163);
lean::cnstr_set(x_164, 1, x_162);
x_165 = l_Lean_IR_EmitCpp_getModName(x_1, x_164);
if (lean::obj_tag(x_165) == 0)
{
obj* x_166; obj* x_167; obj* x_168; obj* x_169; obj* x_170; obj* x_171; obj* x_172; obj* x_173; obj* x_174; obj* x_175; obj* x_176; obj* x_177; obj* x_178; obj* x_179; obj* x_180; obj* x_181; obj* x_182; obj* x_183; obj* x_184; 
x_166 = lean::cnstr_get(x_165, 0);
lean::inc(x_166);
x_167 = lean::cnstr_get(x_165, 1);
lean::inc(x_167);
if (lean::is_exclusive(x_165)) {
 lean::cnstr_release(x_165, 0);
 lean::cnstr_release(x_165, 1);
 x_168 = x_165;
} else {
 lean::dec_ref(x_165);
 x_168 = lean::box(0);
}
x_169 = l_Lean_IR_EmitCpp_emitFileHeader___closed__2;
x_170 = lean::string_append(x_167, x_169);
x_171 = l_IO_println___rarg___closed__1;
x_172 = lean::string_append(x_170, x_171);
x_173 = l_Lean_Name_toString___closed__1;
x_174 = l_Lean_Name_toStringWithSep___main(x_173, x_166);
x_175 = l_Lean_IR_EmitCpp_emitFileHeader___closed__3;
x_176 = lean::string_append(x_175, x_174);
lean::dec(x_174);
x_177 = lean::string_append(x_172, x_176);
lean::dec(x_176);
x_178 = lean::string_append(x_177, x_171);
x_179 = l_Lean_IR_EmitCpp_emitFileHeader___closed__4;
x_180 = lean::string_append(x_178, x_179);
if (lean::is_scalar(x_168)) {
 x_181 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_181 = x_168;
}
lean::cnstr_set(x_181, 0, x_163);
lean::cnstr_set(x_181, 1, x_180);
x_182 = l_Lean_Environment_imports(x_161);
lean::dec(x_161);
x_183 = lean::mk_nat_obj(0u);
x_184 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitFileHeader___spec__1(x_182, x_183, x_1, x_181);
lean::dec(x_182);
if (lean::obj_tag(x_184) == 0)
{
obj* x_185; obj* x_186; obj* x_187; obj* x_188; obj* x_189; obj* x_190; obj* x_191; obj* x_192; obj* x_193; obj* x_194; obj* x_195; obj* x_196; obj* x_197; 
x_185 = lean::cnstr_get(x_184, 1);
lean::inc(x_185);
if (lean::is_exclusive(x_184)) {
 lean::cnstr_release(x_184, 0);
 lean::cnstr_release(x_184, 1);
 x_186 = x_184;
} else {
 lean::dec_ref(x_184);
 x_186 = lean::box(0);
}
x_187 = l_String_splitAux___main___closed__1;
x_188 = lean::string_append(x_185, x_187);
x_189 = lean::string_append(x_188, x_171);
x_190 = l_Lean_IR_EmitCpp_emitFileHeader___closed__5;
x_191 = lean::string_append(x_189, x_190);
x_192 = lean::string_append(x_191, x_171);
x_193 = l_Lean_IR_EmitCpp_emitFileHeader___closed__6;
x_194 = lean::string_append(x_192, x_193);
x_195 = lean::string_append(x_194, x_171);
if (lean::is_scalar(x_186)) {
 x_196 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_196 = x_186;
}
lean::cnstr_set(x_196, 0, x_163);
lean::cnstr_set(x_196, 1, x_195);
x_197 = l_Lean_IR_EmitCpp_hasMainFn(x_1, x_196);
if (lean::obj_tag(x_197) == 0)
{
obj* x_198; uint8 x_199; 
x_198 = lean::cnstr_get(x_197, 0);
lean::inc(x_198);
x_199 = lean::unbox(x_198);
lean::dec(x_198);
if (x_199 == 0)
{
obj* x_200; obj* x_201; obj* x_202; obj* x_203; obj* x_204; 
x_200 = lean::cnstr_get(x_197, 1);
lean::inc(x_200);
if (lean::is_exclusive(x_197)) {
 lean::cnstr_release(x_197, 0);
 lean::cnstr_release(x_197, 1);
 x_201 = x_197;
} else {
 lean::dec_ref(x_197);
 x_201 = lean::box(0);
}
if (lean::is_scalar(x_201)) {
 x_202 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_202 = x_201;
}
lean::cnstr_set(x_202, 0, x_163);
lean::cnstr_set(x_202, 1, x_200);
x_203 = l_Lean_IR_EmitCpp_emitFileHeader___closed__1;
x_204 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_203, x_1, x_202);
return x_204;
}
else
{
obj* x_205; obj* x_206; obj* x_207; obj* x_208; obj* x_209; obj* x_210; obj* x_211; obj* x_212; 
x_205 = lean::cnstr_get(x_197, 1);
lean::inc(x_205);
if (lean::is_exclusive(x_197)) {
 lean::cnstr_release(x_197, 0);
 lean::cnstr_release(x_197, 1);
 x_206 = x_197;
} else {
 lean::dec_ref(x_197);
 x_206 = lean::box(0);
}
x_207 = l_Lean_IR_EmitCpp_emitFileHeader___closed__7;
x_208 = lean::string_append(x_205, x_207);
x_209 = lean::string_append(x_208, x_171);
if (lean::is_scalar(x_206)) {
 x_210 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_210 = x_206;
}
lean::cnstr_set(x_210, 0, x_163);
lean::cnstr_set(x_210, 1, x_209);
x_211 = l_Lean_IR_EmitCpp_emitFileHeader___closed__1;
x_212 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_211, x_1, x_210);
return x_212;
}
}
else
{
obj* x_213; obj* x_214; obj* x_215; obj* x_216; 
x_213 = lean::cnstr_get(x_197, 0);
lean::inc(x_213);
x_214 = lean::cnstr_get(x_197, 1);
lean::inc(x_214);
if (lean::is_exclusive(x_197)) {
 lean::cnstr_release(x_197, 0);
 lean::cnstr_release(x_197, 1);
 x_215 = x_197;
} else {
 lean::dec_ref(x_197);
 x_215 = lean::box(0);
}
if (lean::is_scalar(x_215)) {
 x_216 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_216 = x_215;
}
lean::cnstr_set(x_216, 0, x_213);
lean::cnstr_set(x_216, 1, x_214);
return x_216;
}
}
else
{
obj* x_217; obj* x_218; obj* x_219; obj* x_220; 
x_217 = lean::cnstr_get(x_184, 0);
lean::inc(x_217);
x_218 = lean::cnstr_get(x_184, 1);
lean::inc(x_218);
if (lean::is_exclusive(x_184)) {
 lean::cnstr_release(x_184, 0);
 lean::cnstr_release(x_184, 1);
 x_219 = x_184;
} else {
 lean::dec_ref(x_184);
 x_219 = lean::box(0);
}
if (lean::is_scalar(x_219)) {
 x_220 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_220 = x_219;
}
lean::cnstr_set(x_220, 0, x_217);
lean::cnstr_set(x_220, 1, x_218);
return x_220;
}
}
else
{
obj* x_221; obj* x_222; obj* x_223; obj* x_224; 
lean::dec(x_161);
x_221 = lean::cnstr_get(x_165, 0);
lean::inc(x_221);
x_222 = lean::cnstr_get(x_165, 1);
lean::inc(x_222);
if (lean::is_exclusive(x_165)) {
 lean::cnstr_release(x_165, 0);
 lean::cnstr_release(x_165, 1);
 x_223 = x_165;
} else {
 lean::dec_ref(x_165);
 x_223 = lean::box(0);
}
if (lean::is_scalar(x_223)) {
 x_224 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_224 = x_223;
}
lean::cnstr_set(x_224, 0, x_221);
lean::cnstr_set(x_224, 1, x_222);
return x_224;
}
}
}
else
{
uint8 x_225; 
x_225 = !lean::is_exclusive(x_3);
if (x_225 == 0)
{
return x_3;
}
else
{
obj* x_226; obj* x_227; obj* x_228; 
x_226 = lean::cnstr_get(x_3, 0);
x_227 = lean::cnstr_get(x_3, 1);
lean::inc(x_227);
lean::inc(x_226);
lean::dec(x_3);
x_228 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_228, 0, x_226);
lean::cnstr_set(x_228, 1, x_227);
return x_228;
}
}
}
}
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitFileHeader___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitFileHeader___spec__1(x_1, x_2, x_3, x_4);
lean::dec(x_3);
lean::dec(x_1);
return x_5;
}
}
obj* l_Lean_IR_EmitCpp_emitFileHeader___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_EmitCpp_emitFileHeader(x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* _init_l_Lean_IR_EmitCpp_throwUnknownVar___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("unknown variable '");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_throwUnknownVar___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_5 = lean::cnstr_get(x_3, 0);
lean::dec(x_5);
x_6 = l_Nat_repr(x_1);
x_7 = l_Lean_IR_VarId_HasToString___closed__1;
x_8 = lean::string_append(x_7, x_6);
lean::dec(x_6);
x_9 = l_Lean_IR_EmitCpp_throwUnknownVar___rarg___closed__1;
x_10 = lean::string_append(x_9, x_8);
lean::dec(x_8);
x_11 = l_Char_HasRepr___closed__1;
x_12 = lean::string_append(x_10, x_11);
lean::cnstr_set_tag(x_3, 1);
lean::cnstr_set(x_3, 0, x_12);
return x_3;
}
else
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_13 = lean::cnstr_get(x_3, 1);
lean::inc(x_13);
lean::dec(x_3);
x_14 = l_Nat_repr(x_1);
x_15 = l_Lean_IR_VarId_HasToString___closed__1;
x_16 = lean::string_append(x_15, x_14);
lean::dec(x_14);
x_17 = l_Lean_IR_EmitCpp_throwUnknownVar___rarg___closed__1;
x_18 = lean::string_append(x_17, x_16);
lean::dec(x_16);
x_19 = l_Char_HasRepr___closed__1;
x_20 = lean::string_append(x_18, x_19);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_13);
return x_21;
}
}
}
obj* l_Lean_IR_EmitCpp_throwUnknownVar(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_IR_EmitCpp_throwUnknownVar___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l_Lean_IR_EmitCpp_throwUnknownVar___rarg___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_throwUnknownVar___rarg(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_AssocList_find___main___at_Lean_IR_EmitCpp_isObj___spec__2(obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_5; obj* x_6; uint8 x_7; 
x_4 = lean::cnstr_get(x_2, 0);
x_5 = lean::cnstr_get(x_2, 1);
x_6 = lean::cnstr_get(x_2, 2);
x_7 = lean::nat_dec_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
obj* x_9; 
lean::inc(x_5);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_5);
return x_9;
}
}
}
}
obj* l_HashMapImp_find___at_Lean_IR_EmitCpp_isObj___spec__1(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; usize x_5; usize x_6; obj* x_7; usize x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_1, 1);
x_4 = lean::array_get_size(x_3);
x_5 = lean::usize_of_nat(x_2);
x_6 = lean::usize_modn(x_5, x_4);
lean::dec(x_4);
x_7 = lean::box_size_t(x_6);
x_8 = lean::unbox_size_t(x_7);
lean::dec(x_7);
x_9 = lean::array_uget(x_3, x_8);
x_10 = l_AssocList_find___main___at_Lean_IR_EmitCpp_isObj___spec__2(x_2, x_9);
lean::dec(x_9);
return x_10;
}
}
obj* l_Lean_IR_EmitCpp_isObj(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_5 = lean::cnstr_get(x_3, 1);
x_6 = lean::cnstr_get(x_3, 0);
lean::dec(x_6);
x_7 = lean::box(0);
lean::inc(x_5);
lean::cnstr_set(x_3, 0, x_7);
x_8 = lean::cnstr_get(x_2, 2);
x_9 = l_HashMapImp_find___at_Lean_IR_EmitCpp_isObj___spec__1(x_8, x_1);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; 
lean::dec(x_5);
x_10 = l_Lean_IR_EmitCpp_throwUnknownVar___rarg(x_1, x_2, x_3);
return x_10;
}
else
{
obj* x_11; uint8 x_12; uint8 x_13; obj* x_14; obj* x_15; 
lean::dec(x_3);
lean::dec(x_1);
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
lean::dec(x_9);
x_12 = lean::unbox(x_11);
lean::dec(x_11);
x_13 = l_Lean_IR_IRType_isObj___main(x_12);
x_14 = lean::box(x_13);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_5);
return x_15;
}
}
else
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_16 = lean::cnstr_get(x_3, 1);
lean::inc(x_16);
lean::dec(x_3);
x_17 = lean::box(0);
lean::inc(x_16);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_16);
x_19 = lean::cnstr_get(x_2, 2);
x_20 = l_HashMapImp_find___at_Lean_IR_EmitCpp_isObj___spec__1(x_19, x_1);
if (lean::obj_tag(x_20) == 0)
{
obj* x_21; 
lean::dec(x_16);
x_21 = l_Lean_IR_EmitCpp_throwUnknownVar___rarg(x_1, x_2, x_18);
return x_21;
}
else
{
obj* x_22; uint8 x_23; uint8 x_24; obj* x_25; obj* x_26; 
lean::dec(x_18);
lean::dec(x_1);
x_22 = lean::cnstr_get(x_20, 0);
lean::inc(x_22);
lean::dec(x_20);
x_23 = lean::unbox(x_22);
lean::dec(x_22);
x_24 = l_Lean_IR_IRType_isObj___main(x_23);
x_25 = lean::box(x_24);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_16);
return x_26;
}
}
}
}
obj* l_AssocList_find___main___at_Lean_IR_EmitCpp_isObj___spec__2___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_AssocList_find___main___at_Lean_IR_EmitCpp_isObj___spec__2(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_HashMapImp_find___at_Lean_IR_EmitCpp_isObj___spec__1___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_HashMapImp_find___at_Lean_IR_EmitCpp_isObj___spec__1(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_IR_EmitCpp_isObj___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_isObj(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_AssocList_find___main___at_Lean_IR_EmitCpp_getJPParams___spec__2(obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_5; obj* x_6; uint8 x_7; 
x_4 = lean::cnstr_get(x_2, 0);
x_5 = lean::cnstr_get(x_2, 1);
x_6 = lean::cnstr_get(x_2, 2);
x_7 = lean::nat_dec_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
obj* x_9; 
lean::inc(x_5);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_5);
return x_9;
}
}
}
}
obj* l_HashMapImp_find___at_Lean_IR_EmitCpp_getJPParams___spec__1(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; usize x_5; usize x_6; obj* x_7; usize x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_1, 1);
x_4 = lean::array_get_size(x_3);
x_5 = lean::usize_of_nat(x_2);
x_6 = lean::usize_modn(x_5, x_4);
lean::dec(x_4);
x_7 = lean::box_size_t(x_6);
x_8 = lean::unbox_size_t(x_7);
lean::dec(x_7);
x_9 = lean::array_uget(x_3, x_8);
x_10 = l_AssocList_find___main___at_Lean_IR_EmitCpp_getJPParams___spec__2(x_2, x_9);
lean::dec(x_9);
return x_10;
}
}
obj* _init_l_Lean_IR_EmitCpp_getJPParams___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("unknown join point");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_getJPParams(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = lean::cnstr_get(x_3, 0);
lean::dec(x_5);
x_6 = lean::cnstr_get(x_2, 3);
x_7 = l_HashMapImp_find___at_Lean_IR_EmitCpp_getJPParams___spec__1(x_6, x_1);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; 
x_8 = l_Lean_IR_EmitCpp_getJPParams___closed__1;
lean::cnstr_set_tag(x_3, 1);
lean::cnstr_set(x_3, 0, x_8);
return x_3;
}
else
{
obj* x_9; 
x_9 = lean::cnstr_get(x_7, 0);
lean::inc(x_9);
lean::dec(x_7);
lean::cnstr_set(x_3, 0, x_9);
return x_3;
}
}
else
{
obj* x_10; obj* x_11; obj* x_12; 
x_10 = lean::cnstr_get(x_3, 1);
lean::inc(x_10);
lean::dec(x_3);
x_11 = lean::cnstr_get(x_2, 3);
x_12 = l_HashMapImp_find___at_Lean_IR_EmitCpp_getJPParams___spec__1(x_11, x_1);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_14; 
x_13 = l_Lean_IR_EmitCpp_getJPParams___closed__1;
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_10);
return x_14;
}
else
{
obj* x_15; obj* x_16; 
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
lean::dec(x_12);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_10);
return x_16;
}
}
}
}
obj* l_AssocList_find___main___at_Lean_IR_EmitCpp_getJPParams___spec__2___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_AssocList_find___main___at_Lean_IR_EmitCpp_getJPParams___spec__2(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_HashMapImp_find___at_Lean_IR_EmitCpp_getJPParams___spec__1___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_HashMapImp_find___at_Lean_IR_EmitCpp_getJPParams___spec__1(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_IR_EmitCpp_getJPParams___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_getJPParams(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_IR_EmitCpp_declareVar___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("; ");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_declareVar(obj* x_1, uint8 x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_6 = lean::cnstr_get(x_4, 1);
x_7 = lean::cnstr_get(x_4, 0);
lean::dec(x_7);
x_8 = l_Lean_IR_EmitCpp_toCppType___main(x_2);
x_9 = lean::string_append(x_6, x_8);
lean::dec(x_8);
x_10 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1;
x_11 = lean::string_append(x_9, x_10);
x_12 = l_Nat_repr(x_1);
x_13 = l_Lean_IR_VarId_HasToString___closed__1;
x_14 = lean::string_append(x_13, x_12);
lean::dec(x_12);
x_15 = lean::string_append(x_11, x_14);
lean::dec(x_14);
x_16 = l_Lean_IR_EmitCpp_declareVar___closed__1;
x_17 = lean::string_append(x_15, x_16);
x_18 = lean::box(0);
lean::cnstr_set(x_4, 1, x_17);
lean::cnstr_set(x_4, 0, x_18);
return x_4;
}
else
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_19 = lean::cnstr_get(x_4, 1);
lean::inc(x_19);
lean::dec(x_4);
x_20 = l_Lean_IR_EmitCpp_toCppType___main(x_2);
x_21 = lean::string_append(x_19, x_20);
lean::dec(x_20);
x_22 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1;
x_23 = lean::string_append(x_21, x_22);
x_24 = l_Nat_repr(x_1);
x_25 = l_Lean_IR_VarId_HasToString___closed__1;
x_26 = lean::string_append(x_25, x_24);
lean::dec(x_24);
x_27 = lean::string_append(x_23, x_26);
lean::dec(x_26);
x_28 = l_Lean_IR_EmitCpp_declareVar___closed__1;
x_29 = lean::string_append(x_27, x_28);
x_30 = lean::box(0);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_29);
return x_31;
}
}
}
obj* l_Lean_IR_EmitCpp_declareVar___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_2);
lean::dec(x_2);
x_6 = l_Lean_IR_EmitCpp_declareVar(x_1, x_5, x_3, x_4);
lean::dec(x_3);
return x_6;
}
}
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_declareParams___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::array_get_size(x_1);
x_6 = lean::nat_dec_lt(x_2, x_5);
lean::dec(x_5);
if (x_6 == 0)
{
uint8 x_7; 
lean::dec(x_2);
x_7 = !lean::is_exclusive(x_4);
if (x_7 == 0)
{
obj* x_8; obj* x_9; 
x_8 = lean::cnstr_get(x_4, 0);
lean::dec(x_8);
x_9 = lean::box(0);
lean::cnstr_set(x_4, 0, x_9);
return x_4;
}
else
{
obj* x_10; obj* x_11; obj* x_12; 
x_10 = lean::cnstr_get(x_4, 1);
lean::inc(x_10);
lean::dec(x_4);
x_11 = lean::box(0);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_10);
return x_12;
}
}
else
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; uint8 x_17; obj* x_18; 
x_13 = lean::array_fget(x_1, x_2);
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_add(x_2, x_14);
lean::dec(x_2);
x_16 = lean::cnstr_get(x_13, 0);
lean::inc(x_16);
x_17 = lean::cnstr_get_scalar<uint8>(x_13, sizeof(void*)*1 + 1);
lean::dec(x_13);
x_18 = l_Lean_IR_EmitCpp_declareVar(x_16, x_17, x_3, x_4);
if (lean::obj_tag(x_18) == 0)
{
uint8 x_19; 
x_19 = !lean::is_exclusive(x_18);
if (x_19 == 0)
{
obj* x_20; obj* x_21; 
x_20 = lean::cnstr_get(x_18, 0);
lean::dec(x_20);
x_21 = lean::box(0);
lean::cnstr_set(x_18, 0, x_21);
x_2 = x_15;
x_4 = x_18;
goto _start;
}
else
{
obj* x_23; obj* x_24; obj* x_25; 
x_23 = lean::cnstr_get(x_18, 1);
lean::inc(x_23);
lean::dec(x_18);
x_24 = lean::box(0);
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_23);
x_2 = x_15;
x_4 = x_25;
goto _start;
}
}
else
{
uint8 x_27; 
lean::dec(x_15);
x_27 = !lean::is_exclusive(x_18);
if (x_27 == 0)
{
return x_18;
}
else
{
obj* x_28; obj* x_29; obj* x_30; 
x_28 = lean::cnstr_get(x_18, 0);
x_29 = lean::cnstr_get(x_18, 1);
lean::inc(x_29);
lean::inc(x_28);
lean::dec(x_18);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_28);
lean::cnstr_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
obj* l_Lean_IR_EmitCpp_declareParams(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = lean::mk_nat_obj(0u);
x_5 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_declareParams___spec__1(x_1, x_4, x_2, x_3);
return x_5;
}
}
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_declareParams___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_declareParams___spec__1(x_1, x_2, x_3, x_4);
lean::dec(x_3);
lean::dec(x_1);
return x_5;
}
}
obj* l_Lean_IR_EmitCpp_declareParams___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_declareParams(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_IR_EmitCpp_declareVars___main(obj* x_1, uint8 x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_16; uint8 x_17; obj* x_18; uint8 x_19; 
x_16 = lean::cnstr_get(x_1, 0);
lean::inc(x_16);
x_17 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*3);
x_18 = lean::cnstr_get(x_1, 2);
lean::inc(x_18);
x_19 = !lean::is_exclusive(x_4);
if (x_19 == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; uint8 x_24; 
x_20 = lean::cnstr_get(x_4, 1);
x_21 = lean::cnstr_get(x_4, 0);
lean::dec(x_21);
x_22 = lean::box(0);
lean::inc(x_20);
lean::cnstr_set(x_4, 0, x_22);
x_23 = lean::cnstr_get(x_3, 4);
x_24 = l_Lean_IR_isTailCallTo(x_23, x_1);
lean::dec(x_1);
if (x_24 == 0)
{
obj* x_25; 
lean::dec(x_20);
x_25 = l_Lean_IR_EmitCpp_declareVar(x_16, x_17, x_3, x_4);
if (lean::obj_tag(x_25) == 0)
{
uint8 x_26; 
x_26 = !lean::is_exclusive(x_25);
if (x_26 == 0)
{
obj* x_27; uint8 x_28; 
x_27 = lean::cnstr_get(x_25, 0);
lean::dec(x_27);
lean::cnstr_set(x_25, 0, x_22);
x_28 = 1;
x_1 = x_18;
x_2 = x_28;
x_4 = x_25;
goto _start;
}
else
{
obj* x_30; obj* x_31; uint8 x_32; 
x_30 = lean::cnstr_get(x_25, 1);
lean::inc(x_30);
lean::dec(x_25);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_22);
lean::cnstr_set(x_31, 1, x_30);
x_32 = 1;
x_1 = x_18;
x_2 = x_32;
x_4 = x_31;
goto _start;
}
}
else
{
uint8 x_34; 
lean::dec(x_18);
x_34 = !lean::is_exclusive(x_25);
if (x_34 == 0)
{
return x_25;
}
else
{
obj* x_35; obj* x_36; obj* x_37; 
x_35 = lean::cnstr_get(x_25, 0);
x_36 = lean::cnstr_get(x_25, 1);
lean::inc(x_36);
lean::inc(x_35);
lean::dec(x_25);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_35);
lean::cnstr_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
obj* x_38; obj* x_39; 
lean::dec(x_4);
lean::dec(x_18);
lean::dec(x_16);
x_38 = lean::box(x_2);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_20);
return x_39;
}
}
else
{
obj* x_40; obj* x_41; obj* x_42; obj* x_43; uint8 x_44; 
x_40 = lean::cnstr_get(x_4, 1);
lean::inc(x_40);
lean::dec(x_4);
x_41 = lean::box(0);
lean::inc(x_40);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set(x_42, 1, x_40);
x_43 = lean::cnstr_get(x_3, 4);
x_44 = l_Lean_IR_isTailCallTo(x_43, x_1);
lean::dec(x_1);
if (x_44 == 0)
{
obj* x_45; 
lean::dec(x_40);
x_45 = l_Lean_IR_EmitCpp_declareVar(x_16, x_17, x_3, x_42);
if (lean::obj_tag(x_45) == 0)
{
obj* x_46; obj* x_47; obj* x_48; uint8 x_49; 
x_46 = lean::cnstr_get(x_45, 1);
lean::inc(x_46);
if (lean::is_exclusive(x_45)) {
 lean::cnstr_release(x_45, 0);
 lean::cnstr_release(x_45, 1);
 x_47 = x_45;
} else {
 lean::dec_ref(x_45);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_47)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_47;
}
lean::cnstr_set(x_48, 0, x_41);
lean::cnstr_set(x_48, 1, x_46);
x_49 = 1;
x_1 = x_18;
x_2 = x_49;
x_4 = x_48;
goto _start;
}
else
{
obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
lean::dec(x_18);
x_51 = lean::cnstr_get(x_45, 0);
lean::inc(x_51);
x_52 = lean::cnstr_get(x_45, 1);
lean::inc(x_52);
if (lean::is_exclusive(x_45)) {
 lean::cnstr_release(x_45, 0);
 lean::cnstr_release(x_45, 1);
 x_53 = x_45;
} else {
 lean::dec_ref(x_45);
 x_53 = lean::box(0);
}
if (lean::is_scalar(x_53)) {
 x_54 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_54 = x_53;
}
lean::cnstr_set(x_54, 0, x_51);
lean::cnstr_set(x_54, 1, x_52);
return x_54;
}
}
else
{
obj* x_55; obj* x_56; 
lean::dec(x_42);
lean::dec(x_18);
lean::dec(x_16);
x_55 = lean::box(x_2);
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_55);
lean::cnstr_set(x_56, 1, x_40);
return x_56;
}
}
}
case 1:
{
obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_57 = lean::cnstr_get(x_1, 1);
lean::inc(x_57);
x_58 = lean::cnstr_get(x_1, 3);
lean::inc(x_58);
lean::dec(x_1);
x_59 = lean::mk_nat_obj(0u);
x_60 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_declareParams___spec__1(x_57, x_59, x_3, x_4);
if (x_2 == 0)
{
if (lean::obj_tag(x_60) == 0)
{
uint8 x_61; 
x_61 = !lean::is_exclusive(x_60);
if (x_61 == 0)
{
obj* x_62; obj* x_63; uint8 x_64; obj* x_65; 
x_62 = lean::cnstr_get(x_60, 0);
lean::dec(x_62);
x_63 = lean::array_get_size(x_57);
lean::dec(x_57);
x_64 = lean::nat_dec_lt(x_59, x_63);
lean::dec(x_63);
x_65 = lean::box(0);
lean::cnstr_set(x_60, 0, x_65);
x_1 = x_58;
x_2 = x_64;
x_4 = x_60;
goto _start;
}
else
{
obj* x_67; obj* x_68; uint8 x_69; obj* x_70; obj* x_71; 
x_67 = lean::cnstr_get(x_60, 1);
lean::inc(x_67);
lean::dec(x_60);
x_68 = lean::array_get_size(x_57);
lean::dec(x_57);
x_69 = lean::nat_dec_lt(x_59, x_68);
lean::dec(x_68);
x_70 = lean::box(0);
x_71 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_71, 0, x_70);
lean::cnstr_set(x_71, 1, x_67);
x_1 = x_58;
x_2 = x_69;
x_4 = x_71;
goto _start;
}
}
else
{
uint8 x_73; 
lean::dec(x_58);
lean::dec(x_57);
x_73 = !lean::is_exclusive(x_60);
if (x_73 == 0)
{
return x_60;
}
else
{
obj* x_74; obj* x_75; obj* x_76; 
x_74 = lean::cnstr_get(x_60, 0);
x_75 = lean::cnstr_get(x_60, 1);
lean::inc(x_75);
lean::inc(x_74);
lean::dec(x_60);
x_76 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_76, 0, x_74);
lean::cnstr_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
lean::dec(x_57);
if (lean::obj_tag(x_60) == 0)
{
uint8 x_77; 
x_77 = !lean::is_exclusive(x_60);
if (x_77 == 0)
{
obj* x_78; obj* x_79; uint8 x_80; 
x_78 = lean::cnstr_get(x_60, 0);
lean::dec(x_78);
x_79 = lean::box(0);
lean::cnstr_set(x_60, 0, x_79);
x_80 = 1;
x_1 = x_58;
x_2 = x_80;
x_4 = x_60;
goto _start;
}
else
{
obj* x_82; obj* x_83; obj* x_84; uint8 x_85; 
x_82 = lean::cnstr_get(x_60, 1);
lean::inc(x_82);
lean::dec(x_60);
x_83 = lean::box(0);
x_84 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_84, 0, x_83);
lean::cnstr_set(x_84, 1, x_82);
x_85 = 1;
x_1 = x_58;
x_2 = x_85;
x_4 = x_84;
goto _start;
}
}
else
{
uint8 x_87; 
lean::dec(x_58);
x_87 = !lean::is_exclusive(x_60);
if (x_87 == 0)
{
return x_60;
}
else
{
obj* x_88; obj* x_89; obj* x_90; 
x_88 = lean::cnstr_get(x_60, 0);
x_89 = lean::cnstr_get(x_60, 1);
lean::inc(x_89);
lean::inc(x_88);
lean::dec(x_60);
x_90 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_90, 0, x_88);
lean::cnstr_set(x_90, 1, x_89);
return x_90;
}
}
}
}
default: 
{
obj* x_91; 
x_91 = lean::box(0);
x_5 = x_91;
goto block_15;
}
}
block_15:
{
uint8 x_6; 
lean::dec(x_5);
x_6 = l_Lean_IR_FnBody_isTerminal___main(x_1);
if (x_6 == 0)
{
obj* x_7; 
x_7 = l_Lean_IR_FnBody_body___main(x_1);
lean::dec(x_1);
x_1 = x_7;
goto _start;
}
else
{
uint8 x_9; 
lean::dec(x_1);
x_9 = !lean::is_exclusive(x_4);
if (x_9 == 0)
{
obj* x_10; obj* x_11; 
x_10 = lean::cnstr_get(x_4, 0);
lean::dec(x_10);
x_11 = lean::box(x_2);
lean::cnstr_set(x_4, 0, x_11);
return x_4;
}
else
{
obj* x_12; obj* x_13; obj* x_14; 
x_12 = lean::cnstr_get(x_4, 1);
lean::inc(x_12);
lean::dec(x_4);
x_13 = lean::box(x_2);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_12);
return x_14;
}
}
}
}
}
obj* l_Lean_IR_EmitCpp_declareVars___main___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_2);
lean::dec(x_2);
x_6 = l_Lean_IR_EmitCpp_declareVars___main(x_1, x_5, x_3, x_4);
lean::dec(x_3);
return x_6;
}
}
obj* l_Lean_IR_EmitCpp_declareVars(obj* x_1, uint8 x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_declareVars___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
obj* l_Lean_IR_EmitCpp_declareVars___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_2);
lean::dec(x_2);
x_6 = l_Lean_IR_EmitCpp_declareVars(x_1, x_5, x_3, x_4);
lean::dec(x_3);
return x_6;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitTag___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::obj_tag(");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitTag(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
lean::inc(x_1);
x_4 = l_Lean_IR_EmitCpp_isObj(x_1, x_2, x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; uint8 x_6; 
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = lean::unbox(x_5);
lean::dec(x_5);
if (x_6 == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_4);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_8 = lean::cnstr_get(x_4, 1);
x_9 = lean::cnstr_get(x_4, 0);
lean::dec(x_9);
x_10 = l_Nat_repr(x_1);
x_11 = l_Lean_IR_VarId_HasToString___closed__1;
x_12 = lean::string_append(x_11, x_10);
lean::dec(x_10);
x_13 = lean::string_append(x_8, x_12);
lean::dec(x_12);
x_14 = lean::box(0);
lean::cnstr_set(x_4, 1, x_13);
lean::cnstr_set(x_4, 0, x_14);
return x_4;
}
else
{
obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_15 = lean::cnstr_get(x_4, 1);
lean::inc(x_15);
lean::dec(x_4);
x_16 = l_Nat_repr(x_1);
x_17 = l_Lean_IR_VarId_HasToString___closed__1;
x_18 = lean::string_append(x_17, x_16);
lean::dec(x_16);
x_19 = lean::string_append(x_15, x_18);
lean::dec(x_18);
x_20 = lean::box(0);
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_19);
return x_21;
}
}
else
{
uint8 x_22; 
x_22 = !lean::is_exclusive(x_4);
if (x_22 == 0)
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_23 = lean::cnstr_get(x_4, 1);
x_24 = lean::cnstr_get(x_4, 0);
lean::dec(x_24);
x_25 = l_Lean_IR_EmitCpp_emitTag___closed__1;
x_26 = lean::string_append(x_23, x_25);
x_27 = l_Nat_repr(x_1);
x_28 = l_Lean_IR_VarId_HasToString___closed__1;
x_29 = lean::string_append(x_28, x_27);
lean::dec(x_27);
x_30 = lean::string_append(x_26, x_29);
lean::dec(x_29);
x_31 = l_Option_HasRepr___rarg___closed__3;
x_32 = lean::string_append(x_30, x_31);
x_33 = lean::box(0);
lean::cnstr_set(x_4, 1, x_32);
lean::cnstr_set(x_4, 0, x_33);
return x_4;
}
else
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; 
x_34 = lean::cnstr_get(x_4, 1);
lean::inc(x_34);
lean::dec(x_4);
x_35 = l_Lean_IR_EmitCpp_emitTag___closed__1;
x_36 = lean::string_append(x_34, x_35);
x_37 = l_Nat_repr(x_1);
x_38 = l_Lean_IR_VarId_HasToString___closed__1;
x_39 = lean::string_append(x_38, x_37);
lean::dec(x_37);
x_40 = lean::string_append(x_36, x_39);
lean::dec(x_39);
x_41 = l_Option_HasRepr___rarg___closed__3;
x_42 = lean::string_append(x_40, x_41);
x_43 = lean::box(0);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_43);
lean::cnstr_set(x_44, 1, x_42);
return x_44;
}
}
}
else
{
uint8 x_45; 
lean::dec(x_1);
x_45 = !lean::is_exclusive(x_4);
if (x_45 == 0)
{
return x_4;
}
else
{
obj* x_46; obj* x_47; obj* x_48; 
x_46 = lean::cnstr_get(x_4, 0);
x_47 = lean::cnstr_get(x_4, 1);
lean::inc(x_47);
lean::inc(x_46);
lean::dec(x_4);
x_48 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_48, 0, x_46);
lean::cnstr_set(x_48, 1, x_47);
return x_48;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitTag___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_emitTag(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Lean_IR_EmitCpp_isIf(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; uint8 x_4; 
x_2 = lean::array_get_size(x_1);
x_3 = lean::mk_nat_obj(2u);
x_4 = lean::nat_dec_eq(x_2, x_3);
lean::dec(x_2);
if (x_4 == 0)
{
obj* x_5; 
x_5 = lean::box(0);
return x_5;
}
else
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = l_Lean_IR_altInh;
x_7 = lean::mk_nat_obj(0u);
x_8 = lean::array_get(x_6, x_1, x_7);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_10 = lean::cnstr_get(x_8, 1);
lean::inc(x_10);
lean::dec(x_8);
x_11 = lean::cnstr_get(x_9, 1);
lean::inc(x_11);
lean::dec(x_9);
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::array_get(x_6, x_1, x_12);
x_14 = l_Lean_IR_AltCore_body___main(x_13);
lean::dec(x_13);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_10);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_11);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_17, 0, x_16);
return x_17;
}
else
{
obj* x_18; 
lean::dec(x_8);
x_18 = lean::box(0);
return x_18;
}
}
}
}
obj* l_Lean_IR_EmitCpp_isIf___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_IR_EmitCpp_isIf(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitIf___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("if (");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitIf___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" == ");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitIf___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("else");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitIf(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
uint8 x_8; 
x_8 = !lean::is_exclusive(x_7);
if (x_8 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_9 = lean::cnstr_get(x_7, 1);
x_10 = lean::cnstr_get(x_7, 0);
lean::dec(x_10);
x_11 = l_Lean_IR_EmitCpp_emitIf___closed__1;
x_12 = lean::string_append(x_9, x_11);
x_13 = lean::box(0);
lean::cnstr_set(x_7, 1, x_12);
lean::cnstr_set(x_7, 0, x_13);
x_14 = l_Lean_IR_EmitCpp_emitTag(x_2, x_6, x_7);
if (lean::obj_tag(x_14) == 0)
{
uint8 x_15; 
x_15 = !lean::is_exclusive(x_14);
if (x_15 == 0)
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_16 = lean::cnstr_get(x_14, 1);
x_17 = lean::cnstr_get(x_14, 0);
lean::dec(x_17);
x_18 = l_Lean_IR_EmitCpp_emitIf___closed__2;
x_19 = lean::string_append(x_16, x_18);
x_20 = l_Nat_repr(x_3);
x_21 = lean::string_append(x_19, x_20);
lean::dec(x_20);
x_22 = l_Option_HasRepr___rarg___closed__3;
x_23 = lean::string_append(x_21, x_22);
x_24 = l_IO_println___rarg___closed__1;
x_25 = lean::string_append(x_23, x_24);
lean::cnstr_set(x_14, 1, x_25);
lean::cnstr_set(x_14, 0, x_13);
lean::inc(x_1);
lean::inc(x_6);
x_26 = lean::apply_3(x_1, x_4, x_6, x_14);
if (lean::obj_tag(x_26) == 0)
{
uint8 x_27; 
x_27 = !lean::is_exclusive(x_26);
if (x_27 == 0)
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_28 = lean::cnstr_get(x_26, 1);
x_29 = lean::cnstr_get(x_26, 0);
lean::dec(x_29);
x_30 = l_Lean_IR_EmitCpp_emitIf___closed__3;
x_31 = lean::string_append(x_28, x_30);
x_32 = lean::string_append(x_31, x_24);
lean::cnstr_set(x_26, 1, x_32);
lean::cnstr_set(x_26, 0, x_13);
x_33 = lean::apply_3(x_1, x_5, x_6, x_26);
return x_33;
}
else
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
x_34 = lean::cnstr_get(x_26, 1);
lean::inc(x_34);
lean::dec(x_26);
x_35 = l_Lean_IR_EmitCpp_emitIf___closed__3;
x_36 = lean::string_append(x_34, x_35);
x_37 = lean::string_append(x_36, x_24);
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_13);
lean::cnstr_set(x_38, 1, x_37);
x_39 = lean::apply_3(x_1, x_5, x_6, x_38);
return x_39;
}
}
else
{
uint8 x_40; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_1);
x_40 = !lean::is_exclusive(x_26);
if (x_40 == 0)
{
return x_26;
}
else
{
obj* x_41; obj* x_42; obj* x_43; 
x_41 = lean::cnstr_get(x_26, 0);
x_42 = lean::cnstr_get(x_26, 1);
lean::inc(x_42);
lean::inc(x_41);
lean::dec(x_26);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_41);
lean::cnstr_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
x_44 = lean::cnstr_get(x_14, 1);
lean::inc(x_44);
lean::dec(x_14);
x_45 = l_Lean_IR_EmitCpp_emitIf___closed__2;
x_46 = lean::string_append(x_44, x_45);
x_47 = l_Nat_repr(x_3);
x_48 = lean::string_append(x_46, x_47);
lean::dec(x_47);
x_49 = l_Option_HasRepr___rarg___closed__3;
x_50 = lean::string_append(x_48, x_49);
x_51 = l_IO_println___rarg___closed__1;
x_52 = lean::string_append(x_50, x_51);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_13);
lean::cnstr_set(x_53, 1, x_52);
lean::inc(x_1);
lean::inc(x_6);
x_54 = lean::apply_3(x_1, x_4, x_6, x_53);
if (lean::obj_tag(x_54) == 0)
{
obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
x_55 = lean::cnstr_get(x_54, 1);
lean::inc(x_55);
if (lean::is_exclusive(x_54)) {
 lean::cnstr_release(x_54, 0);
 lean::cnstr_release(x_54, 1);
 x_56 = x_54;
} else {
 lean::dec_ref(x_54);
 x_56 = lean::box(0);
}
x_57 = l_Lean_IR_EmitCpp_emitIf___closed__3;
x_58 = lean::string_append(x_55, x_57);
x_59 = lean::string_append(x_58, x_51);
if (lean::is_scalar(x_56)) {
 x_60 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_60 = x_56;
}
lean::cnstr_set(x_60, 0, x_13);
lean::cnstr_set(x_60, 1, x_59);
x_61 = lean::apply_3(x_1, x_5, x_6, x_60);
return x_61;
}
else
{
obj* x_62; obj* x_63; obj* x_64; obj* x_65; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_1);
x_62 = lean::cnstr_get(x_54, 0);
lean::inc(x_62);
x_63 = lean::cnstr_get(x_54, 1);
lean::inc(x_63);
if (lean::is_exclusive(x_54)) {
 lean::cnstr_release(x_54, 0);
 lean::cnstr_release(x_54, 1);
 x_64 = x_54;
} else {
 lean::dec_ref(x_54);
 x_64 = lean::box(0);
}
if (lean::is_scalar(x_64)) {
 x_65 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_65 = x_64;
}
lean::cnstr_set(x_65, 0, x_62);
lean::cnstr_set(x_65, 1, x_63);
return x_65;
}
}
}
else
{
uint8 x_66; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_1);
x_66 = !lean::is_exclusive(x_14);
if (x_66 == 0)
{
return x_14;
}
else
{
obj* x_67; obj* x_68; obj* x_69; 
x_67 = lean::cnstr_get(x_14, 0);
x_68 = lean::cnstr_get(x_14, 1);
lean::inc(x_68);
lean::inc(x_67);
lean::dec(x_14);
x_69 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_69, 0, x_67);
lean::cnstr_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; 
x_70 = lean::cnstr_get(x_7, 1);
lean::inc(x_70);
lean::dec(x_7);
x_71 = l_Lean_IR_EmitCpp_emitIf___closed__1;
x_72 = lean::string_append(x_70, x_71);
x_73 = lean::box(0);
x_74 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_72);
x_75 = l_Lean_IR_EmitCpp_emitTag(x_2, x_6, x_74);
if (lean::obj_tag(x_75) == 0)
{
obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; 
x_76 = lean::cnstr_get(x_75, 1);
lean::inc(x_76);
if (lean::is_exclusive(x_75)) {
 lean::cnstr_release(x_75, 0);
 lean::cnstr_release(x_75, 1);
 x_77 = x_75;
} else {
 lean::dec_ref(x_75);
 x_77 = lean::box(0);
}
x_78 = l_Lean_IR_EmitCpp_emitIf___closed__2;
x_79 = lean::string_append(x_76, x_78);
x_80 = l_Nat_repr(x_3);
x_81 = lean::string_append(x_79, x_80);
lean::dec(x_80);
x_82 = l_Option_HasRepr___rarg___closed__3;
x_83 = lean::string_append(x_81, x_82);
x_84 = l_IO_println___rarg___closed__1;
x_85 = lean::string_append(x_83, x_84);
if (lean::is_scalar(x_77)) {
 x_86 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_86 = x_77;
}
lean::cnstr_set(x_86, 0, x_73);
lean::cnstr_set(x_86, 1, x_85);
lean::inc(x_1);
lean::inc(x_6);
x_87 = lean::apply_3(x_1, x_4, x_6, x_86);
if (lean::obj_tag(x_87) == 0)
{
obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; obj* x_94; 
x_88 = lean::cnstr_get(x_87, 1);
lean::inc(x_88);
if (lean::is_exclusive(x_87)) {
 lean::cnstr_release(x_87, 0);
 lean::cnstr_release(x_87, 1);
 x_89 = x_87;
} else {
 lean::dec_ref(x_87);
 x_89 = lean::box(0);
}
x_90 = l_Lean_IR_EmitCpp_emitIf___closed__3;
x_91 = lean::string_append(x_88, x_90);
x_92 = lean::string_append(x_91, x_84);
if (lean::is_scalar(x_89)) {
 x_93 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_93 = x_89;
}
lean::cnstr_set(x_93, 0, x_73);
lean::cnstr_set(x_93, 1, x_92);
x_94 = lean::apply_3(x_1, x_5, x_6, x_93);
return x_94;
}
else
{
obj* x_95; obj* x_96; obj* x_97; obj* x_98; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_1);
x_95 = lean::cnstr_get(x_87, 0);
lean::inc(x_95);
x_96 = lean::cnstr_get(x_87, 1);
lean::inc(x_96);
if (lean::is_exclusive(x_87)) {
 lean::cnstr_release(x_87, 0);
 lean::cnstr_release(x_87, 1);
 x_97 = x_87;
} else {
 lean::dec_ref(x_87);
 x_97 = lean::box(0);
}
if (lean::is_scalar(x_97)) {
 x_98 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_98 = x_97;
}
lean::cnstr_set(x_98, 0, x_95);
lean::cnstr_set(x_98, 1, x_96);
return x_98;
}
}
else
{
obj* x_99; obj* x_100; obj* x_101; obj* x_102; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_1);
x_99 = lean::cnstr_get(x_75, 0);
lean::inc(x_99);
x_100 = lean::cnstr_get(x_75, 1);
lean::inc(x_100);
if (lean::is_exclusive(x_75)) {
 lean::cnstr_release(x_75, 0);
 lean::cnstr_release(x_75, 1);
 x_101 = x_75;
} else {
 lean::dec_ref(x_75);
 x_101 = lean::box(0);
}
if (lean::is_scalar(x_101)) {
 x_102 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_102 = x_101;
}
lean::cnstr_set(x_102, 0, x_99);
lean::cnstr_set(x_102, 1, x_100);
return x_102;
}
}
}
}
obj* _init_l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("case ");
return x_1;
}
}
obj* _init_l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(":");
return x_1;
}
}
obj* _init_l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("default: ");
return x_1;
}
}
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; uint8 x_7; 
x_6 = lean::array_get_size(x_2);
x_7 = lean::nat_dec_lt(x_3, x_6);
lean::dec(x_6);
if (x_7 == 0)
{
uint8 x_8; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_1);
x_8 = !lean::is_exclusive(x_5);
if (x_8 == 0)
{
obj* x_9; obj* x_10; 
x_9 = lean::cnstr_get(x_5, 0);
lean::dec(x_9);
x_10 = lean::box(0);
lean::cnstr_set(x_5, 0, x_10);
return x_5;
}
else
{
obj* x_11; obj* x_12; obj* x_13; 
x_11 = lean::cnstr_get(x_5, 1);
lean::inc(x_11);
lean::dec(x_5);
x_12 = lean::box(0);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_11);
return x_13;
}
}
else
{
obj* x_14; obj* x_15; obj* x_16; 
x_14 = lean::array_fget(x_2, x_3);
x_15 = lean::mk_nat_obj(1u);
x_16 = lean::nat_add(x_3, x_15);
lean::dec(x_3);
if (lean::obj_tag(x_14) == 0)
{
obj* x_17; obj* x_18; uint8 x_19; 
x_17 = lean::cnstr_get(x_14, 0);
lean::inc(x_17);
x_18 = lean::cnstr_get(x_14, 1);
lean::inc(x_18);
lean::dec(x_14);
x_19 = !lean::is_exclusive(x_5);
if (x_19 == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_20 = lean::cnstr_get(x_5, 1);
x_21 = lean::cnstr_get(x_5, 0);
lean::dec(x_21);
x_22 = lean::cnstr_get(x_17, 1);
lean::inc(x_22);
lean::dec(x_17);
x_23 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__1;
x_24 = lean::string_append(x_20, x_23);
x_25 = l_Nat_repr(x_22);
x_26 = lean::string_append(x_24, x_25);
lean::dec(x_25);
x_27 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__2;
x_28 = lean::string_append(x_26, x_27);
x_29 = l_IO_println___rarg___closed__1;
x_30 = lean::string_append(x_28, x_29);
x_31 = lean::box(0);
lean::cnstr_set(x_5, 1, x_30);
lean::cnstr_set(x_5, 0, x_31);
lean::inc(x_1);
lean::inc(x_4);
x_32 = lean::apply_3(x_1, x_18, x_4, x_5);
if (lean::obj_tag(x_32) == 0)
{
uint8 x_33; 
x_33 = !lean::is_exclusive(x_32);
if (x_33 == 0)
{
obj* x_34; 
x_34 = lean::cnstr_get(x_32, 0);
lean::dec(x_34);
lean::cnstr_set(x_32, 0, x_31);
x_3 = x_16;
x_5 = x_32;
goto _start;
}
else
{
obj* x_36; obj* x_37; 
x_36 = lean::cnstr_get(x_32, 1);
lean::inc(x_36);
lean::dec(x_32);
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_31);
lean::cnstr_set(x_37, 1, x_36);
x_3 = x_16;
x_5 = x_37;
goto _start;
}
}
else
{
uint8 x_39; 
lean::dec(x_16);
lean::dec(x_4);
lean::dec(x_1);
x_39 = !lean::is_exclusive(x_32);
if (x_39 == 0)
{
return x_32;
}
else
{
obj* x_40; obj* x_41; obj* x_42; 
x_40 = lean::cnstr_get(x_32, 0);
x_41 = lean::cnstr_get(x_32, 1);
lean::inc(x_41);
lean::inc(x_40);
lean::dec(x_32);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_40);
lean::cnstr_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
x_43 = lean::cnstr_get(x_5, 1);
lean::inc(x_43);
lean::dec(x_5);
x_44 = lean::cnstr_get(x_17, 1);
lean::inc(x_44);
lean::dec(x_17);
x_45 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__1;
x_46 = lean::string_append(x_43, x_45);
x_47 = l_Nat_repr(x_44);
x_48 = lean::string_append(x_46, x_47);
lean::dec(x_47);
x_49 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__2;
x_50 = lean::string_append(x_48, x_49);
x_51 = l_IO_println___rarg___closed__1;
x_52 = lean::string_append(x_50, x_51);
x_53 = lean::box(0);
x_54 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_52);
lean::inc(x_1);
lean::inc(x_4);
x_55 = lean::apply_3(x_1, x_18, x_4, x_54);
if (lean::obj_tag(x_55) == 0)
{
obj* x_56; obj* x_57; obj* x_58; 
x_56 = lean::cnstr_get(x_55, 1);
lean::inc(x_56);
if (lean::is_exclusive(x_55)) {
 lean::cnstr_release(x_55, 0);
 lean::cnstr_release(x_55, 1);
 x_57 = x_55;
} else {
 lean::dec_ref(x_55);
 x_57 = lean::box(0);
}
if (lean::is_scalar(x_57)) {
 x_58 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_58 = x_57;
}
lean::cnstr_set(x_58, 0, x_53);
lean::cnstr_set(x_58, 1, x_56);
x_3 = x_16;
x_5 = x_58;
goto _start;
}
else
{
obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
lean::dec(x_16);
lean::dec(x_4);
lean::dec(x_1);
x_60 = lean::cnstr_get(x_55, 0);
lean::inc(x_60);
x_61 = lean::cnstr_get(x_55, 1);
lean::inc(x_61);
if (lean::is_exclusive(x_55)) {
 lean::cnstr_release(x_55, 0);
 lean::cnstr_release(x_55, 1);
 x_62 = x_55;
} else {
 lean::dec_ref(x_55);
 x_62 = lean::box(0);
}
if (lean::is_scalar(x_62)) {
 x_63 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_63 = x_62;
}
lean::cnstr_set(x_63, 0, x_60);
lean::cnstr_set(x_63, 1, x_61);
return x_63;
}
}
}
else
{
obj* x_64; uint8 x_65; 
x_64 = lean::cnstr_get(x_14, 0);
lean::inc(x_64);
lean::dec(x_14);
x_65 = !lean::is_exclusive(x_5);
if (x_65 == 0)
{
obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; 
x_66 = lean::cnstr_get(x_5, 1);
x_67 = lean::cnstr_get(x_5, 0);
lean::dec(x_67);
x_68 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__3;
x_69 = lean::string_append(x_66, x_68);
x_70 = l_IO_println___rarg___closed__1;
x_71 = lean::string_append(x_69, x_70);
x_72 = lean::box(0);
lean::cnstr_set(x_5, 1, x_71);
lean::cnstr_set(x_5, 0, x_72);
lean::inc(x_1);
lean::inc(x_4);
x_73 = lean::apply_3(x_1, x_64, x_4, x_5);
if (lean::obj_tag(x_73) == 0)
{
uint8 x_74; 
x_74 = !lean::is_exclusive(x_73);
if (x_74 == 0)
{
obj* x_75; 
x_75 = lean::cnstr_get(x_73, 0);
lean::dec(x_75);
lean::cnstr_set(x_73, 0, x_72);
x_3 = x_16;
x_5 = x_73;
goto _start;
}
else
{
obj* x_77; obj* x_78; 
x_77 = lean::cnstr_get(x_73, 1);
lean::inc(x_77);
lean::dec(x_73);
x_78 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_78, 0, x_72);
lean::cnstr_set(x_78, 1, x_77);
x_3 = x_16;
x_5 = x_78;
goto _start;
}
}
else
{
uint8 x_80; 
lean::dec(x_16);
lean::dec(x_4);
lean::dec(x_1);
x_80 = !lean::is_exclusive(x_73);
if (x_80 == 0)
{
return x_73;
}
else
{
obj* x_81; obj* x_82; obj* x_83; 
x_81 = lean::cnstr_get(x_73, 0);
x_82 = lean::cnstr_get(x_73, 1);
lean::inc(x_82);
lean::inc(x_81);
lean::dec(x_73);
x_83 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_83, 0, x_81);
lean::cnstr_set(x_83, 1, x_82);
return x_83;
}
}
}
else
{
obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; 
x_84 = lean::cnstr_get(x_5, 1);
lean::inc(x_84);
lean::dec(x_5);
x_85 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__3;
x_86 = lean::string_append(x_84, x_85);
x_87 = l_IO_println___rarg___closed__1;
x_88 = lean::string_append(x_86, x_87);
x_89 = lean::box(0);
x_90 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_90, 0, x_89);
lean::cnstr_set(x_90, 1, x_88);
lean::inc(x_1);
lean::inc(x_4);
x_91 = lean::apply_3(x_1, x_64, x_4, x_90);
if (lean::obj_tag(x_91) == 0)
{
obj* x_92; obj* x_93; obj* x_94; 
x_92 = lean::cnstr_get(x_91, 1);
lean::inc(x_92);
if (lean::is_exclusive(x_91)) {
 lean::cnstr_release(x_91, 0);
 lean::cnstr_release(x_91, 1);
 x_93 = x_91;
} else {
 lean::dec_ref(x_91);
 x_93 = lean::box(0);
}
if (lean::is_scalar(x_93)) {
 x_94 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_94 = x_93;
}
lean::cnstr_set(x_94, 0, x_89);
lean::cnstr_set(x_94, 1, x_92);
x_3 = x_16;
x_5 = x_94;
goto _start;
}
else
{
obj* x_96; obj* x_97; obj* x_98; obj* x_99; 
lean::dec(x_16);
lean::dec(x_4);
lean::dec(x_1);
x_96 = lean::cnstr_get(x_91, 0);
lean::inc(x_96);
x_97 = lean::cnstr_get(x_91, 1);
lean::inc(x_97);
if (lean::is_exclusive(x_91)) {
 lean::cnstr_release(x_91, 0);
 lean::cnstr_release(x_91, 1);
 x_98 = x_91;
} else {
 lean::dec_ref(x_91);
 x_98 = lean::box(0);
}
if (lean::is_scalar(x_98)) {
 x_99 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_99 = x_98;
}
lean::cnstr_set(x_99, 0, x_96);
lean::cnstr_set(x_99, 1, x_97);
return x_99;
}
}
}
}
}
}
obj* _init_l_Lean_IR_EmitCpp_emitCase___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("switch (");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitCase___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(") {");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitCase(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_isIf(x_3);
if (lean::obj_tag(x_6) == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_5);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_8 = lean::cnstr_get(x_5, 1);
x_9 = lean::cnstr_get(x_5, 0);
lean::dec(x_9);
x_10 = l_Lean_IR_EmitCpp_emitCase___closed__1;
x_11 = lean::string_append(x_8, x_10);
x_12 = lean::box(0);
lean::cnstr_set(x_5, 1, x_11);
lean::cnstr_set(x_5, 0, x_12);
x_13 = l_Lean_IR_EmitCpp_emitTag(x_2, x_4, x_5);
if (lean::obj_tag(x_13) == 0)
{
uint8 x_14; 
x_14 = !lean::is_exclusive(x_13);
if (x_14 == 0)
{
obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_15 = lean::cnstr_get(x_13, 1);
x_16 = lean::cnstr_get(x_13, 0);
lean::dec(x_16);
x_17 = l_Lean_IR_EmitCpp_emitCase___closed__2;
x_18 = lean::string_append(x_15, x_17);
x_19 = l_IO_println___rarg___closed__1;
x_20 = lean::string_append(x_18, x_19);
lean::cnstr_set(x_13, 1, x_20);
lean::cnstr_set(x_13, 0, x_12);
x_21 = l_Lean_IR_ensureHasDefault(x_3);
x_22 = lean::mk_nat_obj(0u);
x_23 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1(x_1, x_21, x_22, x_4, x_13);
lean::dec(x_21);
if (lean::obj_tag(x_23) == 0)
{
uint8 x_24; 
x_24 = !lean::is_exclusive(x_23);
if (x_24 == 0)
{
obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_25 = lean::cnstr_get(x_23, 1);
x_26 = lean::cnstr_get(x_23, 0);
lean::dec(x_26);
x_27 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_28 = lean::string_append(x_25, x_27);
x_29 = lean::string_append(x_28, x_19);
lean::cnstr_set(x_23, 1, x_29);
lean::cnstr_set(x_23, 0, x_12);
return x_23;
}
else
{
obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_30 = lean::cnstr_get(x_23, 1);
lean::inc(x_30);
lean::dec(x_23);
x_31 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_32 = lean::string_append(x_30, x_31);
x_33 = lean::string_append(x_32, x_19);
x_34 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_34, 0, x_12);
lean::cnstr_set(x_34, 1, x_33);
return x_34;
}
}
else
{
uint8 x_35; 
x_35 = !lean::is_exclusive(x_23);
if (x_35 == 0)
{
return x_23;
}
else
{
obj* x_36; obj* x_37; obj* x_38; 
x_36 = lean::cnstr_get(x_23, 0);
x_37 = lean::cnstr_get(x_23, 1);
lean::inc(x_37);
lean::inc(x_36);
lean::dec(x_23);
x_38 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_38, 0, x_36);
lean::cnstr_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
x_39 = lean::cnstr_get(x_13, 1);
lean::inc(x_39);
lean::dec(x_13);
x_40 = l_Lean_IR_EmitCpp_emitCase___closed__2;
x_41 = lean::string_append(x_39, x_40);
x_42 = l_IO_println___rarg___closed__1;
x_43 = lean::string_append(x_41, x_42);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_12);
lean::cnstr_set(x_44, 1, x_43);
x_45 = l_Lean_IR_ensureHasDefault(x_3);
x_46 = lean::mk_nat_obj(0u);
x_47 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1(x_1, x_45, x_46, x_4, x_44);
lean::dec(x_45);
if (lean::obj_tag(x_47) == 0)
{
obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_48 = lean::cnstr_get(x_47, 1);
lean::inc(x_48);
if (lean::is_exclusive(x_47)) {
 lean::cnstr_release(x_47, 0);
 lean::cnstr_release(x_47, 1);
 x_49 = x_47;
} else {
 lean::dec_ref(x_47);
 x_49 = lean::box(0);
}
x_50 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_51 = lean::string_append(x_48, x_50);
x_52 = lean::string_append(x_51, x_42);
if (lean::is_scalar(x_49)) {
 x_53 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_53 = x_49;
}
lean::cnstr_set(x_53, 0, x_12);
lean::cnstr_set(x_53, 1, x_52);
return x_53;
}
else
{
obj* x_54; obj* x_55; obj* x_56; obj* x_57; 
x_54 = lean::cnstr_get(x_47, 0);
lean::inc(x_54);
x_55 = lean::cnstr_get(x_47, 1);
lean::inc(x_55);
if (lean::is_exclusive(x_47)) {
 lean::cnstr_release(x_47, 0);
 lean::cnstr_release(x_47, 1);
 x_56 = x_47;
} else {
 lean::dec_ref(x_47);
 x_56 = lean::box(0);
}
if (lean::is_scalar(x_56)) {
 x_57 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_57 = x_56;
}
lean::cnstr_set(x_57, 0, x_54);
lean::cnstr_set(x_57, 1, x_55);
return x_57;
}
}
}
else
{
uint8 x_58; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_1);
x_58 = !lean::is_exclusive(x_13);
if (x_58 == 0)
{
return x_13;
}
else
{
obj* x_59; obj* x_60; obj* x_61; 
x_59 = lean::cnstr_get(x_13, 0);
x_60 = lean::cnstr_get(x_13, 1);
lean::inc(x_60);
lean::inc(x_59);
lean::dec(x_13);
x_61 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_61, 0, x_59);
lean::cnstr_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
x_62 = lean::cnstr_get(x_5, 1);
lean::inc(x_62);
lean::dec(x_5);
x_63 = l_Lean_IR_EmitCpp_emitCase___closed__1;
x_64 = lean::string_append(x_62, x_63);
x_65 = lean::box(0);
x_66 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_64);
x_67 = l_Lean_IR_EmitCpp_emitTag(x_2, x_4, x_66);
if (lean::obj_tag(x_67) == 0)
{
obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; 
x_68 = lean::cnstr_get(x_67, 1);
lean::inc(x_68);
if (lean::is_exclusive(x_67)) {
 lean::cnstr_release(x_67, 0);
 lean::cnstr_release(x_67, 1);
 x_69 = x_67;
} else {
 lean::dec_ref(x_67);
 x_69 = lean::box(0);
}
x_70 = l_Lean_IR_EmitCpp_emitCase___closed__2;
x_71 = lean::string_append(x_68, x_70);
x_72 = l_IO_println___rarg___closed__1;
x_73 = lean::string_append(x_71, x_72);
if (lean::is_scalar(x_69)) {
 x_74 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_74 = x_69;
}
lean::cnstr_set(x_74, 0, x_65);
lean::cnstr_set(x_74, 1, x_73);
x_75 = l_Lean_IR_ensureHasDefault(x_3);
x_76 = lean::mk_nat_obj(0u);
x_77 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1(x_1, x_75, x_76, x_4, x_74);
lean::dec(x_75);
if (lean::obj_tag(x_77) == 0)
{
obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; 
x_78 = lean::cnstr_get(x_77, 1);
lean::inc(x_78);
if (lean::is_exclusive(x_77)) {
 lean::cnstr_release(x_77, 0);
 lean::cnstr_release(x_77, 1);
 x_79 = x_77;
} else {
 lean::dec_ref(x_77);
 x_79 = lean::box(0);
}
x_80 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_81 = lean::string_append(x_78, x_80);
x_82 = lean::string_append(x_81, x_72);
if (lean::is_scalar(x_79)) {
 x_83 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_83 = x_79;
}
lean::cnstr_set(x_83, 0, x_65);
lean::cnstr_set(x_83, 1, x_82);
return x_83;
}
else
{
obj* x_84; obj* x_85; obj* x_86; obj* x_87; 
x_84 = lean::cnstr_get(x_77, 0);
lean::inc(x_84);
x_85 = lean::cnstr_get(x_77, 1);
lean::inc(x_85);
if (lean::is_exclusive(x_77)) {
 lean::cnstr_release(x_77, 0);
 lean::cnstr_release(x_77, 1);
 x_86 = x_77;
} else {
 lean::dec_ref(x_77);
 x_86 = lean::box(0);
}
if (lean::is_scalar(x_86)) {
 x_87 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_87 = x_86;
}
lean::cnstr_set(x_87, 0, x_84);
lean::cnstr_set(x_87, 1, x_85);
return x_87;
}
}
else
{
obj* x_88; obj* x_89; obj* x_90; obj* x_91; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_1);
x_88 = lean::cnstr_get(x_67, 0);
lean::inc(x_88);
x_89 = lean::cnstr_get(x_67, 1);
lean::inc(x_89);
if (lean::is_exclusive(x_67)) {
 lean::cnstr_release(x_67, 0);
 lean::cnstr_release(x_67, 1);
 x_90 = x_67;
} else {
 lean::dec_ref(x_67);
 x_90 = lean::box(0);
}
if (lean::is_scalar(x_90)) {
 x_91 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_91 = x_90;
}
lean::cnstr_set(x_91, 0, x_88);
lean::cnstr_set(x_91, 1, x_89);
return x_91;
}
}
}
else
{
obj* x_92; obj* x_93; obj* x_94; obj* x_95; obj* x_96; obj* x_97; 
lean::dec(x_3);
x_92 = lean::cnstr_get(x_6, 0);
lean::inc(x_92);
lean::dec(x_6);
x_93 = lean::cnstr_get(x_92, 1);
lean::inc(x_93);
x_94 = lean::cnstr_get(x_92, 0);
lean::inc(x_94);
lean::dec(x_92);
x_95 = lean::cnstr_get(x_93, 0);
lean::inc(x_95);
x_96 = lean::cnstr_get(x_93, 1);
lean::inc(x_96);
lean::dec(x_93);
x_97 = l_Lean_IR_EmitCpp_emitIf(x_1, x_2, x_94, x_95, x_96, x_4, x_5);
return x_97;
}
}
}
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_2);
return x_6;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitInc___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::inc_ref");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitInc___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(");");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitInc___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::inc");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitInc(obj* x_1, obj* x_2, uint8 x_3, obj* x_4, obj* x_5) {
_start:
{
if (x_3 == 0)
{
uint8 x_6; 
x_6 = !lean::is_exclusive(x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; uint8 x_18; 
x_7 = lean::cnstr_get(x_5, 1);
x_8 = lean::cnstr_get(x_5, 0);
lean::dec(x_8);
x_9 = l_Lean_IR_EmitCpp_emitInc___closed__1;
x_10 = lean::string_append(x_7, x_9);
x_11 = l_Prod_HasRepr___rarg___closed__1;
x_12 = lean::string_append(x_10, x_11);
x_13 = l_Nat_repr(x_1);
x_14 = l_Lean_IR_VarId_HasToString___closed__1;
x_15 = lean::string_append(x_14, x_13);
lean::dec(x_13);
x_16 = lean::string_append(x_12, x_15);
lean::dec(x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_dec_eq(x_2, x_17);
if (x_18 == 0)
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_19 = l_List_reprAux___main___rarg___closed__1;
x_20 = lean::string_append(x_16, x_19);
x_21 = l_Nat_repr(x_2);
x_22 = lean::string_append(x_20, x_21);
lean::dec(x_21);
x_23 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_24 = lean::string_append(x_22, x_23);
x_25 = l_IO_println___rarg___closed__1;
x_26 = lean::string_append(x_24, x_25);
x_27 = lean::box(0);
lean::cnstr_set(x_5, 1, x_26);
lean::cnstr_set(x_5, 0, x_27);
return x_5;
}
else
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
lean::dec(x_2);
x_28 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_29 = lean::string_append(x_16, x_28);
x_30 = l_IO_println___rarg___closed__1;
x_31 = lean::string_append(x_29, x_30);
x_32 = lean::box(0);
lean::cnstr_set(x_5, 1, x_31);
lean::cnstr_set(x_5, 0, x_32);
return x_5;
}
}
else
{
obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; uint8 x_43; 
x_33 = lean::cnstr_get(x_5, 1);
lean::inc(x_33);
lean::dec(x_5);
x_34 = l_Lean_IR_EmitCpp_emitInc___closed__1;
x_35 = lean::string_append(x_33, x_34);
x_36 = l_Prod_HasRepr___rarg___closed__1;
x_37 = lean::string_append(x_35, x_36);
x_38 = l_Nat_repr(x_1);
x_39 = l_Lean_IR_VarId_HasToString___closed__1;
x_40 = lean::string_append(x_39, x_38);
lean::dec(x_38);
x_41 = lean::string_append(x_37, x_40);
lean::dec(x_40);
x_42 = lean::mk_nat_obj(1u);
x_43 = lean::nat_dec_eq(x_2, x_42);
if (x_43 == 0)
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_44 = l_List_reprAux___main___rarg___closed__1;
x_45 = lean::string_append(x_41, x_44);
x_46 = l_Nat_repr(x_2);
x_47 = lean::string_append(x_45, x_46);
lean::dec(x_46);
x_48 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_49 = lean::string_append(x_47, x_48);
x_50 = l_IO_println___rarg___closed__1;
x_51 = lean::string_append(x_49, x_50);
x_52 = lean::box(0);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_51);
return x_53;
}
else
{
obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
lean::dec(x_2);
x_54 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_55 = lean::string_append(x_41, x_54);
x_56 = l_IO_println___rarg___closed__1;
x_57 = lean::string_append(x_55, x_56);
x_58 = lean::box(0);
x_59 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_57);
return x_59;
}
}
}
else
{
uint8 x_60; 
x_60 = !lean::is_exclusive(x_5);
if (x_60 == 0)
{
obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; uint8 x_72; 
x_61 = lean::cnstr_get(x_5, 1);
x_62 = lean::cnstr_get(x_5, 0);
lean::dec(x_62);
x_63 = l_Lean_IR_EmitCpp_emitInc___closed__3;
x_64 = lean::string_append(x_61, x_63);
x_65 = l_Prod_HasRepr___rarg___closed__1;
x_66 = lean::string_append(x_64, x_65);
x_67 = l_Nat_repr(x_1);
x_68 = l_Lean_IR_VarId_HasToString___closed__1;
x_69 = lean::string_append(x_68, x_67);
lean::dec(x_67);
x_70 = lean::string_append(x_66, x_69);
lean::dec(x_69);
x_71 = lean::mk_nat_obj(1u);
x_72 = lean::nat_dec_eq(x_2, x_71);
if (x_72 == 0)
{
obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; 
x_73 = l_List_reprAux___main___rarg___closed__1;
x_74 = lean::string_append(x_70, x_73);
x_75 = l_Nat_repr(x_2);
x_76 = lean::string_append(x_74, x_75);
lean::dec(x_75);
x_77 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_78 = lean::string_append(x_76, x_77);
x_79 = l_IO_println___rarg___closed__1;
x_80 = lean::string_append(x_78, x_79);
x_81 = lean::box(0);
lean::cnstr_set(x_5, 1, x_80);
lean::cnstr_set(x_5, 0, x_81);
return x_5;
}
else
{
obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; 
lean::dec(x_2);
x_82 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_83 = lean::string_append(x_70, x_82);
x_84 = l_IO_println___rarg___closed__1;
x_85 = lean::string_append(x_83, x_84);
x_86 = lean::box(0);
lean::cnstr_set(x_5, 1, x_85);
lean::cnstr_set(x_5, 0, x_86);
return x_5;
}
}
else
{
obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; obj* x_94; obj* x_95; obj* x_96; uint8 x_97; 
x_87 = lean::cnstr_get(x_5, 1);
lean::inc(x_87);
lean::dec(x_5);
x_88 = l_Lean_IR_EmitCpp_emitInc___closed__3;
x_89 = lean::string_append(x_87, x_88);
x_90 = l_Prod_HasRepr___rarg___closed__1;
x_91 = lean::string_append(x_89, x_90);
x_92 = l_Nat_repr(x_1);
x_93 = l_Lean_IR_VarId_HasToString___closed__1;
x_94 = lean::string_append(x_93, x_92);
lean::dec(x_92);
x_95 = lean::string_append(x_91, x_94);
lean::dec(x_94);
x_96 = lean::mk_nat_obj(1u);
x_97 = lean::nat_dec_eq(x_2, x_96);
if (x_97 == 0)
{
obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; 
x_98 = l_List_reprAux___main___rarg___closed__1;
x_99 = lean::string_append(x_95, x_98);
x_100 = l_Nat_repr(x_2);
x_101 = lean::string_append(x_99, x_100);
lean::dec(x_100);
x_102 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_103 = lean::string_append(x_101, x_102);
x_104 = l_IO_println___rarg___closed__1;
x_105 = lean::string_append(x_103, x_104);
x_106 = lean::box(0);
x_107 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_107, 0, x_106);
lean::cnstr_set(x_107, 1, x_105);
return x_107;
}
else
{
obj* x_108; obj* x_109; obj* x_110; obj* x_111; obj* x_112; obj* x_113; 
lean::dec(x_2);
x_108 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_109 = lean::string_append(x_95, x_108);
x_110 = l_IO_println___rarg___closed__1;
x_111 = lean::string_append(x_109, x_110);
x_112 = lean::box(0);
x_113 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_113, 0, x_112);
lean::cnstr_set(x_113, 1, x_111);
return x_113;
}
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitInc___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_3);
lean::dec(x_3);
x_7 = l_Lean_IR_EmitCpp_emitInc(x_1, x_2, x_6, x_4, x_5);
lean::dec(x_4);
return x_7;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitDec___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::dec_ref");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitDec___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::dec");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitDec(obj* x_1, obj* x_2, uint8 x_3, obj* x_4, obj* x_5) {
_start:
{
if (x_3 == 0)
{
uint8 x_6; 
x_6 = !lean::is_exclusive(x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; uint8 x_18; 
x_7 = lean::cnstr_get(x_5, 1);
x_8 = lean::cnstr_get(x_5, 0);
lean::dec(x_8);
x_9 = l_Lean_IR_EmitCpp_emitDec___closed__1;
x_10 = lean::string_append(x_7, x_9);
x_11 = l_Prod_HasRepr___rarg___closed__1;
x_12 = lean::string_append(x_10, x_11);
x_13 = l_Nat_repr(x_1);
x_14 = l_Lean_IR_VarId_HasToString___closed__1;
x_15 = lean::string_append(x_14, x_13);
lean::dec(x_13);
x_16 = lean::string_append(x_12, x_15);
lean::dec(x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_dec_eq(x_2, x_17);
if (x_18 == 0)
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_19 = l_List_reprAux___main___rarg___closed__1;
x_20 = lean::string_append(x_16, x_19);
x_21 = l_Nat_repr(x_2);
x_22 = lean::string_append(x_20, x_21);
lean::dec(x_21);
x_23 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_24 = lean::string_append(x_22, x_23);
x_25 = l_IO_println___rarg___closed__1;
x_26 = lean::string_append(x_24, x_25);
x_27 = lean::box(0);
lean::cnstr_set(x_5, 1, x_26);
lean::cnstr_set(x_5, 0, x_27);
return x_5;
}
else
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
lean::dec(x_2);
x_28 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_29 = lean::string_append(x_16, x_28);
x_30 = l_IO_println___rarg___closed__1;
x_31 = lean::string_append(x_29, x_30);
x_32 = lean::box(0);
lean::cnstr_set(x_5, 1, x_31);
lean::cnstr_set(x_5, 0, x_32);
return x_5;
}
}
else
{
obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; uint8 x_43; 
x_33 = lean::cnstr_get(x_5, 1);
lean::inc(x_33);
lean::dec(x_5);
x_34 = l_Lean_IR_EmitCpp_emitDec___closed__1;
x_35 = lean::string_append(x_33, x_34);
x_36 = l_Prod_HasRepr___rarg___closed__1;
x_37 = lean::string_append(x_35, x_36);
x_38 = l_Nat_repr(x_1);
x_39 = l_Lean_IR_VarId_HasToString___closed__1;
x_40 = lean::string_append(x_39, x_38);
lean::dec(x_38);
x_41 = lean::string_append(x_37, x_40);
lean::dec(x_40);
x_42 = lean::mk_nat_obj(1u);
x_43 = lean::nat_dec_eq(x_2, x_42);
if (x_43 == 0)
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_44 = l_List_reprAux___main___rarg___closed__1;
x_45 = lean::string_append(x_41, x_44);
x_46 = l_Nat_repr(x_2);
x_47 = lean::string_append(x_45, x_46);
lean::dec(x_46);
x_48 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_49 = lean::string_append(x_47, x_48);
x_50 = l_IO_println___rarg___closed__1;
x_51 = lean::string_append(x_49, x_50);
x_52 = lean::box(0);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_51);
return x_53;
}
else
{
obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
lean::dec(x_2);
x_54 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_55 = lean::string_append(x_41, x_54);
x_56 = l_IO_println___rarg___closed__1;
x_57 = lean::string_append(x_55, x_56);
x_58 = lean::box(0);
x_59 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_57);
return x_59;
}
}
}
else
{
uint8 x_60; 
x_60 = !lean::is_exclusive(x_5);
if (x_60 == 0)
{
obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; uint8 x_72; 
x_61 = lean::cnstr_get(x_5, 1);
x_62 = lean::cnstr_get(x_5, 0);
lean::dec(x_62);
x_63 = l_Lean_IR_EmitCpp_emitDec___closed__2;
x_64 = lean::string_append(x_61, x_63);
x_65 = l_Prod_HasRepr___rarg___closed__1;
x_66 = lean::string_append(x_64, x_65);
x_67 = l_Nat_repr(x_1);
x_68 = l_Lean_IR_VarId_HasToString___closed__1;
x_69 = lean::string_append(x_68, x_67);
lean::dec(x_67);
x_70 = lean::string_append(x_66, x_69);
lean::dec(x_69);
x_71 = lean::mk_nat_obj(1u);
x_72 = lean::nat_dec_eq(x_2, x_71);
if (x_72 == 0)
{
obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; 
x_73 = l_List_reprAux___main___rarg___closed__1;
x_74 = lean::string_append(x_70, x_73);
x_75 = l_Nat_repr(x_2);
x_76 = lean::string_append(x_74, x_75);
lean::dec(x_75);
x_77 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_78 = lean::string_append(x_76, x_77);
x_79 = l_IO_println___rarg___closed__1;
x_80 = lean::string_append(x_78, x_79);
x_81 = lean::box(0);
lean::cnstr_set(x_5, 1, x_80);
lean::cnstr_set(x_5, 0, x_81);
return x_5;
}
else
{
obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; 
lean::dec(x_2);
x_82 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_83 = lean::string_append(x_70, x_82);
x_84 = l_IO_println___rarg___closed__1;
x_85 = lean::string_append(x_83, x_84);
x_86 = lean::box(0);
lean::cnstr_set(x_5, 1, x_85);
lean::cnstr_set(x_5, 0, x_86);
return x_5;
}
}
else
{
obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; obj* x_94; obj* x_95; obj* x_96; uint8 x_97; 
x_87 = lean::cnstr_get(x_5, 1);
lean::inc(x_87);
lean::dec(x_5);
x_88 = l_Lean_IR_EmitCpp_emitDec___closed__2;
x_89 = lean::string_append(x_87, x_88);
x_90 = l_Prod_HasRepr___rarg___closed__1;
x_91 = lean::string_append(x_89, x_90);
x_92 = l_Nat_repr(x_1);
x_93 = l_Lean_IR_VarId_HasToString___closed__1;
x_94 = lean::string_append(x_93, x_92);
lean::dec(x_92);
x_95 = lean::string_append(x_91, x_94);
lean::dec(x_94);
x_96 = lean::mk_nat_obj(1u);
x_97 = lean::nat_dec_eq(x_2, x_96);
if (x_97 == 0)
{
obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; 
x_98 = l_List_reprAux___main___rarg___closed__1;
x_99 = lean::string_append(x_95, x_98);
x_100 = l_Nat_repr(x_2);
x_101 = lean::string_append(x_99, x_100);
lean::dec(x_100);
x_102 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_103 = lean::string_append(x_101, x_102);
x_104 = l_IO_println___rarg___closed__1;
x_105 = lean::string_append(x_103, x_104);
x_106 = lean::box(0);
x_107 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_107, 0, x_106);
lean::cnstr_set(x_107, 1, x_105);
return x_107;
}
else
{
obj* x_108; obj* x_109; obj* x_110; obj* x_111; obj* x_112; obj* x_113; 
lean::dec(x_2);
x_108 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_109 = lean::string_append(x_95, x_108);
x_110 = l_IO_println___rarg___closed__1;
x_111 = lean::string_append(x_109, x_110);
x_112 = lean::box(0);
x_113 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_113, 0, x_112);
lean::cnstr_set(x_113, 1, x_111);
return x_113;
}
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitDec___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_3);
lean::dec(x_3);
x_7 = l_Lean_IR_EmitCpp_emitDec(x_1, x_2, x_6, x_4, x_5);
lean::dec(x_4);
return x_7;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitDel___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::free_heap_obj(");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitDel(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_5 = lean::cnstr_get(x_3, 1);
x_6 = lean::cnstr_get(x_3, 0);
lean::dec(x_6);
x_7 = l_Lean_IR_EmitCpp_emitDel___closed__1;
x_8 = lean::string_append(x_5, x_7);
x_9 = l_Nat_repr(x_1);
x_10 = l_Lean_IR_VarId_HasToString___closed__1;
x_11 = lean::string_append(x_10, x_9);
lean::dec(x_9);
x_12 = lean::string_append(x_8, x_11);
lean::dec(x_11);
x_13 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_14 = lean::string_append(x_12, x_13);
x_15 = l_IO_println___rarg___closed__1;
x_16 = lean::string_append(x_14, x_15);
x_17 = lean::box(0);
lean::cnstr_set(x_3, 1, x_16);
lean::cnstr_set(x_3, 0, x_17);
return x_3;
}
else
{
obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_18 = lean::cnstr_get(x_3, 1);
lean::inc(x_18);
lean::dec(x_3);
x_19 = l_Lean_IR_EmitCpp_emitDel___closed__1;
x_20 = lean::string_append(x_18, x_19);
x_21 = l_Nat_repr(x_1);
x_22 = l_Lean_IR_VarId_HasToString___closed__1;
x_23 = lean::string_append(x_22, x_21);
lean::dec(x_21);
x_24 = lean::string_append(x_20, x_23);
lean::dec(x_23);
x_25 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_26 = lean::string_append(x_24, x_25);
x_27 = l_IO_println___rarg___closed__1;
x_28 = lean::string_append(x_26, x_27);
x_29 = lean::box(0);
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_28);
return x_30;
}
}
}
obj* l_Lean_IR_EmitCpp_emitDel___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_emitDel(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitSetTag___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::cnstr_set_tag(");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitSetTag(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_6 = lean::cnstr_get(x_4, 1);
x_7 = lean::cnstr_get(x_4, 0);
lean::dec(x_7);
x_8 = l_Lean_IR_EmitCpp_emitSetTag___closed__1;
x_9 = lean::string_append(x_6, x_8);
x_10 = l_Nat_repr(x_1);
x_11 = l_Lean_IR_VarId_HasToString___closed__1;
x_12 = lean::string_append(x_11, x_10);
lean::dec(x_10);
x_13 = lean::string_append(x_9, x_12);
lean::dec(x_12);
x_14 = l_List_reprAux___main___rarg___closed__1;
x_15 = lean::string_append(x_13, x_14);
x_16 = l_Nat_repr(x_2);
x_17 = lean::string_append(x_15, x_16);
lean::dec(x_16);
x_18 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_19 = lean::string_append(x_17, x_18);
x_20 = l_IO_println___rarg___closed__1;
x_21 = lean::string_append(x_19, x_20);
x_22 = lean::box(0);
lean::cnstr_set(x_4, 1, x_21);
lean::cnstr_set(x_4, 0, x_22);
return x_4;
}
else
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
x_23 = lean::cnstr_get(x_4, 1);
lean::inc(x_23);
lean::dec(x_4);
x_24 = l_Lean_IR_EmitCpp_emitSetTag___closed__1;
x_25 = lean::string_append(x_23, x_24);
x_26 = l_Nat_repr(x_1);
x_27 = l_Lean_IR_VarId_HasToString___closed__1;
x_28 = lean::string_append(x_27, x_26);
lean::dec(x_26);
x_29 = lean::string_append(x_25, x_28);
lean::dec(x_28);
x_30 = l_List_reprAux___main___rarg___closed__1;
x_31 = lean::string_append(x_29, x_30);
x_32 = l_Nat_repr(x_2);
x_33 = lean::string_append(x_31, x_32);
lean::dec(x_32);
x_34 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_35 = lean::string_append(x_33, x_34);
x_36 = l_IO_println___rarg___closed__1;
x_37 = lean::string_append(x_35, x_36);
x_38 = lean::box(0);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_37);
return x_39;
}
}
}
obj* l_Lean_IR_EmitCpp_emitSetTag___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_emitSetTag(x_1, x_2, x_3, x_4);
lean::dec(x_3);
return x_5;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitSet___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::cnstr_set(");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitSet(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; 
x_6 = !lean::is_exclusive(x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_7 = lean::cnstr_get(x_5, 1);
x_8 = lean::cnstr_get(x_5, 0);
lean::dec(x_8);
x_9 = l_Lean_IR_EmitCpp_emitSet___closed__1;
x_10 = lean::string_append(x_7, x_9);
x_11 = l_Nat_repr(x_1);
x_12 = l_Lean_IR_VarId_HasToString___closed__1;
x_13 = lean::string_append(x_12, x_11);
lean::dec(x_11);
x_14 = lean::string_append(x_10, x_13);
lean::dec(x_13);
x_15 = l_List_reprAux___main___rarg___closed__1;
x_16 = lean::string_append(x_14, x_15);
x_17 = l_Nat_repr(x_2);
x_18 = lean::string_append(x_16, x_17);
lean::dec(x_17);
x_19 = lean::string_append(x_18, x_15);
x_20 = lean::box(0);
lean::cnstr_set(x_5, 1, x_19);
lean::cnstr_set(x_5, 0, x_20);
x_21 = l_Lean_IR_EmitCpp_emitArg(x_3, x_4, x_5);
if (lean::obj_tag(x_21) == 0)
{
uint8 x_22; 
x_22 = !lean::is_exclusive(x_21);
if (x_22 == 0)
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_23 = lean::cnstr_get(x_21, 1);
x_24 = lean::cnstr_get(x_21, 0);
lean::dec(x_24);
x_25 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_26 = lean::string_append(x_23, x_25);
x_27 = l_IO_println___rarg___closed__1;
x_28 = lean::string_append(x_26, x_27);
lean::cnstr_set(x_21, 1, x_28);
lean::cnstr_set(x_21, 0, x_20);
return x_21;
}
else
{
obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_29 = lean::cnstr_get(x_21, 1);
lean::inc(x_29);
lean::dec(x_21);
x_30 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_31 = lean::string_append(x_29, x_30);
x_32 = l_IO_println___rarg___closed__1;
x_33 = lean::string_append(x_31, x_32);
x_34 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_34, 0, x_20);
lean::cnstr_set(x_34, 1, x_33);
return x_34;
}
}
else
{
uint8 x_35; 
x_35 = !lean::is_exclusive(x_21);
if (x_35 == 0)
{
return x_21;
}
else
{
obj* x_36; obj* x_37; obj* x_38; 
x_36 = lean::cnstr_get(x_21, 0);
x_37 = lean::cnstr_get(x_21, 1);
lean::inc(x_37);
lean::inc(x_36);
lean::dec(x_21);
x_38 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_38, 0, x_36);
lean::cnstr_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_39 = lean::cnstr_get(x_5, 1);
lean::inc(x_39);
lean::dec(x_5);
x_40 = l_Lean_IR_EmitCpp_emitSet___closed__1;
x_41 = lean::string_append(x_39, x_40);
x_42 = l_Nat_repr(x_1);
x_43 = l_Lean_IR_VarId_HasToString___closed__1;
x_44 = lean::string_append(x_43, x_42);
lean::dec(x_42);
x_45 = lean::string_append(x_41, x_44);
lean::dec(x_44);
x_46 = l_List_reprAux___main___rarg___closed__1;
x_47 = lean::string_append(x_45, x_46);
x_48 = l_Nat_repr(x_2);
x_49 = lean::string_append(x_47, x_48);
lean::dec(x_48);
x_50 = lean::string_append(x_49, x_46);
x_51 = lean::box(0);
x_52 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_50);
x_53 = l_Lean_IR_EmitCpp_emitArg(x_3, x_4, x_52);
if (lean::obj_tag(x_53) == 0)
{
obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_54 = lean::cnstr_get(x_53, 1);
lean::inc(x_54);
if (lean::is_exclusive(x_53)) {
 lean::cnstr_release(x_53, 0);
 lean::cnstr_release(x_53, 1);
 x_55 = x_53;
} else {
 lean::dec_ref(x_53);
 x_55 = lean::box(0);
}
x_56 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_57 = lean::string_append(x_54, x_56);
x_58 = l_IO_println___rarg___closed__1;
x_59 = lean::string_append(x_57, x_58);
if (lean::is_scalar(x_55)) {
 x_60 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_60 = x_55;
}
lean::cnstr_set(x_60, 0, x_51);
lean::cnstr_set(x_60, 1, x_59);
return x_60;
}
else
{
obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
x_61 = lean::cnstr_get(x_53, 0);
lean::inc(x_61);
x_62 = lean::cnstr_get(x_53, 1);
lean::inc(x_62);
if (lean::is_exclusive(x_53)) {
 lean::cnstr_release(x_53, 0);
 lean::cnstr_release(x_53, 1);
 x_63 = x_53;
} else {
 lean::dec_ref(x_53);
 x_63 = lean::box(0);
}
if (lean::is_scalar(x_63)) {
 x_64 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_64 = x_63;
}
lean::cnstr_set(x_64, 0, x_61);
lean::cnstr_set(x_64, 1, x_62);
return x_64;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitSet___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_emitSet(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
return x_6;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitOffset___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("sizeof(void*)*");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitOffset___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" + ");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitOffset(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_lt(x_5, x_1);
if (x_6 == 0)
{
uint8 x_7; 
lean::dec(x_1);
x_7 = !lean::is_exclusive(x_4);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = lean::cnstr_get(x_4, 1);
x_9 = lean::cnstr_get(x_4, 0);
lean::dec(x_9);
x_10 = l_Nat_repr(x_2);
x_11 = lean::string_append(x_8, x_10);
lean::dec(x_10);
x_12 = lean::box(0);
lean::cnstr_set(x_4, 1, x_11);
lean::cnstr_set(x_4, 0, x_12);
return x_4;
}
else
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_13 = lean::cnstr_get(x_4, 1);
lean::inc(x_13);
lean::dec(x_4);
x_14 = l_Nat_repr(x_2);
x_15 = lean::string_append(x_13, x_14);
lean::dec(x_14);
x_16 = lean::box(0);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8 x_18; 
x_18 = !lean::is_exclusive(x_4);
if (x_18 == 0)
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; uint8 x_25; 
x_19 = lean::cnstr_get(x_4, 1);
x_20 = lean::cnstr_get(x_4, 0);
lean::dec(x_20);
x_21 = l_Lean_IR_EmitCpp_emitOffset___closed__1;
x_22 = lean::string_append(x_19, x_21);
x_23 = l_Nat_repr(x_1);
x_24 = lean::string_append(x_22, x_23);
lean::dec(x_23);
x_25 = lean::nat_dec_lt(x_5, x_2);
if (x_25 == 0)
{
obj* x_26; 
lean::dec(x_2);
x_26 = lean::box(0);
lean::cnstr_set(x_4, 1, x_24);
lean::cnstr_set(x_4, 0, x_26);
return x_4;
}
else
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_27 = l_Lean_IR_EmitCpp_emitOffset___closed__2;
x_28 = lean::string_append(x_24, x_27);
x_29 = l_Nat_repr(x_2);
x_30 = lean::string_append(x_28, x_29);
lean::dec(x_29);
x_31 = lean::box(0);
lean::cnstr_set(x_4, 1, x_30);
lean::cnstr_set(x_4, 0, x_31);
return x_4;
}
}
else
{
obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; uint8 x_37; 
x_32 = lean::cnstr_get(x_4, 1);
lean::inc(x_32);
lean::dec(x_4);
x_33 = l_Lean_IR_EmitCpp_emitOffset___closed__1;
x_34 = lean::string_append(x_32, x_33);
x_35 = l_Nat_repr(x_1);
x_36 = lean::string_append(x_34, x_35);
lean::dec(x_35);
x_37 = lean::nat_dec_lt(x_5, x_2);
if (x_37 == 0)
{
obj* x_38; obj* x_39; 
lean::dec(x_2);
x_38 = lean::box(0);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_36);
return x_39;
}
else
{
obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; 
x_40 = l_Lean_IR_EmitCpp_emitOffset___closed__2;
x_41 = lean::string_append(x_36, x_40);
x_42 = l_Nat_repr(x_2);
x_43 = lean::string_append(x_41, x_42);
lean::dec(x_42);
x_44 = lean::box(0);
x_45 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_43);
return x_45;
}
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitOffset___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_emitOffset(x_1, x_2, x_3, x_4);
lean::dec(x_3);
return x_5;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitUSet___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::cnstr_set_scalar(");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitUSet(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; 
x_6 = !lean::is_exclusive(x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_7 = lean::cnstr_get(x_5, 1);
x_8 = lean::cnstr_get(x_5, 0);
lean::dec(x_8);
x_9 = l_Lean_IR_EmitCpp_emitUSet___closed__1;
x_10 = lean::string_append(x_7, x_9);
x_11 = l_Nat_repr(x_1);
x_12 = l_Lean_IR_VarId_HasToString___closed__1;
x_13 = lean::string_append(x_12, x_11);
lean::dec(x_11);
x_14 = lean::string_append(x_10, x_13);
lean::dec(x_13);
x_15 = l_List_reprAux___main___rarg___closed__1;
x_16 = lean::string_append(x_14, x_15);
x_17 = lean::box(0);
lean::cnstr_set(x_5, 1, x_16);
lean::cnstr_set(x_5, 0, x_17);
x_18 = lean::mk_nat_obj(0u);
x_19 = l_Lean_IR_EmitCpp_emitOffset(x_2, x_18, x_4, x_5);
if (lean::obj_tag(x_19) == 0)
{
uint8 x_20; 
x_20 = !lean::is_exclusive(x_19);
if (x_20 == 0)
{
obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_21 = lean::cnstr_get(x_19, 1);
x_22 = lean::cnstr_get(x_19, 0);
lean::dec(x_22);
x_23 = lean::string_append(x_21, x_15);
x_24 = l_Nat_repr(x_3);
x_25 = lean::string_append(x_12, x_24);
lean::dec(x_24);
x_26 = lean::string_append(x_23, x_25);
lean::dec(x_25);
x_27 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_28 = lean::string_append(x_26, x_27);
x_29 = l_IO_println___rarg___closed__1;
x_30 = lean::string_append(x_28, x_29);
lean::cnstr_set(x_19, 1, x_30);
lean::cnstr_set(x_19, 0, x_17);
return x_19;
}
else
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; 
x_31 = lean::cnstr_get(x_19, 1);
lean::inc(x_31);
lean::dec(x_19);
x_32 = lean::string_append(x_31, x_15);
x_33 = l_Nat_repr(x_3);
x_34 = lean::string_append(x_12, x_33);
lean::dec(x_33);
x_35 = lean::string_append(x_32, x_34);
lean::dec(x_34);
x_36 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_37 = lean::string_append(x_35, x_36);
x_38 = l_IO_println___rarg___closed__1;
x_39 = lean::string_append(x_37, x_38);
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_17);
lean::cnstr_set(x_40, 1, x_39);
return x_40;
}
}
else
{
uint8 x_41; 
lean::dec(x_3);
x_41 = !lean::is_exclusive(x_19);
if (x_41 == 0)
{
return x_19;
}
else
{
obj* x_42; obj* x_43; obj* x_44; 
x_42 = lean::cnstr_get(x_19, 0);
x_43 = lean::cnstr_get(x_19, 1);
lean::inc(x_43);
lean::inc(x_42);
lean::dec(x_19);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_42);
lean::cnstr_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; 
x_45 = lean::cnstr_get(x_5, 1);
lean::inc(x_45);
lean::dec(x_5);
x_46 = l_Lean_IR_EmitCpp_emitUSet___closed__1;
x_47 = lean::string_append(x_45, x_46);
x_48 = l_Nat_repr(x_1);
x_49 = l_Lean_IR_VarId_HasToString___closed__1;
x_50 = lean::string_append(x_49, x_48);
lean::dec(x_48);
x_51 = lean::string_append(x_47, x_50);
lean::dec(x_50);
x_52 = l_List_reprAux___main___rarg___closed__1;
x_53 = lean::string_append(x_51, x_52);
x_54 = lean::box(0);
x_55 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_55, 0, x_54);
lean::cnstr_set(x_55, 1, x_53);
x_56 = lean::mk_nat_obj(0u);
x_57 = l_Lean_IR_EmitCpp_emitOffset(x_2, x_56, x_4, x_55);
if (lean::obj_tag(x_57) == 0)
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; 
x_58 = lean::cnstr_get(x_57, 1);
lean::inc(x_58);
if (lean::is_exclusive(x_57)) {
 lean::cnstr_release(x_57, 0);
 lean::cnstr_release(x_57, 1);
 x_59 = x_57;
} else {
 lean::dec_ref(x_57);
 x_59 = lean::box(0);
}
x_60 = lean::string_append(x_58, x_52);
x_61 = l_Nat_repr(x_3);
x_62 = lean::string_append(x_49, x_61);
lean::dec(x_61);
x_63 = lean::string_append(x_60, x_62);
lean::dec(x_62);
x_64 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_65 = lean::string_append(x_63, x_64);
x_66 = l_IO_println___rarg___closed__1;
x_67 = lean::string_append(x_65, x_66);
if (lean::is_scalar(x_59)) {
 x_68 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_68 = x_59;
}
lean::cnstr_set(x_68, 0, x_54);
lean::cnstr_set(x_68, 1, x_67);
return x_68;
}
else
{
obj* x_69; obj* x_70; obj* x_71; obj* x_72; 
lean::dec(x_3);
x_69 = lean::cnstr_get(x_57, 0);
lean::inc(x_69);
x_70 = lean::cnstr_get(x_57, 1);
lean::inc(x_70);
if (lean::is_exclusive(x_57)) {
 lean::cnstr_release(x_57, 0);
 lean::cnstr_release(x_57, 1);
 x_71 = x_57;
} else {
 lean::dec_ref(x_57);
 x_71 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_72 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_72 = x_71;
}
lean::cnstr_set(x_72, 0, x_69);
lean::cnstr_set(x_72, 1, x_70);
return x_72;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitUSet___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_emitUSet(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
return x_6;
}
}
obj* l_Lean_IR_EmitCpp_emitSSet(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_8 = lean::cnstr_get(x_6, 1);
x_9 = lean::cnstr_get(x_6, 0);
lean::dec(x_9);
x_10 = l_Lean_IR_EmitCpp_emitUSet___closed__1;
x_11 = lean::string_append(x_8, x_10);
x_12 = l_Nat_repr(x_1);
x_13 = l_Lean_IR_VarId_HasToString___closed__1;
x_14 = lean::string_append(x_13, x_12);
lean::dec(x_12);
x_15 = lean::string_append(x_11, x_14);
lean::dec(x_14);
x_16 = l_List_reprAux___main___rarg___closed__1;
x_17 = lean::string_append(x_15, x_16);
x_18 = lean::box(0);
lean::cnstr_set(x_6, 1, x_17);
lean::cnstr_set(x_6, 0, x_18);
x_19 = l_Lean_IR_EmitCpp_emitOffset(x_2, x_3, x_5, x_6);
if (lean::obj_tag(x_19) == 0)
{
uint8 x_20; 
x_20 = !lean::is_exclusive(x_19);
if (x_20 == 0)
{
obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_21 = lean::cnstr_get(x_19, 1);
x_22 = lean::cnstr_get(x_19, 0);
lean::dec(x_22);
x_23 = lean::string_append(x_21, x_16);
x_24 = l_Nat_repr(x_4);
x_25 = lean::string_append(x_13, x_24);
lean::dec(x_24);
x_26 = lean::string_append(x_23, x_25);
lean::dec(x_25);
x_27 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_28 = lean::string_append(x_26, x_27);
x_29 = l_IO_println___rarg___closed__1;
x_30 = lean::string_append(x_28, x_29);
lean::cnstr_set(x_19, 1, x_30);
lean::cnstr_set(x_19, 0, x_18);
return x_19;
}
else
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; 
x_31 = lean::cnstr_get(x_19, 1);
lean::inc(x_31);
lean::dec(x_19);
x_32 = lean::string_append(x_31, x_16);
x_33 = l_Nat_repr(x_4);
x_34 = lean::string_append(x_13, x_33);
lean::dec(x_33);
x_35 = lean::string_append(x_32, x_34);
lean::dec(x_34);
x_36 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_37 = lean::string_append(x_35, x_36);
x_38 = l_IO_println___rarg___closed__1;
x_39 = lean::string_append(x_37, x_38);
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_18);
lean::cnstr_set(x_40, 1, x_39);
return x_40;
}
}
else
{
uint8 x_41; 
lean::dec(x_4);
x_41 = !lean::is_exclusive(x_19);
if (x_41 == 0)
{
return x_19;
}
else
{
obj* x_42; obj* x_43; obj* x_44; 
x_42 = lean::cnstr_get(x_19, 0);
x_43 = lean::cnstr_get(x_19, 1);
lean::inc(x_43);
lean::inc(x_42);
lean::dec(x_19);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_42);
lean::cnstr_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; 
x_45 = lean::cnstr_get(x_6, 1);
lean::inc(x_45);
lean::dec(x_6);
x_46 = l_Lean_IR_EmitCpp_emitUSet___closed__1;
x_47 = lean::string_append(x_45, x_46);
x_48 = l_Nat_repr(x_1);
x_49 = l_Lean_IR_VarId_HasToString___closed__1;
x_50 = lean::string_append(x_49, x_48);
lean::dec(x_48);
x_51 = lean::string_append(x_47, x_50);
lean::dec(x_50);
x_52 = l_List_reprAux___main___rarg___closed__1;
x_53 = lean::string_append(x_51, x_52);
x_54 = lean::box(0);
x_55 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_55, 0, x_54);
lean::cnstr_set(x_55, 1, x_53);
x_56 = l_Lean_IR_EmitCpp_emitOffset(x_2, x_3, x_5, x_55);
if (lean::obj_tag(x_56) == 0)
{
obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
x_57 = lean::cnstr_get(x_56, 1);
lean::inc(x_57);
if (lean::is_exclusive(x_56)) {
 lean::cnstr_release(x_56, 0);
 lean::cnstr_release(x_56, 1);
 x_58 = x_56;
} else {
 lean::dec_ref(x_56);
 x_58 = lean::box(0);
}
x_59 = lean::string_append(x_57, x_52);
x_60 = l_Nat_repr(x_4);
x_61 = lean::string_append(x_49, x_60);
lean::dec(x_60);
x_62 = lean::string_append(x_59, x_61);
lean::dec(x_61);
x_63 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_64 = lean::string_append(x_62, x_63);
x_65 = l_IO_println___rarg___closed__1;
x_66 = lean::string_append(x_64, x_65);
if (lean::is_scalar(x_58)) {
 x_67 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_67 = x_58;
}
lean::cnstr_set(x_67, 0, x_54);
lean::cnstr_set(x_67, 1, x_66);
return x_67;
}
else
{
obj* x_68; obj* x_69; obj* x_70; obj* x_71; 
lean::dec(x_4);
x_68 = lean::cnstr_get(x_56, 0);
lean::inc(x_68);
x_69 = lean::cnstr_get(x_56, 1);
lean::inc(x_69);
if (lean::is_exclusive(x_56)) {
 lean::cnstr_release(x_56, 0);
 lean::cnstr_release(x_56, 1);
 x_70 = x_56;
} else {
 lean::dec_ref(x_56);
 x_70 = lean::box(0);
}
if (lean::is_scalar(x_70)) {
 x_71 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_71 = x_70;
}
lean::cnstr_set(x_71, 0, x_68);
lean::cnstr_set(x_71, 1, x_69);
return x_71;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitSSet___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_Lean_IR_EmitCpp_emitSSet(x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_5);
return x_7;
}
}
obj* _init_l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" = ");
return x_1;
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; uint8 x_8; 
x_7 = lean::mk_nat_obj(0u);
x_8 = lean::nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
uint8 x_9; 
x_9 = !lean::is_exclusive(x_6);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_10 = lean::cnstr_get(x_6, 1);
x_11 = lean::cnstr_get(x_6, 0);
lean::dec(x_11);
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_4, x_12);
lean::dec(x_4);
x_14 = lean::nat_sub(x_3, x_13);
x_15 = lean::nat_sub(x_14, x_12);
lean::dec(x_14);
x_16 = l_Lean_IR_paramInh;
x_17 = lean::array_get(x_16, x_2, x_15);
x_18 = l_Lean_IR_Arg_Inhabited;
x_19 = lean::array_get(x_18, x_1, x_15);
lean::dec(x_15);
x_20 = lean::cnstr_get(x_17, 0);
lean::inc(x_20);
lean::dec(x_17);
x_21 = l_Nat_repr(x_20);
x_22 = l_Lean_IR_VarId_HasToString___closed__1;
x_23 = lean::string_append(x_22, x_21);
lean::dec(x_21);
x_24 = lean::string_append(x_10, x_23);
lean::dec(x_23);
x_25 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___closed__1;
x_26 = lean::string_append(x_24, x_25);
x_27 = lean::box(0);
lean::cnstr_set(x_6, 1, x_26);
lean::cnstr_set(x_6, 0, x_27);
x_28 = l_Lean_IR_EmitCpp_emitArg(x_19, x_5, x_6);
if (lean::obj_tag(x_28) == 0)
{
uint8 x_29; 
x_29 = !lean::is_exclusive(x_28);
if (x_29 == 0)
{
obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
x_30 = lean::cnstr_get(x_28, 1);
x_31 = lean::cnstr_get(x_28, 0);
lean::dec(x_31);
x_32 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_33 = lean::string_append(x_30, x_32);
x_34 = l_IO_println___rarg___closed__1;
x_35 = lean::string_append(x_33, x_34);
lean::cnstr_set(x_28, 1, x_35);
lean::cnstr_set(x_28, 0, x_27);
x_4 = x_13;
x_6 = x_28;
goto _start;
}
else
{
obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
x_37 = lean::cnstr_get(x_28, 1);
lean::inc(x_37);
lean::dec(x_28);
x_38 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_39 = lean::string_append(x_37, x_38);
x_40 = l_IO_println___rarg___closed__1;
x_41 = lean::string_append(x_39, x_40);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_27);
lean::cnstr_set(x_42, 1, x_41);
x_4 = x_13;
x_6 = x_42;
goto _start;
}
}
else
{
uint8 x_44; 
lean::dec(x_13);
x_44 = !lean::is_exclusive(x_28);
if (x_44 == 0)
{
return x_28;
}
else
{
obj* x_45; obj* x_46; obj* x_47; 
x_45 = lean::cnstr_get(x_28, 0);
x_46 = lean::cnstr_get(x_28, 1);
lean::inc(x_46);
lean::inc(x_45);
lean::dec(x_28);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_45);
lean::cnstr_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; 
x_48 = lean::cnstr_get(x_6, 1);
lean::inc(x_48);
lean::dec(x_6);
x_49 = lean::mk_nat_obj(1u);
x_50 = lean::nat_sub(x_4, x_49);
lean::dec(x_4);
x_51 = lean::nat_sub(x_3, x_50);
x_52 = lean::nat_sub(x_51, x_49);
lean::dec(x_51);
x_53 = l_Lean_IR_paramInh;
x_54 = lean::array_get(x_53, x_2, x_52);
x_55 = l_Lean_IR_Arg_Inhabited;
x_56 = lean::array_get(x_55, x_1, x_52);
lean::dec(x_52);
x_57 = lean::cnstr_get(x_54, 0);
lean::inc(x_57);
lean::dec(x_54);
x_58 = l_Nat_repr(x_57);
x_59 = l_Lean_IR_VarId_HasToString___closed__1;
x_60 = lean::string_append(x_59, x_58);
lean::dec(x_58);
x_61 = lean::string_append(x_48, x_60);
lean::dec(x_60);
x_62 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___closed__1;
x_63 = lean::string_append(x_61, x_62);
x_64 = lean::box(0);
x_65 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_63);
x_66 = l_Lean_IR_EmitCpp_emitArg(x_56, x_5, x_65);
if (lean::obj_tag(x_66) == 0)
{
obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; 
x_67 = lean::cnstr_get(x_66, 1);
lean::inc(x_67);
if (lean::is_exclusive(x_66)) {
 lean::cnstr_release(x_66, 0);
 lean::cnstr_release(x_66, 1);
 x_68 = x_66;
} else {
 lean::dec_ref(x_66);
 x_68 = lean::box(0);
}
x_69 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_70 = lean::string_append(x_67, x_69);
x_71 = l_IO_println___rarg___closed__1;
x_72 = lean::string_append(x_70, x_71);
if (lean::is_scalar(x_68)) {
 x_73 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_73 = x_68;
}
lean::cnstr_set(x_73, 0, x_64);
lean::cnstr_set(x_73, 1, x_72);
x_4 = x_50;
x_6 = x_73;
goto _start;
}
else
{
obj* x_75; obj* x_76; obj* x_77; obj* x_78; 
lean::dec(x_50);
x_75 = lean::cnstr_get(x_66, 0);
lean::inc(x_75);
x_76 = lean::cnstr_get(x_66, 1);
lean::inc(x_76);
if (lean::is_exclusive(x_66)) {
 lean::cnstr_release(x_66, 0);
 lean::cnstr_release(x_66, 1);
 x_77 = x_66;
} else {
 lean::dec_ref(x_66);
 x_77 = lean::box(0);
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_75);
lean::cnstr_set(x_78, 1, x_76);
return x_78;
}
}
}
else
{
uint8 x_79; 
lean::dec(x_4);
x_79 = !lean::is_exclusive(x_6);
if (x_79 == 0)
{
obj* x_80; obj* x_81; 
x_80 = lean::cnstr_get(x_6, 0);
lean::dec(x_80);
x_81 = lean::box(0);
lean::cnstr_set(x_6, 0, x_81);
return x_6;
}
else
{
obj* x_82; obj* x_83; obj* x_84; 
x_82 = lean::cnstr_get(x_6, 1);
lean::inc(x_82);
lean::dec(x_6);
x_83 = lean::box(0);
x_84 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_84, 0, x_83);
lean::cnstr_set(x_84, 1, x_82);
return x_84;
}
}
}
}
obj* _init_l_Lean_IR_EmitCpp_emitJmp___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("invalid goto");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitJmp___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("goto ");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitJmp(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_getJPParams(x_1, x_3, x_4);
if (lean::obj_tag(x_5) == 0)
{
uint8 x_6; 
x_6 = !lean::is_exclusive(x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; uint8 x_10; 
x_7 = lean::cnstr_get(x_5, 0);
x_8 = lean::array_get_size(x_2);
x_9 = lean::array_get_size(x_7);
x_10 = lean::nat_dec_eq(x_8, x_9);
lean::dec(x_9);
if (x_10 == 0)
{
obj* x_11; 
lean::dec(x_8);
lean::dec(x_7);
lean::dec(x_1);
x_11 = l_Lean_IR_EmitCpp_emitJmp___closed__1;
lean::cnstr_set_tag(x_5, 1);
lean::cnstr_set(x_5, 0, x_11);
return x_5;
}
else
{
obj* x_12; obj* x_13; 
x_12 = lean::box(0);
lean::cnstr_set(x_5, 0, x_12);
lean::inc(x_8);
x_13 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1(x_2, x_7, x_8, x_8, x_3, x_5);
lean::dec(x_8);
lean::dec(x_7);
if (lean::obj_tag(x_13) == 0)
{
uint8 x_14; 
x_14 = !lean::is_exclusive(x_13);
if (x_14 == 0)
{
obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_15 = lean::cnstr_get(x_13, 1);
x_16 = lean::cnstr_get(x_13, 0);
lean::dec(x_16);
x_17 = l_Lean_IR_EmitCpp_emitJmp___closed__2;
x_18 = lean::string_append(x_15, x_17);
x_19 = l_Nat_repr(x_1);
x_20 = l_Lean_IR_JoinPointId_HasToString___closed__1;
x_21 = lean::string_append(x_20, x_19);
lean::dec(x_19);
x_22 = lean::string_append(x_18, x_21);
lean::dec(x_21);
x_23 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_24 = lean::string_append(x_22, x_23);
x_25 = l_IO_println___rarg___closed__1;
x_26 = lean::string_append(x_24, x_25);
lean::cnstr_set(x_13, 1, x_26);
lean::cnstr_set(x_13, 0, x_12);
return x_13;
}
else
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_27 = lean::cnstr_get(x_13, 1);
lean::inc(x_27);
lean::dec(x_13);
x_28 = l_Lean_IR_EmitCpp_emitJmp___closed__2;
x_29 = lean::string_append(x_27, x_28);
x_30 = l_Nat_repr(x_1);
x_31 = l_Lean_IR_JoinPointId_HasToString___closed__1;
x_32 = lean::string_append(x_31, x_30);
lean::dec(x_30);
x_33 = lean::string_append(x_29, x_32);
lean::dec(x_32);
x_34 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_35 = lean::string_append(x_33, x_34);
x_36 = l_IO_println___rarg___closed__1;
x_37 = lean::string_append(x_35, x_36);
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_12);
lean::cnstr_set(x_38, 1, x_37);
return x_38;
}
}
else
{
uint8 x_39; 
lean::dec(x_1);
x_39 = !lean::is_exclusive(x_13);
if (x_39 == 0)
{
return x_13;
}
else
{
obj* x_40; obj* x_41; obj* x_42; 
x_40 = lean::cnstr_get(x_13, 0);
x_41 = lean::cnstr_get(x_13, 1);
lean::inc(x_41);
lean::inc(x_40);
lean::dec(x_13);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_40);
lean::cnstr_set(x_42, 1, x_41);
return x_42;
}
}
}
}
else
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; uint8 x_47; 
x_43 = lean::cnstr_get(x_5, 0);
x_44 = lean::cnstr_get(x_5, 1);
lean::inc(x_44);
lean::inc(x_43);
lean::dec(x_5);
x_45 = lean::array_get_size(x_2);
x_46 = lean::array_get_size(x_43);
x_47 = lean::nat_dec_eq(x_45, x_46);
lean::dec(x_46);
if (x_47 == 0)
{
obj* x_48; obj* x_49; 
lean::dec(x_45);
lean::dec(x_43);
lean::dec(x_1);
x_48 = l_Lean_IR_EmitCpp_emitJmp___closed__1;
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_48);
lean::cnstr_set(x_49, 1, x_44);
return x_49;
}
else
{
obj* x_50; obj* x_51; obj* x_52; 
x_50 = lean::box(0);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_44);
lean::inc(x_45);
x_52 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1(x_2, x_43, x_45, x_45, x_3, x_51);
lean::dec(x_45);
lean::dec(x_43);
if (lean::obj_tag(x_52) == 0)
{
obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; 
x_53 = lean::cnstr_get(x_52, 1);
lean::inc(x_53);
if (lean::is_exclusive(x_52)) {
 lean::cnstr_release(x_52, 0);
 lean::cnstr_release(x_52, 1);
 x_54 = x_52;
} else {
 lean::dec_ref(x_52);
 x_54 = lean::box(0);
}
x_55 = l_Lean_IR_EmitCpp_emitJmp___closed__2;
x_56 = lean::string_append(x_53, x_55);
x_57 = l_Nat_repr(x_1);
x_58 = l_Lean_IR_JoinPointId_HasToString___closed__1;
x_59 = lean::string_append(x_58, x_57);
lean::dec(x_57);
x_60 = lean::string_append(x_56, x_59);
lean::dec(x_59);
x_61 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_62 = lean::string_append(x_60, x_61);
x_63 = l_IO_println___rarg___closed__1;
x_64 = lean::string_append(x_62, x_63);
if (lean::is_scalar(x_54)) {
 x_65 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_65 = x_54;
}
lean::cnstr_set(x_65, 0, x_50);
lean::cnstr_set(x_65, 1, x_64);
return x_65;
}
else
{
obj* x_66; obj* x_67; obj* x_68; obj* x_69; 
lean::dec(x_1);
x_66 = lean::cnstr_get(x_52, 0);
lean::inc(x_66);
x_67 = lean::cnstr_get(x_52, 1);
lean::inc(x_67);
if (lean::is_exclusive(x_52)) {
 lean::cnstr_release(x_52, 0);
 lean::cnstr_release(x_52, 1);
 x_68 = x_52;
} else {
 lean::dec_ref(x_52);
 x_68 = lean::box(0);
}
if (lean::is_scalar(x_68)) {
 x_69 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_69 = x_68;
}
lean::cnstr_set(x_69, 0, x_66);
lean::cnstr_set(x_69, 1, x_67);
return x_69;
}
}
}
}
else
{
uint8 x_70; 
lean::dec(x_1);
x_70 = !lean::is_exclusive(x_5);
if (x_70 == 0)
{
return x_5;
}
else
{
obj* x_71; obj* x_72; obj* x_73; 
x_71 = lean::cnstr_get(x_5, 0);
x_72 = lean::cnstr_get(x_5, 1);
lean::inc(x_72);
lean::inc(x_71);
lean::dec(x_5);
x_73 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_73, 0, x_71);
lean::cnstr_set(x_73, 1, x_72);
return x_73;
}
}
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_7;
}
}
obj* l_Lean_IR_EmitCpp_emitJmp___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_emitJmp(x_1, x_2, x_3, x_4);
lean::dec(x_3);
lean::dec(x_2);
return x_5;
}
}
obj* l_Lean_IR_EmitCpp_emitLhs(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_5 = lean::cnstr_get(x_3, 1);
x_6 = lean::cnstr_get(x_3, 0);
lean::dec(x_6);
x_7 = l_Nat_repr(x_1);
x_8 = l_Lean_IR_VarId_HasToString___closed__1;
x_9 = lean::string_append(x_8, x_7);
lean::dec(x_7);
x_10 = lean::string_append(x_5, x_9);
lean::dec(x_9);
x_11 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___closed__1;
x_12 = lean::string_append(x_10, x_11);
x_13 = lean::box(0);
lean::cnstr_set(x_3, 1, x_12);
lean::cnstr_set(x_3, 0, x_13);
return x_3;
}
else
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_14 = lean::cnstr_get(x_3, 1);
lean::inc(x_14);
lean::dec(x_3);
x_15 = l_Nat_repr(x_1);
x_16 = l_Lean_IR_VarId_HasToString___closed__1;
x_17 = lean::string_append(x_16, x_15);
lean::dec(x_15);
x_18 = lean::string_append(x_14, x_17);
lean::dec(x_17);
x_19 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___closed__1;
x_20 = lean::string_append(x_18, x_19);
x_21 = lean::box(0);
x_22 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_20);
return x_22;
}
}
}
obj* l_Lean_IR_EmitCpp_emitLhs___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitArgs___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; uint8 x_7; 
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; uint8 x_12; 
x_8 = lean::mk_nat_obj(1u);
x_9 = lean::nat_sub(x_3, x_8);
lean::dec(x_3);
x_10 = lean::nat_sub(x_2, x_9);
x_11 = lean::nat_sub(x_10, x_8);
lean::dec(x_10);
x_12 = lean::nat_dec_lt(x_6, x_11);
if (x_12 == 0)
{
uint8 x_13; 
x_13 = !lean::is_exclusive(x_5);
if (x_13 == 0)
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_14 = lean::cnstr_get(x_5, 0);
lean::dec(x_14);
x_15 = lean::box(0);
lean::cnstr_set(x_5, 0, x_15);
x_16 = l_Lean_IR_Arg_Inhabited;
x_17 = lean::array_get(x_16, x_1, x_11);
lean::dec(x_11);
x_18 = l_Lean_IR_EmitCpp_emitArg(x_17, x_4, x_5);
if (lean::obj_tag(x_18) == 0)
{
uint8 x_19; 
x_19 = !lean::is_exclusive(x_18);
if (x_19 == 0)
{
obj* x_20; 
x_20 = lean::cnstr_get(x_18, 0);
lean::dec(x_20);
lean::cnstr_set(x_18, 0, x_15);
x_3 = x_9;
x_5 = x_18;
goto _start;
}
else
{
obj* x_22; obj* x_23; 
x_22 = lean::cnstr_get(x_18, 1);
lean::inc(x_22);
lean::dec(x_18);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_15);
lean::cnstr_set(x_23, 1, x_22);
x_3 = x_9;
x_5 = x_23;
goto _start;
}
}
else
{
uint8 x_25; 
lean::dec(x_9);
x_25 = !lean::is_exclusive(x_18);
if (x_25 == 0)
{
return x_18;
}
else
{
obj* x_26; obj* x_27; obj* x_28; 
x_26 = lean::cnstr_get(x_18, 0);
x_27 = lean::cnstr_get(x_18, 1);
lean::inc(x_27);
lean::inc(x_26);
lean::dec(x_18);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_26);
lean::cnstr_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_29 = lean::cnstr_get(x_5, 1);
lean::inc(x_29);
lean::dec(x_5);
x_30 = lean::box(0);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_29);
x_32 = l_Lean_IR_Arg_Inhabited;
x_33 = lean::array_get(x_32, x_1, x_11);
lean::dec(x_11);
x_34 = l_Lean_IR_EmitCpp_emitArg(x_33, x_4, x_31);
if (lean::obj_tag(x_34) == 0)
{
obj* x_35; obj* x_36; obj* x_37; 
x_35 = lean::cnstr_get(x_34, 1);
lean::inc(x_35);
if (lean::is_exclusive(x_34)) {
 lean::cnstr_release(x_34, 0);
 lean::cnstr_release(x_34, 1);
 x_36 = x_34;
} else {
 lean::dec_ref(x_34);
 x_36 = lean::box(0);
}
if (lean::is_scalar(x_36)) {
 x_37 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_37 = x_36;
}
lean::cnstr_set(x_37, 0, x_30);
lean::cnstr_set(x_37, 1, x_35);
x_3 = x_9;
x_5 = x_37;
goto _start;
}
else
{
obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
lean::dec(x_9);
x_39 = lean::cnstr_get(x_34, 0);
lean::inc(x_39);
x_40 = lean::cnstr_get(x_34, 1);
lean::inc(x_40);
if (lean::is_exclusive(x_34)) {
 lean::cnstr_release(x_34, 0);
 lean::cnstr_release(x_34, 1);
 x_41 = x_34;
} else {
 lean::dec_ref(x_34);
 x_41 = lean::box(0);
}
if (lean::is_scalar(x_41)) {
 x_42 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_42 = x_41;
}
lean::cnstr_set(x_42, 0, x_39);
lean::cnstr_set(x_42, 1, x_40);
return x_42;
}
}
}
else
{
uint8 x_43; 
x_43 = !lean::is_exclusive(x_5);
if (x_43 == 0)
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_44 = lean::cnstr_get(x_5, 1);
x_45 = lean::cnstr_get(x_5, 0);
lean::dec(x_45);
x_46 = l_List_reprAux___main___rarg___closed__1;
x_47 = lean::string_append(x_44, x_46);
x_48 = lean::box(0);
lean::cnstr_set(x_5, 1, x_47);
lean::cnstr_set(x_5, 0, x_48);
x_49 = l_Lean_IR_Arg_Inhabited;
x_50 = lean::array_get(x_49, x_1, x_11);
lean::dec(x_11);
x_51 = l_Lean_IR_EmitCpp_emitArg(x_50, x_4, x_5);
if (lean::obj_tag(x_51) == 0)
{
uint8 x_52; 
x_52 = !lean::is_exclusive(x_51);
if (x_52 == 0)
{
obj* x_53; 
x_53 = lean::cnstr_get(x_51, 0);
lean::dec(x_53);
lean::cnstr_set(x_51, 0, x_48);
x_3 = x_9;
x_5 = x_51;
goto _start;
}
else
{
obj* x_55; obj* x_56; 
x_55 = lean::cnstr_get(x_51, 1);
lean::inc(x_55);
lean::dec(x_51);
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_48);
lean::cnstr_set(x_56, 1, x_55);
x_3 = x_9;
x_5 = x_56;
goto _start;
}
}
else
{
uint8 x_58; 
lean::dec(x_9);
x_58 = !lean::is_exclusive(x_51);
if (x_58 == 0)
{
return x_51;
}
else
{
obj* x_59; obj* x_60; obj* x_61; 
x_59 = lean::cnstr_get(x_51, 0);
x_60 = lean::cnstr_get(x_51, 1);
lean::inc(x_60);
lean::inc(x_59);
lean::dec(x_51);
x_61 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_61, 0, x_59);
lean::cnstr_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; 
x_62 = lean::cnstr_get(x_5, 1);
lean::inc(x_62);
lean::dec(x_5);
x_63 = l_List_reprAux___main___rarg___closed__1;
x_64 = lean::string_append(x_62, x_63);
x_65 = lean::box(0);
x_66 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_64);
x_67 = l_Lean_IR_Arg_Inhabited;
x_68 = lean::array_get(x_67, x_1, x_11);
lean::dec(x_11);
x_69 = l_Lean_IR_EmitCpp_emitArg(x_68, x_4, x_66);
if (lean::obj_tag(x_69) == 0)
{
obj* x_70; obj* x_71; obj* x_72; 
x_70 = lean::cnstr_get(x_69, 1);
lean::inc(x_70);
if (lean::is_exclusive(x_69)) {
 lean::cnstr_release(x_69, 0);
 lean::cnstr_release(x_69, 1);
 x_71 = x_69;
} else {
 lean::dec_ref(x_69);
 x_71 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_72 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_72 = x_71;
}
lean::cnstr_set(x_72, 0, x_65);
lean::cnstr_set(x_72, 1, x_70);
x_3 = x_9;
x_5 = x_72;
goto _start;
}
else
{
obj* x_74; obj* x_75; obj* x_76; obj* x_77; 
lean::dec(x_9);
x_74 = lean::cnstr_get(x_69, 0);
lean::inc(x_74);
x_75 = lean::cnstr_get(x_69, 1);
lean::inc(x_75);
if (lean::is_exclusive(x_69)) {
 lean::cnstr_release(x_69, 0);
 lean::cnstr_release(x_69, 1);
 x_76 = x_69;
} else {
 lean::dec_ref(x_69);
 x_76 = lean::box(0);
}
if (lean::is_scalar(x_76)) {
 x_77 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_77 = x_76;
}
lean::cnstr_set(x_77, 0, x_74);
lean::cnstr_set(x_77, 1, x_75);
return x_77;
}
}
}
}
else
{
uint8 x_78; 
lean::dec(x_3);
x_78 = !lean::is_exclusive(x_5);
if (x_78 == 0)
{
obj* x_79; obj* x_80; 
x_79 = lean::cnstr_get(x_5, 0);
lean::dec(x_79);
x_80 = lean::box(0);
lean::cnstr_set(x_5, 0, x_80);
return x_5;
}
else
{
obj* x_81; obj* x_82; obj* x_83; 
x_81 = lean::cnstr_get(x_5, 1);
lean::inc(x_81);
lean::dec(x_5);
x_82 = lean::box(0);
x_83 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_83, 0, x_82);
lean::cnstr_set(x_83, 1, x_81);
return x_83;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitArgs(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = lean::array_get_size(x_1);
lean::inc(x_4);
x_5 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitArgs___spec__1(x_1, x_4, x_4, x_2, x_3);
lean::dec(x_4);
return x_5;
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitArgs___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitArgs___spec__1(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
return x_6;
}
}
obj* l_Lean_IR_EmitCpp_emitArgs___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_emitArgs(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitCtorScalarSize___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("sizeof(size_t)*");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitCtorScalarSize(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
uint8 x_7; 
x_7 = lean::nat_dec_eq(x_2, x_5);
if (x_7 == 0)
{
uint8 x_8; 
x_8 = !lean::is_exclusive(x_4);
if (x_8 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_9 = lean::cnstr_get(x_4, 1);
x_10 = lean::cnstr_get(x_4, 0);
lean::dec(x_10);
x_11 = l_Lean_IR_EmitCpp_emitCtorScalarSize___closed__1;
x_12 = lean::string_append(x_9, x_11);
x_13 = l_Nat_repr(x_1);
x_14 = lean::string_append(x_12, x_13);
lean::dec(x_13);
x_15 = l_Lean_IR_EmitCpp_emitOffset___closed__2;
x_16 = lean::string_append(x_14, x_15);
x_17 = l_Nat_repr(x_2);
x_18 = lean::string_append(x_16, x_17);
lean::dec(x_17);
x_19 = lean::box(0);
lean::cnstr_set(x_4, 1, x_18);
lean::cnstr_set(x_4, 0, x_19);
return x_4;
}
else
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_20 = lean::cnstr_get(x_4, 1);
lean::inc(x_20);
lean::dec(x_4);
x_21 = l_Lean_IR_EmitCpp_emitCtorScalarSize___closed__1;
x_22 = lean::string_append(x_20, x_21);
x_23 = l_Nat_repr(x_1);
x_24 = lean::string_append(x_22, x_23);
lean::dec(x_23);
x_25 = l_Lean_IR_EmitCpp_emitOffset___closed__2;
x_26 = lean::string_append(x_24, x_25);
x_27 = l_Nat_repr(x_2);
x_28 = lean::string_append(x_26, x_27);
lean::dec(x_27);
x_29 = lean::box(0);
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_28);
return x_30;
}
}
else
{
uint8 x_31; 
lean::dec(x_2);
x_31 = !lean::is_exclusive(x_4);
if (x_31 == 0)
{
obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_32 = lean::cnstr_get(x_4, 1);
x_33 = lean::cnstr_get(x_4, 0);
lean::dec(x_33);
x_34 = l_Lean_IR_EmitCpp_emitCtorScalarSize___closed__1;
x_35 = lean::string_append(x_32, x_34);
x_36 = l_Nat_repr(x_1);
x_37 = lean::string_append(x_35, x_36);
lean::dec(x_36);
x_38 = lean::box(0);
lean::cnstr_set(x_4, 1, x_37);
lean::cnstr_set(x_4, 0, x_38);
return x_4;
}
else
{
obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; 
x_39 = lean::cnstr_get(x_4, 1);
lean::inc(x_39);
lean::dec(x_4);
x_40 = l_Lean_IR_EmitCpp_emitCtorScalarSize___closed__1;
x_41 = lean::string_append(x_39, x_40);
x_42 = l_Nat_repr(x_1);
x_43 = lean::string_append(x_41, x_42);
lean::dec(x_42);
x_44 = lean::box(0);
x_45 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_43);
return x_45;
}
}
}
else
{
uint8 x_46; 
lean::dec(x_1);
x_46 = !lean::is_exclusive(x_4);
if (x_46 == 0)
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_47 = lean::cnstr_get(x_4, 1);
x_48 = lean::cnstr_get(x_4, 0);
lean::dec(x_48);
x_49 = l_Nat_repr(x_2);
x_50 = lean::string_append(x_47, x_49);
lean::dec(x_49);
x_51 = lean::box(0);
lean::cnstr_set(x_4, 1, x_50);
lean::cnstr_set(x_4, 0, x_51);
return x_4;
}
else
{
obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; 
x_52 = lean::cnstr_get(x_4, 1);
lean::inc(x_52);
lean::dec(x_4);
x_53 = l_Nat_repr(x_2);
x_54 = lean::string_append(x_52, x_53);
lean::dec(x_53);
x_55 = lean::box(0);
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_55);
lean::cnstr_set(x_56, 1, x_54);
return x_56;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitCtorScalarSize___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_emitCtorScalarSize(x_1, x_2, x_3, x_4);
lean::dec(x_3);
return x_5;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitAllocCtor___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::alloc_cnstr(");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitAllocCtor(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_5 = lean::cnstr_get(x_3, 1);
x_6 = lean::cnstr_get(x_3, 0);
lean::dec(x_6);
x_7 = l_Lean_IR_EmitCpp_emitAllocCtor___closed__1;
x_8 = lean::string_append(x_5, x_7);
x_9 = lean::cnstr_get(x_1, 1);
lean::inc(x_9);
x_10 = l_Nat_repr(x_9);
x_11 = lean::string_append(x_8, x_10);
lean::dec(x_10);
x_12 = l_List_reprAux___main___rarg___closed__1;
x_13 = lean::string_append(x_11, x_12);
x_14 = lean::cnstr_get(x_1, 2);
lean::inc(x_14);
x_15 = l_Nat_repr(x_14);
x_16 = lean::string_append(x_13, x_15);
lean::dec(x_15);
x_17 = lean::string_append(x_16, x_12);
x_18 = lean::box(0);
lean::cnstr_set(x_3, 1, x_17);
lean::cnstr_set(x_3, 0, x_18);
x_19 = lean::cnstr_get(x_1, 3);
lean::inc(x_19);
x_20 = lean::cnstr_get(x_1, 4);
lean::inc(x_20);
lean::dec(x_1);
x_21 = l_Lean_IR_EmitCpp_emitCtorScalarSize(x_19, x_20, x_2, x_3);
if (lean::obj_tag(x_21) == 0)
{
uint8 x_22; 
x_22 = !lean::is_exclusive(x_21);
if (x_22 == 0)
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_23 = lean::cnstr_get(x_21, 1);
x_24 = lean::cnstr_get(x_21, 0);
lean::dec(x_24);
x_25 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_26 = lean::string_append(x_23, x_25);
x_27 = l_IO_println___rarg___closed__1;
x_28 = lean::string_append(x_26, x_27);
lean::cnstr_set(x_21, 1, x_28);
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_29 = lean::cnstr_get(x_21, 1);
lean::inc(x_29);
lean::dec(x_21);
x_30 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_31 = lean::string_append(x_29, x_30);
x_32 = l_IO_println___rarg___closed__1;
x_33 = lean::string_append(x_31, x_32);
x_34 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_34, 0, x_18);
lean::cnstr_set(x_34, 1, x_33);
return x_34;
}
}
else
{
uint8 x_35; 
x_35 = !lean::is_exclusive(x_21);
if (x_35 == 0)
{
return x_21;
}
else
{
obj* x_36; obj* x_37; obj* x_38; 
x_36 = lean::cnstr_get(x_21, 0);
x_37 = lean::cnstr_get(x_21, 1);
lean::inc(x_37);
lean::inc(x_36);
lean::dec(x_21);
x_38 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_38, 0, x_36);
lean::cnstr_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
x_39 = lean::cnstr_get(x_3, 1);
lean::inc(x_39);
lean::dec(x_3);
x_40 = l_Lean_IR_EmitCpp_emitAllocCtor___closed__1;
x_41 = lean::string_append(x_39, x_40);
x_42 = lean::cnstr_get(x_1, 1);
lean::inc(x_42);
x_43 = l_Nat_repr(x_42);
x_44 = lean::string_append(x_41, x_43);
lean::dec(x_43);
x_45 = l_List_reprAux___main___rarg___closed__1;
x_46 = lean::string_append(x_44, x_45);
x_47 = lean::cnstr_get(x_1, 2);
lean::inc(x_47);
x_48 = l_Nat_repr(x_47);
x_49 = lean::string_append(x_46, x_48);
lean::dec(x_48);
x_50 = lean::string_append(x_49, x_45);
x_51 = lean::box(0);
x_52 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_50);
x_53 = lean::cnstr_get(x_1, 3);
lean::inc(x_53);
x_54 = lean::cnstr_get(x_1, 4);
lean::inc(x_54);
lean::dec(x_1);
x_55 = l_Lean_IR_EmitCpp_emitCtorScalarSize(x_53, x_54, x_2, x_52);
if (lean::obj_tag(x_55) == 0)
{
obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
x_56 = lean::cnstr_get(x_55, 1);
lean::inc(x_56);
if (lean::is_exclusive(x_55)) {
 lean::cnstr_release(x_55, 0);
 lean::cnstr_release(x_55, 1);
 x_57 = x_55;
} else {
 lean::dec_ref(x_55);
 x_57 = lean::box(0);
}
x_58 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_59 = lean::string_append(x_56, x_58);
x_60 = l_IO_println___rarg___closed__1;
x_61 = lean::string_append(x_59, x_60);
if (lean::is_scalar(x_57)) {
 x_62 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_62 = x_57;
}
lean::cnstr_set(x_62, 0, x_51);
lean::cnstr_set(x_62, 1, x_61);
return x_62;
}
else
{
obj* x_63; obj* x_64; obj* x_65; obj* x_66; 
x_63 = lean::cnstr_get(x_55, 0);
lean::inc(x_63);
x_64 = lean::cnstr_get(x_55, 1);
lean::inc(x_64);
if (lean::is_exclusive(x_55)) {
 lean::cnstr_release(x_55, 0);
 lean::cnstr_release(x_55, 1);
 x_65 = x_55;
} else {
 lean::dec_ref(x_55);
 x_65 = lean::box(0);
}
if (lean::is_scalar(x_65)) {
 x_66 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_66 = x_65;
}
lean::cnstr_set(x_66, 0, x_63);
lean::cnstr_set(x_66, 1, x_64);
return x_66;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitAllocCtor___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_emitAllocCtor(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitCtorSetArgs___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; uint8 x_8; 
x_7 = lean::mk_nat_obj(0u);
x_8 = lean::nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
uint8 x_9; 
x_9 = !lean::is_exclusive(x_6);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_10 = lean::cnstr_get(x_6, 1);
x_11 = lean::cnstr_get(x_6, 0);
lean::dec(x_11);
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_4, x_12);
lean::dec(x_4);
x_14 = lean::nat_sub(x_3, x_13);
x_15 = lean::nat_sub(x_14, x_12);
lean::dec(x_14);
x_16 = l_Lean_IR_EmitCpp_emitSet___closed__1;
x_17 = lean::string_append(x_10, x_16);
lean::inc(x_1);
x_18 = l_Nat_repr(x_1);
x_19 = l_Lean_IR_VarId_HasToString___closed__1;
x_20 = lean::string_append(x_19, x_18);
lean::dec(x_18);
x_21 = lean::string_append(x_17, x_20);
lean::dec(x_20);
x_22 = l_List_reprAux___main___rarg___closed__1;
x_23 = lean::string_append(x_21, x_22);
lean::inc(x_15);
x_24 = l_Nat_repr(x_15);
x_25 = lean::string_append(x_23, x_24);
lean::dec(x_24);
x_26 = lean::string_append(x_25, x_22);
x_27 = lean::box(0);
lean::cnstr_set(x_6, 1, x_26);
lean::cnstr_set(x_6, 0, x_27);
x_28 = l_Lean_IR_Arg_Inhabited;
x_29 = lean::array_get(x_28, x_2, x_15);
lean::dec(x_15);
x_30 = l_Lean_IR_EmitCpp_emitArg(x_29, x_5, x_6);
if (lean::obj_tag(x_30) == 0)
{
uint8 x_31; 
x_31 = !lean::is_exclusive(x_30);
if (x_31 == 0)
{
obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
x_32 = lean::cnstr_get(x_30, 1);
x_33 = lean::cnstr_get(x_30, 0);
lean::dec(x_33);
x_34 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_35 = lean::string_append(x_32, x_34);
x_36 = l_IO_println___rarg___closed__1;
x_37 = lean::string_append(x_35, x_36);
lean::cnstr_set(x_30, 1, x_37);
lean::cnstr_set(x_30, 0, x_27);
x_4 = x_13;
x_6 = x_30;
goto _start;
}
else
{
obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; 
x_39 = lean::cnstr_get(x_30, 1);
lean::inc(x_39);
lean::dec(x_30);
x_40 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_41 = lean::string_append(x_39, x_40);
x_42 = l_IO_println___rarg___closed__1;
x_43 = lean::string_append(x_41, x_42);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_27);
lean::cnstr_set(x_44, 1, x_43);
x_4 = x_13;
x_6 = x_44;
goto _start;
}
}
else
{
uint8 x_46; 
lean::dec(x_13);
lean::dec(x_1);
x_46 = !lean::is_exclusive(x_30);
if (x_46 == 0)
{
return x_30;
}
else
{
obj* x_47; obj* x_48; obj* x_49; 
x_47 = lean::cnstr_get(x_30, 0);
x_48 = lean::cnstr_get(x_30, 1);
lean::inc(x_48);
lean::inc(x_47);
lean::dec(x_30);
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_47);
lean::cnstr_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_50 = lean::cnstr_get(x_6, 1);
lean::inc(x_50);
lean::dec(x_6);
x_51 = lean::mk_nat_obj(1u);
x_52 = lean::nat_sub(x_4, x_51);
lean::dec(x_4);
x_53 = lean::nat_sub(x_3, x_52);
x_54 = lean::nat_sub(x_53, x_51);
lean::dec(x_53);
x_55 = l_Lean_IR_EmitCpp_emitSet___closed__1;
x_56 = lean::string_append(x_50, x_55);
lean::inc(x_1);
x_57 = l_Nat_repr(x_1);
x_58 = l_Lean_IR_VarId_HasToString___closed__1;
x_59 = lean::string_append(x_58, x_57);
lean::dec(x_57);
x_60 = lean::string_append(x_56, x_59);
lean::dec(x_59);
x_61 = l_List_reprAux___main___rarg___closed__1;
x_62 = lean::string_append(x_60, x_61);
lean::inc(x_54);
x_63 = l_Nat_repr(x_54);
x_64 = lean::string_append(x_62, x_63);
lean::dec(x_63);
x_65 = lean::string_append(x_64, x_61);
x_66 = lean::box(0);
x_67 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_65);
x_68 = l_Lean_IR_Arg_Inhabited;
x_69 = lean::array_get(x_68, x_2, x_54);
lean::dec(x_54);
x_70 = l_Lean_IR_EmitCpp_emitArg(x_69, x_5, x_67);
if (lean::obj_tag(x_70) == 0)
{
obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; 
x_71 = lean::cnstr_get(x_70, 1);
lean::inc(x_71);
if (lean::is_exclusive(x_70)) {
 lean::cnstr_release(x_70, 0);
 lean::cnstr_release(x_70, 1);
 x_72 = x_70;
} else {
 lean::dec_ref(x_70);
 x_72 = lean::box(0);
}
x_73 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_74 = lean::string_append(x_71, x_73);
x_75 = l_IO_println___rarg___closed__1;
x_76 = lean::string_append(x_74, x_75);
if (lean::is_scalar(x_72)) {
 x_77 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_77 = x_72;
}
lean::cnstr_set(x_77, 0, x_66);
lean::cnstr_set(x_77, 1, x_76);
x_4 = x_52;
x_6 = x_77;
goto _start;
}
else
{
obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
lean::dec(x_52);
lean::dec(x_1);
x_79 = lean::cnstr_get(x_70, 0);
lean::inc(x_79);
x_80 = lean::cnstr_get(x_70, 1);
lean::inc(x_80);
if (lean::is_exclusive(x_70)) {
 lean::cnstr_release(x_70, 0);
 lean::cnstr_release(x_70, 1);
 x_81 = x_70;
} else {
 lean::dec_ref(x_70);
 x_81 = lean::box(0);
}
if (lean::is_scalar(x_81)) {
 x_82 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_82 = x_81;
}
lean::cnstr_set(x_82, 0, x_79);
lean::cnstr_set(x_82, 1, x_80);
return x_82;
}
}
}
else
{
uint8 x_83; 
lean::dec(x_4);
lean::dec(x_1);
x_83 = !lean::is_exclusive(x_6);
if (x_83 == 0)
{
obj* x_84; obj* x_85; 
x_84 = lean::cnstr_get(x_6, 0);
lean::dec(x_84);
x_85 = lean::box(0);
lean::cnstr_set(x_6, 0, x_85);
return x_6;
}
else
{
obj* x_86; obj* x_87; obj* x_88; 
x_86 = lean::cnstr_get(x_6, 1);
lean::inc(x_86);
lean::dec(x_6);
x_87 = lean::box(0);
x_88 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_88, 0, x_87);
lean::cnstr_set(x_88, 1, x_86);
return x_88;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitCtorSetArgs(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; 
x_5 = lean::array_get_size(x_2);
lean::inc(x_5);
x_6 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitCtorSetArgs___spec__1(x_1, x_2, x_5, x_5, x_3, x_4);
lean::dec(x_5);
return x_6;
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitCtorSetArgs___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitCtorSetArgs___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_2);
return x_7;
}
}
obj* l_Lean_IR_EmitCpp_emitCtorSetArgs___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_2, x_3, x_4);
lean::dec(x_3);
lean::dec(x_2);
return x_5;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitCtor___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::box(");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitCtor(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
lean::inc(x_1);
x_6 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_5);
if (lean::obj_tag(x_6) == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; uint8 x_13; 
x_8 = lean::cnstr_get(x_6, 1);
x_9 = lean::cnstr_get(x_6, 0);
lean::dec(x_9);
x_10 = lean::box(0);
lean::inc(x_8);
lean::cnstr_set(x_6, 0, x_10);
x_11 = lean::cnstr_get(x_2, 2);
lean::inc(x_11);
x_12 = lean::mk_nat_obj(0u);
x_13 = lean::nat_dec_eq(x_11, x_12);
lean::dec(x_11);
if (x_13 == 0)
{
obj* x_14; 
lean::dec(x_8);
x_14 = l_Lean_IR_EmitCpp_emitAllocCtor(x_2, x_4, x_6);
if (lean::obj_tag(x_14) == 0)
{
uint8 x_15; 
x_15 = !lean::is_exclusive(x_14);
if (x_15 == 0)
{
obj* x_16; obj* x_17; 
x_16 = lean::cnstr_get(x_14, 0);
lean::dec(x_16);
lean::cnstr_set(x_14, 0, x_10);
x_17 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_3, x_4, x_14);
return x_17;
}
else
{
obj* x_18; obj* x_19; obj* x_20; 
x_18 = lean::cnstr_get(x_14, 1);
lean::inc(x_18);
lean::dec(x_14);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_10);
lean::cnstr_set(x_19, 1, x_18);
x_20 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_3, x_4, x_19);
return x_20;
}
}
else
{
uint8 x_21; 
lean::dec(x_1);
x_21 = !lean::is_exclusive(x_14);
if (x_21 == 0)
{
return x_14;
}
else
{
obj* x_22; obj* x_23; obj* x_24; 
x_22 = lean::cnstr_get(x_14, 0);
x_23 = lean::cnstr_get(x_14, 1);
lean::inc(x_23);
lean::inc(x_22);
lean::dec(x_14);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_22);
lean::cnstr_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
obj* x_25; uint8 x_26; 
x_25 = lean::cnstr_get(x_2, 3);
lean::inc(x_25);
x_26 = lean::nat_dec_eq(x_25, x_12);
lean::dec(x_25);
if (x_26 == 0)
{
obj* x_27; 
lean::dec(x_8);
x_27 = l_Lean_IR_EmitCpp_emitAllocCtor(x_2, x_4, x_6);
if (lean::obj_tag(x_27) == 0)
{
uint8 x_28; 
x_28 = !lean::is_exclusive(x_27);
if (x_28 == 0)
{
obj* x_29; obj* x_30; 
x_29 = lean::cnstr_get(x_27, 0);
lean::dec(x_29);
lean::cnstr_set(x_27, 0, x_10);
x_30 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_3, x_4, x_27);
return x_30;
}
else
{
obj* x_31; obj* x_32; obj* x_33; 
x_31 = lean::cnstr_get(x_27, 1);
lean::inc(x_31);
lean::dec(x_27);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_10);
lean::cnstr_set(x_32, 1, x_31);
x_33 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_3, x_4, x_32);
return x_33;
}
}
else
{
uint8 x_34; 
lean::dec(x_1);
x_34 = !lean::is_exclusive(x_27);
if (x_34 == 0)
{
return x_27;
}
else
{
obj* x_35; obj* x_36; obj* x_37; 
x_35 = lean::cnstr_get(x_27, 0);
x_36 = lean::cnstr_get(x_27, 1);
lean::inc(x_36);
lean::inc(x_35);
lean::dec(x_27);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_35);
lean::cnstr_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
obj* x_38; uint8 x_39; 
x_38 = lean::cnstr_get(x_2, 4);
lean::inc(x_38);
x_39 = lean::nat_dec_eq(x_38, x_12);
lean::dec(x_38);
if (x_39 == 0)
{
obj* x_40; 
lean::dec(x_8);
x_40 = l_Lean_IR_EmitCpp_emitAllocCtor(x_2, x_4, x_6);
if (lean::obj_tag(x_40) == 0)
{
uint8 x_41; 
x_41 = !lean::is_exclusive(x_40);
if (x_41 == 0)
{
obj* x_42; obj* x_43; 
x_42 = lean::cnstr_get(x_40, 0);
lean::dec(x_42);
lean::cnstr_set(x_40, 0, x_10);
x_43 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_3, x_4, x_40);
return x_43;
}
else
{
obj* x_44; obj* x_45; obj* x_46; 
x_44 = lean::cnstr_get(x_40, 1);
lean::inc(x_44);
lean::dec(x_40);
x_45 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_45, 0, x_10);
lean::cnstr_set(x_45, 1, x_44);
x_46 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_3, x_4, x_45);
return x_46;
}
}
else
{
uint8 x_47; 
lean::dec(x_1);
x_47 = !lean::is_exclusive(x_40);
if (x_47 == 0)
{
return x_40;
}
else
{
obj* x_48; obj* x_49; obj* x_50; 
x_48 = lean::cnstr_get(x_40, 0);
x_49 = lean::cnstr_get(x_40, 1);
lean::inc(x_49);
lean::inc(x_48);
lean::dec(x_40);
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_48);
lean::cnstr_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
lean::dec(x_6);
lean::dec(x_1);
x_51 = l_Lean_IR_EmitCpp_emitCtor___closed__1;
x_52 = lean::string_append(x_8, x_51);
x_53 = lean::cnstr_get(x_2, 1);
lean::inc(x_53);
lean::dec(x_2);
x_54 = l_Nat_repr(x_53);
x_55 = lean::string_append(x_52, x_54);
lean::dec(x_54);
x_56 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_57 = lean::string_append(x_55, x_56);
x_58 = l_IO_println___rarg___closed__1;
x_59 = lean::string_append(x_57, x_58);
x_60 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_60, 0, x_10);
lean::cnstr_set(x_60, 1, x_59);
return x_60;
}
}
}
}
else
{
obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; uint8 x_66; 
x_61 = lean::cnstr_get(x_6, 1);
lean::inc(x_61);
lean::dec(x_6);
x_62 = lean::box(0);
lean::inc(x_61);
x_63 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_61);
x_64 = lean::cnstr_get(x_2, 2);
lean::inc(x_64);
x_65 = lean::mk_nat_obj(0u);
x_66 = lean::nat_dec_eq(x_64, x_65);
lean::dec(x_64);
if (x_66 == 0)
{
obj* x_67; 
lean::dec(x_61);
x_67 = l_Lean_IR_EmitCpp_emitAllocCtor(x_2, x_4, x_63);
if (lean::obj_tag(x_67) == 0)
{
obj* x_68; obj* x_69; obj* x_70; obj* x_71; 
x_68 = lean::cnstr_get(x_67, 1);
lean::inc(x_68);
if (lean::is_exclusive(x_67)) {
 lean::cnstr_release(x_67, 0);
 lean::cnstr_release(x_67, 1);
 x_69 = x_67;
} else {
 lean::dec_ref(x_67);
 x_69 = lean::box(0);
}
if (lean::is_scalar(x_69)) {
 x_70 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_70 = x_69;
}
lean::cnstr_set(x_70, 0, x_62);
lean::cnstr_set(x_70, 1, x_68);
x_71 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_3, x_4, x_70);
return x_71;
}
else
{
obj* x_72; obj* x_73; obj* x_74; obj* x_75; 
lean::dec(x_1);
x_72 = lean::cnstr_get(x_67, 0);
lean::inc(x_72);
x_73 = lean::cnstr_get(x_67, 1);
lean::inc(x_73);
if (lean::is_exclusive(x_67)) {
 lean::cnstr_release(x_67, 0);
 lean::cnstr_release(x_67, 1);
 x_74 = x_67;
} else {
 lean::dec_ref(x_67);
 x_74 = lean::box(0);
}
if (lean::is_scalar(x_74)) {
 x_75 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_75 = x_74;
}
lean::cnstr_set(x_75, 0, x_72);
lean::cnstr_set(x_75, 1, x_73);
return x_75;
}
}
else
{
obj* x_76; uint8 x_77; 
x_76 = lean::cnstr_get(x_2, 3);
lean::inc(x_76);
x_77 = lean::nat_dec_eq(x_76, x_65);
lean::dec(x_76);
if (x_77 == 0)
{
obj* x_78; 
lean::dec(x_61);
x_78 = l_Lean_IR_EmitCpp_emitAllocCtor(x_2, x_4, x_63);
if (lean::obj_tag(x_78) == 0)
{
obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
x_79 = lean::cnstr_get(x_78, 1);
lean::inc(x_79);
if (lean::is_exclusive(x_78)) {
 lean::cnstr_release(x_78, 0);
 lean::cnstr_release(x_78, 1);
 x_80 = x_78;
} else {
 lean::dec_ref(x_78);
 x_80 = lean::box(0);
}
if (lean::is_scalar(x_80)) {
 x_81 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_81 = x_80;
}
lean::cnstr_set(x_81, 0, x_62);
lean::cnstr_set(x_81, 1, x_79);
x_82 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_3, x_4, x_81);
return x_82;
}
else
{
obj* x_83; obj* x_84; obj* x_85; obj* x_86; 
lean::dec(x_1);
x_83 = lean::cnstr_get(x_78, 0);
lean::inc(x_83);
x_84 = lean::cnstr_get(x_78, 1);
lean::inc(x_84);
if (lean::is_exclusive(x_78)) {
 lean::cnstr_release(x_78, 0);
 lean::cnstr_release(x_78, 1);
 x_85 = x_78;
} else {
 lean::dec_ref(x_78);
 x_85 = lean::box(0);
}
if (lean::is_scalar(x_85)) {
 x_86 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_86 = x_85;
}
lean::cnstr_set(x_86, 0, x_83);
lean::cnstr_set(x_86, 1, x_84);
return x_86;
}
}
else
{
obj* x_87; uint8 x_88; 
x_87 = lean::cnstr_get(x_2, 4);
lean::inc(x_87);
x_88 = lean::nat_dec_eq(x_87, x_65);
lean::dec(x_87);
if (x_88 == 0)
{
obj* x_89; 
lean::dec(x_61);
x_89 = l_Lean_IR_EmitCpp_emitAllocCtor(x_2, x_4, x_63);
if (lean::obj_tag(x_89) == 0)
{
obj* x_90; obj* x_91; obj* x_92; obj* x_93; 
x_90 = lean::cnstr_get(x_89, 1);
lean::inc(x_90);
if (lean::is_exclusive(x_89)) {
 lean::cnstr_release(x_89, 0);
 lean::cnstr_release(x_89, 1);
 x_91 = x_89;
} else {
 lean::dec_ref(x_89);
 x_91 = lean::box(0);
}
if (lean::is_scalar(x_91)) {
 x_92 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_92 = x_91;
}
lean::cnstr_set(x_92, 0, x_62);
lean::cnstr_set(x_92, 1, x_90);
x_93 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_3, x_4, x_92);
return x_93;
}
else
{
obj* x_94; obj* x_95; obj* x_96; obj* x_97; 
lean::dec(x_1);
x_94 = lean::cnstr_get(x_89, 0);
lean::inc(x_94);
x_95 = lean::cnstr_get(x_89, 1);
lean::inc(x_95);
if (lean::is_exclusive(x_89)) {
 lean::cnstr_release(x_89, 0);
 lean::cnstr_release(x_89, 1);
 x_96 = x_89;
} else {
 lean::dec_ref(x_89);
 x_96 = lean::box(0);
}
if (lean::is_scalar(x_96)) {
 x_97 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_97 = x_96;
}
lean::cnstr_set(x_97, 0, x_94);
lean::cnstr_set(x_97, 1, x_95);
return x_97;
}
}
else
{
obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; 
lean::dec(x_63);
lean::dec(x_1);
x_98 = l_Lean_IR_EmitCpp_emitCtor___closed__1;
x_99 = lean::string_append(x_61, x_98);
x_100 = lean::cnstr_get(x_2, 1);
lean::inc(x_100);
lean::dec(x_2);
x_101 = l_Nat_repr(x_100);
x_102 = lean::string_append(x_99, x_101);
lean::dec(x_101);
x_103 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_104 = lean::string_append(x_102, x_103);
x_105 = l_IO_println___rarg___closed__1;
x_106 = lean::string_append(x_104, x_105);
x_107 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_107, 0, x_62);
lean::cnstr_set(x_107, 1, x_106);
return x_107;
}
}
}
}
}
else
{
uint8 x_108; 
lean::dec(x_2);
lean::dec(x_1);
x_108 = !lean::is_exclusive(x_6);
if (x_108 == 0)
{
return x_6;
}
else
{
obj* x_109; obj* x_110; obj* x_111; 
x_109 = lean::cnstr_get(x_6, 0);
x_110 = lean::cnstr_get(x_6, 1);
lean::inc(x_110);
lean::inc(x_109);
lean::dec(x_6);
x_111 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_111, 0, x_109);
lean::cnstr_set(x_111, 1, x_110);
return x_111;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitCtor___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_emitCtor(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_3);
return x_6;
}
}
obj* _init_l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitReset___spec__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" lean::cnstr_release(");
return x_1;
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitReset___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; uint8 x_7; 
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
uint8 x_8; 
x_8 = !lean::is_exclusive(x_5);
if (x_8 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_9 = lean::cnstr_get(x_5, 1);
x_10 = lean::cnstr_get(x_5, 0);
lean::dec(x_10);
x_11 = lean::mk_nat_obj(1u);
x_12 = lean::nat_sub(x_3, x_11);
lean::dec(x_3);
x_13 = lean::nat_sub(x_2, x_12);
x_14 = lean::nat_sub(x_13, x_11);
lean::dec(x_13);
x_15 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitReset___spec__1___closed__1;
x_16 = lean::string_append(x_9, x_15);
x_17 = lean::string_append(x_16, x_1);
x_18 = l_List_reprAux___main___rarg___closed__1;
x_19 = lean::string_append(x_17, x_18);
x_20 = l_Nat_repr(x_14);
x_21 = lean::string_append(x_19, x_20);
lean::dec(x_20);
x_22 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_23 = lean::string_append(x_21, x_22);
x_24 = l_IO_println___rarg___closed__1;
x_25 = lean::string_append(x_23, x_24);
x_26 = lean::box(0);
lean::cnstr_set(x_5, 1, x_25);
lean::cnstr_set(x_5, 0, x_26);
x_3 = x_12;
goto _start;
}
else
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; 
x_28 = lean::cnstr_get(x_5, 1);
lean::inc(x_28);
lean::dec(x_5);
x_29 = lean::mk_nat_obj(1u);
x_30 = lean::nat_sub(x_3, x_29);
lean::dec(x_3);
x_31 = lean::nat_sub(x_2, x_30);
x_32 = lean::nat_sub(x_31, x_29);
lean::dec(x_31);
x_33 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitReset___spec__1___closed__1;
x_34 = lean::string_append(x_28, x_33);
x_35 = lean::string_append(x_34, x_1);
x_36 = l_List_reprAux___main___rarg___closed__1;
x_37 = lean::string_append(x_35, x_36);
x_38 = l_Nat_repr(x_32);
x_39 = lean::string_append(x_37, x_38);
lean::dec(x_38);
x_40 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_41 = lean::string_append(x_39, x_40);
x_42 = l_IO_println___rarg___closed__1;
x_43 = lean::string_append(x_41, x_42);
x_44 = lean::box(0);
x_45 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_43);
x_3 = x_30;
x_5 = x_45;
goto _start;
}
}
else
{
uint8 x_47; 
lean::dec(x_3);
x_47 = !lean::is_exclusive(x_5);
if (x_47 == 0)
{
obj* x_48; obj* x_49; 
x_48 = lean::cnstr_get(x_5, 0);
lean::dec(x_48);
x_49 = lean::box(0);
lean::cnstr_set(x_5, 0, x_49);
return x_5;
}
else
{
obj* x_50; obj* x_51; obj* x_52; 
x_50 = lean::cnstr_get(x_5, 1);
lean::inc(x_50);
lean::dec(x_5);
x_51 = lean::box(0);
x_52 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_50);
return x_52;
}
}
}
}
obj* _init_l_Lean_IR_EmitCpp_emitReset___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("if (lean::is_exclusive(");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitReset___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(")) {");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitReset___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("} else {");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitReset___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" lean::dec_ref(");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitReset___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::box(0);");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitReset(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; 
x_6 = !lean::is_exclusive(x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_7 = lean::cnstr_get(x_5, 1);
x_8 = lean::cnstr_get(x_5, 0);
lean::dec(x_8);
x_9 = l_Lean_IR_EmitCpp_emitReset___closed__1;
x_10 = lean::string_append(x_7, x_9);
x_11 = l_Nat_repr(x_3);
x_12 = l_Lean_IR_VarId_HasToString___closed__1;
x_13 = lean::string_append(x_12, x_11);
lean::dec(x_11);
x_14 = lean::string_append(x_10, x_13);
x_15 = l_Lean_IR_EmitCpp_emitReset___closed__2;
x_16 = lean::string_append(x_14, x_15);
x_17 = l_IO_println___rarg___closed__1;
x_18 = lean::string_append(x_16, x_17);
x_19 = lean::box(0);
lean::cnstr_set(x_5, 1, x_18);
lean::cnstr_set(x_5, 0, x_19);
lean::inc(x_2);
x_20 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitReset___spec__1(x_13, x_2, x_2, x_4, x_5);
lean::dec(x_2);
if (lean::obj_tag(x_20) == 0)
{
uint8 x_21; 
x_21 = !lean::is_exclusive(x_20);
if (x_21 == 0)
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_22 = lean::cnstr_get(x_20, 1);
x_23 = lean::cnstr_get(x_20, 0);
lean::dec(x_23);
x_24 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1;
x_25 = lean::string_append(x_22, x_24);
lean::cnstr_set(x_20, 1, x_25);
lean::cnstr_set(x_20, 0, x_19);
lean::inc(x_1);
x_26 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_20);
if (lean::obj_tag(x_26) == 0)
{
uint8 x_27; 
x_27 = !lean::is_exclusive(x_26);
if (x_27 == 0)
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; 
x_28 = lean::cnstr_get(x_26, 1);
x_29 = lean::cnstr_get(x_26, 0);
lean::dec(x_29);
x_30 = lean::string_append(x_28, x_13);
x_31 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_32 = lean::string_append(x_30, x_31);
x_33 = lean::string_append(x_32, x_17);
x_34 = l_Lean_IR_EmitCpp_emitReset___closed__3;
x_35 = lean::string_append(x_33, x_34);
x_36 = lean::string_append(x_35, x_17);
x_37 = l_Lean_IR_EmitCpp_emitReset___closed__4;
x_38 = lean::string_append(x_36, x_37);
x_39 = lean::string_append(x_38, x_13);
lean::dec(x_13);
x_40 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_41 = lean::string_append(x_39, x_40);
x_42 = lean::string_append(x_41, x_17);
x_43 = lean::string_append(x_42, x_24);
lean::cnstr_set(x_26, 1, x_43);
lean::cnstr_set(x_26, 0, x_19);
x_44 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_26);
if (lean::obj_tag(x_44) == 0)
{
uint8 x_45; 
x_45 = !lean::is_exclusive(x_44);
if (x_45 == 0)
{
obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_46 = lean::cnstr_get(x_44, 1);
x_47 = lean::cnstr_get(x_44, 0);
lean::dec(x_47);
x_48 = l_Lean_IR_EmitCpp_emitReset___closed__5;
x_49 = lean::string_append(x_46, x_48);
x_50 = lean::string_append(x_49, x_17);
x_51 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_52 = lean::string_append(x_50, x_51);
x_53 = lean::string_append(x_52, x_17);
lean::cnstr_set(x_44, 1, x_53);
lean::cnstr_set(x_44, 0, x_19);
return x_44;
}
else
{
obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
x_54 = lean::cnstr_get(x_44, 1);
lean::inc(x_54);
lean::dec(x_44);
x_55 = l_Lean_IR_EmitCpp_emitReset___closed__5;
x_56 = lean::string_append(x_54, x_55);
x_57 = lean::string_append(x_56, x_17);
x_58 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_59 = lean::string_append(x_57, x_58);
x_60 = lean::string_append(x_59, x_17);
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_19);
lean::cnstr_set(x_61, 1, x_60);
return x_61;
}
}
else
{
uint8 x_62; 
x_62 = !lean::is_exclusive(x_44);
if (x_62 == 0)
{
return x_44;
}
else
{
obj* x_63; obj* x_64; obj* x_65; 
x_63 = lean::cnstr_get(x_44, 0);
x_64 = lean::cnstr_get(x_44, 1);
lean::inc(x_64);
lean::inc(x_63);
lean::dec(x_44);
x_65 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_65, 0, x_63);
lean::cnstr_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
x_66 = lean::cnstr_get(x_26, 1);
lean::inc(x_66);
lean::dec(x_26);
x_67 = lean::string_append(x_66, x_13);
x_68 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_69 = lean::string_append(x_67, x_68);
x_70 = lean::string_append(x_69, x_17);
x_71 = l_Lean_IR_EmitCpp_emitReset___closed__3;
x_72 = lean::string_append(x_70, x_71);
x_73 = lean::string_append(x_72, x_17);
x_74 = l_Lean_IR_EmitCpp_emitReset___closed__4;
x_75 = lean::string_append(x_73, x_74);
x_76 = lean::string_append(x_75, x_13);
lean::dec(x_13);
x_77 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_78 = lean::string_append(x_76, x_77);
x_79 = lean::string_append(x_78, x_17);
x_80 = lean::string_append(x_79, x_24);
x_81 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_81, 0, x_19);
lean::cnstr_set(x_81, 1, x_80);
x_82 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_81);
if (lean::obj_tag(x_82) == 0)
{
obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; 
x_83 = lean::cnstr_get(x_82, 1);
lean::inc(x_83);
if (lean::is_exclusive(x_82)) {
 lean::cnstr_release(x_82, 0);
 lean::cnstr_release(x_82, 1);
 x_84 = x_82;
} else {
 lean::dec_ref(x_82);
 x_84 = lean::box(0);
}
x_85 = l_Lean_IR_EmitCpp_emitReset___closed__5;
x_86 = lean::string_append(x_83, x_85);
x_87 = lean::string_append(x_86, x_17);
x_88 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_89 = lean::string_append(x_87, x_88);
x_90 = lean::string_append(x_89, x_17);
if (lean::is_scalar(x_84)) {
 x_91 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_91 = x_84;
}
lean::cnstr_set(x_91, 0, x_19);
lean::cnstr_set(x_91, 1, x_90);
return x_91;
}
else
{
obj* x_92; obj* x_93; obj* x_94; obj* x_95; 
x_92 = lean::cnstr_get(x_82, 0);
lean::inc(x_92);
x_93 = lean::cnstr_get(x_82, 1);
lean::inc(x_93);
if (lean::is_exclusive(x_82)) {
 lean::cnstr_release(x_82, 0);
 lean::cnstr_release(x_82, 1);
 x_94 = x_82;
} else {
 lean::dec_ref(x_82);
 x_94 = lean::box(0);
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_92);
lean::cnstr_set(x_95, 1, x_93);
return x_95;
}
}
}
else
{
uint8 x_96; 
lean::dec(x_13);
lean::dec(x_1);
x_96 = !lean::is_exclusive(x_26);
if (x_96 == 0)
{
return x_26;
}
else
{
obj* x_97; obj* x_98; obj* x_99; 
x_97 = lean::cnstr_get(x_26, 0);
x_98 = lean::cnstr_get(x_26, 1);
lean::inc(x_98);
lean::inc(x_97);
lean::dec(x_26);
x_99 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_99, 0, x_97);
lean::cnstr_set(x_99, 1, x_98);
return x_99;
}
}
}
else
{
obj* x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_104; 
x_100 = lean::cnstr_get(x_20, 1);
lean::inc(x_100);
lean::dec(x_20);
x_101 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1;
x_102 = lean::string_append(x_100, x_101);
x_103 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_103, 0, x_19);
lean::cnstr_set(x_103, 1, x_102);
lean::inc(x_1);
x_104 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_103);
if (lean::obj_tag(x_104) == 0)
{
obj* x_105; obj* x_106; obj* x_107; obj* x_108; obj* x_109; obj* x_110; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; obj* x_120; obj* x_121; obj* x_122; 
x_105 = lean::cnstr_get(x_104, 1);
lean::inc(x_105);
if (lean::is_exclusive(x_104)) {
 lean::cnstr_release(x_104, 0);
 lean::cnstr_release(x_104, 1);
 x_106 = x_104;
} else {
 lean::dec_ref(x_104);
 x_106 = lean::box(0);
}
x_107 = lean::string_append(x_105, x_13);
x_108 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_109 = lean::string_append(x_107, x_108);
x_110 = lean::string_append(x_109, x_17);
x_111 = l_Lean_IR_EmitCpp_emitReset___closed__3;
x_112 = lean::string_append(x_110, x_111);
x_113 = lean::string_append(x_112, x_17);
x_114 = l_Lean_IR_EmitCpp_emitReset___closed__4;
x_115 = lean::string_append(x_113, x_114);
x_116 = lean::string_append(x_115, x_13);
lean::dec(x_13);
x_117 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_118 = lean::string_append(x_116, x_117);
x_119 = lean::string_append(x_118, x_17);
x_120 = lean::string_append(x_119, x_101);
if (lean::is_scalar(x_106)) {
 x_121 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_121 = x_106;
}
lean::cnstr_set(x_121, 0, x_19);
lean::cnstr_set(x_121, 1, x_120);
x_122 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_121);
if (lean::obj_tag(x_122) == 0)
{
obj* x_123; obj* x_124; obj* x_125; obj* x_126; obj* x_127; obj* x_128; obj* x_129; obj* x_130; obj* x_131; 
x_123 = lean::cnstr_get(x_122, 1);
lean::inc(x_123);
if (lean::is_exclusive(x_122)) {
 lean::cnstr_release(x_122, 0);
 lean::cnstr_release(x_122, 1);
 x_124 = x_122;
} else {
 lean::dec_ref(x_122);
 x_124 = lean::box(0);
}
x_125 = l_Lean_IR_EmitCpp_emitReset___closed__5;
x_126 = lean::string_append(x_123, x_125);
x_127 = lean::string_append(x_126, x_17);
x_128 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_129 = lean::string_append(x_127, x_128);
x_130 = lean::string_append(x_129, x_17);
if (lean::is_scalar(x_124)) {
 x_131 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_131 = x_124;
}
lean::cnstr_set(x_131, 0, x_19);
lean::cnstr_set(x_131, 1, x_130);
return x_131;
}
else
{
obj* x_132; obj* x_133; obj* x_134; obj* x_135; 
x_132 = lean::cnstr_get(x_122, 0);
lean::inc(x_132);
x_133 = lean::cnstr_get(x_122, 1);
lean::inc(x_133);
if (lean::is_exclusive(x_122)) {
 lean::cnstr_release(x_122, 0);
 lean::cnstr_release(x_122, 1);
 x_134 = x_122;
} else {
 lean::dec_ref(x_122);
 x_134 = lean::box(0);
}
if (lean::is_scalar(x_134)) {
 x_135 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_135 = x_134;
}
lean::cnstr_set(x_135, 0, x_132);
lean::cnstr_set(x_135, 1, x_133);
return x_135;
}
}
else
{
obj* x_136; obj* x_137; obj* x_138; obj* x_139; 
lean::dec(x_13);
lean::dec(x_1);
x_136 = lean::cnstr_get(x_104, 0);
lean::inc(x_136);
x_137 = lean::cnstr_get(x_104, 1);
lean::inc(x_137);
if (lean::is_exclusive(x_104)) {
 lean::cnstr_release(x_104, 0);
 lean::cnstr_release(x_104, 1);
 x_138 = x_104;
} else {
 lean::dec_ref(x_104);
 x_138 = lean::box(0);
}
if (lean::is_scalar(x_138)) {
 x_139 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_139 = x_138;
}
lean::cnstr_set(x_139, 0, x_136);
lean::cnstr_set(x_139, 1, x_137);
return x_139;
}
}
}
else
{
uint8 x_140; 
lean::dec(x_13);
lean::dec(x_1);
x_140 = !lean::is_exclusive(x_20);
if (x_140 == 0)
{
return x_20;
}
else
{
obj* x_141; obj* x_142; obj* x_143; 
x_141 = lean::cnstr_get(x_20, 0);
x_142 = lean::cnstr_get(x_20, 1);
lean::inc(x_142);
lean::inc(x_141);
lean::dec(x_20);
x_143 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_143, 0, x_141);
lean::cnstr_set(x_143, 1, x_142);
return x_143;
}
}
}
else
{
obj* x_144; obj* x_145; obj* x_146; obj* x_147; obj* x_148; obj* x_149; obj* x_150; obj* x_151; obj* x_152; obj* x_153; obj* x_154; obj* x_155; obj* x_156; obj* x_157; 
x_144 = lean::cnstr_get(x_5, 1);
lean::inc(x_144);
lean::dec(x_5);
x_145 = l_Lean_IR_EmitCpp_emitReset___closed__1;
x_146 = lean::string_append(x_144, x_145);
x_147 = l_Nat_repr(x_3);
x_148 = l_Lean_IR_VarId_HasToString___closed__1;
x_149 = lean::string_append(x_148, x_147);
lean::dec(x_147);
x_150 = lean::string_append(x_146, x_149);
x_151 = l_Lean_IR_EmitCpp_emitReset___closed__2;
x_152 = lean::string_append(x_150, x_151);
x_153 = l_IO_println___rarg___closed__1;
x_154 = lean::string_append(x_152, x_153);
x_155 = lean::box(0);
x_156 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_156, 0, x_155);
lean::cnstr_set(x_156, 1, x_154);
lean::inc(x_2);
x_157 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitReset___spec__1(x_149, x_2, x_2, x_4, x_156);
lean::dec(x_2);
if (lean::obj_tag(x_157) == 0)
{
obj* x_158; obj* x_159; obj* x_160; obj* x_161; obj* x_162; obj* x_163; 
x_158 = lean::cnstr_get(x_157, 1);
lean::inc(x_158);
if (lean::is_exclusive(x_157)) {
 lean::cnstr_release(x_157, 0);
 lean::cnstr_release(x_157, 1);
 x_159 = x_157;
} else {
 lean::dec_ref(x_157);
 x_159 = lean::box(0);
}
x_160 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1;
x_161 = lean::string_append(x_158, x_160);
if (lean::is_scalar(x_159)) {
 x_162 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_162 = x_159;
}
lean::cnstr_set(x_162, 0, x_155);
lean::cnstr_set(x_162, 1, x_161);
lean::inc(x_1);
x_163 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_162);
if (lean::obj_tag(x_163) == 0)
{
obj* x_164; obj* x_165; obj* x_166; obj* x_167; obj* x_168; obj* x_169; obj* x_170; obj* x_171; obj* x_172; obj* x_173; obj* x_174; obj* x_175; obj* x_176; obj* x_177; obj* x_178; obj* x_179; obj* x_180; obj* x_181; 
x_164 = lean::cnstr_get(x_163, 1);
lean::inc(x_164);
if (lean::is_exclusive(x_163)) {
 lean::cnstr_release(x_163, 0);
 lean::cnstr_release(x_163, 1);
 x_165 = x_163;
} else {
 lean::dec_ref(x_163);
 x_165 = lean::box(0);
}
x_166 = lean::string_append(x_164, x_149);
x_167 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_168 = lean::string_append(x_166, x_167);
x_169 = lean::string_append(x_168, x_153);
x_170 = l_Lean_IR_EmitCpp_emitReset___closed__3;
x_171 = lean::string_append(x_169, x_170);
x_172 = lean::string_append(x_171, x_153);
x_173 = l_Lean_IR_EmitCpp_emitReset___closed__4;
x_174 = lean::string_append(x_172, x_173);
x_175 = lean::string_append(x_174, x_149);
lean::dec(x_149);
x_176 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_177 = lean::string_append(x_175, x_176);
x_178 = lean::string_append(x_177, x_153);
x_179 = lean::string_append(x_178, x_160);
if (lean::is_scalar(x_165)) {
 x_180 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_180 = x_165;
}
lean::cnstr_set(x_180, 0, x_155);
lean::cnstr_set(x_180, 1, x_179);
x_181 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_180);
if (lean::obj_tag(x_181) == 0)
{
obj* x_182; obj* x_183; obj* x_184; obj* x_185; obj* x_186; obj* x_187; obj* x_188; obj* x_189; obj* x_190; 
x_182 = lean::cnstr_get(x_181, 1);
lean::inc(x_182);
if (lean::is_exclusive(x_181)) {
 lean::cnstr_release(x_181, 0);
 lean::cnstr_release(x_181, 1);
 x_183 = x_181;
} else {
 lean::dec_ref(x_181);
 x_183 = lean::box(0);
}
x_184 = l_Lean_IR_EmitCpp_emitReset___closed__5;
x_185 = lean::string_append(x_182, x_184);
x_186 = lean::string_append(x_185, x_153);
x_187 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_188 = lean::string_append(x_186, x_187);
x_189 = lean::string_append(x_188, x_153);
if (lean::is_scalar(x_183)) {
 x_190 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_190 = x_183;
}
lean::cnstr_set(x_190, 0, x_155);
lean::cnstr_set(x_190, 1, x_189);
return x_190;
}
else
{
obj* x_191; obj* x_192; obj* x_193; obj* x_194; 
x_191 = lean::cnstr_get(x_181, 0);
lean::inc(x_191);
x_192 = lean::cnstr_get(x_181, 1);
lean::inc(x_192);
if (lean::is_exclusive(x_181)) {
 lean::cnstr_release(x_181, 0);
 lean::cnstr_release(x_181, 1);
 x_193 = x_181;
} else {
 lean::dec_ref(x_181);
 x_193 = lean::box(0);
}
if (lean::is_scalar(x_193)) {
 x_194 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_194 = x_193;
}
lean::cnstr_set(x_194, 0, x_191);
lean::cnstr_set(x_194, 1, x_192);
return x_194;
}
}
else
{
obj* x_195; obj* x_196; obj* x_197; obj* x_198; 
lean::dec(x_149);
lean::dec(x_1);
x_195 = lean::cnstr_get(x_163, 0);
lean::inc(x_195);
x_196 = lean::cnstr_get(x_163, 1);
lean::inc(x_196);
if (lean::is_exclusive(x_163)) {
 lean::cnstr_release(x_163, 0);
 lean::cnstr_release(x_163, 1);
 x_197 = x_163;
} else {
 lean::dec_ref(x_163);
 x_197 = lean::box(0);
}
if (lean::is_scalar(x_197)) {
 x_198 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_198 = x_197;
}
lean::cnstr_set(x_198, 0, x_195);
lean::cnstr_set(x_198, 1, x_196);
return x_198;
}
}
else
{
obj* x_199; obj* x_200; obj* x_201; obj* x_202; 
lean::dec(x_149);
lean::dec(x_1);
x_199 = lean::cnstr_get(x_157, 0);
lean::inc(x_199);
x_200 = lean::cnstr_get(x_157, 1);
lean::inc(x_200);
if (lean::is_exclusive(x_157)) {
 lean::cnstr_release(x_157, 0);
 lean::cnstr_release(x_157, 1);
 x_201 = x_157;
} else {
 lean::dec_ref(x_157);
 x_201 = lean::box(0);
}
if (lean::is_scalar(x_201)) {
 x_202 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_202 = x_201;
}
lean::cnstr_set(x_202, 0, x_199);
lean::cnstr_set(x_202, 1, x_200);
return x_202;
}
}
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitReset___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitReset___spec__1(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
return x_6;
}
}
obj* l_Lean_IR_EmitCpp_emitReset___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_emitReset(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
return x_6;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitReuse___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("if (lean::is_scalar(");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitReuse___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" lean::cnstr_set_tag(");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitReuse(obj* x_1, obj* x_2, obj* x_3, uint8 x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
uint8 x_8; 
x_8 = !lean::is_exclusive(x_7);
if (x_8 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_9 = lean::cnstr_get(x_7, 1);
x_10 = lean::cnstr_get(x_7, 0);
lean::dec(x_10);
x_11 = l_Lean_IR_EmitCpp_emitReuse___closed__1;
x_12 = lean::string_append(x_9, x_11);
x_13 = l_Nat_repr(x_2);
x_14 = l_Lean_IR_VarId_HasToString___closed__1;
x_15 = lean::string_append(x_14, x_13);
lean::dec(x_13);
x_16 = lean::string_append(x_12, x_15);
x_17 = l_Lean_IR_EmitCpp_emitReset___closed__2;
x_18 = lean::string_append(x_16, x_17);
x_19 = l_IO_println___rarg___closed__1;
x_20 = lean::string_append(x_18, x_19);
x_21 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1;
x_22 = lean::string_append(x_20, x_21);
x_23 = lean::box(0);
lean::cnstr_set(x_7, 1, x_22);
lean::cnstr_set(x_7, 0, x_23);
lean::inc(x_1);
x_24 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_6, x_7);
if (lean::obj_tag(x_24) == 0)
{
uint8 x_25; 
x_25 = !lean::is_exclusive(x_24);
if (x_25 == 0)
{
obj* x_26; obj* x_27; 
x_26 = lean::cnstr_get(x_24, 0);
lean::dec(x_26);
lean::cnstr_set(x_24, 0, x_23);
lean::inc(x_3);
x_27 = l_Lean_IR_EmitCpp_emitAllocCtor(x_3, x_6, x_24);
if (lean::obj_tag(x_27) == 0)
{
uint8 x_28; 
x_28 = !lean::is_exclusive(x_27);
if (x_28 == 0)
{
obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
x_29 = lean::cnstr_get(x_27, 1);
x_30 = lean::cnstr_get(x_27, 0);
lean::dec(x_30);
x_31 = l_Lean_IR_EmitCpp_emitReset___closed__3;
x_32 = lean::string_append(x_29, x_31);
x_33 = lean::string_append(x_32, x_19);
x_34 = lean::string_append(x_33, x_21);
lean::cnstr_set(x_27, 1, x_34);
lean::cnstr_set(x_27, 0, x_23);
lean::inc(x_1);
x_35 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_6, x_27);
if (lean::obj_tag(x_35) == 0)
{
uint8 x_36; 
x_36 = !lean::is_exclusive(x_35);
if (x_36 == 0)
{
obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
x_37 = lean::cnstr_get(x_35, 1);
x_38 = lean::cnstr_get(x_35, 0);
lean::dec(x_38);
x_39 = lean::string_append(x_37, x_15);
lean::dec(x_15);
x_40 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_41 = lean::string_append(x_39, x_40);
x_42 = lean::string_append(x_41, x_19);
if (x_4 == 0)
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
lean::dec(x_3);
x_43 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_44 = lean::string_append(x_42, x_43);
x_45 = lean::string_append(x_44, x_19);
lean::cnstr_set(x_35, 1, x_45);
lean::cnstr_set(x_35, 0, x_23);
x_46 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_5, x_6, x_35);
return x_46;
}
else
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
x_47 = l_Lean_IR_EmitCpp_emitReuse___closed__2;
x_48 = lean::string_append(x_42, x_47);
lean::inc(x_1);
x_49 = l_Nat_repr(x_1);
x_50 = lean::string_append(x_14, x_49);
lean::dec(x_49);
x_51 = lean::string_append(x_48, x_50);
lean::dec(x_50);
x_52 = l_List_reprAux___main___rarg___closed__1;
x_53 = lean::string_append(x_51, x_52);
x_54 = lean::cnstr_get(x_3, 1);
lean::inc(x_54);
lean::dec(x_3);
x_55 = l_Nat_repr(x_54);
x_56 = lean::string_append(x_53, x_55);
lean::dec(x_55);
x_57 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_58 = lean::string_append(x_56, x_57);
x_59 = lean::string_append(x_58, x_19);
x_60 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_61 = lean::string_append(x_59, x_60);
x_62 = lean::string_append(x_61, x_19);
lean::cnstr_set(x_35, 1, x_62);
lean::cnstr_set(x_35, 0, x_23);
x_63 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_5, x_6, x_35);
return x_63;
}
}
else
{
obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; 
x_64 = lean::cnstr_get(x_35, 1);
lean::inc(x_64);
lean::dec(x_35);
x_65 = lean::string_append(x_64, x_15);
lean::dec(x_15);
x_66 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_67 = lean::string_append(x_65, x_66);
x_68 = lean::string_append(x_67, x_19);
if (x_4 == 0)
{
obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; 
lean::dec(x_3);
x_69 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_70 = lean::string_append(x_68, x_69);
x_71 = lean::string_append(x_70, x_19);
x_72 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_72, 0, x_23);
lean::cnstr_set(x_72, 1, x_71);
x_73 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_5, x_6, x_72);
return x_73;
}
else
{
obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; 
x_74 = l_Lean_IR_EmitCpp_emitReuse___closed__2;
x_75 = lean::string_append(x_68, x_74);
lean::inc(x_1);
x_76 = l_Nat_repr(x_1);
x_77 = lean::string_append(x_14, x_76);
lean::dec(x_76);
x_78 = lean::string_append(x_75, x_77);
lean::dec(x_77);
x_79 = l_List_reprAux___main___rarg___closed__1;
x_80 = lean::string_append(x_78, x_79);
x_81 = lean::cnstr_get(x_3, 1);
lean::inc(x_81);
lean::dec(x_3);
x_82 = l_Nat_repr(x_81);
x_83 = lean::string_append(x_80, x_82);
lean::dec(x_82);
x_84 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_85 = lean::string_append(x_83, x_84);
x_86 = lean::string_append(x_85, x_19);
x_87 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_88 = lean::string_append(x_86, x_87);
x_89 = lean::string_append(x_88, x_19);
x_90 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_90, 0, x_23);
lean::cnstr_set(x_90, 1, x_89);
x_91 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_5, x_6, x_90);
return x_91;
}
}
}
else
{
uint8 x_92; 
lean::dec(x_15);
lean::dec(x_3);
lean::dec(x_1);
x_92 = !lean::is_exclusive(x_35);
if (x_92 == 0)
{
return x_35;
}
else
{
obj* x_93; obj* x_94; obj* x_95; 
x_93 = lean::cnstr_get(x_35, 0);
x_94 = lean::cnstr_get(x_35, 1);
lean::inc(x_94);
lean::inc(x_93);
lean::dec(x_35);
x_95 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_95, 0, x_93);
lean::cnstr_set(x_95, 1, x_94);
return x_95;
}
}
}
else
{
obj* x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; 
x_96 = lean::cnstr_get(x_27, 1);
lean::inc(x_96);
lean::dec(x_27);
x_97 = l_Lean_IR_EmitCpp_emitReset___closed__3;
x_98 = lean::string_append(x_96, x_97);
x_99 = lean::string_append(x_98, x_19);
x_100 = lean::string_append(x_99, x_21);
x_101 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_101, 0, x_23);
lean::cnstr_set(x_101, 1, x_100);
lean::inc(x_1);
x_102 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_6, x_101);
if (lean::obj_tag(x_102) == 0)
{
obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; obj* x_108; 
x_103 = lean::cnstr_get(x_102, 1);
lean::inc(x_103);
if (lean::is_exclusive(x_102)) {
 lean::cnstr_release(x_102, 0);
 lean::cnstr_release(x_102, 1);
 x_104 = x_102;
} else {
 lean::dec_ref(x_102);
 x_104 = lean::box(0);
}
x_105 = lean::string_append(x_103, x_15);
lean::dec(x_15);
x_106 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_107 = lean::string_append(x_105, x_106);
x_108 = lean::string_append(x_107, x_19);
if (x_4 == 0)
{
obj* x_109; obj* x_110; obj* x_111; obj* x_112; obj* x_113; 
lean::dec(x_3);
x_109 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_110 = lean::string_append(x_108, x_109);
x_111 = lean::string_append(x_110, x_19);
if (lean::is_scalar(x_104)) {
 x_112 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_112 = x_104;
}
lean::cnstr_set(x_112, 0, x_23);
lean::cnstr_set(x_112, 1, x_111);
x_113 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_5, x_6, x_112);
return x_113;
}
else
{
obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; obj* x_120; obj* x_121; obj* x_122; obj* x_123; obj* x_124; obj* x_125; obj* x_126; obj* x_127; obj* x_128; obj* x_129; obj* x_130; obj* x_131; 
x_114 = l_Lean_IR_EmitCpp_emitReuse___closed__2;
x_115 = lean::string_append(x_108, x_114);
lean::inc(x_1);
x_116 = l_Nat_repr(x_1);
x_117 = lean::string_append(x_14, x_116);
lean::dec(x_116);
x_118 = lean::string_append(x_115, x_117);
lean::dec(x_117);
x_119 = l_List_reprAux___main___rarg___closed__1;
x_120 = lean::string_append(x_118, x_119);
x_121 = lean::cnstr_get(x_3, 1);
lean::inc(x_121);
lean::dec(x_3);
x_122 = l_Nat_repr(x_121);
x_123 = lean::string_append(x_120, x_122);
lean::dec(x_122);
x_124 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_125 = lean::string_append(x_123, x_124);
x_126 = lean::string_append(x_125, x_19);
x_127 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_128 = lean::string_append(x_126, x_127);
x_129 = lean::string_append(x_128, x_19);
if (lean::is_scalar(x_104)) {
 x_130 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_130 = x_104;
}
lean::cnstr_set(x_130, 0, x_23);
lean::cnstr_set(x_130, 1, x_129);
x_131 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_5, x_6, x_130);
return x_131;
}
}
else
{
obj* x_132; obj* x_133; obj* x_134; obj* x_135; 
lean::dec(x_15);
lean::dec(x_3);
lean::dec(x_1);
x_132 = lean::cnstr_get(x_102, 0);
lean::inc(x_132);
x_133 = lean::cnstr_get(x_102, 1);
lean::inc(x_133);
if (lean::is_exclusive(x_102)) {
 lean::cnstr_release(x_102, 0);
 lean::cnstr_release(x_102, 1);
 x_134 = x_102;
} else {
 lean::dec_ref(x_102);
 x_134 = lean::box(0);
}
if (lean::is_scalar(x_134)) {
 x_135 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_135 = x_134;
}
lean::cnstr_set(x_135, 0, x_132);
lean::cnstr_set(x_135, 1, x_133);
return x_135;
}
}
}
else
{
uint8 x_136; 
lean::dec(x_15);
lean::dec(x_3);
lean::dec(x_1);
x_136 = !lean::is_exclusive(x_27);
if (x_136 == 0)
{
return x_27;
}
else
{
obj* x_137; obj* x_138; obj* x_139; 
x_137 = lean::cnstr_get(x_27, 0);
x_138 = lean::cnstr_get(x_27, 1);
lean::inc(x_138);
lean::inc(x_137);
lean::dec(x_27);
x_139 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_139, 0, x_137);
lean::cnstr_set(x_139, 1, x_138);
return x_139;
}
}
}
else
{
obj* x_140; obj* x_141; obj* x_142; 
x_140 = lean::cnstr_get(x_24, 1);
lean::inc(x_140);
lean::dec(x_24);
x_141 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_141, 0, x_23);
lean::cnstr_set(x_141, 1, x_140);
lean::inc(x_3);
x_142 = l_Lean_IR_EmitCpp_emitAllocCtor(x_3, x_6, x_141);
if (lean::obj_tag(x_142) == 0)
{
obj* x_143; obj* x_144; obj* x_145; obj* x_146; obj* x_147; obj* x_148; obj* x_149; obj* x_150; 
x_143 = lean::cnstr_get(x_142, 1);
lean::inc(x_143);
if (lean::is_exclusive(x_142)) {
 lean::cnstr_release(x_142, 0);
 lean::cnstr_release(x_142, 1);
 x_144 = x_142;
} else {
 lean::dec_ref(x_142);
 x_144 = lean::box(0);
}
x_145 = l_Lean_IR_EmitCpp_emitReset___closed__3;
x_146 = lean::string_append(x_143, x_145);
x_147 = lean::string_append(x_146, x_19);
x_148 = lean::string_append(x_147, x_21);
if (lean::is_scalar(x_144)) {
 x_149 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_149 = x_144;
}
lean::cnstr_set(x_149, 0, x_23);
lean::cnstr_set(x_149, 1, x_148);
lean::inc(x_1);
x_150 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_6, x_149);
if (lean::obj_tag(x_150) == 0)
{
obj* x_151; obj* x_152; obj* x_153; obj* x_154; obj* x_155; obj* x_156; 
x_151 = lean::cnstr_get(x_150, 1);
lean::inc(x_151);
if (lean::is_exclusive(x_150)) {
 lean::cnstr_release(x_150, 0);
 lean::cnstr_release(x_150, 1);
 x_152 = x_150;
} else {
 lean::dec_ref(x_150);
 x_152 = lean::box(0);
}
x_153 = lean::string_append(x_151, x_15);
lean::dec(x_15);
x_154 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_155 = lean::string_append(x_153, x_154);
x_156 = lean::string_append(x_155, x_19);
if (x_4 == 0)
{
obj* x_157; obj* x_158; obj* x_159; obj* x_160; obj* x_161; 
lean::dec(x_3);
x_157 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_158 = lean::string_append(x_156, x_157);
x_159 = lean::string_append(x_158, x_19);
if (lean::is_scalar(x_152)) {
 x_160 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_160 = x_152;
}
lean::cnstr_set(x_160, 0, x_23);
lean::cnstr_set(x_160, 1, x_159);
x_161 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_5, x_6, x_160);
return x_161;
}
else
{
obj* x_162; obj* x_163; obj* x_164; obj* x_165; obj* x_166; obj* x_167; obj* x_168; obj* x_169; obj* x_170; obj* x_171; obj* x_172; obj* x_173; obj* x_174; obj* x_175; obj* x_176; obj* x_177; obj* x_178; obj* x_179; 
x_162 = l_Lean_IR_EmitCpp_emitReuse___closed__2;
x_163 = lean::string_append(x_156, x_162);
lean::inc(x_1);
x_164 = l_Nat_repr(x_1);
x_165 = lean::string_append(x_14, x_164);
lean::dec(x_164);
x_166 = lean::string_append(x_163, x_165);
lean::dec(x_165);
x_167 = l_List_reprAux___main___rarg___closed__1;
x_168 = lean::string_append(x_166, x_167);
x_169 = lean::cnstr_get(x_3, 1);
lean::inc(x_169);
lean::dec(x_3);
x_170 = l_Nat_repr(x_169);
x_171 = lean::string_append(x_168, x_170);
lean::dec(x_170);
x_172 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_173 = lean::string_append(x_171, x_172);
x_174 = lean::string_append(x_173, x_19);
x_175 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_176 = lean::string_append(x_174, x_175);
x_177 = lean::string_append(x_176, x_19);
if (lean::is_scalar(x_152)) {
 x_178 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_178 = x_152;
}
lean::cnstr_set(x_178, 0, x_23);
lean::cnstr_set(x_178, 1, x_177);
x_179 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_5, x_6, x_178);
return x_179;
}
}
else
{
obj* x_180; obj* x_181; obj* x_182; obj* x_183; 
lean::dec(x_15);
lean::dec(x_3);
lean::dec(x_1);
x_180 = lean::cnstr_get(x_150, 0);
lean::inc(x_180);
x_181 = lean::cnstr_get(x_150, 1);
lean::inc(x_181);
if (lean::is_exclusive(x_150)) {
 lean::cnstr_release(x_150, 0);
 lean::cnstr_release(x_150, 1);
 x_182 = x_150;
} else {
 lean::dec_ref(x_150);
 x_182 = lean::box(0);
}
if (lean::is_scalar(x_182)) {
 x_183 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_183 = x_182;
}
lean::cnstr_set(x_183, 0, x_180);
lean::cnstr_set(x_183, 1, x_181);
return x_183;
}
}
else
{
obj* x_184; obj* x_185; obj* x_186; obj* x_187; 
lean::dec(x_15);
lean::dec(x_3);
lean::dec(x_1);
x_184 = lean::cnstr_get(x_142, 0);
lean::inc(x_184);
x_185 = lean::cnstr_get(x_142, 1);
lean::inc(x_185);
if (lean::is_exclusive(x_142)) {
 lean::cnstr_release(x_142, 0);
 lean::cnstr_release(x_142, 1);
 x_186 = x_142;
} else {
 lean::dec_ref(x_142);
 x_186 = lean::box(0);
}
if (lean::is_scalar(x_186)) {
 x_187 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_187 = x_186;
}
lean::cnstr_set(x_187, 0, x_184);
lean::cnstr_set(x_187, 1, x_185);
return x_187;
}
}
}
else
{
uint8 x_188; 
lean::dec(x_15);
lean::dec(x_3);
lean::dec(x_1);
x_188 = !lean::is_exclusive(x_24);
if (x_188 == 0)
{
return x_24;
}
else
{
obj* x_189; obj* x_190; obj* x_191; 
x_189 = lean::cnstr_get(x_24, 0);
x_190 = lean::cnstr_get(x_24, 1);
lean::inc(x_190);
lean::inc(x_189);
lean::dec(x_24);
x_191 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_191, 0, x_189);
lean::cnstr_set(x_191, 1, x_190);
return x_191;
}
}
}
else
{
obj* x_192; obj* x_193; obj* x_194; obj* x_195; obj* x_196; obj* x_197; obj* x_198; obj* x_199; obj* x_200; obj* x_201; obj* x_202; obj* x_203; obj* x_204; obj* x_205; obj* x_206; obj* x_207; 
x_192 = lean::cnstr_get(x_7, 1);
lean::inc(x_192);
lean::dec(x_7);
x_193 = l_Lean_IR_EmitCpp_emitReuse___closed__1;
x_194 = lean::string_append(x_192, x_193);
x_195 = l_Nat_repr(x_2);
x_196 = l_Lean_IR_VarId_HasToString___closed__1;
x_197 = lean::string_append(x_196, x_195);
lean::dec(x_195);
x_198 = lean::string_append(x_194, x_197);
x_199 = l_Lean_IR_EmitCpp_emitReset___closed__2;
x_200 = lean::string_append(x_198, x_199);
x_201 = l_IO_println___rarg___closed__1;
x_202 = lean::string_append(x_200, x_201);
x_203 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1;
x_204 = lean::string_append(x_202, x_203);
x_205 = lean::box(0);
x_206 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_206, 0, x_205);
lean::cnstr_set(x_206, 1, x_204);
lean::inc(x_1);
x_207 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_6, x_206);
if (lean::obj_tag(x_207) == 0)
{
obj* x_208; obj* x_209; obj* x_210; obj* x_211; 
x_208 = lean::cnstr_get(x_207, 1);
lean::inc(x_208);
if (lean::is_exclusive(x_207)) {
 lean::cnstr_release(x_207, 0);
 lean::cnstr_release(x_207, 1);
 x_209 = x_207;
} else {
 lean::dec_ref(x_207);
 x_209 = lean::box(0);
}
if (lean::is_scalar(x_209)) {
 x_210 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_210 = x_209;
}
lean::cnstr_set(x_210, 0, x_205);
lean::cnstr_set(x_210, 1, x_208);
lean::inc(x_3);
x_211 = l_Lean_IR_EmitCpp_emitAllocCtor(x_3, x_6, x_210);
if (lean::obj_tag(x_211) == 0)
{
obj* x_212; obj* x_213; obj* x_214; obj* x_215; obj* x_216; obj* x_217; obj* x_218; obj* x_219; 
x_212 = lean::cnstr_get(x_211, 1);
lean::inc(x_212);
if (lean::is_exclusive(x_211)) {
 lean::cnstr_release(x_211, 0);
 lean::cnstr_release(x_211, 1);
 x_213 = x_211;
} else {
 lean::dec_ref(x_211);
 x_213 = lean::box(0);
}
x_214 = l_Lean_IR_EmitCpp_emitReset___closed__3;
x_215 = lean::string_append(x_212, x_214);
x_216 = lean::string_append(x_215, x_201);
x_217 = lean::string_append(x_216, x_203);
if (lean::is_scalar(x_213)) {
 x_218 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_218 = x_213;
}
lean::cnstr_set(x_218, 0, x_205);
lean::cnstr_set(x_218, 1, x_217);
lean::inc(x_1);
x_219 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_6, x_218);
if (lean::obj_tag(x_219) == 0)
{
obj* x_220; obj* x_221; obj* x_222; obj* x_223; obj* x_224; obj* x_225; 
x_220 = lean::cnstr_get(x_219, 1);
lean::inc(x_220);
if (lean::is_exclusive(x_219)) {
 lean::cnstr_release(x_219, 0);
 lean::cnstr_release(x_219, 1);
 x_221 = x_219;
} else {
 lean::dec_ref(x_219);
 x_221 = lean::box(0);
}
x_222 = lean::string_append(x_220, x_197);
lean::dec(x_197);
x_223 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_224 = lean::string_append(x_222, x_223);
x_225 = lean::string_append(x_224, x_201);
if (x_4 == 0)
{
obj* x_226; obj* x_227; obj* x_228; obj* x_229; obj* x_230; 
lean::dec(x_3);
x_226 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_227 = lean::string_append(x_225, x_226);
x_228 = lean::string_append(x_227, x_201);
if (lean::is_scalar(x_221)) {
 x_229 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_229 = x_221;
}
lean::cnstr_set(x_229, 0, x_205);
lean::cnstr_set(x_229, 1, x_228);
x_230 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_5, x_6, x_229);
return x_230;
}
else
{
obj* x_231; obj* x_232; obj* x_233; obj* x_234; obj* x_235; obj* x_236; obj* x_237; obj* x_238; obj* x_239; obj* x_240; obj* x_241; obj* x_242; obj* x_243; obj* x_244; obj* x_245; obj* x_246; obj* x_247; obj* x_248; 
x_231 = l_Lean_IR_EmitCpp_emitReuse___closed__2;
x_232 = lean::string_append(x_225, x_231);
lean::inc(x_1);
x_233 = l_Nat_repr(x_1);
x_234 = lean::string_append(x_196, x_233);
lean::dec(x_233);
x_235 = lean::string_append(x_232, x_234);
lean::dec(x_234);
x_236 = l_List_reprAux___main___rarg___closed__1;
x_237 = lean::string_append(x_235, x_236);
x_238 = lean::cnstr_get(x_3, 1);
lean::inc(x_238);
lean::dec(x_3);
x_239 = l_Nat_repr(x_238);
x_240 = lean::string_append(x_237, x_239);
lean::dec(x_239);
x_241 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_242 = lean::string_append(x_240, x_241);
x_243 = lean::string_append(x_242, x_201);
x_244 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_245 = lean::string_append(x_243, x_244);
x_246 = lean::string_append(x_245, x_201);
if (lean::is_scalar(x_221)) {
 x_247 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_247 = x_221;
}
lean::cnstr_set(x_247, 0, x_205);
lean::cnstr_set(x_247, 1, x_246);
x_248 = l_Lean_IR_EmitCpp_emitCtorSetArgs(x_1, x_5, x_6, x_247);
return x_248;
}
}
else
{
obj* x_249; obj* x_250; obj* x_251; obj* x_252; 
lean::dec(x_197);
lean::dec(x_3);
lean::dec(x_1);
x_249 = lean::cnstr_get(x_219, 0);
lean::inc(x_249);
x_250 = lean::cnstr_get(x_219, 1);
lean::inc(x_250);
if (lean::is_exclusive(x_219)) {
 lean::cnstr_release(x_219, 0);
 lean::cnstr_release(x_219, 1);
 x_251 = x_219;
} else {
 lean::dec_ref(x_219);
 x_251 = lean::box(0);
}
if (lean::is_scalar(x_251)) {
 x_252 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_252 = x_251;
}
lean::cnstr_set(x_252, 0, x_249);
lean::cnstr_set(x_252, 1, x_250);
return x_252;
}
}
else
{
obj* x_253; obj* x_254; obj* x_255; obj* x_256; 
lean::dec(x_197);
lean::dec(x_3);
lean::dec(x_1);
x_253 = lean::cnstr_get(x_211, 0);
lean::inc(x_253);
x_254 = lean::cnstr_get(x_211, 1);
lean::inc(x_254);
if (lean::is_exclusive(x_211)) {
 lean::cnstr_release(x_211, 0);
 lean::cnstr_release(x_211, 1);
 x_255 = x_211;
} else {
 lean::dec_ref(x_211);
 x_255 = lean::box(0);
}
if (lean::is_scalar(x_255)) {
 x_256 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_256 = x_255;
}
lean::cnstr_set(x_256, 0, x_253);
lean::cnstr_set(x_256, 1, x_254);
return x_256;
}
}
else
{
obj* x_257; obj* x_258; obj* x_259; obj* x_260; 
lean::dec(x_197);
lean::dec(x_3);
lean::dec(x_1);
x_257 = lean::cnstr_get(x_207, 0);
lean::inc(x_257);
x_258 = lean::cnstr_get(x_207, 1);
lean::inc(x_258);
if (lean::is_exclusive(x_207)) {
 lean::cnstr_release(x_207, 0);
 lean::cnstr_release(x_207, 1);
 x_259 = x_207;
} else {
 lean::dec_ref(x_207);
 x_259 = lean::box(0);
}
if (lean::is_scalar(x_259)) {
 x_260 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_260 = x_259;
}
lean::cnstr_set(x_260, 0, x_257);
lean::cnstr_set(x_260, 1, x_258);
return x_260;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitReuse___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
uint8 x_8; obj* x_9; 
x_8 = lean::unbox(x_4);
lean::dec(x_4);
x_9 = l_Lean_IR_EmitCpp_emitReuse(x_1, x_2, x_3, x_8, x_5, x_6, x_7);
lean::dec(x_6);
lean::dec(x_5);
return x_9;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitProj___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::cnstr_get(");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitProj(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_5);
if (lean::obj_tag(x_6) == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_8 = lean::cnstr_get(x_6, 1);
x_9 = lean::cnstr_get(x_6, 0);
lean::dec(x_9);
x_10 = l_Lean_IR_EmitCpp_emitProj___closed__1;
x_11 = lean::string_append(x_8, x_10);
x_12 = l_Nat_repr(x_3);
x_13 = l_Lean_IR_VarId_HasToString___closed__1;
x_14 = lean::string_append(x_13, x_12);
lean::dec(x_12);
x_15 = lean::string_append(x_11, x_14);
lean::dec(x_14);
x_16 = l_List_reprAux___main___rarg___closed__1;
x_17 = lean::string_append(x_15, x_16);
x_18 = l_Nat_repr(x_2);
x_19 = lean::string_append(x_17, x_18);
lean::dec(x_18);
x_20 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_21 = lean::string_append(x_19, x_20);
x_22 = l_IO_println___rarg___closed__1;
x_23 = lean::string_append(x_21, x_22);
x_24 = lean::box(0);
lean::cnstr_set(x_6, 1, x_23);
lean::cnstr_set(x_6, 0, x_24);
return x_6;
}
else
{
obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
x_25 = lean::cnstr_get(x_6, 1);
lean::inc(x_25);
lean::dec(x_6);
x_26 = l_Lean_IR_EmitCpp_emitProj___closed__1;
x_27 = lean::string_append(x_25, x_26);
x_28 = l_Nat_repr(x_3);
x_29 = l_Lean_IR_VarId_HasToString___closed__1;
x_30 = lean::string_append(x_29, x_28);
lean::dec(x_28);
x_31 = lean::string_append(x_27, x_30);
lean::dec(x_30);
x_32 = l_List_reprAux___main___rarg___closed__1;
x_33 = lean::string_append(x_31, x_32);
x_34 = l_Nat_repr(x_2);
x_35 = lean::string_append(x_33, x_34);
lean::dec(x_34);
x_36 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_37 = lean::string_append(x_35, x_36);
x_38 = l_IO_println___rarg___closed__1;
x_39 = lean::string_append(x_37, x_38);
x_40 = lean::box(0);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_39);
return x_41;
}
}
else
{
uint8 x_42; 
lean::dec(x_3);
lean::dec(x_2);
x_42 = !lean::is_exclusive(x_6);
if (x_42 == 0)
{
return x_6;
}
else
{
obj* x_43; obj* x_44; obj* x_45; 
x_43 = lean::cnstr_get(x_6, 0);
x_44 = lean::cnstr_get(x_6, 1);
lean::inc(x_44);
lean::inc(x_43);
lean::dec(x_6);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_43);
lean::cnstr_set(x_45, 1, x_44);
return x_45;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitProj___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_emitProj(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
return x_6;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitUProj___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::cnstr_get_scalar<usize>(");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitUProj___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(", sizeof(void*)*");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitUProj(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_5);
if (lean::obj_tag(x_6) == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_8 = lean::cnstr_get(x_6, 1);
x_9 = lean::cnstr_get(x_6, 0);
lean::dec(x_9);
x_10 = l_Lean_IR_EmitCpp_emitUProj___closed__1;
x_11 = lean::string_append(x_8, x_10);
x_12 = l_Nat_repr(x_3);
x_13 = l_Lean_IR_VarId_HasToString___closed__1;
x_14 = lean::string_append(x_13, x_12);
lean::dec(x_12);
x_15 = lean::string_append(x_11, x_14);
lean::dec(x_14);
x_16 = l_Lean_IR_EmitCpp_emitUProj___closed__2;
x_17 = lean::string_append(x_15, x_16);
x_18 = l_Nat_repr(x_2);
x_19 = lean::string_append(x_17, x_18);
lean::dec(x_18);
x_20 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_21 = lean::string_append(x_19, x_20);
x_22 = l_IO_println___rarg___closed__1;
x_23 = lean::string_append(x_21, x_22);
x_24 = lean::box(0);
lean::cnstr_set(x_6, 1, x_23);
lean::cnstr_set(x_6, 0, x_24);
return x_6;
}
else
{
obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
x_25 = lean::cnstr_get(x_6, 1);
lean::inc(x_25);
lean::dec(x_6);
x_26 = l_Lean_IR_EmitCpp_emitUProj___closed__1;
x_27 = lean::string_append(x_25, x_26);
x_28 = l_Nat_repr(x_3);
x_29 = l_Lean_IR_VarId_HasToString___closed__1;
x_30 = lean::string_append(x_29, x_28);
lean::dec(x_28);
x_31 = lean::string_append(x_27, x_30);
lean::dec(x_30);
x_32 = l_Lean_IR_EmitCpp_emitUProj___closed__2;
x_33 = lean::string_append(x_31, x_32);
x_34 = l_Nat_repr(x_2);
x_35 = lean::string_append(x_33, x_34);
lean::dec(x_34);
x_36 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_37 = lean::string_append(x_35, x_36);
x_38 = l_IO_println___rarg___closed__1;
x_39 = lean::string_append(x_37, x_38);
x_40 = lean::box(0);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_39);
return x_41;
}
}
else
{
uint8 x_42; 
lean::dec(x_3);
lean::dec(x_2);
x_42 = !lean::is_exclusive(x_6);
if (x_42 == 0)
{
return x_6;
}
else
{
obj* x_43; obj* x_44; obj* x_45; 
x_43 = lean::cnstr_get(x_6, 0);
x_44 = lean::cnstr_get(x_6, 1);
lean::inc(x_44);
lean::inc(x_43);
lean::dec(x_6);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_43);
lean::cnstr_set(x_45, 1, x_44);
return x_45;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitUProj___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_emitUProj(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
return x_6;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitSProj___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::cnstr_get_scalar<");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitSProj___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(">(");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitSProj(obj* x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; 
x_8 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_6, x_7);
if (lean::obj_tag(x_8) == 0)
{
uint8 x_9; 
x_9 = !lean::is_exclusive(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_10 = lean::cnstr_get(x_8, 1);
x_11 = lean::cnstr_get(x_8, 0);
lean::dec(x_11);
x_12 = l_Lean_IR_EmitCpp_emitSProj___closed__1;
x_13 = lean::string_append(x_10, x_12);
x_14 = l_Lean_IR_EmitCpp_toCppType___main(x_2);
x_15 = lean::string_append(x_13, x_14);
lean::dec(x_14);
x_16 = l_Lean_IR_EmitCpp_emitSProj___closed__2;
x_17 = lean::string_append(x_15, x_16);
x_18 = l_Nat_repr(x_5);
x_19 = l_Lean_IR_VarId_HasToString___closed__1;
x_20 = lean::string_append(x_19, x_18);
lean::dec(x_18);
x_21 = lean::string_append(x_17, x_20);
lean::dec(x_20);
x_22 = l_List_reprAux___main___rarg___closed__1;
x_23 = lean::string_append(x_21, x_22);
x_24 = lean::box(0);
lean::cnstr_set(x_8, 1, x_23);
lean::cnstr_set(x_8, 0, x_24);
x_25 = l_Lean_IR_EmitCpp_emitOffset(x_3, x_4, x_6, x_8);
if (lean::obj_tag(x_25) == 0)
{
uint8 x_26; 
x_26 = !lean::is_exclusive(x_25);
if (x_26 == 0)
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_27 = lean::cnstr_get(x_25, 1);
x_28 = lean::cnstr_get(x_25, 0);
lean::dec(x_28);
x_29 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_30 = lean::string_append(x_27, x_29);
x_31 = l_IO_println___rarg___closed__1;
x_32 = lean::string_append(x_30, x_31);
lean::cnstr_set(x_25, 1, x_32);
lean::cnstr_set(x_25, 0, x_24);
return x_25;
}
else
{
obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_33 = lean::cnstr_get(x_25, 1);
lean::inc(x_33);
lean::dec(x_25);
x_34 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_35 = lean::string_append(x_33, x_34);
x_36 = l_IO_println___rarg___closed__1;
x_37 = lean::string_append(x_35, x_36);
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_24);
lean::cnstr_set(x_38, 1, x_37);
return x_38;
}
}
else
{
uint8 x_39; 
x_39 = !lean::is_exclusive(x_25);
if (x_39 == 0)
{
return x_25;
}
else
{
obj* x_40; obj* x_41; obj* x_42; 
x_40 = lean::cnstr_get(x_25, 0);
x_41 = lean::cnstr_get(x_25, 1);
lean::inc(x_41);
lean::inc(x_40);
lean::dec(x_25);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_40);
lean::cnstr_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; 
x_43 = lean::cnstr_get(x_8, 1);
lean::inc(x_43);
lean::dec(x_8);
x_44 = l_Lean_IR_EmitCpp_emitSProj___closed__1;
x_45 = lean::string_append(x_43, x_44);
x_46 = l_Lean_IR_EmitCpp_toCppType___main(x_2);
x_47 = lean::string_append(x_45, x_46);
lean::dec(x_46);
x_48 = l_Lean_IR_EmitCpp_emitSProj___closed__2;
x_49 = lean::string_append(x_47, x_48);
x_50 = l_Nat_repr(x_5);
x_51 = l_Lean_IR_VarId_HasToString___closed__1;
x_52 = lean::string_append(x_51, x_50);
lean::dec(x_50);
x_53 = lean::string_append(x_49, x_52);
lean::dec(x_52);
x_54 = l_List_reprAux___main___rarg___closed__1;
x_55 = lean::string_append(x_53, x_54);
x_56 = lean::box(0);
x_57 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_55);
x_58 = l_Lean_IR_EmitCpp_emitOffset(x_3, x_4, x_6, x_57);
if (lean::obj_tag(x_58) == 0)
{
obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; 
x_59 = lean::cnstr_get(x_58, 1);
lean::inc(x_59);
if (lean::is_exclusive(x_58)) {
 lean::cnstr_release(x_58, 0);
 lean::cnstr_release(x_58, 1);
 x_60 = x_58;
} else {
 lean::dec_ref(x_58);
 x_60 = lean::box(0);
}
x_61 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_62 = lean::string_append(x_59, x_61);
x_63 = l_IO_println___rarg___closed__1;
x_64 = lean::string_append(x_62, x_63);
if (lean::is_scalar(x_60)) {
 x_65 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_65 = x_60;
}
lean::cnstr_set(x_65, 0, x_56);
lean::cnstr_set(x_65, 1, x_64);
return x_65;
}
else
{
obj* x_66; obj* x_67; obj* x_68; obj* x_69; 
x_66 = lean::cnstr_get(x_58, 0);
lean::inc(x_66);
x_67 = lean::cnstr_get(x_58, 1);
lean::inc(x_67);
if (lean::is_exclusive(x_58)) {
 lean::cnstr_release(x_58, 0);
 lean::cnstr_release(x_58, 1);
 x_68 = x_58;
} else {
 lean::dec_ref(x_58);
 x_68 = lean::box(0);
}
if (lean::is_scalar(x_68)) {
 x_69 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_69 = x_68;
}
lean::cnstr_set(x_69, 0, x_66);
lean::cnstr_set(x_69, 1, x_67);
return x_69;
}
}
}
else
{
uint8 x_70; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
x_70 = !lean::is_exclusive(x_8);
if (x_70 == 0)
{
return x_8;
}
else
{
obj* x_71; obj* x_72; obj* x_73; 
x_71 = lean::cnstr_get(x_8, 0);
x_72 = lean::cnstr_get(x_8, 1);
lean::inc(x_72);
lean::inc(x_71);
lean::dec(x_8);
x_73 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_73, 0, x_71);
lean::cnstr_set(x_73, 1, x_72);
return x_73;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitSProj___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
uint8 x_8; obj* x_9; 
x_8 = lean::unbox(x_2);
lean::dec(x_2);
x_9 = l_Lean_IR_EmitCpp_emitSProj(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
lean::dec(x_6);
return x_9;
}
}
obj* l_List_map___main___at_Lean_IR_EmitCpp_toStringArgs___spec__1(obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; 
x_2 = lean::box(0);
return x_2;
}
else
{
uint8 x_3; 
x_3 = !lean::is_exclusive(x_1);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_4 = lean::cnstr_get(x_1, 0);
x_5 = lean::cnstr_get(x_1, 1);
x_6 = l_Lean_IR_EmitCpp_argToCppString(x_4);
x_7 = l_List_map___main___at_Lean_IR_EmitCpp_toStringArgs___spec__1(x_5);
lean::cnstr_set(x_1, 1, x_7);
lean::cnstr_set(x_1, 0, x_6);
return x_1;
}
else
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = lean::cnstr_get(x_1, 0);
x_9 = lean::cnstr_get(x_1, 1);
lean::inc(x_9);
lean::inc(x_8);
lean::dec(x_1);
x_10 = l_Lean_IR_EmitCpp_argToCppString(x_8);
x_11 = l_List_map___main___at_Lean_IR_EmitCpp_toStringArgs___spec__1(x_9);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
}
}
obj* l_Lean_IR_EmitCpp_toStringArgs(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = l_Array_toList___rarg(x_1);
x_3 = l_List_map___main___at_Lean_IR_EmitCpp_toStringArgs___spec__1(x_2);
return x_3;
}
}
obj* l_Lean_IR_EmitCpp_toStringArgs___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_IR_EmitCpp_toStringArgs(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitFullApp___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("failed to emit extern application");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitFullApp(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_5);
if (lean::obj_tag(x_6) == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = lean::cnstr_get(x_6, 0);
lean::dec(x_8);
x_9 = lean::box(0);
lean::cnstr_set(x_6, 0, x_9);
lean::inc(x_2);
x_10 = l_Lean_IR_EmitCpp_getDecl(x_2, x_4, x_6);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; 
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
uint8 x_12; 
lean::dec(x_11);
x_12 = !lean::is_exclusive(x_10);
if (x_12 == 0)
{
obj* x_13; obj* x_14; 
x_13 = lean::cnstr_get(x_10, 0);
lean::dec(x_13);
lean::cnstr_set(x_10, 0, x_9);
x_14 = l_Lean_IR_EmitCpp_emitCppName(x_2, x_4, x_10);
if (lean::obj_tag(x_14) == 0)
{
uint8 x_15; 
x_15 = !lean::is_exclusive(x_14);
if (x_15 == 0)
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; uint8 x_20; 
x_16 = lean::cnstr_get(x_14, 1);
x_17 = lean::cnstr_get(x_14, 0);
lean::dec(x_17);
x_18 = lean::array_get_size(x_3);
x_19 = lean::mk_nat_obj(0u);
x_20 = lean::nat_dec_lt(x_19, x_18);
lean::dec(x_18);
if (x_20 == 0)
{
obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_21 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_22 = lean::string_append(x_16, x_21);
x_23 = l_IO_println___rarg___closed__1;
x_24 = lean::string_append(x_22, x_23);
lean::cnstr_set(x_14, 1, x_24);
lean::cnstr_set(x_14, 0, x_9);
return x_14;
}
else
{
obj* x_25; obj* x_26; obj* x_27; 
x_25 = l_Prod_HasRepr___rarg___closed__1;
x_26 = lean::string_append(x_16, x_25);
lean::cnstr_set(x_14, 1, x_26);
lean::cnstr_set(x_14, 0, x_9);
x_27 = l_Lean_IR_EmitCpp_emitArgs(x_3, x_4, x_14);
if (lean::obj_tag(x_27) == 0)
{
uint8 x_28; 
x_28 = !lean::is_exclusive(x_27);
if (x_28 == 0)
{
obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; 
x_29 = lean::cnstr_get(x_27, 1);
x_30 = lean::cnstr_get(x_27, 0);
lean::dec(x_30);
x_31 = l_Option_HasRepr___rarg___closed__3;
x_32 = lean::string_append(x_29, x_31);
x_33 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_34 = lean::string_append(x_32, x_33);
x_35 = l_IO_println___rarg___closed__1;
x_36 = lean::string_append(x_34, x_35);
lean::cnstr_set(x_27, 1, x_36);
lean::cnstr_set(x_27, 0, x_9);
return x_27;
}
else
{
obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; 
x_37 = lean::cnstr_get(x_27, 1);
lean::inc(x_37);
lean::dec(x_27);
x_38 = l_Option_HasRepr___rarg___closed__3;
x_39 = lean::string_append(x_37, x_38);
x_40 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_41 = lean::string_append(x_39, x_40);
x_42 = l_IO_println___rarg___closed__1;
x_43 = lean::string_append(x_41, x_42);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_9);
lean::cnstr_set(x_44, 1, x_43);
return x_44;
}
}
else
{
uint8 x_45; 
x_45 = !lean::is_exclusive(x_27);
if (x_45 == 0)
{
return x_27;
}
else
{
obj* x_46; obj* x_47; obj* x_48; 
x_46 = lean::cnstr_get(x_27, 0);
x_47 = lean::cnstr_get(x_27, 1);
lean::inc(x_47);
lean::inc(x_46);
lean::dec(x_27);
x_48 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_48, 0, x_46);
lean::cnstr_set(x_48, 1, x_47);
return x_48;
}
}
}
}
else
{
obj* x_49; obj* x_50; obj* x_51; uint8 x_52; 
x_49 = lean::cnstr_get(x_14, 1);
lean::inc(x_49);
lean::dec(x_14);
x_50 = lean::array_get_size(x_3);
x_51 = lean::mk_nat_obj(0u);
x_52 = lean::nat_dec_lt(x_51, x_50);
lean::dec(x_50);
if (x_52 == 0)
{
obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; 
x_53 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_54 = lean::string_append(x_49, x_53);
x_55 = l_IO_println___rarg___closed__1;
x_56 = lean::string_append(x_54, x_55);
x_57 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_57, 0, x_9);
lean::cnstr_set(x_57, 1, x_56);
return x_57;
}
else
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
x_58 = l_Prod_HasRepr___rarg___closed__1;
x_59 = lean::string_append(x_49, x_58);
x_60 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_60, 0, x_9);
lean::cnstr_set(x_60, 1, x_59);
x_61 = l_Lean_IR_EmitCpp_emitArgs(x_3, x_4, x_60);
if (lean::obj_tag(x_61) == 0)
{
obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_62 = lean::cnstr_get(x_61, 1);
lean::inc(x_62);
if (lean::is_exclusive(x_61)) {
 lean::cnstr_release(x_61, 0);
 lean::cnstr_release(x_61, 1);
 x_63 = x_61;
} else {
 lean::dec_ref(x_61);
 x_63 = lean::box(0);
}
x_64 = l_Option_HasRepr___rarg___closed__3;
x_65 = lean::string_append(x_62, x_64);
x_66 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_67 = lean::string_append(x_65, x_66);
x_68 = l_IO_println___rarg___closed__1;
x_69 = lean::string_append(x_67, x_68);
if (lean::is_scalar(x_63)) {
 x_70 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_70 = x_63;
}
lean::cnstr_set(x_70, 0, x_9);
lean::cnstr_set(x_70, 1, x_69);
return x_70;
}
else
{
obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
x_71 = lean::cnstr_get(x_61, 0);
lean::inc(x_71);
x_72 = lean::cnstr_get(x_61, 1);
lean::inc(x_72);
if (lean::is_exclusive(x_61)) {
 lean::cnstr_release(x_61, 0);
 lean::cnstr_release(x_61, 1);
 x_73 = x_61;
} else {
 lean::dec_ref(x_61);
 x_73 = lean::box(0);
}
if (lean::is_scalar(x_73)) {
 x_74 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_74 = x_73;
}
lean::cnstr_set(x_74, 0, x_71);
lean::cnstr_set(x_74, 1, x_72);
return x_74;
}
}
}
}
else
{
uint8 x_75; 
x_75 = !lean::is_exclusive(x_14);
if (x_75 == 0)
{
return x_14;
}
else
{
obj* x_76; obj* x_77; obj* x_78; 
x_76 = lean::cnstr_get(x_14, 0);
x_77 = lean::cnstr_get(x_14, 1);
lean::inc(x_77);
lean::inc(x_76);
lean::dec(x_14);
x_78 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_78, 0, x_76);
lean::cnstr_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
obj* x_79; obj* x_80; obj* x_81; 
x_79 = lean::cnstr_get(x_10, 1);
lean::inc(x_79);
lean::dec(x_10);
x_80 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_80, 0, x_9);
lean::cnstr_set(x_80, 1, x_79);
x_81 = l_Lean_IR_EmitCpp_emitCppName(x_2, x_4, x_80);
if (lean::obj_tag(x_81) == 0)
{
obj* x_82; obj* x_83; obj* x_84; obj* x_85; uint8 x_86; 
x_82 = lean::cnstr_get(x_81, 1);
lean::inc(x_82);
if (lean::is_exclusive(x_81)) {
 lean::cnstr_release(x_81, 0);
 lean::cnstr_release(x_81, 1);
 x_83 = x_81;
} else {
 lean::dec_ref(x_81);
 x_83 = lean::box(0);
}
x_84 = lean::array_get_size(x_3);
x_85 = lean::mk_nat_obj(0u);
x_86 = lean::nat_dec_lt(x_85, x_84);
lean::dec(x_84);
if (x_86 == 0)
{
obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; 
x_87 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_88 = lean::string_append(x_82, x_87);
x_89 = l_IO_println___rarg___closed__1;
x_90 = lean::string_append(x_88, x_89);
if (lean::is_scalar(x_83)) {
 x_91 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_91 = x_83;
}
lean::cnstr_set(x_91, 0, x_9);
lean::cnstr_set(x_91, 1, x_90);
return x_91;
}
else
{
obj* x_92; obj* x_93; obj* x_94; obj* x_95; 
x_92 = l_Prod_HasRepr___rarg___closed__1;
x_93 = lean::string_append(x_82, x_92);
if (lean::is_scalar(x_83)) {
 x_94 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_94 = x_83;
}
lean::cnstr_set(x_94, 0, x_9);
lean::cnstr_set(x_94, 1, x_93);
x_95 = l_Lean_IR_EmitCpp_emitArgs(x_3, x_4, x_94);
if (lean::obj_tag(x_95) == 0)
{
obj* x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_104; 
x_96 = lean::cnstr_get(x_95, 1);
lean::inc(x_96);
if (lean::is_exclusive(x_95)) {
 lean::cnstr_release(x_95, 0);
 lean::cnstr_release(x_95, 1);
 x_97 = x_95;
} else {
 lean::dec_ref(x_95);
 x_97 = lean::box(0);
}
x_98 = l_Option_HasRepr___rarg___closed__3;
x_99 = lean::string_append(x_96, x_98);
x_100 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_101 = lean::string_append(x_99, x_100);
x_102 = l_IO_println___rarg___closed__1;
x_103 = lean::string_append(x_101, x_102);
if (lean::is_scalar(x_97)) {
 x_104 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_104 = x_97;
}
lean::cnstr_set(x_104, 0, x_9);
lean::cnstr_set(x_104, 1, x_103);
return x_104;
}
else
{
obj* x_105; obj* x_106; obj* x_107; obj* x_108; 
x_105 = lean::cnstr_get(x_95, 0);
lean::inc(x_105);
x_106 = lean::cnstr_get(x_95, 1);
lean::inc(x_106);
if (lean::is_exclusive(x_95)) {
 lean::cnstr_release(x_95, 0);
 lean::cnstr_release(x_95, 1);
 x_107 = x_95;
} else {
 lean::dec_ref(x_95);
 x_107 = lean::box(0);
}
if (lean::is_scalar(x_107)) {
 x_108 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_108 = x_107;
}
lean::cnstr_set(x_108, 0, x_105);
lean::cnstr_set(x_108, 1, x_106);
return x_108;
}
}
}
else
{
obj* x_109; obj* x_110; obj* x_111; obj* x_112; 
x_109 = lean::cnstr_get(x_81, 0);
lean::inc(x_109);
x_110 = lean::cnstr_get(x_81, 1);
lean::inc(x_110);
if (lean::is_exclusive(x_81)) {
 lean::cnstr_release(x_81, 0);
 lean::cnstr_release(x_81, 1);
 x_111 = x_81;
} else {
 lean::dec_ref(x_81);
 x_111 = lean::box(0);
}
if (lean::is_scalar(x_111)) {
 x_112 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_112 = x_111;
}
lean::cnstr_set(x_112, 0, x_109);
lean::cnstr_set(x_112, 1, x_110);
return x_112;
}
}
}
else
{
uint8 x_113; 
lean::dec(x_2);
x_113 = !lean::is_exclusive(x_10);
if (x_113 == 0)
{
obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; 
x_114 = lean::cnstr_get(x_10, 1);
x_115 = lean::cnstr_get(x_10, 0);
lean::dec(x_115);
x_116 = lean::cnstr_get(x_11, 2);
lean::inc(x_116);
lean::dec(x_11);
x_117 = l_Lean_IR_EmitCpp_toStringArgs(x_3);
x_118 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__5___closed__1;
x_119 = l_Lean_mkExternCall(x_116, x_118, x_117);
lean::dec(x_116);
if (lean::obj_tag(x_119) == 0)
{
obj* x_120; 
x_120 = l_Lean_IR_EmitCpp_emitFullApp___closed__1;
lean::cnstr_set_tag(x_10, 1);
lean::cnstr_set(x_10, 0, x_120);
return x_10;
}
else
{
obj* x_121; obj* x_122; obj* x_123; obj* x_124; obj* x_125; obj* x_126; 
x_121 = lean::cnstr_get(x_119, 0);
lean::inc(x_121);
lean::dec(x_119);
x_122 = lean::string_append(x_114, x_121);
lean::dec(x_121);
x_123 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_124 = lean::string_append(x_122, x_123);
x_125 = l_IO_println___rarg___closed__1;
x_126 = lean::string_append(x_124, x_125);
lean::cnstr_set(x_10, 1, x_126);
lean::cnstr_set(x_10, 0, x_9);
return x_10;
}
}
else
{
obj* x_127; obj* x_128; obj* x_129; obj* x_130; obj* x_131; 
x_127 = lean::cnstr_get(x_10, 1);
lean::inc(x_127);
lean::dec(x_10);
x_128 = lean::cnstr_get(x_11, 2);
lean::inc(x_128);
lean::dec(x_11);
x_129 = l_Lean_IR_EmitCpp_toStringArgs(x_3);
x_130 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__5___closed__1;
x_131 = l_Lean_mkExternCall(x_128, x_130, x_129);
lean::dec(x_128);
if (lean::obj_tag(x_131) == 0)
{
obj* x_132; obj* x_133; 
x_132 = l_Lean_IR_EmitCpp_emitFullApp___closed__1;
x_133 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_133, 0, x_132);
lean::cnstr_set(x_133, 1, x_127);
return x_133;
}
else
{
obj* x_134; obj* x_135; obj* x_136; obj* x_137; obj* x_138; obj* x_139; obj* x_140; 
x_134 = lean::cnstr_get(x_131, 0);
lean::inc(x_134);
lean::dec(x_131);
x_135 = lean::string_append(x_127, x_134);
lean::dec(x_134);
x_136 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_137 = lean::string_append(x_135, x_136);
x_138 = l_IO_println___rarg___closed__1;
x_139 = lean::string_append(x_137, x_138);
x_140 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_140, 0, x_9);
lean::cnstr_set(x_140, 1, x_139);
return x_140;
}
}
}
}
else
{
uint8 x_141; 
lean::dec(x_2);
x_141 = !lean::is_exclusive(x_10);
if (x_141 == 0)
{
return x_10;
}
else
{
obj* x_142; obj* x_143; obj* x_144; 
x_142 = lean::cnstr_get(x_10, 0);
x_143 = lean::cnstr_get(x_10, 1);
lean::inc(x_143);
lean::inc(x_142);
lean::dec(x_10);
x_144 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_144, 0, x_142);
lean::cnstr_set(x_144, 1, x_143);
return x_144;
}
}
}
else
{
obj* x_145; obj* x_146; obj* x_147; obj* x_148; 
x_145 = lean::cnstr_get(x_6, 1);
lean::inc(x_145);
lean::dec(x_6);
x_146 = lean::box(0);
x_147 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_147, 0, x_146);
lean::cnstr_set(x_147, 1, x_145);
lean::inc(x_2);
x_148 = l_Lean_IR_EmitCpp_getDecl(x_2, x_4, x_147);
if (lean::obj_tag(x_148) == 0)
{
obj* x_149; 
x_149 = lean::cnstr_get(x_148, 0);
lean::inc(x_149);
if (lean::obj_tag(x_149) == 0)
{
obj* x_150; obj* x_151; obj* x_152; obj* x_153; 
lean::dec(x_149);
x_150 = lean::cnstr_get(x_148, 1);
lean::inc(x_150);
if (lean::is_exclusive(x_148)) {
 lean::cnstr_release(x_148, 0);
 lean::cnstr_release(x_148, 1);
 x_151 = x_148;
} else {
 lean::dec_ref(x_148);
 x_151 = lean::box(0);
}
if (lean::is_scalar(x_151)) {
 x_152 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_152 = x_151;
}
lean::cnstr_set(x_152, 0, x_146);
lean::cnstr_set(x_152, 1, x_150);
x_153 = l_Lean_IR_EmitCpp_emitCppName(x_2, x_4, x_152);
if (lean::obj_tag(x_153) == 0)
{
obj* x_154; obj* x_155; obj* x_156; obj* x_157; uint8 x_158; 
x_154 = lean::cnstr_get(x_153, 1);
lean::inc(x_154);
if (lean::is_exclusive(x_153)) {
 lean::cnstr_release(x_153, 0);
 lean::cnstr_release(x_153, 1);
 x_155 = x_153;
} else {
 lean::dec_ref(x_153);
 x_155 = lean::box(0);
}
x_156 = lean::array_get_size(x_3);
x_157 = lean::mk_nat_obj(0u);
x_158 = lean::nat_dec_lt(x_157, x_156);
lean::dec(x_156);
if (x_158 == 0)
{
obj* x_159; obj* x_160; obj* x_161; obj* x_162; obj* x_163; 
x_159 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_160 = lean::string_append(x_154, x_159);
x_161 = l_IO_println___rarg___closed__1;
x_162 = lean::string_append(x_160, x_161);
if (lean::is_scalar(x_155)) {
 x_163 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_163 = x_155;
}
lean::cnstr_set(x_163, 0, x_146);
lean::cnstr_set(x_163, 1, x_162);
return x_163;
}
else
{
obj* x_164; obj* x_165; obj* x_166; obj* x_167; 
x_164 = l_Prod_HasRepr___rarg___closed__1;
x_165 = lean::string_append(x_154, x_164);
if (lean::is_scalar(x_155)) {
 x_166 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_166 = x_155;
}
lean::cnstr_set(x_166, 0, x_146);
lean::cnstr_set(x_166, 1, x_165);
x_167 = l_Lean_IR_EmitCpp_emitArgs(x_3, x_4, x_166);
if (lean::obj_tag(x_167) == 0)
{
obj* x_168; obj* x_169; obj* x_170; obj* x_171; obj* x_172; obj* x_173; obj* x_174; obj* x_175; obj* x_176; 
x_168 = lean::cnstr_get(x_167, 1);
lean::inc(x_168);
if (lean::is_exclusive(x_167)) {
 lean::cnstr_release(x_167, 0);
 lean::cnstr_release(x_167, 1);
 x_169 = x_167;
} else {
 lean::dec_ref(x_167);
 x_169 = lean::box(0);
}
x_170 = l_Option_HasRepr___rarg___closed__3;
x_171 = lean::string_append(x_168, x_170);
x_172 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_173 = lean::string_append(x_171, x_172);
x_174 = l_IO_println___rarg___closed__1;
x_175 = lean::string_append(x_173, x_174);
if (lean::is_scalar(x_169)) {
 x_176 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_176 = x_169;
}
lean::cnstr_set(x_176, 0, x_146);
lean::cnstr_set(x_176, 1, x_175);
return x_176;
}
else
{
obj* x_177; obj* x_178; obj* x_179; obj* x_180; 
x_177 = lean::cnstr_get(x_167, 0);
lean::inc(x_177);
x_178 = lean::cnstr_get(x_167, 1);
lean::inc(x_178);
if (lean::is_exclusive(x_167)) {
 lean::cnstr_release(x_167, 0);
 lean::cnstr_release(x_167, 1);
 x_179 = x_167;
} else {
 lean::dec_ref(x_167);
 x_179 = lean::box(0);
}
if (lean::is_scalar(x_179)) {
 x_180 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_180 = x_179;
}
lean::cnstr_set(x_180, 0, x_177);
lean::cnstr_set(x_180, 1, x_178);
return x_180;
}
}
}
else
{
obj* x_181; obj* x_182; obj* x_183; obj* x_184; 
x_181 = lean::cnstr_get(x_153, 0);
lean::inc(x_181);
x_182 = lean::cnstr_get(x_153, 1);
lean::inc(x_182);
if (lean::is_exclusive(x_153)) {
 lean::cnstr_release(x_153, 0);
 lean::cnstr_release(x_153, 1);
 x_183 = x_153;
} else {
 lean::dec_ref(x_153);
 x_183 = lean::box(0);
}
if (lean::is_scalar(x_183)) {
 x_184 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_184 = x_183;
}
lean::cnstr_set(x_184, 0, x_181);
lean::cnstr_set(x_184, 1, x_182);
return x_184;
}
}
else
{
obj* x_185; obj* x_186; obj* x_187; obj* x_188; obj* x_189; obj* x_190; 
lean::dec(x_2);
x_185 = lean::cnstr_get(x_148, 1);
lean::inc(x_185);
if (lean::is_exclusive(x_148)) {
 lean::cnstr_release(x_148, 0);
 lean::cnstr_release(x_148, 1);
 x_186 = x_148;
} else {
 lean::dec_ref(x_148);
 x_186 = lean::box(0);
}
x_187 = lean::cnstr_get(x_149, 2);
lean::inc(x_187);
lean::dec(x_149);
x_188 = l_Lean_IR_EmitCpp_toStringArgs(x_3);
x_189 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__5___closed__1;
x_190 = l_Lean_mkExternCall(x_187, x_189, x_188);
lean::dec(x_187);
if (lean::obj_tag(x_190) == 0)
{
obj* x_191; obj* x_192; 
x_191 = l_Lean_IR_EmitCpp_emitFullApp___closed__1;
if (lean::is_scalar(x_186)) {
 x_192 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_192 = x_186;
 lean::cnstr_set_tag(x_192, 1);
}
lean::cnstr_set(x_192, 0, x_191);
lean::cnstr_set(x_192, 1, x_185);
return x_192;
}
else
{
obj* x_193; obj* x_194; obj* x_195; obj* x_196; obj* x_197; obj* x_198; obj* x_199; 
x_193 = lean::cnstr_get(x_190, 0);
lean::inc(x_193);
lean::dec(x_190);
x_194 = lean::string_append(x_185, x_193);
lean::dec(x_193);
x_195 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_196 = lean::string_append(x_194, x_195);
x_197 = l_IO_println___rarg___closed__1;
x_198 = lean::string_append(x_196, x_197);
if (lean::is_scalar(x_186)) {
 x_199 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_199 = x_186;
}
lean::cnstr_set(x_199, 0, x_146);
lean::cnstr_set(x_199, 1, x_198);
return x_199;
}
}
}
else
{
obj* x_200; obj* x_201; obj* x_202; obj* x_203; 
lean::dec(x_2);
x_200 = lean::cnstr_get(x_148, 0);
lean::inc(x_200);
x_201 = lean::cnstr_get(x_148, 1);
lean::inc(x_201);
if (lean::is_exclusive(x_148)) {
 lean::cnstr_release(x_148, 0);
 lean::cnstr_release(x_148, 1);
 x_202 = x_148;
} else {
 lean::dec_ref(x_148);
 x_202 = lean::box(0);
}
if (lean::is_scalar(x_202)) {
 x_203 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_203 = x_202;
}
lean::cnstr_set(x_203, 0, x_200);
lean::cnstr_set(x_203, 1, x_201);
return x_203;
}
}
}
else
{
uint8 x_204; 
lean::dec(x_2);
x_204 = !lean::is_exclusive(x_6);
if (x_204 == 0)
{
return x_6;
}
else
{
obj* x_205; obj* x_206; obj* x_207; 
x_205 = lean::cnstr_get(x_6, 0);
x_206 = lean::cnstr_get(x_6, 1);
lean::inc(x_206);
lean::inc(x_205);
lean::dec(x_6);
x_207 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_207, 0, x_205);
lean::cnstr_set(x_207, 1, x_206);
return x_207;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitFullApp___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_emitFullApp(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_3);
return x_6;
}
}
obj* _init_l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitPartialApp___spec__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::closure_set(");
return x_1;
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitPartialApp___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; uint8 x_8; 
x_7 = lean::mk_nat_obj(0u);
x_8 = lean::nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
uint8 x_9; 
x_9 = !lean::is_exclusive(x_6);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_10 = lean::cnstr_get(x_6, 1);
x_11 = lean::cnstr_get(x_6, 0);
lean::dec(x_11);
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_4, x_12);
lean::dec(x_4);
x_14 = lean::nat_sub(x_3, x_13);
x_15 = lean::nat_sub(x_14, x_12);
lean::dec(x_14);
x_16 = l_Lean_IR_Arg_Inhabited;
x_17 = lean::array_get(x_16, x_2, x_15);
x_18 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitPartialApp___spec__1___closed__1;
x_19 = lean::string_append(x_10, x_18);
lean::inc(x_1);
x_20 = l_Nat_repr(x_1);
x_21 = l_Lean_IR_VarId_HasToString___closed__1;
x_22 = lean::string_append(x_21, x_20);
lean::dec(x_20);
x_23 = lean::string_append(x_19, x_22);
lean::dec(x_22);
x_24 = l_List_reprAux___main___rarg___closed__1;
x_25 = lean::string_append(x_23, x_24);
x_26 = l_Nat_repr(x_15);
x_27 = lean::string_append(x_25, x_26);
lean::dec(x_26);
x_28 = lean::string_append(x_27, x_24);
x_29 = lean::box(0);
lean::cnstr_set(x_6, 1, x_28);
lean::cnstr_set(x_6, 0, x_29);
x_30 = l_Lean_IR_EmitCpp_emitArg(x_17, x_5, x_6);
if (lean::obj_tag(x_30) == 0)
{
uint8 x_31; 
x_31 = !lean::is_exclusive(x_30);
if (x_31 == 0)
{
obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
x_32 = lean::cnstr_get(x_30, 1);
x_33 = lean::cnstr_get(x_30, 0);
lean::dec(x_33);
x_34 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_35 = lean::string_append(x_32, x_34);
x_36 = l_IO_println___rarg___closed__1;
x_37 = lean::string_append(x_35, x_36);
lean::cnstr_set(x_30, 1, x_37);
lean::cnstr_set(x_30, 0, x_29);
x_4 = x_13;
x_6 = x_30;
goto _start;
}
else
{
obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; 
x_39 = lean::cnstr_get(x_30, 1);
lean::inc(x_39);
lean::dec(x_30);
x_40 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_41 = lean::string_append(x_39, x_40);
x_42 = l_IO_println___rarg___closed__1;
x_43 = lean::string_append(x_41, x_42);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_29);
lean::cnstr_set(x_44, 1, x_43);
x_4 = x_13;
x_6 = x_44;
goto _start;
}
}
else
{
uint8 x_46; 
lean::dec(x_13);
lean::dec(x_1);
x_46 = !lean::is_exclusive(x_30);
if (x_46 == 0)
{
return x_30;
}
else
{
obj* x_47; obj* x_48; obj* x_49; 
x_47 = lean::cnstr_get(x_30, 0);
x_48 = lean::cnstr_get(x_30, 1);
lean::inc(x_48);
lean::inc(x_47);
lean::dec(x_30);
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_47);
lean::cnstr_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_50 = lean::cnstr_get(x_6, 1);
lean::inc(x_50);
lean::dec(x_6);
x_51 = lean::mk_nat_obj(1u);
x_52 = lean::nat_sub(x_4, x_51);
lean::dec(x_4);
x_53 = lean::nat_sub(x_3, x_52);
x_54 = lean::nat_sub(x_53, x_51);
lean::dec(x_53);
x_55 = l_Lean_IR_Arg_Inhabited;
x_56 = lean::array_get(x_55, x_2, x_54);
x_57 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitPartialApp___spec__1___closed__1;
x_58 = lean::string_append(x_50, x_57);
lean::inc(x_1);
x_59 = l_Nat_repr(x_1);
x_60 = l_Lean_IR_VarId_HasToString___closed__1;
x_61 = lean::string_append(x_60, x_59);
lean::dec(x_59);
x_62 = lean::string_append(x_58, x_61);
lean::dec(x_61);
x_63 = l_List_reprAux___main___rarg___closed__1;
x_64 = lean::string_append(x_62, x_63);
x_65 = l_Nat_repr(x_54);
x_66 = lean::string_append(x_64, x_65);
lean::dec(x_65);
x_67 = lean::string_append(x_66, x_63);
x_68 = lean::box(0);
x_69 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_67);
x_70 = l_Lean_IR_EmitCpp_emitArg(x_56, x_5, x_69);
if (lean::obj_tag(x_70) == 0)
{
obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; 
x_71 = lean::cnstr_get(x_70, 1);
lean::inc(x_71);
if (lean::is_exclusive(x_70)) {
 lean::cnstr_release(x_70, 0);
 lean::cnstr_release(x_70, 1);
 x_72 = x_70;
} else {
 lean::dec_ref(x_70);
 x_72 = lean::box(0);
}
x_73 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_74 = lean::string_append(x_71, x_73);
x_75 = l_IO_println___rarg___closed__1;
x_76 = lean::string_append(x_74, x_75);
if (lean::is_scalar(x_72)) {
 x_77 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_77 = x_72;
}
lean::cnstr_set(x_77, 0, x_68);
lean::cnstr_set(x_77, 1, x_76);
x_4 = x_52;
x_6 = x_77;
goto _start;
}
else
{
obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
lean::dec(x_52);
lean::dec(x_1);
x_79 = lean::cnstr_get(x_70, 0);
lean::inc(x_79);
x_80 = lean::cnstr_get(x_70, 1);
lean::inc(x_80);
if (lean::is_exclusive(x_70)) {
 lean::cnstr_release(x_70, 0);
 lean::cnstr_release(x_70, 1);
 x_81 = x_70;
} else {
 lean::dec_ref(x_70);
 x_81 = lean::box(0);
}
if (lean::is_scalar(x_81)) {
 x_82 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_82 = x_81;
}
lean::cnstr_set(x_82, 0, x_79);
lean::cnstr_set(x_82, 1, x_80);
return x_82;
}
}
}
else
{
uint8 x_83; 
lean::dec(x_4);
lean::dec(x_1);
x_83 = !lean::is_exclusive(x_6);
if (x_83 == 0)
{
obj* x_84; obj* x_85; 
x_84 = lean::cnstr_get(x_6, 0);
lean::dec(x_84);
x_85 = lean::box(0);
lean::cnstr_set(x_6, 0, x_85);
return x_6;
}
else
{
obj* x_86; obj* x_87; obj* x_88; 
x_86 = lean::cnstr_get(x_6, 1);
lean::inc(x_86);
lean::dec(x_6);
x_87 = lean::box(0);
x_88 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_88, 0, x_87);
lean::cnstr_set(x_88, 1, x_86);
return x_88;
}
}
}
}
obj* _init_l_Lean_IR_EmitCpp_emitPartialApp___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::alloc_closure(reinterpret_cast<void*>(");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitPartialApp___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("), ");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitPartialApp(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
lean::inc(x_2);
x_6 = l_Lean_IR_EmitCpp_getDecl(x_2, x_4, x_5);
if (lean::obj_tag(x_6) == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = lean::cnstr_get(x_6, 0);
x_9 = lean::box(0);
lean::cnstr_set(x_6, 0, x_9);
x_10 = l_Lean_IR_Decl_params___main(x_8);
lean::dec(x_8);
x_11 = lean::array_get_size(x_10);
lean::dec(x_10);
lean::inc(x_1);
x_12 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_6);
if (lean::obj_tag(x_12) == 0)
{
uint8 x_13; 
x_13 = !lean::is_exclusive(x_12);
if (x_13 == 0)
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_14 = lean::cnstr_get(x_12, 1);
x_15 = lean::cnstr_get(x_12, 0);
lean::dec(x_15);
x_16 = l_Lean_IR_EmitCpp_emitPartialApp___closed__1;
x_17 = lean::string_append(x_14, x_16);
lean::cnstr_set(x_12, 1, x_17);
lean::cnstr_set(x_12, 0, x_9);
x_18 = l_Lean_IR_EmitCpp_emitCppName(x_2, x_4, x_12);
if (lean::obj_tag(x_18) == 0)
{
uint8 x_19; 
x_19 = !lean::is_exclusive(x_18);
if (x_19 == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
x_20 = lean::cnstr_get(x_18, 1);
x_21 = lean::cnstr_get(x_18, 0);
lean::dec(x_21);
x_22 = l_Lean_IR_EmitCpp_emitPartialApp___closed__2;
x_23 = lean::string_append(x_20, x_22);
x_24 = l_Nat_repr(x_11);
x_25 = lean::string_append(x_23, x_24);
lean::dec(x_24);
x_26 = l_List_reprAux___main___rarg___closed__1;
x_27 = lean::string_append(x_25, x_26);
x_28 = lean::array_get_size(x_3);
lean::inc(x_28);
x_29 = l_Nat_repr(x_28);
x_30 = lean::string_append(x_27, x_29);
lean::dec(x_29);
x_31 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_32 = lean::string_append(x_30, x_31);
x_33 = l_IO_println___rarg___closed__1;
x_34 = lean::string_append(x_32, x_33);
lean::cnstr_set(x_18, 1, x_34);
lean::cnstr_set(x_18, 0, x_9);
lean::inc(x_28);
x_35 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitPartialApp___spec__1(x_1, x_3, x_28, x_28, x_4, x_18);
lean::dec(x_28);
return x_35;
}
else
{
obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_36 = lean::cnstr_get(x_18, 1);
lean::inc(x_36);
lean::dec(x_18);
x_37 = l_Lean_IR_EmitCpp_emitPartialApp___closed__2;
x_38 = lean::string_append(x_36, x_37);
x_39 = l_Nat_repr(x_11);
x_40 = lean::string_append(x_38, x_39);
lean::dec(x_39);
x_41 = l_List_reprAux___main___rarg___closed__1;
x_42 = lean::string_append(x_40, x_41);
x_43 = lean::array_get_size(x_3);
lean::inc(x_43);
x_44 = l_Nat_repr(x_43);
x_45 = lean::string_append(x_42, x_44);
lean::dec(x_44);
x_46 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_47 = lean::string_append(x_45, x_46);
x_48 = l_IO_println___rarg___closed__1;
x_49 = lean::string_append(x_47, x_48);
x_50 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_50, 0, x_9);
lean::cnstr_set(x_50, 1, x_49);
lean::inc(x_43);
x_51 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitPartialApp___spec__1(x_1, x_3, x_43, x_43, x_4, x_50);
lean::dec(x_43);
return x_51;
}
}
else
{
uint8 x_52; 
lean::dec(x_11);
lean::dec(x_1);
x_52 = !lean::is_exclusive(x_18);
if (x_52 == 0)
{
return x_18;
}
else
{
obj* x_53; obj* x_54; obj* x_55; 
x_53 = lean::cnstr_get(x_18, 0);
x_54 = lean::cnstr_get(x_18, 1);
lean::inc(x_54);
lean::inc(x_53);
lean::dec(x_18);
x_55 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_55, 0, x_53);
lean::cnstr_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_56 = lean::cnstr_get(x_12, 1);
lean::inc(x_56);
lean::dec(x_12);
x_57 = l_Lean_IR_EmitCpp_emitPartialApp___closed__1;
x_58 = lean::string_append(x_56, x_57);
x_59 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_59, 0, x_9);
lean::cnstr_set(x_59, 1, x_58);
x_60 = l_Lean_IR_EmitCpp_emitCppName(x_2, x_4, x_59);
if (lean::obj_tag(x_60) == 0)
{
obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; 
x_61 = lean::cnstr_get(x_60, 1);
lean::inc(x_61);
if (lean::is_exclusive(x_60)) {
 lean::cnstr_release(x_60, 0);
 lean::cnstr_release(x_60, 1);
 x_62 = x_60;
} else {
 lean::dec_ref(x_60);
 x_62 = lean::box(0);
}
x_63 = l_Lean_IR_EmitCpp_emitPartialApp___closed__2;
x_64 = lean::string_append(x_61, x_63);
x_65 = l_Nat_repr(x_11);
x_66 = lean::string_append(x_64, x_65);
lean::dec(x_65);
x_67 = l_List_reprAux___main___rarg___closed__1;
x_68 = lean::string_append(x_66, x_67);
x_69 = lean::array_get_size(x_3);
lean::inc(x_69);
x_70 = l_Nat_repr(x_69);
x_71 = lean::string_append(x_68, x_70);
lean::dec(x_70);
x_72 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_73 = lean::string_append(x_71, x_72);
x_74 = l_IO_println___rarg___closed__1;
x_75 = lean::string_append(x_73, x_74);
if (lean::is_scalar(x_62)) {
 x_76 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_76 = x_62;
}
lean::cnstr_set(x_76, 0, x_9);
lean::cnstr_set(x_76, 1, x_75);
lean::inc(x_69);
x_77 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitPartialApp___spec__1(x_1, x_3, x_69, x_69, x_4, x_76);
lean::dec(x_69);
return x_77;
}
else
{
obj* x_78; obj* x_79; obj* x_80; obj* x_81; 
lean::dec(x_11);
lean::dec(x_1);
x_78 = lean::cnstr_get(x_60, 0);
lean::inc(x_78);
x_79 = lean::cnstr_get(x_60, 1);
lean::inc(x_79);
if (lean::is_exclusive(x_60)) {
 lean::cnstr_release(x_60, 0);
 lean::cnstr_release(x_60, 1);
 x_80 = x_60;
} else {
 lean::dec_ref(x_60);
 x_80 = lean::box(0);
}
if (lean::is_scalar(x_80)) {
 x_81 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_81 = x_80;
}
lean::cnstr_set(x_81, 0, x_78);
lean::cnstr_set(x_81, 1, x_79);
return x_81;
}
}
}
else
{
uint8 x_82; 
lean::dec(x_11);
lean::dec(x_2);
lean::dec(x_1);
x_82 = !lean::is_exclusive(x_12);
if (x_82 == 0)
{
return x_12;
}
else
{
obj* x_83; obj* x_84; obj* x_85; 
x_83 = lean::cnstr_get(x_12, 0);
x_84 = lean::cnstr_get(x_12, 1);
lean::inc(x_84);
lean::inc(x_83);
lean::dec(x_12);
x_85 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_85, 0, x_83);
lean::cnstr_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
x_86 = lean::cnstr_get(x_6, 0);
x_87 = lean::cnstr_get(x_6, 1);
lean::inc(x_87);
lean::inc(x_86);
lean::dec(x_6);
x_88 = lean::box(0);
x_89 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_89, 0, x_88);
lean::cnstr_set(x_89, 1, x_87);
x_90 = l_Lean_IR_Decl_params___main(x_86);
lean::dec(x_86);
x_91 = lean::array_get_size(x_90);
lean::dec(x_90);
lean::inc(x_1);
x_92 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_89);
if (lean::obj_tag(x_92) == 0)
{
obj* x_93; obj* x_94; obj* x_95; obj* x_96; obj* x_97; obj* x_98; 
x_93 = lean::cnstr_get(x_92, 1);
lean::inc(x_93);
if (lean::is_exclusive(x_92)) {
 lean::cnstr_release(x_92, 0);
 lean::cnstr_release(x_92, 1);
 x_94 = x_92;
} else {
 lean::dec_ref(x_92);
 x_94 = lean::box(0);
}
x_95 = l_Lean_IR_EmitCpp_emitPartialApp___closed__1;
x_96 = lean::string_append(x_93, x_95);
if (lean::is_scalar(x_94)) {
 x_97 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_97 = x_94;
}
lean::cnstr_set(x_97, 0, x_88);
lean::cnstr_set(x_97, 1, x_96);
x_98 = l_Lean_IR_EmitCpp_emitCppName(x_2, x_4, x_97);
if (lean::obj_tag(x_98) == 0)
{
obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; obj* x_108; obj* x_109; obj* x_110; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; 
x_99 = lean::cnstr_get(x_98, 1);
lean::inc(x_99);
if (lean::is_exclusive(x_98)) {
 lean::cnstr_release(x_98, 0);
 lean::cnstr_release(x_98, 1);
 x_100 = x_98;
} else {
 lean::dec_ref(x_98);
 x_100 = lean::box(0);
}
x_101 = l_Lean_IR_EmitCpp_emitPartialApp___closed__2;
x_102 = lean::string_append(x_99, x_101);
x_103 = l_Nat_repr(x_91);
x_104 = lean::string_append(x_102, x_103);
lean::dec(x_103);
x_105 = l_List_reprAux___main___rarg___closed__1;
x_106 = lean::string_append(x_104, x_105);
x_107 = lean::array_get_size(x_3);
lean::inc(x_107);
x_108 = l_Nat_repr(x_107);
x_109 = lean::string_append(x_106, x_108);
lean::dec(x_108);
x_110 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_111 = lean::string_append(x_109, x_110);
x_112 = l_IO_println___rarg___closed__1;
x_113 = lean::string_append(x_111, x_112);
if (lean::is_scalar(x_100)) {
 x_114 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_114 = x_100;
}
lean::cnstr_set(x_114, 0, x_88);
lean::cnstr_set(x_114, 1, x_113);
lean::inc(x_107);
x_115 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitPartialApp___spec__1(x_1, x_3, x_107, x_107, x_4, x_114);
lean::dec(x_107);
return x_115;
}
else
{
obj* x_116; obj* x_117; obj* x_118; obj* x_119; 
lean::dec(x_91);
lean::dec(x_1);
x_116 = lean::cnstr_get(x_98, 0);
lean::inc(x_116);
x_117 = lean::cnstr_get(x_98, 1);
lean::inc(x_117);
if (lean::is_exclusive(x_98)) {
 lean::cnstr_release(x_98, 0);
 lean::cnstr_release(x_98, 1);
 x_118 = x_98;
} else {
 lean::dec_ref(x_98);
 x_118 = lean::box(0);
}
if (lean::is_scalar(x_118)) {
 x_119 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_119 = x_118;
}
lean::cnstr_set(x_119, 0, x_116);
lean::cnstr_set(x_119, 1, x_117);
return x_119;
}
}
else
{
obj* x_120; obj* x_121; obj* x_122; obj* x_123; 
lean::dec(x_91);
lean::dec(x_2);
lean::dec(x_1);
x_120 = lean::cnstr_get(x_92, 0);
lean::inc(x_120);
x_121 = lean::cnstr_get(x_92, 1);
lean::inc(x_121);
if (lean::is_exclusive(x_92)) {
 lean::cnstr_release(x_92, 0);
 lean::cnstr_release(x_92, 1);
 x_122 = x_92;
} else {
 lean::dec_ref(x_92);
 x_122 = lean::box(0);
}
if (lean::is_scalar(x_122)) {
 x_123 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_123 = x_122;
}
lean::cnstr_set(x_123, 0, x_120);
lean::cnstr_set(x_123, 1, x_121);
return x_123;
}
}
}
else
{
uint8 x_124; 
lean::dec(x_2);
lean::dec(x_1);
x_124 = !lean::is_exclusive(x_6);
if (x_124 == 0)
{
return x_6;
}
else
{
obj* x_125; obj* x_126; obj* x_127; 
x_125 = lean::cnstr_get(x_6, 0);
x_126 = lean::cnstr_get(x_6, 1);
lean::inc(x_126);
lean::inc(x_125);
lean::dec(x_6);
x_127 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_127, 0, x_125);
lean::cnstr_set(x_127, 1, x_126);
return x_127;
}
}
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitPartialApp___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitPartialApp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_2);
return x_7;
}
}
obj* l_Lean_IR_EmitCpp_emitPartialApp___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_emitPartialApp(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_3);
return x_6;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitApp___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::apply_");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitApp___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("{ obj* _aargs[] = {");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitApp___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("};");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitApp___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::apply_m(");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitApp___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(", _aargs); }");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitApp(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; uint8 x_8; 
x_6 = lean::array_get_size(x_3);
x_7 = l_Lean_closureMaxArgs;
x_8 = lean::nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
obj* x_9; 
x_9 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_5);
if (lean::obj_tag(x_9) == 0)
{
uint8 x_10; 
x_10 = !lean::is_exclusive(x_9);
if (x_10 == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_11 = lean::cnstr_get(x_9, 1);
x_12 = lean::cnstr_get(x_9, 0);
lean::dec(x_12);
x_13 = l_Lean_IR_EmitCpp_emitApp___closed__1;
x_14 = lean::string_append(x_11, x_13);
x_15 = l_Nat_repr(x_6);
x_16 = lean::string_append(x_14, x_15);
lean::dec(x_15);
x_17 = l_Prod_HasRepr___rarg___closed__1;
x_18 = lean::string_append(x_16, x_17);
x_19 = l_Nat_repr(x_2);
x_20 = l_Lean_IR_VarId_HasToString___closed__1;
x_21 = lean::string_append(x_20, x_19);
lean::dec(x_19);
x_22 = lean::string_append(x_18, x_21);
lean::dec(x_21);
x_23 = l_List_reprAux___main___rarg___closed__1;
x_24 = lean::string_append(x_22, x_23);
x_25 = lean::box(0);
lean::cnstr_set(x_9, 1, x_24);
lean::cnstr_set(x_9, 0, x_25);
x_26 = l_Lean_IR_EmitCpp_emitArgs(x_3, x_4, x_9);
if (lean::obj_tag(x_26) == 0)
{
uint8 x_27; 
x_27 = !lean::is_exclusive(x_26);
if (x_27 == 0)
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_28 = lean::cnstr_get(x_26, 1);
x_29 = lean::cnstr_get(x_26, 0);
lean::dec(x_29);
x_30 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_31 = lean::string_append(x_28, x_30);
x_32 = l_IO_println___rarg___closed__1;
x_33 = lean::string_append(x_31, x_32);
lean::cnstr_set(x_26, 1, x_33);
lean::cnstr_set(x_26, 0, x_25);
return x_26;
}
else
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
x_34 = lean::cnstr_get(x_26, 1);
lean::inc(x_34);
lean::dec(x_26);
x_35 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_36 = lean::string_append(x_34, x_35);
x_37 = l_IO_println___rarg___closed__1;
x_38 = lean::string_append(x_36, x_37);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_25);
lean::cnstr_set(x_39, 1, x_38);
return x_39;
}
}
else
{
uint8 x_40; 
x_40 = !lean::is_exclusive(x_26);
if (x_40 == 0)
{
return x_26;
}
else
{
obj* x_41; obj* x_42; obj* x_43; 
x_41 = lean::cnstr_get(x_26, 0);
x_42 = lean::cnstr_get(x_26, 1);
lean::inc(x_42);
lean::inc(x_41);
lean::dec(x_26);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_41);
lean::cnstr_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
x_44 = lean::cnstr_get(x_9, 1);
lean::inc(x_44);
lean::dec(x_9);
x_45 = l_Lean_IR_EmitCpp_emitApp___closed__1;
x_46 = lean::string_append(x_44, x_45);
x_47 = l_Nat_repr(x_6);
x_48 = lean::string_append(x_46, x_47);
lean::dec(x_47);
x_49 = l_Prod_HasRepr___rarg___closed__1;
x_50 = lean::string_append(x_48, x_49);
x_51 = l_Nat_repr(x_2);
x_52 = l_Lean_IR_VarId_HasToString___closed__1;
x_53 = lean::string_append(x_52, x_51);
lean::dec(x_51);
x_54 = lean::string_append(x_50, x_53);
lean::dec(x_53);
x_55 = l_List_reprAux___main___rarg___closed__1;
x_56 = lean::string_append(x_54, x_55);
x_57 = lean::box(0);
x_58 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_56);
x_59 = l_Lean_IR_EmitCpp_emitArgs(x_3, x_4, x_58);
if (lean::obj_tag(x_59) == 0)
{
obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; 
x_60 = lean::cnstr_get(x_59, 1);
lean::inc(x_60);
if (lean::is_exclusive(x_59)) {
 lean::cnstr_release(x_59, 0);
 lean::cnstr_release(x_59, 1);
 x_61 = x_59;
} else {
 lean::dec_ref(x_59);
 x_61 = lean::box(0);
}
x_62 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_63 = lean::string_append(x_60, x_62);
x_64 = l_IO_println___rarg___closed__1;
x_65 = lean::string_append(x_63, x_64);
if (lean::is_scalar(x_61)) {
 x_66 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_66 = x_61;
}
lean::cnstr_set(x_66, 0, x_57);
lean::cnstr_set(x_66, 1, x_65);
return x_66;
}
else
{
obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_67 = lean::cnstr_get(x_59, 0);
lean::inc(x_67);
x_68 = lean::cnstr_get(x_59, 1);
lean::inc(x_68);
if (lean::is_exclusive(x_59)) {
 lean::cnstr_release(x_59, 0);
 lean::cnstr_release(x_59, 1);
 x_69 = x_59;
} else {
 lean::dec_ref(x_59);
 x_69 = lean::box(0);
}
if (lean::is_scalar(x_69)) {
 x_70 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_70 = x_69;
}
lean::cnstr_set(x_70, 0, x_67);
lean::cnstr_set(x_70, 1, x_68);
return x_70;
}
}
}
else
{
uint8 x_71; 
lean::dec(x_6);
lean::dec(x_2);
x_71 = !lean::is_exclusive(x_9);
if (x_71 == 0)
{
return x_9;
}
else
{
obj* x_72; obj* x_73; obj* x_74; 
x_72 = lean::cnstr_get(x_9, 0);
x_73 = lean::cnstr_get(x_9, 1);
lean::inc(x_73);
lean::inc(x_72);
lean::dec(x_9);
x_74 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_74, 0, x_72);
lean::cnstr_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
uint8 x_75; 
x_75 = !lean::is_exclusive(x_5);
if (x_75 == 0)
{
obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; 
x_76 = lean::cnstr_get(x_5, 1);
x_77 = lean::cnstr_get(x_5, 0);
lean::dec(x_77);
x_78 = l_Lean_IR_EmitCpp_emitApp___closed__2;
x_79 = lean::string_append(x_76, x_78);
x_80 = lean::box(0);
lean::cnstr_set(x_5, 1, x_79);
lean::cnstr_set(x_5, 0, x_80);
x_81 = l_Lean_IR_EmitCpp_emitArgs(x_3, x_4, x_5);
if (lean::obj_tag(x_81) == 0)
{
uint8 x_82; 
x_82 = !lean::is_exclusive(x_81);
if (x_82 == 0)
{
obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; 
x_83 = lean::cnstr_get(x_81, 1);
x_84 = lean::cnstr_get(x_81, 0);
lean::dec(x_84);
x_85 = l_Lean_IR_EmitCpp_emitApp___closed__3;
x_86 = lean::string_append(x_83, x_85);
x_87 = l_IO_println___rarg___closed__1;
x_88 = lean::string_append(x_86, x_87);
lean::cnstr_set(x_81, 1, x_88);
lean::cnstr_set(x_81, 0, x_80);
x_89 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_81);
if (lean::obj_tag(x_89) == 0)
{
uint8 x_90; 
x_90 = !lean::is_exclusive(x_89);
if (x_90 == 0)
{
obj* x_91; obj* x_92; obj* x_93; obj* x_94; obj* x_95; obj* x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; 
x_91 = lean::cnstr_get(x_89, 1);
x_92 = lean::cnstr_get(x_89, 0);
lean::dec(x_92);
x_93 = l_Lean_IR_EmitCpp_emitApp___closed__4;
x_94 = lean::string_append(x_91, x_93);
x_95 = l_Nat_repr(x_2);
x_96 = l_Lean_IR_VarId_HasToString___closed__1;
x_97 = lean::string_append(x_96, x_95);
lean::dec(x_95);
x_98 = lean::string_append(x_94, x_97);
lean::dec(x_97);
x_99 = l_List_reprAux___main___rarg___closed__1;
x_100 = lean::string_append(x_98, x_99);
x_101 = l_Nat_repr(x_6);
x_102 = lean::string_append(x_100, x_101);
lean::dec(x_101);
x_103 = l_Lean_IR_EmitCpp_emitApp___closed__5;
x_104 = lean::string_append(x_102, x_103);
x_105 = lean::string_append(x_104, x_87);
lean::cnstr_set(x_89, 1, x_105);
lean::cnstr_set(x_89, 0, x_80);
return x_89;
}
else
{
obj* x_106; obj* x_107; obj* x_108; obj* x_109; obj* x_110; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; obj* x_120; 
x_106 = lean::cnstr_get(x_89, 1);
lean::inc(x_106);
lean::dec(x_89);
x_107 = l_Lean_IR_EmitCpp_emitApp___closed__4;
x_108 = lean::string_append(x_106, x_107);
x_109 = l_Nat_repr(x_2);
x_110 = l_Lean_IR_VarId_HasToString___closed__1;
x_111 = lean::string_append(x_110, x_109);
lean::dec(x_109);
x_112 = lean::string_append(x_108, x_111);
lean::dec(x_111);
x_113 = l_List_reprAux___main___rarg___closed__1;
x_114 = lean::string_append(x_112, x_113);
x_115 = l_Nat_repr(x_6);
x_116 = lean::string_append(x_114, x_115);
lean::dec(x_115);
x_117 = l_Lean_IR_EmitCpp_emitApp___closed__5;
x_118 = lean::string_append(x_116, x_117);
x_119 = lean::string_append(x_118, x_87);
x_120 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_120, 0, x_80);
lean::cnstr_set(x_120, 1, x_119);
return x_120;
}
}
else
{
uint8 x_121; 
lean::dec(x_6);
lean::dec(x_2);
x_121 = !lean::is_exclusive(x_89);
if (x_121 == 0)
{
return x_89;
}
else
{
obj* x_122; obj* x_123; obj* x_124; 
x_122 = lean::cnstr_get(x_89, 0);
x_123 = lean::cnstr_get(x_89, 1);
lean::inc(x_123);
lean::inc(x_122);
lean::dec(x_89);
x_124 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_124, 0, x_122);
lean::cnstr_set(x_124, 1, x_123);
return x_124;
}
}
}
else
{
obj* x_125; obj* x_126; obj* x_127; obj* x_128; obj* x_129; obj* x_130; obj* x_131; 
x_125 = lean::cnstr_get(x_81, 1);
lean::inc(x_125);
lean::dec(x_81);
x_126 = l_Lean_IR_EmitCpp_emitApp___closed__3;
x_127 = lean::string_append(x_125, x_126);
x_128 = l_IO_println___rarg___closed__1;
x_129 = lean::string_append(x_127, x_128);
x_130 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_130, 0, x_80);
lean::cnstr_set(x_130, 1, x_129);
x_131 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_130);
if (lean::obj_tag(x_131) == 0)
{
obj* x_132; obj* x_133; obj* x_134; obj* x_135; obj* x_136; obj* x_137; obj* x_138; obj* x_139; obj* x_140; obj* x_141; obj* x_142; obj* x_143; obj* x_144; obj* x_145; obj* x_146; obj* x_147; 
x_132 = lean::cnstr_get(x_131, 1);
lean::inc(x_132);
if (lean::is_exclusive(x_131)) {
 lean::cnstr_release(x_131, 0);
 lean::cnstr_release(x_131, 1);
 x_133 = x_131;
} else {
 lean::dec_ref(x_131);
 x_133 = lean::box(0);
}
x_134 = l_Lean_IR_EmitCpp_emitApp___closed__4;
x_135 = lean::string_append(x_132, x_134);
x_136 = l_Nat_repr(x_2);
x_137 = l_Lean_IR_VarId_HasToString___closed__1;
x_138 = lean::string_append(x_137, x_136);
lean::dec(x_136);
x_139 = lean::string_append(x_135, x_138);
lean::dec(x_138);
x_140 = l_List_reprAux___main___rarg___closed__1;
x_141 = lean::string_append(x_139, x_140);
x_142 = l_Nat_repr(x_6);
x_143 = lean::string_append(x_141, x_142);
lean::dec(x_142);
x_144 = l_Lean_IR_EmitCpp_emitApp___closed__5;
x_145 = lean::string_append(x_143, x_144);
x_146 = lean::string_append(x_145, x_128);
if (lean::is_scalar(x_133)) {
 x_147 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_147 = x_133;
}
lean::cnstr_set(x_147, 0, x_80);
lean::cnstr_set(x_147, 1, x_146);
return x_147;
}
else
{
obj* x_148; obj* x_149; obj* x_150; obj* x_151; 
lean::dec(x_6);
lean::dec(x_2);
x_148 = lean::cnstr_get(x_131, 0);
lean::inc(x_148);
x_149 = lean::cnstr_get(x_131, 1);
lean::inc(x_149);
if (lean::is_exclusive(x_131)) {
 lean::cnstr_release(x_131, 0);
 lean::cnstr_release(x_131, 1);
 x_150 = x_131;
} else {
 lean::dec_ref(x_131);
 x_150 = lean::box(0);
}
if (lean::is_scalar(x_150)) {
 x_151 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_151 = x_150;
}
lean::cnstr_set(x_151, 0, x_148);
lean::cnstr_set(x_151, 1, x_149);
return x_151;
}
}
}
else
{
uint8 x_152; 
lean::dec(x_6);
lean::dec(x_2);
lean::dec(x_1);
x_152 = !lean::is_exclusive(x_81);
if (x_152 == 0)
{
return x_81;
}
else
{
obj* x_153; obj* x_154; obj* x_155; 
x_153 = lean::cnstr_get(x_81, 0);
x_154 = lean::cnstr_get(x_81, 1);
lean::inc(x_154);
lean::inc(x_153);
lean::dec(x_81);
x_155 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_155, 0, x_153);
lean::cnstr_set(x_155, 1, x_154);
return x_155;
}
}
}
else
{
obj* x_156; obj* x_157; obj* x_158; obj* x_159; obj* x_160; obj* x_161; 
x_156 = lean::cnstr_get(x_5, 1);
lean::inc(x_156);
lean::dec(x_5);
x_157 = l_Lean_IR_EmitCpp_emitApp___closed__2;
x_158 = lean::string_append(x_156, x_157);
x_159 = lean::box(0);
x_160 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_160, 0, x_159);
lean::cnstr_set(x_160, 1, x_158);
x_161 = l_Lean_IR_EmitCpp_emitArgs(x_3, x_4, x_160);
if (lean::obj_tag(x_161) == 0)
{
obj* x_162; obj* x_163; obj* x_164; obj* x_165; obj* x_166; obj* x_167; obj* x_168; obj* x_169; 
x_162 = lean::cnstr_get(x_161, 1);
lean::inc(x_162);
if (lean::is_exclusive(x_161)) {
 lean::cnstr_release(x_161, 0);
 lean::cnstr_release(x_161, 1);
 x_163 = x_161;
} else {
 lean::dec_ref(x_161);
 x_163 = lean::box(0);
}
x_164 = l_Lean_IR_EmitCpp_emitApp___closed__3;
x_165 = lean::string_append(x_162, x_164);
x_166 = l_IO_println___rarg___closed__1;
x_167 = lean::string_append(x_165, x_166);
if (lean::is_scalar(x_163)) {
 x_168 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_168 = x_163;
}
lean::cnstr_set(x_168, 0, x_159);
lean::cnstr_set(x_168, 1, x_167);
x_169 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_168);
if (lean::obj_tag(x_169) == 0)
{
obj* x_170; obj* x_171; obj* x_172; obj* x_173; obj* x_174; obj* x_175; obj* x_176; obj* x_177; obj* x_178; obj* x_179; obj* x_180; obj* x_181; obj* x_182; obj* x_183; obj* x_184; obj* x_185; 
x_170 = lean::cnstr_get(x_169, 1);
lean::inc(x_170);
if (lean::is_exclusive(x_169)) {
 lean::cnstr_release(x_169, 0);
 lean::cnstr_release(x_169, 1);
 x_171 = x_169;
} else {
 lean::dec_ref(x_169);
 x_171 = lean::box(0);
}
x_172 = l_Lean_IR_EmitCpp_emitApp___closed__4;
x_173 = lean::string_append(x_170, x_172);
x_174 = l_Nat_repr(x_2);
x_175 = l_Lean_IR_VarId_HasToString___closed__1;
x_176 = lean::string_append(x_175, x_174);
lean::dec(x_174);
x_177 = lean::string_append(x_173, x_176);
lean::dec(x_176);
x_178 = l_List_reprAux___main___rarg___closed__1;
x_179 = lean::string_append(x_177, x_178);
x_180 = l_Nat_repr(x_6);
x_181 = lean::string_append(x_179, x_180);
lean::dec(x_180);
x_182 = l_Lean_IR_EmitCpp_emitApp___closed__5;
x_183 = lean::string_append(x_181, x_182);
x_184 = lean::string_append(x_183, x_166);
if (lean::is_scalar(x_171)) {
 x_185 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_185 = x_171;
}
lean::cnstr_set(x_185, 0, x_159);
lean::cnstr_set(x_185, 1, x_184);
return x_185;
}
else
{
obj* x_186; obj* x_187; obj* x_188; obj* x_189; 
lean::dec(x_6);
lean::dec(x_2);
x_186 = lean::cnstr_get(x_169, 0);
lean::inc(x_186);
x_187 = lean::cnstr_get(x_169, 1);
lean::inc(x_187);
if (lean::is_exclusive(x_169)) {
 lean::cnstr_release(x_169, 0);
 lean::cnstr_release(x_169, 1);
 x_188 = x_169;
} else {
 lean::dec_ref(x_169);
 x_188 = lean::box(0);
}
if (lean::is_scalar(x_188)) {
 x_189 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_189 = x_188;
}
lean::cnstr_set(x_189, 0, x_186);
lean::cnstr_set(x_189, 1, x_187);
return x_189;
}
}
else
{
obj* x_190; obj* x_191; obj* x_192; obj* x_193; 
lean::dec(x_6);
lean::dec(x_2);
lean::dec(x_1);
x_190 = lean::cnstr_get(x_161, 0);
lean::inc(x_190);
x_191 = lean::cnstr_get(x_161, 1);
lean::inc(x_191);
if (lean::is_exclusive(x_161)) {
 lean::cnstr_release(x_161, 0);
 lean::cnstr_release(x_161, 1);
 x_192 = x_161;
} else {
 lean::dec_ref(x_161);
 x_192 = lean::box(0);
}
if (lean::is_scalar(x_192)) {
 x_193 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_193 = x_192;
}
lean::cnstr_set(x_193, 0, x_190);
lean::cnstr_set(x_193, 1, x_191);
return x_193;
}
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitApp___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_emitApp(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_3);
return x_6;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitBoxFn___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("floats are not supported yet");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitBoxFn___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::box");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitBoxFn___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::box_uint32");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitBoxFn___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::box_uint64");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitBoxFn___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::box_size_t");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitBoxFn(uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::box(x_1);
switch (lean::obj_tag(x_4)) {
case 0:
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_3);
if (x_5 == 0)
{
obj* x_6; obj* x_7; 
x_6 = lean::cnstr_get(x_3, 0);
lean::dec(x_6);
x_7 = l_Lean_IR_EmitCpp_emitBoxFn___closed__1;
lean::cnstr_set_tag(x_3, 1);
lean::cnstr_set(x_3, 0, x_7);
return x_3;
}
else
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = lean::cnstr_get(x_3, 1);
lean::inc(x_8);
lean::dec(x_3);
x_9 = l_Lean_IR_EmitCpp_emitBoxFn___closed__1;
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_8);
return x_10;
}
}
case 3:
{
uint8 x_11; 
x_11 = !lean::is_exclusive(x_3);
if (x_11 == 0)
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_12 = lean::cnstr_get(x_3, 1);
x_13 = lean::cnstr_get(x_3, 0);
lean::dec(x_13);
x_14 = l_Lean_IR_EmitCpp_emitBoxFn___closed__3;
x_15 = lean::string_append(x_12, x_14);
x_16 = lean::box(0);
lean::cnstr_set(x_3, 1, x_15);
lean::cnstr_set(x_3, 0, x_16);
return x_3;
}
else
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_17 = lean::cnstr_get(x_3, 1);
lean::inc(x_17);
lean::dec(x_3);
x_18 = l_Lean_IR_EmitCpp_emitBoxFn___closed__3;
x_19 = lean::string_append(x_17, x_18);
x_20 = lean::box(0);
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_19);
return x_21;
}
}
case 4:
{
uint8 x_22; 
x_22 = !lean::is_exclusive(x_3);
if (x_22 == 0)
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_23 = lean::cnstr_get(x_3, 1);
x_24 = lean::cnstr_get(x_3, 0);
lean::dec(x_24);
x_25 = l_Lean_IR_EmitCpp_emitBoxFn___closed__4;
x_26 = lean::string_append(x_23, x_25);
x_27 = lean::box(0);
lean::cnstr_set(x_3, 1, x_26);
lean::cnstr_set(x_3, 0, x_27);
return x_3;
}
else
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_28 = lean::cnstr_get(x_3, 1);
lean::inc(x_28);
lean::dec(x_3);
x_29 = l_Lean_IR_EmitCpp_emitBoxFn___closed__4;
x_30 = lean::string_append(x_28, x_29);
x_31 = lean::box(0);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_30);
return x_32;
}
}
case 5:
{
uint8 x_33; 
x_33 = !lean::is_exclusive(x_3);
if (x_33 == 0)
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_34 = lean::cnstr_get(x_3, 1);
x_35 = lean::cnstr_get(x_3, 0);
lean::dec(x_35);
x_36 = l_Lean_IR_EmitCpp_emitBoxFn___closed__5;
x_37 = lean::string_append(x_34, x_36);
x_38 = lean::box(0);
lean::cnstr_set(x_3, 1, x_37);
lean::cnstr_set(x_3, 0, x_38);
return x_3;
}
else
{
obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_39 = lean::cnstr_get(x_3, 1);
lean::inc(x_39);
lean::dec(x_3);
x_40 = l_Lean_IR_EmitCpp_emitBoxFn___closed__5;
x_41 = lean::string_append(x_39, x_40);
x_42 = lean::box(0);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_42);
lean::cnstr_set(x_43, 1, x_41);
return x_43;
}
}
default: 
{
uint8 x_44; 
lean::dec(x_4);
x_44 = !lean::is_exclusive(x_3);
if (x_44 == 0)
{
obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
x_45 = lean::cnstr_get(x_3, 1);
x_46 = lean::cnstr_get(x_3, 0);
lean::dec(x_46);
x_47 = l_Lean_IR_EmitCpp_emitBoxFn___closed__2;
x_48 = lean::string_append(x_45, x_47);
x_49 = lean::box(0);
lean::cnstr_set(x_3, 1, x_48);
lean::cnstr_set(x_3, 0, x_49);
return x_3;
}
else
{
obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
x_50 = lean::cnstr_get(x_3, 1);
lean::inc(x_50);
lean::dec(x_3);
x_51 = l_Lean_IR_EmitCpp_emitBoxFn___closed__2;
x_52 = lean::string_append(x_50, x_51);
x_53 = lean::box(0);
x_54 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_52);
return x_54;
}
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitBoxFn___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_5 = l_Lean_IR_EmitCpp_emitBoxFn(x_4, x_2, x_3);
lean::dec(x_2);
return x_5;
}
}
obj* l_Lean_IR_EmitCpp_emitBox(obj* x_1, obj* x_2, uint8 x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_5);
if (lean::obj_tag(x_6) == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = lean::cnstr_get(x_6, 0);
lean::dec(x_8);
x_9 = lean::box(0);
lean::cnstr_set(x_6, 0, x_9);
x_10 = l_Lean_IR_EmitCpp_emitBoxFn(x_3, x_4, x_6);
if (lean::obj_tag(x_10) == 0)
{
uint8 x_11; 
x_11 = !lean::is_exclusive(x_10);
if (x_11 == 0)
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_12 = lean::cnstr_get(x_10, 1);
x_13 = lean::cnstr_get(x_10, 0);
lean::dec(x_13);
x_14 = l_Prod_HasRepr___rarg___closed__1;
x_15 = lean::string_append(x_12, x_14);
x_16 = l_Nat_repr(x_2);
x_17 = l_Lean_IR_VarId_HasToString___closed__1;
x_18 = lean::string_append(x_17, x_16);
lean::dec(x_16);
x_19 = lean::string_append(x_15, x_18);
lean::dec(x_18);
x_20 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_21 = lean::string_append(x_19, x_20);
x_22 = l_IO_println___rarg___closed__1;
x_23 = lean::string_append(x_21, x_22);
lean::cnstr_set(x_10, 1, x_23);
lean::cnstr_set(x_10, 0, x_9);
return x_10;
}
else
{
obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
x_24 = lean::cnstr_get(x_10, 1);
lean::inc(x_24);
lean::dec(x_10);
x_25 = l_Prod_HasRepr___rarg___closed__1;
x_26 = lean::string_append(x_24, x_25);
x_27 = l_Nat_repr(x_2);
x_28 = l_Lean_IR_VarId_HasToString___closed__1;
x_29 = lean::string_append(x_28, x_27);
lean::dec(x_27);
x_30 = lean::string_append(x_26, x_29);
lean::dec(x_29);
x_31 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_32 = lean::string_append(x_30, x_31);
x_33 = l_IO_println___rarg___closed__1;
x_34 = lean::string_append(x_32, x_33);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_9);
lean::cnstr_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8 x_36; 
lean::dec(x_2);
x_36 = !lean::is_exclusive(x_10);
if (x_36 == 0)
{
return x_10;
}
else
{
obj* x_37; obj* x_38; obj* x_39; 
x_37 = lean::cnstr_get(x_10, 0);
x_38 = lean::cnstr_get(x_10, 1);
lean::inc(x_38);
lean::inc(x_37);
lean::dec(x_10);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_37);
lean::cnstr_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_40 = lean::cnstr_get(x_6, 1);
lean::inc(x_40);
lean::dec(x_6);
x_41 = lean::box(0);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set(x_42, 1, x_40);
x_43 = l_Lean_IR_EmitCpp_emitBoxFn(x_3, x_4, x_42);
if (lean::obj_tag(x_43) == 0)
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; 
x_44 = lean::cnstr_get(x_43, 1);
lean::inc(x_44);
if (lean::is_exclusive(x_43)) {
 lean::cnstr_release(x_43, 0);
 lean::cnstr_release(x_43, 1);
 x_45 = x_43;
} else {
 lean::dec_ref(x_43);
 x_45 = lean::box(0);
}
x_46 = l_Prod_HasRepr___rarg___closed__1;
x_47 = lean::string_append(x_44, x_46);
x_48 = l_Nat_repr(x_2);
x_49 = l_Lean_IR_VarId_HasToString___closed__1;
x_50 = lean::string_append(x_49, x_48);
lean::dec(x_48);
x_51 = lean::string_append(x_47, x_50);
lean::dec(x_50);
x_52 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_53 = lean::string_append(x_51, x_52);
x_54 = l_IO_println___rarg___closed__1;
x_55 = lean::string_append(x_53, x_54);
if (lean::is_scalar(x_45)) {
 x_56 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_56 = x_45;
}
lean::cnstr_set(x_56, 0, x_41);
lean::cnstr_set(x_56, 1, x_55);
return x_56;
}
else
{
obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
lean::dec(x_2);
x_57 = lean::cnstr_get(x_43, 0);
lean::inc(x_57);
x_58 = lean::cnstr_get(x_43, 1);
lean::inc(x_58);
if (lean::is_exclusive(x_43)) {
 lean::cnstr_release(x_43, 0);
 lean::cnstr_release(x_43, 1);
 x_59 = x_43;
} else {
 lean::dec_ref(x_43);
 x_59 = lean::box(0);
}
if (lean::is_scalar(x_59)) {
 x_60 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_60 = x_59;
}
lean::cnstr_set(x_60, 0, x_57);
lean::cnstr_set(x_60, 1, x_58);
return x_60;
}
}
}
else
{
uint8 x_61; 
lean::dec(x_2);
x_61 = !lean::is_exclusive(x_6);
if (x_61 == 0)
{
return x_6;
}
else
{
obj* x_62; obj* x_63; obj* x_64; 
x_62 = lean::cnstr_get(x_6, 0);
x_63 = lean::cnstr_get(x_6, 1);
lean::inc(x_63);
lean::inc(x_62);
lean::dec(x_6);
x_64 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_64, 0, x_62);
lean::cnstr_set(x_64, 1, x_63);
return x_64;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitBox___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_3);
lean::dec(x_3);
x_7 = l_Lean_IR_EmitCpp_emitBox(x_1, x_2, x_6, x_4, x_5);
lean::dec(x_4);
return x_7;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitUnbox___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::unbox");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitUnbox___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::unbox_uint32");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitUnbox___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::unbox_uint64");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitUnbox___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::unbox_size_t");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitUnbox(obj* x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_20; 
x_20 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_5);
if (lean::obj_tag(x_20) == 0)
{
obj* x_21; 
x_21 = lean::box(x_2);
switch (lean::obj_tag(x_21)) {
case 0:
{
uint8 x_22; 
lean::dec(x_3);
x_22 = !lean::is_exclusive(x_20);
if (x_22 == 0)
{
obj* x_23; obj* x_24; 
x_23 = lean::cnstr_get(x_20, 0);
lean::dec(x_23);
x_24 = l_Lean_IR_EmitCpp_emitBoxFn___closed__1;
lean::cnstr_set_tag(x_20, 1);
lean::cnstr_set(x_20, 0, x_24);
return x_20;
}
else
{
obj* x_25; obj* x_26; obj* x_27; 
x_25 = lean::cnstr_get(x_20, 1);
lean::inc(x_25);
lean::dec(x_20);
x_26 = l_Lean_IR_EmitCpp_emitBoxFn___closed__1;
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_25);
return x_27;
}
}
case 3:
{
obj* x_28; obj* x_29; obj* x_30; 
x_28 = lean::cnstr_get(x_20, 1);
lean::inc(x_28);
lean::dec(x_20);
x_29 = l_Lean_IR_EmitCpp_emitUnbox___closed__2;
x_30 = lean::string_append(x_28, x_29);
x_6 = x_30;
goto block_19;
}
case 4:
{
obj* x_31; obj* x_32; obj* x_33; 
x_31 = lean::cnstr_get(x_20, 1);
lean::inc(x_31);
lean::dec(x_20);
x_32 = l_Lean_IR_EmitCpp_emitUnbox___closed__3;
x_33 = lean::string_append(x_31, x_32);
x_6 = x_33;
goto block_19;
}
case 5:
{
obj* x_34; obj* x_35; obj* x_36; 
x_34 = lean::cnstr_get(x_20, 1);
lean::inc(x_34);
lean::dec(x_20);
x_35 = l_Lean_IR_EmitCpp_emitUnbox___closed__4;
x_36 = lean::string_append(x_34, x_35);
x_6 = x_36;
goto block_19;
}
default: 
{
obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_21);
x_37 = lean::cnstr_get(x_20, 1);
lean::inc(x_37);
lean::dec(x_20);
x_38 = l_Lean_IR_EmitCpp_emitUnbox___closed__1;
x_39 = lean::string_append(x_37, x_38);
x_6 = x_39;
goto block_19;
}
}
}
else
{
uint8 x_40; 
lean::dec(x_3);
x_40 = !lean::is_exclusive(x_20);
if (x_40 == 0)
{
return x_20;
}
else
{
obj* x_41; obj* x_42; obj* x_43; 
x_41 = lean::cnstr_get(x_20, 0);
x_42 = lean::cnstr_get(x_20, 1);
lean::inc(x_42);
lean::inc(x_41);
lean::dec(x_20);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_41);
lean::cnstr_set(x_43, 1, x_42);
return x_43;
}
}
block_19:
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_7 = l_Prod_HasRepr___rarg___closed__1;
x_8 = lean::string_append(x_6, x_7);
x_9 = l_Nat_repr(x_3);
x_10 = l_Lean_IR_VarId_HasToString___closed__1;
x_11 = lean::string_append(x_10, x_9);
lean::dec(x_9);
x_12 = lean::string_append(x_8, x_11);
lean::dec(x_11);
x_13 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_14 = lean::string_append(x_12, x_13);
x_15 = l_IO_println___rarg___closed__1;
x_16 = lean::string_append(x_14, x_15);
x_17 = lean::box(0);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_16);
return x_18;
}
}
}
obj* l_Lean_IR_EmitCpp_emitUnbox___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_2);
lean::dec(x_2);
x_7 = l_Lean_IR_EmitCpp_emitUnbox(x_1, x_6, x_3, x_4, x_5);
lean::dec(x_4);
return x_7;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitIsShared___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("!lean::is_exclusive(");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitIsShared(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_3, x_4);
if (lean::obj_tag(x_5) == 0)
{
uint8 x_6; 
x_6 = !lean::is_exclusive(x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_7 = lean::cnstr_get(x_5, 1);
x_8 = lean::cnstr_get(x_5, 0);
lean::dec(x_8);
x_9 = l_Lean_IR_EmitCpp_emitIsShared___closed__1;
x_10 = lean::string_append(x_7, x_9);
x_11 = l_Nat_repr(x_2);
x_12 = l_Lean_IR_VarId_HasToString___closed__1;
x_13 = lean::string_append(x_12, x_11);
lean::dec(x_11);
x_14 = lean::string_append(x_10, x_13);
lean::dec(x_13);
x_15 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_16 = lean::string_append(x_14, x_15);
x_17 = l_IO_println___rarg___closed__1;
x_18 = lean::string_append(x_16, x_17);
x_19 = lean::box(0);
lean::cnstr_set(x_5, 1, x_18);
lean::cnstr_set(x_5, 0, x_19);
return x_5;
}
else
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_20 = lean::cnstr_get(x_5, 1);
lean::inc(x_20);
lean::dec(x_5);
x_21 = l_Lean_IR_EmitCpp_emitIsShared___closed__1;
x_22 = lean::string_append(x_20, x_21);
x_23 = l_Nat_repr(x_2);
x_24 = l_Lean_IR_VarId_HasToString___closed__1;
x_25 = lean::string_append(x_24, x_23);
lean::dec(x_23);
x_26 = lean::string_append(x_22, x_25);
lean::dec(x_25);
x_27 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_28 = lean::string_append(x_26, x_27);
x_29 = l_IO_println___rarg___closed__1;
x_30 = lean::string_append(x_28, x_29);
x_31 = lean::box(0);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_30);
return x_32;
}
}
else
{
uint8 x_33; 
lean::dec(x_2);
x_33 = !lean::is_exclusive(x_5);
if (x_33 == 0)
{
return x_5;
}
else
{
obj* x_34; obj* x_35; obj* x_36; 
x_34 = lean::cnstr_get(x_5, 0);
x_35 = lean::cnstr_get(x_5, 1);
lean::inc(x_35);
lean::inc(x_34);
lean::dec(x_5);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_34);
lean::cnstr_set(x_36, 1, x_35);
return x_36;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitIsShared___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_emitIsShared(x_1, x_2, x_3, x_4);
lean::dec(x_3);
return x_5;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitIsTaggedPtr___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("!lean::is_scalar(");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitIsTaggedPtr(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_3, x_4);
if (lean::obj_tag(x_5) == 0)
{
uint8 x_6; 
x_6 = !lean::is_exclusive(x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_7 = lean::cnstr_get(x_5, 1);
x_8 = lean::cnstr_get(x_5, 0);
lean::dec(x_8);
x_9 = l_Lean_IR_EmitCpp_emitIsTaggedPtr___closed__1;
x_10 = lean::string_append(x_7, x_9);
x_11 = l_Nat_repr(x_2);
x_12 = l_Lean_IR_VarId_HasToString___closed__1;
x_13 = lean::string_append(x_12, x_11);
lean::dec(x_11);
x_14 = lean::string_append(x_10, x_13);
lean::dec(x_13);
x_15 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_16 = lean::string_append(x_14, x_15);
x_17 = l_IO_println___rarg___closed__1;
x_18 = lean::string_append(x_16, x_17);
x_19 = lean::box(0);
lean::cnstr_set(x_5, 1, x_18);
lean::cnstr_set(x_5, 0, x_19);
return x_5;
}
else
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_20 = lean::cnstr_get(x_5, 1);
lean::inc(x_20);
lean::dec(x_5);
x_21 = l_Lean_IR_EmitCpp_emitIsTaggedPtr___closed__1;
x_22 = lean::string_append(x_20, x_21);
x_23 = l_Nat_repr(x_2);
x_24 = l_Lean_IR_VarId_HasToString___closed__1;
x_25 = lean::string_append(x_24, x_23);
lean::dec(x_23);
x_26 = lean::string_append(x_22, x_25);
lean::dec(x_25);
x_27 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_28 = lean::string_append(x_26, x_27);
x_29 = l_IO_println___rarg___closed__1;
x_30 = lean::string_append(x_28, x_29);
x_31 = lean::box(0);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_30);
return x_32;
}
}
else
{
uint8 x_33; 
lean::dec(x_2);
x_33 = !lean::is_exclusive(x_5);
if (x_33 == 0)
{
return x_5;
}
else
{
obj* x_34; obj* x_35; obj* x_36; 
x_34 = lean::cnstr_get(x_5, 0);
x_35 = lean::cnstr_get(x_5, 1);
lean::inc(x_35);
lean::inc(x_34);
lean::dec(x_5);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_34);
lean::cnstr_set(x_36, 1, x_35);
return x_36;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitIsTaggedPtr___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_emitIsTaggedPtr(x_1, x_2, x_3, x_4);
lean::dec(x_3);
return x_5;
}
}
obj* l_Lean_IR_EmitCpp_toHexDigit(obj* x_1) {
_start:
{
uint32 x_2; obj* x_3; obj* x_4; 
x_2 = l_Nat_digitChar(x_1);
x_3 = l_String_splitAux___main___closed__1;
x_4 = lean::string_push(x_3, x_2);
return x_4;
}
}
obj* l_Lean_IR_EmitCpp_toHexDigit___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_IR_EmitCpp_toHexDigit(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_String_foldlAux___main___at_Lean_IR_EmitCpp_quoteString___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; 
x_5 = lean::nat_dec_eq(x_3, x_2);
if (x_5 == 0)
{
obj* x_6; uint32 x_7; uint32 x_8; uint8 x_9; 
x_6 = lean::string_utf8_next(x_1, x_3);
x_7 = lean::string_utf8_get(x_1, x_3);
lean::dec(x_3);
x_8 = 10;
x_9 = x_7 == x_8;
if (x_9 == 0)
{
uint32 x_10; uint8 x_11; uint8 x_38; 
x_10 = 92;
x_38 = x_7 == x_10;
if (x_38 == 0)
{
uint8 x_39; 
x_39 = 0;
x_11 = x_39;
goto block_37;
}
else
{
uint8 x_40; 
x_40 = 1;
x_11 = x_40;
goto block_37;
}
block_37:
{
if (x_11 == 0)
{
uint32 x_12; uint8 x_13; 
x_12 = 34;
x_13 = x_7 == x_12;
if (x_13 == 0)
{
obj* x_14; obj* x_15; uint8 x_16; 
x_14 = lean::uint32_to_nat(x_7);
x_15 = lean::mk_nat_obj(31u);
x_16 = lean::nat_dec_le(x_14, x_15);
if (x_16 == 0)
{
obj* x_17; obj* x_18; obj* x_19; 
lean::dec(x_14);
x_17 = l_String_splitAux___main___closed__1;
x_18 = lean::string_push(x_17, x_7);
x_19 = lean::string_append(x_4, x_18);
lean::dec(x_18);
x_3 = x_6;
x_4 = x_19;
goto _start;
}
else
{
obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_21 = lean::mk_nat_obj(16u);
x_22 = lean::nat_div(x_14, x_21);
x_23 = l_Lean_IR_EmitCpp_toHexDigit(x_22);
lean::dec(x_22);
x_24 = l_Char_quoteCore___closed__1;
x_25 = lean::string_append(x_24, x_23);
lean::dec(x_23);
x_26 = lean::nat_mod(x_14, x_21);
lean::dec(x_14);
x_27 = l_Lean_IR_EmitCpp_toHexDigit(x_26);
lean::dec(x_26);
x_28 = lean::string_append(x_25, x_27);
lean::dec(x_27);
x_29 = lean::string_append(x_4, x_28);
lean::dec(x_28);
x_3 = x_6;
x_4 = x_29;
goto _start;
}
}
else
{
obj* x_31; obj* x_32; 
x_31 = l_Char_quoteCore___closed__2;
x_32 = lean::string_append(x_4, x_31);
x_3 = x_6;
x_4 = x_32;
goto _start;
}
}
else
{
obj* x_34; obj* x_35; 
x_34 = l_Char_quoteCore___closed__3;
x_35 = lean::string_append(x_4, x_34);
x_3 = x_6;
x_4 = x_35;
goto _start;
}
}
}
else
{
obj* x_41; obj* x_42; 
x_41 = l_Char_quoteCore___closed__5;
x_42 = lean::string_append(x_4, x_41);
x_3 = x_6;
x_4 = x_42;
goto _start;
}
}
else
{
lean::dec(x_3);
return x_4;
}
}
}
obj* l_Lean_IR_EmitCpp_quoteString(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_2 = lean::string_utf8_byte_size(x_1);
x_3 = lean::mk_nat_obj(0u);
x_4 = l_String_quote___closed__1;
x_5 = l_String_foldlAux___main___at_Lean_IR_EmitCpp_quoteString___spec__1(x_1, x_2, x_3, x_4);
lean::dec(x_2);
x_6 = lean::string_append(x_5, x_4);
return x_6;
}
}
obj* l_String_foldlAux___main___at_Lean_IR_EmitCpp_quoteString___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_String_foldlAux___main___at_Lean_IR_EmitCpp_quoteString___spec__1(x_1, x_2, x_3, x_4);
lean::dec(x_2);
lean::dec(x_1);
return x_5;
}
}
obj* l_Lean_IR_EmitCpp_quoteString___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_IR_EmitCpp_quoteString(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitNumLit___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::mk_nat_obj(");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitNumLit___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::mpz(\"");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitNumLit___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("\")");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitNumLit___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("u");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitNumLit(uint8 x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; 
x_5 = l_Lean_IR_IRType_isObj___main(x_1);
if (x_5 == 0)
{
uint8 x_6; 
x_6 = !lean::is_exclusive(x_4);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = lean::cnstr_get(x_4, 1);
x_8 = lean::cnstr_get(x_4, 0);
lean::dec(x_8);
x_9 = l_Nat_repr(x_2);
x_10 = lean::string_append(x_7, x_9);
lean::dec(x_9);
x_11 = lean::box(0);
lean::cnstr_set(x_4, 1, x_10);
lean::cnstr_set(x_4, 0, x_11);
return x_4;
}
else
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_12 = lean::cnstr_get(x_4, 1);
lean::inc(x_12);
lean::dec(x_4);
x_13 = l_Nat_repr(x_2);
x_14 = lean::string_append(x_12, x_13);
lean::dec(x_13);
x_15 = lean::box(0);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_14);
return x_16;
}
}
else
{
uint8 x_17; 
x_17 = !lean::is_exclusive(x_4);
if (x_17 == 0)
{
obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; uint8 x_23; 
x_18 = lean::cnstr_get(x_4, 1);
x_19 = lean::cnstr_get(x_4, 0);
lean::dec(x_19);
x_20 = l_Lean_IR_EmitCpp_emitNumLit___closed__1;
x_21 = lean::string_append(x_18, x_20);
x_22 = l_uint32Sz;
x_23 = lean::nat_dec_lt(x_2, x_22);
if (x_23 == 0)
{
obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_24 = l_Lean_IR_EmitCpp_emitNumLit___closed__2;
x_25 = lean::string_append(x_21, x_24);
x_26 = l_Nat_repr(x_2);
x_27 = lean::string_append(x_25, x_26);
lean::dec(x_26);
x_28 = l_Lean_IR_EmitCpp_emitNumLit___closed__3;
x_29 = lean::string_append(x_27, x_28);
x_30 = l_Option_HasRepr___rarg___closed__3;
x_31 = lean::string_append(x_29, x_30);
x_32 = lean::box(0);
lean::cnstr_set(x_4, 1, x_31);
lean::cnstr_set(x_4, 0, x_32);
return x_4;
}
else
{
obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
x_33 = l_Nat_repr(x_2);
x_34 = lean::string_append(x_21, x_33);
lean::dec(x_33);
x_35 = l_Lean_IR_EmitCpp_emitNumLit___closed__4;
x_36 = lean::string_append(x_34, x_35);
x_37 = l_Option_HasRepr___rarg___closed__3;
x_38 = lean::string_append(x_36, x_37);
x_39 = lean::box(0);
lean::cnstr_set(x_4, 1, x_38);
lean::cnstr_set(x_4, 0, x_39);
return x_4;
}
}
else
{
obj* x_40; obj* x_41; obj* x_42; obj* x_43; uint8 x_44; 
x_40 = lean::cnstr_get(x_4, 1);
lean::inc(x_40);
lean::dec(x_4);
x_41 = l_Lean_IR_EmitCpp_emitNumLit___closed__1;
x_42 = lean::string_append(x_40, x_41);
x_43 = l_uint32Sz;
x_44 = lean::nat_dec_lt(x_2, x_43);
if (x_44 == 0)
{
obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
x_45 = l_Lean_IR_EmitCpp_emitNumLit___closed__2;
x_46 = lean::string_append(x_42, x_45);
x_47 = l_Nat_repr(x_2);
x_48 = lean::string_append(x_46, x_47);
lean::dec(x_47);
x_49 = l_Lean_IR_EmitCpp_emitNumLit___closed__3;
x_50 = lean::string_append(x_48, x_49);
x_51 = l_Option_HasRepr___rarg___closed__3;
x_52 = lean::string_append(x_50, x_51);
x_53 = lean::box(0);
x_54 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_52);
return x_54;
}
else
{
obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
x_55 = l_Nat_repr(x_2);
x_56 = lean::string_append(x_42, x_55);
lean::dec(x_55);
x_57 = l_Lean_IR_EmitCpp_emitNumLit___closed__4;
x_58 = lean::string_append(x_56, x_57);
x_59 = l_Option_HasRepr___rarg___closed__3;
x_60 = lean::string_append(x_58, x_59);
x_61 = lean::box(0);
x_62 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_62, 0, x_61);
lean::cnstr_set(x_62, 1, x_60);
return x_62;
}
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitNumLit___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_1);
lean::dec(x_1);
x_6 = l_Lean_IR_EmitCpp_emitNumLit(x_5, x_2, x_3, x_4);
lean::dec(x_3);
return x_6;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitLit___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::mk_string(");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitLit(obj* x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_emitLhs(x_1, x_4, x_5);
if (lean::obj_tag(x_6) == 0)
{
if (lean::obj_tag(x_3) == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_8 = lean::cnstr_get(x_6, 0);
lean::dec(x_8);
x_9 = lean::cnstr_get(x_3, 0);
lean::inc(x_9);
lean::dec(x_3);
x_10 = lean::box(0);
lean::cnstr_set(x_6, 0, x_10);
x_11 = l_Lean_IR_EmitCpp_emitNumLit(x_2, x_9, x_4, x_6);
if (lean::obj_tag(x_11) == 0)
{
uint8 x_12; 
x_12 = !lean::is_exclusive(x_11);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_13 = lean::cnstr_get(x_11, 1);
x_14 = lean::cnstr_get(x_11, 0);
lean::dec(x_14);
x_15 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_16 = lean::string_append(x_13, x_15);
x_17 = l_IO_println___rarg___closed__1;
x_18 = lean::string_append(x_16, x_17);
lean::cnstr_set(x_11, 1, x_18);
lean::cnstr_set(x_11, 0, x_10);
return x_11;
}
else
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_19 = lean::cnstr_get(x_11, 1);
lean::inc(x_19);
lean::dec(x_11);
x_20 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_21 = lean::string_append(x_19, x_20);
x_22 = l_IO_println___rarg___closed__1;
x_23 = lean::string_append(x_21, x_22);
x_24 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_24, 0, x_10);
lean::cnstr_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8 x_25; 
x_25 = !lean::is_exclusive(x_11);
if (x_25 == 0)
{
return x_11;
}
else
{
obj* x_26; obj* x_27; obj* x_28; 
x_26 = lean::cnstr_get(x_11, 0);
x_27 = lean::cnstr_get(x_11, 1);
lean::inc(x_27);
lean::inc(x_26);
lean::dec(x_11);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_26);
lean::cnstr_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_29 = lean::cnstr_get(x_6, 1);
lean::inc(x_29);
lean::dec(x_6);
x_30 = lean::cnstr_get(x_3, 0);
lean::inc(x_30);
lean::dec(x_3);
x_31 = lean::box(0);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_29);
x_33 = l_Lean_IR_EmitCpp_emitNumLit(x_2, x_30, x_4, x_32);
if (lean::obj_tag(x_33) == 0)
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; 
x_34 = lean::cnstr_get(x_33, 1);
lean::inc(x_34);
if (lean::is_exclusive(x_33)) {
 lean::cnstr_release(x_33, 0);
 lean::cnstr_release(x_33, 1);
 x_35 = x_33;
} else {
 lean::dec_ref(x_33);
 x_35 = lean::box(0);
}
x_36 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_37 = lean::string_append(x_34, x_36);
x_38 = l_IO_println___rarg___closed__1;
x_39 = lean::string_append(x_37, x_38);
if (lean::is_scalar(x_35)) {
 x_40 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_40 = x_35;
}
lean::cnstr_set(x_40, 0, x_31);
lean::cnstr_set(x_40, 1, x_39);
return x_40;
}
else
{
obj* x_41; obj* x_42; obj* x_43; obj* x_44; 
x_41 = lean::cnstr_get(x_33, 0);
lean::inc(x_41);
x_42 = lean::cnstr_get(x_33, 1);
lean::inc(x_42);
if (lean::is_exclusive(x_33)) {
 lean::cnstr_release(x_33, 0);
 lean::cnstr_release(x_33, 1);
 x_43 = x_33;
} else {
 lean::dec_ref(x_33);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_43)) {
 x_44 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_44 = x_43;
}
lean::cnstr_set(x_44, 0, x_41);
lean::cnstr_set(x_44, 1, x_42);
return x_44;
}
}
}
else
{
uint8 x_45; 
x_45 = !lean::is_exclusive(x_6);
if (x_45 == 0)
{
obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; 
x_46 = lean::cnstr_get(x_6, 1);
x_47 = lean::cnstr_get(x_6, 0);
lean::dec(x_47);
x_48 = lean::cnstr_get(x_3, 0);
lean::inc(x_48);
lean::dec(x_3);
x_49 = l_Lean_IR_EmitCpp_emitLit___closed__1;
x_50 = lean::string_append(x_46, x_49);
x_51 = l_Lean_IR_EmitCpp_quoteString(x_48);
lean::dec(x_48);
x_52 = lean::string_append(x_50, x_51);
lean::dec(x_51);
x_53 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_54 = lean::string_append(x_52, x_53);
x_55 = l_IO_println___rarg___closed__1;
x_56 = lean::string_append(x_54, x_55);
x_57 = lean::box(0);
lean::cnstr_set(x_6, 1, x_56);
lean::cnstr_set(x_6, 0, x_57);
return x_6;
}
else
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; 
x_58 = lean::cnstr_get(x_6, 1);
lean::inc(x_58);
lean::dec(x_6);
x_59 = lean::cnstr_get(x_3, 0);
lean::inc(x_59);
lean::dec(x_3);
x_60 = l_Lean_IR_EmitCpp_emitLit___closed__1;
x_61 = lean::string_append(x_58, x_60);
x_62 = l_Lean_IR_EmitCpp_quoteString(x_59);
lean::dec(x_59);
x_63 = lean::string_append(x_61, x_62);
lean::dec(x_62);
x_64 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_65 = lean::string_append(x_63, x_64);
x_66 = l_IO_println___rarg___closed__1;
x_67 = lean::string_append(x_65, x_66);
x_68 = lean::box(0);
x_69 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_67);
return x_69;
}
}
}
else
{
uint8 x_70; 
lean::dec(x_3);
x_70 = !lean::is_exclusive(x_6);
if (x_70 == 0)
{
return x_6;
}
else
{
obj* x_71; obj* x_72; obj* x_73; 
x_71 = lean::cnstr_get(x_6, 0);
x_72 = lean::cnstr_get(x_6, 1);
lean::inc(x_72);
lean::inc(x_71);
lean::dec(x_6);
x_73 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_73, 0, x_71);
lean::cnstr_set(x_73, 1, x_72);
return x_73;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitLit___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_2);
lean::dec(x_2);
x_7 = l_Lean_IR_EmitCpp_emitLit(x_1, x_6, x_3, x_4, x_5);
lean::dec(x_4);
return x_7;
}
}
obj* l_Lean_IR_EmitCpp_emitVDecl(obj* x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
switch (lean::obj_tag(x_3)) {
case 0:
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::cnstr_get(x_3, 1);
lean::inc(x_7);
lean::dec(x_3);
x_8 = l_Lean_IR_EmitCpp_emitCtor(x_1, x_6, x_7, x_4, x_5);
lean::dec(x_7);
return x_8;
}
case 1:
{
obj* x_9; obj* x_10; obj* x_11; 
x_9 = lean::cnstr_get(x_3, 0);
lean::inc(x_9);
x_10 = lean::cnstr_get(x_3, 1);
lean::inc(x_10);
lean::dec(x_3);
x_11 = l_Lean_IR_EmitCpp_emitReset(x_1, x_9, x_10, x_4, x_5);
return x_11;
}
case 2:
{
obj* x_12; obj* x_13; uint8 x_14; obj* x_15; obj* x_16; 
x_12 = lean::cnstr_get(x_3, 0);
lean::inc(x_12);
x_13 = lean::cnstr_get(x_3, 1);
lean::inc(x_13);
x_14 = lean::cnstr_get_scalar<uint8>(x_3, sizeof(void*)*3);
x_15 = lean::cnstr_get(x_3, 2);
lean::inc(x_15);
lean::dec(x_3);
x_16 = l_Lean_IR_EmitCpp_emitReuse(x_1, x_12, x_13, x_14, x_15, x_4, x_5);
lean::dec(x_15);
return x_16;
}
case 3:
{
obj* x_17; obj* x_18; obj* x_19; 
x_17 = lean::cnstr_get(x_3, 0);
lean::inc(x_17);
x_18 = lean::cnstr_get(x_3, 1);
lean::inc(x_18);
lean::dec(x_3);
x_19 = l_Lean_IR_EmitCpp_emitProj(x_1, x_17, x_18, x_4, x_5);
return x_19;
}
case 4:
{
obj* x_20; obj* x_21; obj* x_22; 
x_20 = lean::cnstr_get(x_3, 0);
lean::inc(x_20);
x_21 = lean::cnstr_get(x_3, 1);
lean::inc(x_21);
lean::dec(x_3);
x_22 = l_Lean_IR_EmitCpp_emitUProj(x_1, x_20, x_21, x_4, x_5);
return x_22;
}
case 5:
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_23 = lean::cnstr_get(x_3, 0);
lean::inc(x_23);
x_24 = lean::cnstr_get(x_3, 1);
lean::inc(x_24);
x_25 = lean::cnstr_get(x_3, 2);
lean::inc(x_25);
lean::dec(x_3);
x_26 = l_Lean_IR_EmitCpp_emitSProj(x_1, x_2, x_23, x_24, x_25, x_4, x_5);
return x_26;
}
case 6:
{
obj* x_27; obj* x_28; obj* x_29; 
x_27 = lean::cnstr_get(x_3, 0);
lean::inc(x_27);
x_28 = lean::cnstr_get(x_3, 1);
lean::inc(x_28);
lean::dec(x_3);
x_29 = l_Lean_IR_EmitCpp_emitFullApp(x_1, x_27, x_28, x_4, x_5);
lean::dec(x_28);
return x_29;
}
case 7:
{
obj* x_30; obj* x_31; obj* x_32; 
x_30 = lean::cnstr_get(x_3, 0);
lean::inc(x_30);
x_31 = lean::cnstr_get(x_3, 1);
lean::inc(x_31);
lean::dec(x_3);
x_32 = l_Lean_IR_EmitCpp_emitPartialApp(x_1, x_30, x_31, x_4, x_5);
lean::dec(x_31);
return x_32;
}
case 8:
{
obj* x_33; obj* x_34; obj* x_35; 
x_33 = lean::cnstr_get(x_3, 0);
lean::inc(x_33);
x_34 = lean::cnstr_get(x_3, 1);
lean::inc(x_34);
lean::dec(x_3);
x_35 = l_Lean_IR_EmitCpp_emitApp(x_1, x_33, x_34, x_4, x_5);
lean::dec(x_34);
return x_35;
}
case 9:
{
uint8 x_36; obj* x_37; obj* x_38; 
x_36 = lean::cnstr_get_scalar<uint8>(x_3, sizeof(void*)*1);
x_37 = lean::cnstr_get(x_3, 0);
lean::inc(x_37);
lean::dec(x_3);
x_38 = l_Lean_IR_EmitCpp_emitBox(x_1, x_37, x_36, x_4, x_5);
return x_38;
}
case 10:
{
obj* x_39; obj* x_40; 
x_39 = lean::cnstr_get(x_3, 0);
lean::inc(x_39);
lean::dec(x_3);
x_40 = l_Lean_IR_EmitCpp_emitUnbox(x_1, x_2, x_39, x_4, x_5);
return x_40;
}
case 11:
{
obj* x_41; obj* x_42; 
x_41 = lean::cnstr_get(x_3, 0);
lean::inc(x_41);
lean::dec(x_3);
x_42 = l_Lean_IR_EmitCpp_emitLit(x_1, x_2, x_41, x_4, x_5);
return x_42;
}
case 12:
{
obj* x_43; obj* x_44; 
x_43 = lean::cnstr_get(x_3, 0);
lean::inc(x_43);
lean::dec(x_3);
x_44 = l_Lean_IR_EmitCpp_emitIsShared(x_1, x_43, x_4, x_5);
return x_44;
}
default: 
{
obj* x_45; obj* x_46; 
x_45 = lean::cnstr_get(x_3, 0);
lean::inc(x_45);
lean::dec(x_3);
x_46 = l_Lean_IR_EmitCpp_emitIsTaggedPtr(x_1, x_45, x_4, x_5);
return x_46;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitVDecl___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_2);
lean::dec(x_2);
x_7 = l_Lean_IR_EmitCpp_emitVDecl(x_1, x_6, x_3, x_4, x_5);
lean::dec(x_4);
return x_7;
}
}
obj* l_Lean_IR_EmitCpp_isTailCall(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
if (lean::obj_tag(x_2) == 6)
{
if (lean::obj_tag(x_3) == 11)
{
obj* x_6; 
x_6 = lean::cnstr_get(x_3, 0);
if (lean::obj_tag(x_6) == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_5);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; uint8 x_12; 
x_8 = lean::cnstr_get(x_5, 0);
lean::dec(x_8);
x_9 = lean::cnstr_get(x_2, 0);
x_10 = lean::cnstr_get(x_6, 0);
x_11 = lean::cnstr_get(x_4, 4);
x_12 = lean_name_dec_eq(x_9, x_11);
if (x_12 == 0)
{
uint8 x_13; obj* x_14; 
x_13 = 0;
x_14 = lean::box(x_13);
lean::cnstr_set(x_5, 0, x_14);
return x_5;
}
else
{
uint8 x_15; obj* x_16; 
x_15 = lean::nat_dec_eq(x_1, x_10);
x_16 = lean::box(x_15);
lean::cnstr_set(x_5, 0, x_16);
return x_5;
}
}
else
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; uint8 x_21; 
x_17 = lean::cnstr_get(x_5, 1);
lean::inc(x_17);
lean::dec(x_5);
x_18 = lean::cnstr_get(x_2, 0);
x_19 = lean::cnstr_get(x_6, 0);
x_20 = lean::cnstr_get(x_4, 4);
x_21 = lean_name_dec_eq(x_18, x_20);
if (x_21 == 0)
{
uint8 x_22; obj* x_23; obj* x_24; 
x_22 = 0;
x_23 = lean::box(x_22);
x_24 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_17);
return x_24;
}
else
{
uint8 x_25; obj* x_26; obj* x_27; 
x_25 = lean::nat_dec_eq(x_1, x_19);
x_26 = lean::box(x_25);
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_17);
return x_27;
}
}
}
else
{
uint8 x_28; 
x_28 = !lean::is_exclusive(x_5);
if (x_28 == 0)
{
obj* x_29; uint8 x_30; obj* x_31; 
x_29 = lean::cnstr_get(x_5, 0);
lean::dec(x_29);
x_30 = 0;
x_31 = lean::box(x_30);
lean::cnstr_set(x_5, 0, x_31);
return x_5;
}
else
{
obj* x_32; uint8 x_33; obj* x_34; obj* x_35; 
x_32 = lean::cnstr_get(x_5, 1);
lean::inc(x_32);
lean::dec(x_5);
x_33 = 0;
x_34 = lean::box(x_33);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_32);
return x_35;
}
}
}
else
{
uint8 x_36; 
x_36 = !lean::is_exclusive(x_5);
if (x_36 == 0)
{
obj* x_37; uint8 x_38; obj* x_39; 
x_37 = lean::cnstr_get(x_5, 0);
lean::dec(x_37);
x_38 = 0;
x_39 = lean::box(x_38);
lean::cnstr_set(x_5, 0, x_39);
return x_5;
}
else
{
obj* x_40; uint8 x_41; obj* x_42; obj* x_43; 
x_40 = lean::cnstr_get(x_5, 1);
lean::inc(x_40);
lean::dec(x_5);
x_41 = 0;
x_42 = lean::box(x_41);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_42);
lean::cnstr_set(x_43, 1, x_40);
return x_43;
}
}
}
else
{
uint8 x_44; 
x_44 = !lean::is_exclusive(x_5);
if (x_44 == 0)
{
obj* x_45; uint8 x_46; obj* x_47; 
x_45 = lean::cnstr_get(x_5, 0);
lean::dec(x_45);
x_46 = 0;
x_47 = lean::box(x_46);
lean::cnstr_set(x_5, 0, x_47);
return x_5;
}
else
{
obj* x_48; uint8 x_49; obj* x_50; obj* x_51; 
x_48 = lean::cnstr_get(x_5, 1);
lean::inc(x_48);
lean::dec(x_5);
x_49 = 0;
x_50 = lean::box(x_49);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_48);
return x_51;
}
}
}
}
obj* l_Lean_IR_EmitCpp_isTailCall___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_isTailCall(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_6;
}
}
uint8 l_Lean_IR_EmitCpp_paramEqArg(obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_4; uint8 x_5; 
x_3 = lean::cnstr_get(x_2, 0);
x_4 = lean::cnstr_get(x_1, 0);
x_5 = lean::nat_dec_eq(x_4, x_3);
return x_5;
}
else
{
uint8 x_6; 
x_6 = 0;
return x_6;
}
}
}
obj* l_Lean_IR_EmitCpp_paramEqArg___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = l_Lean_IR_EmitCpp_paramEqArg(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
x_4 = lean::box(x_3);
return x_4;
}
}
uint8 l_Nat_anyAux___main___at_Lean_IR_EmitCpp_overwriteParam___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_4, x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; uint8 x_12; 
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_sub(x_4, x_7);
x_9 = lean::nat_sub(x_3, x_4);
lean::dec(x_4);
x_10 = l_Lean_IR_Arg_Inhabited;
x_11 = lean::array_get(x_10, x_1, x_9);
lean::dec(x_9);
x_12 = l_Lean_IR_EmitCpp_paramEqArg(x_2, x_11);
lean::dec(x_11);
if (x_12 == 0)
{
x_4 = x_8;
goto _start;
}
else
{
uint8 x_14; 
lean::dec(x_8);
x_14 = 1;
return x_14;
}
}
else
{
uint8 x_15; 
lean::dec(x_4);
x_15 = 0;
return x_15;
}
}
}
uint8 l_Nat_anyAux___main___at_Lean_IR_EmitCpp_overwriteParam___spec__2(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; uint8 x_7; 
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::nat_dec_eq(x_5, x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; uint8 x_15; 
x_8 = lean::mk_nat_obj(1u);
x_9 = lean::nat_sub(x_5, x_8);
x_10 = lean::nat_sub(x_4, x_5);
lean::dec(x_5);
x_11 = l_Lean_IR_paramInh;
x_12 = lean::array_get(x_11, x_1, x_10);
x_13 = lean::nat_add(x_10, x_8);
lean::dec(x_10);
x_14 = lean::nat_sub(x_3, x_13);
lean::dec(x_13);
x_15 = l_Nat_anyAux___main___at_Lean_IR_EmitCpp_overwriteParam___spec__1(x_2, x_12, x_3, x_14);
lean::dec(x_12);
if (x_15 == 0)
{
x_5 = x_9;
goto _start;
}
else
{
uint8 x_17; 
lean::dec(x_9);
x_17 = 1;
return x_17;
}
}
else
{
uint8 x_18; 
lean::dec(x_5);
x_18 = 0;
return x_18;
}
}
}
uint8 l_Lean_IR_EmitCpp_overwriteParam(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::array_get_size(x_1);
lean::inc(x_3);
x_4 = l_Nat_anyAux___main___at_Lean_IR_EmitCpp_overwriteParam___spec__2(x_1, x_2, x_3, x_3, x_3);
lean::dec(x_3);
return x_4;
}
}
obj* l_Nat_anyAux___main___at_Lean_IR_EmitCpp_overwriteParam___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = l_Nat_anyAux___main___at_Lean_IR_EmitCpp_overwriteParam___spec__1(x_1, x_2, x_3, x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_Nat_anyAux___main___at_Lean_IR_EmitCpp_overwriteParam___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = l_Nat_anyAux___main___at_Lean_IR_EmitCpp_overwriteParam___spec__2(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
x_7 = lean::box(x_6);
return x_7;
}
}
obj* l_Lean_IR_EmitCpp_overwriteParam___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = l_Lean_IR_EmitCpp_overwriteParam(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
x_4 = lean::box(x_3);
return x_4;
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; uint8 x_8; 
x_7 = lean::mk_nat_obj(0u);
x_8 = lean::nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; uint8 x_17; 
x_9 = lean::mk_nat_obj(1u);
x_10 = lean::nat_sub(x_4, x_9);
lean::dec(x_4);
x_11 = lean::nat_sub(x_3, x_10);
x_12 = lean::nat_sub(x_11, x_9);
lean::dec(x_11);
x_13 = l_Lean_IR_paramInh;
x_14 = lean::array_get(x_13, x_2, x_12);
x_15 = l_Lean_IR_Arg_Inhabited;
x_16 = lean::array_get(x_15, x_1, x_12);
lean::dec(x_12);
x_17 = l_Lean_IR_EmitCpp_paramEqArg(x_14, x_16);
if (x_17 == 0)
{
uint8 x_18; 
x_18 = !lean::is_exclusive(x_6);
if (x_18 == 0)
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_19 = lean::cnstr_get(x_6, 1);
x_20 = lean::cnstr_get(x_6, 0);
lean::dec(x_20);
x_21 = lean::cnstr_get(x_14, 0);
lean::inc(x_21);
lean::dec(x_14);
x_22 = l_Nat_repr(x_21);
x_23 = l_Lean_IR_VarId_HasToString___closed__1;
x_24 = lean::string_append(x_23, x_22);
lean::dec(x_22);
x_25 = lean::string_append(x_19, x_24);
lean::dec(x_24);
x_26 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___closed__1;
x_27 = lean::string_append(x_25, x_26);
x_28 = lean::box(0);
lean::cnstr_set(x_6, 1, x_27);
lean::cnstr_set(x_6, 0, x_28);
x_29 = l_Lean_IR_EmitCpp_emitArg(x_16, x_5, x_6);
if (lean::obj_tag(x_29) == 0)
{
uint8 x_30; 
x_30 = !lean::is_exclusive(x_29);
if (x_30 == 0)
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; 
x_31 = lean::cnstr_get(x_29, 1);
x_32 = lean::cnstr_get(x_29, 0);
lean::dec(x_32);
x_33 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_34 = lean::string_append(x_31, x_33);
x_35 = l_IO_println___rarg___closed__1;
x_36 = lean::string_append(x_34, x_35);
lean::cnstr_set(x_29, 1, x_36);
lean::cnstr_set(x_29, 0, x_28);
x_4 = x_10;
x_6 = x_29;
goto _start;
}
else
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_38 = lean::cnstr_get(x_29, 1);
lean::inc(x_38);
lean::dec(x_29);
x_39 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_40 = lean::string_append(x_38, x_39);
x_41 = l_IO_println___rarg___closed__1;
x_42 = lean::string_append(x_40, x_41);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_28);
lean::cnstr_set(x_43, 1, x_42);
x_4 = x_10;
x_6 = x_43;
goto _start;
}
}
else
{
uint8 x_45; 
lean::dec(x_10);
x_45 = !lean::is_exclusive(x_29);
if (x_45 == 0)
{
return x_29;
}
else
{
obj* x_46; obj* x_47; obj* x_48; 
x_46 = lean::cnstr_get(x_29, 0);
x_47 = lean::cnstr_get(x_29, 1);
lean::inc(x_47);
lean::inc(x_46);
lean::dec(x_29);
x_48 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_48, 0, x_46);
lean::cnstr_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
x_49 = lean::cnstr_get(x_6, 1);
lean::inc(x_49);
lean::dec(x_6);
x_50 = lean::cnstr_get(x_14, 0);
lean::inc(x_50);
lean::dec(x_14);
x_51 = l_Nat_repr(x_50);
x_52 = l_Lean_IR_VarId_HasToString___closed__1;
x_53 = lean::string_append(x_52, x_51);
lean::dec(x_51);
x_54 = lean::string_append(x_49, x_53);
lean::dec(x_53);
x_55 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___closed__1;
x_56 = lean::string_append(x_54, x_55);
x_57 = lean::box(0);
x_58 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_56);
x_59 = l_Lean_IR_EmitCpp_emitArg(x_16, x_5, x_58);
if (lean::obj_tag(x_59) == 0)
{
obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; 
x_60 = lean::cnstr_get(x_59, 1);
lean::inc(x_60);
if (lean::is_exclusive(x_59)) {
 lean::cnstr_release(x_59, 0);
 lean::cnstr_release(x_59, 1);
 x_61 = x_59;
} else {
 lean::dec_ref(x_59);
 x_61 = lean::box(0);
}
x_62 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_63 = lean::string_append(x_60, x_62);
x_64 = l_IO_println___rarg___closed__1;
x_65 = lean::string_append(x_63, x_64);
if (lean::is_scalar(x_61)) {
 x_66 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_66 = x_61;
}
lean::cnstr_set(x_66, 0, x_57);
lean::cnstr_set(x_66, 1, x_65);
x_4 = x_10;
x_6 = x_66;
goto _start;
}
else
{
obj* x_68; obj* x_69; obj* x_70; obj* x_71; 
lean::dec(x_10);
x_68 = lean::cnstr_get(x_59, 0);
lean::inc(x_68);
x_69 = lean::cnstr_get(x_59, 1);
lean::inc(x_69);
if (lean::is_exclusive(x_59)) {
 lean::cnstr_release(x_59, 0);
 lean::cnstr_release(x_59, 1);
 x_70 = x_59;
} else {
 lean::dec_ref(x_59);
 x_70 = lean::box(0);
}
if (lean::is_scalar(x_70)) {
 x_71 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_71 = x_70;
}
lean::cnstr_set(x_71, 0, x_68);
lean::cnstr_set(x_71, 1, x_69);
return x_71;
}
}
}
else
{
uint8 x_72; 
lean::dec(x_16);
lean::dec(x_14);
x_72 = !lean::is_exclusive(x_6);
if (x_72 == 0)
{
obj* x_73; obj* x_74; 
x_73 = lean::cnstr_get(x_6, 0);
lean::dec(x_73);
x_74 = lean::box(0);
lean::cnstr_set(x_6, 0, x_74);
x_4 = x_10;
goto _start;
}
else
{
obj* x_76; obj* x_77; obj* x_78; 
x_76 = lean::cnstr_get(x_6, 1);
lean::inc(x_76);
lean::dec(x_6);
x_77 = lean::box(0);
x_78 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_78, 0, x_77);
lean::cnstr_set(x_78, 1, x_76);
x_4 = x_10;
x_6 = x_78;
goto _start;
}
}
}
else
{
uint8 x_80; 
lean::dec(x_4);
x_80 = !lean::is_exclusive(x_6);
if (x_80 == 0)
{
obj* x_81; obj* x_82; 
x_81 = lean::cnstr_get(x_6, 0);
lean::dec(x_81);
x_82 = lean::box(0);
lean::cnstr_set(x_6, 0, x_82);
return x_6;
}
else
{
obj* x_83; obj* x_84; obj* x_85; 
x_83 = lean::cnstr_get(x_6, 1);
lean::inc(x_83);
lean::dec(x_6);
x_84 = lean::box(0);
x_85 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_85, 0, x_84);
lean::cnstr_set(x_85, 1, x_83);
return x_85;
}
}
}
}
obj* _init_l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__2___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" _tmp_");
return x_1;
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__2(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; uint8 x_8; 
x_7 = lean::mk_nat_obj(0u);
x_8 = lean::nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; uint8 x_17; 
x_9 = lean::mk_nat_obj(1u);
x_10 = lean::nat_sub(x_4, x_9);
lean::dec(x_4);
x_11 = lean::nat_sub(x_3, x_10);
x_12 = lean::nat_sub(x_11, x_9);
lean::dec(x_11);
x_13 = l_Lean_IR_paramInh;
x_14 = lean::array_get(x_13, x_2, x_12);
x_15 = l_Lean_IR_Arg_Inhabited;
x_16 = lean::array_get(x_15, x_1, x_12);
x_17 = l_Lean_IR_EmitCpp_paramEqArg(x_14, x_16);
if (x_17 == 0)
{
uint8 x_18; 
x_18 = !lean::is_exclusive(x_6);
if (x_18 == 0)
{
obj* x_19; obj* x_20; uint8 x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_19 = lean::cnstr_get(x_6, 1);
x_20 = lean::cnstr_get(x_6, 0);
lean::dec(x_20);
x_21 = lean::cnstr_get_scalar<uint8>(x_14, sizeof(void*)*1 + 1);
lean::dec(x_14);
x_22 = l_Lean_IR_EmitCpp_toCppType___main(x_21);
x_23 = lean::string_append(x_19, x_22);
lean::dec(x_22);
x_24 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__2___closed__1;
x_25 = lean::string_append(x_23, x_24);
x_26 = l_Nat_repr(x_12);
x_27 = lean::string_append(x_25, x_26);
lean::dec(x_26);
x_28 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___closed__1;
x_29 = lean::string_append(x_27, x_28);
x_30 = lean::box(0);
lean::cnstr_set(x_6, 1, x_29);
lean::cnstr_set(x_6, 0, x_30);
x_31 = l_Lean_IR_EmitCpp_emitArg(x_16, x_5, x_6);
if (lean::obj_tag(x_31) == 0)
{
uint8 x_32; 
x_32 = !lean::is_exclusive(x_31);
if (x_32 == 0)
{
obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_33 = lean::cnstr_get(x_31, 1);
x_34 = lean::cnstr_get(x_31, 0);
lean::dec(x_34);
x_35 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_36 = lean::string_append(x_33, x_35);
x_37 = l_IO_println___rarg___closed__1;
x_38 = lean::string_append(x_36, x_37);
lean::cnstr_set(x_31, 1, x_38);
lean::cnstr_set(x_31, 0, x_30);
x_4 = x_10;
x_6 = x_31;
goto _start;
}
else
{
obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; 
x_40 = lean::cnstr_get(x_31, 1);
lean::inc(x_40);
lean::dec(x_31);
x_41 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_42 = lean::string_append(x_40, x_41);
x_43 = l_IO_println___rarg___closed__1;
x_44 = lean::string_append(x_42, x_43);
x_45 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_45, 0, x_30);
lean::cnstr_set(x_45, 1, x_44);
x_4 = x_10;
x_6 = x_45;
goto _start;
}
}
else
{
uint8 x_47; 
lean::dec(x_10);
x_47 = !lean::is_exclusive(x_31);
if (x_47 == 0)
{
return x_31;
}
else
{
obj* x_48; obj* x_49; obj* x_50; 
x_48 = lean::cnstr_get(x_31, 0);
x_49 = lean::cnstr_get(x_31, 1);
lean::inc(x_49);
lean::inc(x_48);
lean::dec(x_31);
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_48);
lean::cnstr_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
obj* x_51; uint8 x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
x_51 = lean::cnstr_get(x_6, 1);
lean::inc(x_51);
lean::dec(x_6);
x_52 = lean::cnstr_get_scalar<uint8>(x_14, sizeof(void*)*1 + 1);
lean::dec(x_14);
x_53 = l_Lean_IR_EmitCpp_toCppType___main(x_52);
x_54 = lean::string_append(x_51, x_53);
lean::dec(x_53);
x_55 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__2___closed__1;
x_56 = lean::string_append(x_54, x_55);
x_57 = l_Nat_repr(x_12);
x_58 = lean::string_append(x_56, x_57);
lean::dec(x_57);
x_59 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___closed__1;
x_60 = lean::string_append(x_58, x_59);
x_61 = lean::box(0);
x_62 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_62, 0, x_61);
lean::cnstr_set(x_62, 1, x_60);
x_63 = l_Lean_IR_EmitCpp_emitArg(x_16, x_5, x_62);
if (lean::obj_tag(x_63) == 0)
{
obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_64 = lean::cnstr_get(x_63, 1);
lean::inc(x_64);
if (lean::is_exclusive(x_63)) {
 lean::cnstr_release(x_63, 0);
 lean::cnstr_release(x_63, 1);
 x_65 = x_63;
} else {
 lean::dec_ref(x_63);
 x_65 = lean::box(0);
}
x_66 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_67 = lean::string_append(x_64, x_66);
x_68 = l_IO_println___rarg___closed__1;
x_69 = lean::string_append(x_67, x_68);
if (lean::is_scalar(x_65)) {
 x_70 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_70 = x_65;
}
lean::cnstr_set(x_70, 0, x_61);
lean::cnstr_set(x_70, 1, x_69);
x_4 = x_10;
x_6 = x_70;
goto _start;
}
else
{
obj* x_72; obj* x_73; obj* x_74; obj* x_75; 
lean::dec(x_10);
x_72 = lean::cnstr_get(x_63, 0);
lean::inc(x_72);
x_73 = lean::cnstr_get(x_63, 1);
lean::inc(x_73);
if (lean::is_exclusive(x_63)) {
 lean::cnstr_release(x_63, 0);
 lean::cnstr_release(x_63, 1);
 x_74 = x_63;
} else {
 lean::dec_ref(x_63);
 x_74 = lean::box(0);
}
if (lean::is_scalar(x_74)) {
 x_75 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_75 = x_74;
}
lean::cnstr_set(x_75, 0, x_72);
lean::cnstr_set(x_75, 1, x_73);
return x_75;
}
}
}
else
{
uint8 x_76; 
lean::dec(x_16);
lean::dec(x_14);
lean::dec(x_12);
x_76 = !lean::is_exclusive(x_6);
if (x_76 == 0)
{
obj* x_77; obj* x_78; 
x_77 = lean::cnstr_get(x_6, 0);
lean::dec(x_77);
x_78 = lean::box(0);
lean::cnstr_set(x_6, 0, x_78);
x_4 = x_10;
goto _start;
}
else
{
obj* x_80; obj* x_81; obj* x_82; 
x_80 = lean::cnstr_get(x_6, 1);
lean::inc(x_80);
lean::dec(x_6);
x_81 = lean::box(0);
x_82 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_82, 0, x_81);
lean::cnstr_set(x_82, 1, x_80);
x_4 = x_10;
x_6 = x_82;
goto _start;
}
}
}
else
{
uint8 x_84; 
lean::dec(x_4);
x_84 = !lean::is_exclusive(x_6);
if (x_84 == 0)
{
obj* x_85; obj* x_86; 
x_85 = lean::cnstr_get(x_6, 0);
lean::dec(x_85);
x_86 = lean::box(0);
lean::cnstr_set(x_6, 0, x_86);
return x_6;
}
else
{
obj* x_87; obj* x_88; obj* x_89; 
x_87 = lean::cnstr_get(x_6, 1);
lean::inc(x_87);
lean::dec(x_6);
x_88 = lean::box(0);
x_89 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_89, 0, x_88);
lean::cnstr_set(x_89, 1, x_87);
return x_89;
}
}
}
}
obj* _init_l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__3___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" = _tmp_");
return x_1;
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__3(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; uint8 x_8; 
x_7 = lean::mk_nat_obj(0u);
x_8 = lean::nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; uint8 x_17; 
x_9 = lean::mk_nat_obj(1u);
x_10 = lean::nat_sub(x_4, x_9);
lean::dec(x_4);
x_11 = lean::nat_sub(x_3, x_10);
x_12 = lean::nat_sub(x_11, x_9);
lean::dec(x_11);
x_13 = l_Lean_IR_paramInh;
x_14 = lean::array_get(x_13, x_2, x_12);
x_15 = l_Lean_IR_Arg_Inhabited;
x_16 = lean::array_get(x_15, x_1, x_12);
x_17 = l_Lean_IR_EmitCpp_paramEqArg(x_14, x_16);
lean::dec(x_16);
if (x_17 == 0)
{
uint8 x_18; 
x_18 = !lean::is_exclusive(x_6);
if (x_18 == 0)
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_19 = lean::cnstr_get(x_6, 1);
x_20 = lean::cnstr_get(x_6, 0);
lean::dec(x_20);
x_21 = lean::cnstr_get(x_14, 0);
lean::inc(x_21);
lean::dec(x_14);
x_22 = l_Nat_repr(x_21);
x_23 = l_Lean_IR_VarId_HasToString___closed__1;
x_24 = lean::string_append(x_23, x_22);
lean::dec(x_22);
x_25 = lean::string_append(x_19, x_24);
lean::dec(x_24);
x_26 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__3___closed__1;
x_27 = lean::string_append(x_25, x_26);
x_28 = l_Nat_repr(x_12);
x_29 = lean::string_append(x_27, x_28);
lean::dec(x_28);
x_30 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_31 = lean::string_append(x_29, x_30);
x_32 = l_IO_println___rarg___closed__1;
x_33 = lean::string_append(x_31, x_32);
x_34 = lean::box(0);
lean::cnstr_set(x_6, 1, x_33);
lean::cnstr_set(x_6, 0, x_34);
x_4 = x_10;
goto _start;
}
else
{
obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_36 = lean::cnstr_get(x_6, 1);
lean::inc(x_36);
lean::dec(x_6);
x_37 = lean::cnstr_get(x_14, 0);
lean::inc(x_37);
lean::dec(x_14);
x_38 = l_Nat_repr(x_37);
x_39 = l_Lean_IR_VarId_HasToString___closed__1;
x_40 = lean::string_append(x_39, x_38);
lean::dec(x_38);
x_41 = lean::string_append(x_36, x_40);
lean::dec(x_40);
x_42 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__3___closed__1;
x_43 = lean::string_append(x_41, x_42);
x_44 = l_Nat_repr(x_12);
x_45 = lean::string_append(x_43, x_44);
lean::dec(x_44);
x_46 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_47 = lean::string_append(x_45, x_46);
x_48 = l_IO_println___rarg___closed__1;
x_49 = lean::string_append(x_47, x_48);
x_50 = lean::box(0);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_49);
x_4 = x_10;
x_6 = x_51;
goto _start;
}
}
else
{
uint8 x_53; 
lean::dec(x_14);
lean::dec(x_12);
x_53 = !lean::is_exclusive(x_6);
if (x_53 == 0)
{
obj* x_54; obj* x_55; 
x_54 = lean::cnstr_get(x_6, 0);
lean::dec(x_54);
x_55 = lean::box(0);
lean::cnstr_set(x_6, 0, x_55);
x_4 = x_10;
goto _start;
}
else
{
obj* x_57; obj* x_58; obj* x_59; 
x_57 = lean::cnstr_get(x_6, 1);
lean::inc(x_57);
lean::dec(x_6);
x_58 = lean::box(0);
x_59 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_57);
x_4 = x_10;
x_6 = x_59;
goto _start;
}
}
}
else
{
uint8 x_61; 
lean::dec(x_4);
x_61 = !lean::is_exclusive(x_6);
if (x_61 == 0)
{
obj* x_62; obj* x_63; 
x_62 = lean::cnstr_get(x_6, 0);
lean::dec(x_62);
x_63 = lean::box(0);
lean::cnstr_set(x_6, 0, x_63);
return x_6;
}
else
{
obj* x_64; obj* x_65; obj* x_66; 
x_64 = lean::cnstr_get(x_6, 1);
lean::inc(x_64);
lean::dec(x_6);
x_65 = lean::box(0);
x_66 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_64);
return x_66;
}
}
}
}
obj* _init_l_Lean_IR_EmitCpp_emitTailCall___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("bug at emitTailCall");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitTailCall___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("invalid tail call");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitTailCall___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("goto _start;");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitTailCall___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("{");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitTailCall(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
if (lean::obj_tag(x_1) == 6)
{
uint8 x_12; 
x_12 = !lean::is_exclusive(x_3);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; uint8 x_19; 
x_13 = lean::cnstr_get(x_1, 1);
x_14 = lean::cnstr_get(x_3, 1);
x_15 = lean::cnstr_get(x_3, 0);
lean::dec(x_15);
x_16 = lean::cnstr_get(x_2, 5);
x_17 = lean::array_get_size(x_16);
x_18 = lean::array_get_size(x_13);
x_19 = lean::nat_dec_eq(x_17, x_18);
if (x_19 == 0)
{
obj* x_20; 
lean::dec(x_18);
lean::dec(x_17);
x_20 = l_Lean_IR_EmitCpp_emitTailCall___closed__2;
lean::cnstr_set_tag(x_3, 1);
lean::cnstr_set(x_3, 0, x_20);
return x_3;
}
else
{
obj* x_21; uint8 x_22; 
x_21 = lean::box(0);
lean::inc(x_14);
lean::cnstr_set(x_3, 0, x_21);
x_22 = l_Lean_IR_EmitCpp_overwriteParam(x_16, x_13);
if (x_22 == 0)
{
obj* x_23; 
lean::dec(x_17);
lean::dec(x_14);
lean::inc(x_18);
x_23 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__1(x_13, x_16, x_18, x_18, x_2, x_3);
lean::dec(x_18);
if (lean::obj_tag(x_23) == 0)
{
uint8 x_24; 
x_24 = !lean::is_exclusive(x_23);
if (x_24 == 0)
{
obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_25 = lean::cnstr_get(x_23, 1);
x_26 = lean::cnstr_get(x_23, 0);
lean::dec(x_26);
x_27 = l_Lean_IR_EmitCpp_emitTailCall___closed__3;
x_28 = lean::string_append(x_25, x_27);
x_29 = l_IO_println___rarg___closed__1;
x_30 = lean::string_append(x_28, x_29);
lean::cnstr_set(x_23, 1, x_30);
lean::cnstr_set(x_23, 0, x_21);
return x_23;
}
else
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; 
x_31 = lean::cnstr_get(x_23, 1);
lean::inc(x_31);
lean::dec(x_23);
x_32 = l_Lean_IR_EmitCpp_emitTailCall___closed__3;
x_33 = lean::string_append(x_31, x_32);
x_34 = l_IO_println___rarg___closed__1;
x_35 = lean::string_append(x_33, x_34);
x_36 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_36, 0, x_21);
lean::cnstr_set(x_36, 1, x_35);
return x_36;
}
}
else
{
uint8 x_37; 
x_37 = !lean::is_exclusive(x_23);
if (x_37 == 0)
{
return x_23;
}
else
{
obj* x_38; obj* x_39; obj* x_40; 
x_38 = lean::cnstr_get(x_23, 0);
x_39 = lean::cnstr_get(x_23, 1);
lean::inc(x_39);
lean::inc(x_38);
lean::dec(x_23);
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_38);
lean::cnstr_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
lean::dec(x_3);
lean::dec(x_18);
x_41 = l_Lean_IR_EmitCpp_emitTailCall___closed__4;
x_42 = lean::string_append(x_14, x_41);
x_43 = l_IO_println___rarg___closed__1;
x_44 = lean::string_append(x_42, x_43);
x_45 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_45, 0, x_21);
lean::cnstr_set(x_45, 1, x_44);
lean::inc(x_17);
x_46 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__2(x_13, x_16, x_17, x_17, x_2, x_45);
if (lean::obj_tag(x_46) == 0)
{
uint8 x_47; 
x_47 = !lean::is_exclusive(x_46);
if (x_47 == 0)
{
obj* x_48; obj* x_49; 
x_48 = lean::cnstr_get(x_46, 0);
lean::dec(x_48);
lean::cnstr_set(x_46, 0, x_21);
lean::inc(x_17);
x_49 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__3(x_13, x_16, x_17, x_17, x_2, x_46);
lean::dec(x_17);
if (lean::obj_tag(x_49) == 0)
{
uint8 x_50; 
x_50 = !lean::is_exclusive(x_49);
if (x_50 == 0)
{
obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; 
x_51 = lean::cnstr_get(x_49, 1);
x_52 = lean::cnstr_get(x_49, 0);
lean::dec(x_52);
x_53 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_54 = lean::string_append(x_51, x_53);
x_55 = lean::string_append(x_54, x_43);
x_56 = l_Lean_IR_EmitCpp_emitTailCall___closed__3;
x_57 = lean::string_append(x_55, x_56);
x_58 = lean::string_append(x_57, x_43);
lean::cnstr_set(x_49, 1, x_58);
lean::cnstr_set(x_49, 0, x_21);
return x_49;
}
else
{
obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; 
x_59 = lean::cnstr_get(x_49, 1);
lean::inc(x_59);
lean::dec(x_49);
x_60 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_61 = lean::string_append(x_59, x_60);
x_62 = lean::string_append(x_61, x_43);
x_63 = l_Lean_IR_EmitCpp_emitTailCall___closed__3;
x_64 = lean::string_append(x_62, x_63);
x_65 = lean::string_append(x_64, x_43);
x_66 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_66, 0, x_21);
lean::cnstr_set(x_66, 1, x_65);
return x_66;
}
}
else
{
uint8 x_67; 
x_67 = !lean::is_exclusive(x_49);
if (x_67 == 0)
{
return x_49;
}
else
{
obj* x_68; obj* x_69; obj* x_70; 
x_68 = lean::cnstr_get(x_49, 0);
x_69 = lean::cnstr_get(x_49, 1);
lean::inc(x_69);
lean::inc(x_68);
lean::dec(x_49);
x_70 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_70, 0, x_68);
lean::cnstr_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
obj* x_71; obj* x_72; obj* x_73; 
x_71 = lean::cnstr_get(x_46, 1);
lean::inc(x_71);
lean::dec(x_46);
x_72 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_72, 0, x_21);
lean::cnstr_set(x_72, 1, x_71);
lean::inc(x_17);
x_73 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__3(x_13, x_16, x_17, x_17, x_2, x_72);
lean::dec(x_17);
if (lean::obj_tag(x_73) == 0)
{
obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
x_74 = lean::cnstr_get(x_73, 1);
lean::inc(x_74);
if (lean::is_exclusive(x_73)) {
 lean::cnstr_release(x_73, 0);
 lean::cnstr_release(x_73, 1);
 x_75 = x_73;
} else {
 lean::dec_ref(x_73);
 x_75 = lean::box(0);
}
x_76 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_77 = lean::string_append(x_74, x_76);
x_78 = lean::string_append(x_77, x_43);
x_79 = l_Lean_IR_EmitCpp_emitTailCall___closed__3;
x_80 = lean::string_append(x_78, x_79);
x_81 = lean::string_append(x_80, x_43);
if (lean::is_scalar(x_75)) {
 x_82 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_82 = x_75;
}
lean::cnstr_set(x_82, 0, x_21);
lean::cnstr_set(x_82, 1, x_81);
return x_82;
}
else
{
obj* x_83; obj* x_84; obj* x_85; obj* x_86; 
x_83 = lean::cnstr_get(x_73, 0);
lean::inc(x_83);
x_84 = lean::cnstr_get(x_73, 1);
lean::inc(x_84);
if (lean::is_exclusive(x_73)) {
 lean::cnstr_release(x_73, 0);
 lean::cnstr_release(x_73, 1);
 x_85 = x_73;
} else {
 lean::dec_ref(x_73);
 x_85 = lean::box(0);
}
if (lean::is_scalar(x_85)) {
 x_86 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_86 = x_85;
}
lean::cnstr_set(x_86, 0, x_83);
lean::cnstr_set(x_86, 1, x_84);
return x_86;
}
}
}
else
{
uint8 x_87; 
lean::dec(x_17);
x_87 = !lean::is_exclusive(x_46);
if (x_87 == 0)
{
return x_46;
}
else
{
obj* x_88; obj* x_89; obj* x_90; 
x_88 = lean::cnstr_get(x_46, 0);
x_89 = lean::cnstr_get(x_46, 1);
lean::inc(x_89);
lean::inc(x_88);
lean::dec(x_46);
x_90 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_90, 0, x_88);
lean::cnstr_set(x_90, 1, x_89);
return x_90;
}
}
}
}
}
else
{
obj* x_91; obj* x_92; obj* x_93; obj* x_94; obj* x_95; uint8 x_96; 
x_91 = lean::cnstr_get(x_1, 1);
x_92 = lean::cnstr_get(x_3, 1);
lean::inc(x_92);
lean::dec(x_3);
x_93 = lean::cnstr_get(x_2, 5);
x_94 = lean::array_get_size(x_93);
x_95 = lean::array_get_size(x_91);
x_96 = lean::nat_dec_eq(x_94, x_95);
if (x_96 == 0)
{
obj* x_97; obj* x_98; 
lean::dec(x_95);
lean::dec(x_94);
x_97 = l_Lean_IR_EmitCpp_emitTailCall___closed__2;
x_98 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_98, 0, x_97);
lean::cnstr_set(x_98, 1, x_92);
return x_98;
}
else
{
obj* x_99; obj* x_100; uint8 x_101; 
x_99 = lean::box(0);
lean::inc(x_92);
x_100 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_100, 0, x_99);
lean::cnstr_set(x_100, 1, x_92);
x_101 = l_Lean_IR_EmitCpp_overwriteParam(x_93, x_91);
if (x_101 == 0)
{
obj* x_102; 
lean::dec(x_94);
lean::dec(x_92);
lean::inc(x_95);
x_102 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__1(x_91, x_93, x_95, x_95, x_2, x_100);
lean::dec(x_95);
if (lean::obj_tag(x_102) == 0)
{
obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; obj* x_108; obj* x_109; 
x_103 = lean::cnstr_get(x_102, 1);
lean::inc(x_103);
if (lean::is_exclusive(x_102)) {
 lean::cnstr_release(x_102, 0);
 lean::cnstr_release(x_102, 1);
 x_104 = x_102;
} else {
 lean::dec_ref(x_102);
 x_104 = lean::box(0);
}
x_105 = l_Lean_IR_EmitCpp_emitTailCall___closed__3;
x_106 = lean::string_append(x_103, x_105);
x_107 = l_IO_println___rarg___closed__1;
x_108 = lean::string_append(x_106, x_107);
if (lean::is_scalar(x_104)) {
 x_109 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_109 = x_104;
}
lean::cnstr_set(x_109, 0, x_99);
lean::cnstr_set(x_109, 1, x_108);
return x_109;
}
else
{
obj* x_110; obj* x_111; obj* x_112; obj* x_113; 
x_110 = lean::cnstr_get(x_102, 0);
lean::inc(x_110);
x_111 = lean::cnstr_get(x_102, 1);
lean::inc(x_111);
if (lean::is_exclusive(x_102)) {
 lean::cnstr_release(x_102, 0);
 lean::cnstr_release(x_102, 1);
 x_112 = x_102;
} else {
 lean::dec_ref(x_102);
 x_112 = lean::box(0);
}
if (lean::is_scalar(x_112)) {
 x_113 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_113 = x_112;
}
lean::cnstr_set(x_113, 0, x_110);
lean::cnstr_set(x_113, 1, x_111);
return x_113;
}
}
else
{
obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; 
lean::dec(x_100);
lean::dec(x_95);
x_114 = l_Lean_IR_EmitCpp_emitTailCall___closed__4;
x_115 = lean::string_append(x_92, x_114);
x_116 = l_IO_println___rarg___closed__1;
x_117 = lean::string_append(x_115, x_116);
x_118 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_118, 0, x_99);
lean::cnstr_set(x_118, 1, x_117);
lean::inc(x_94);
x_119 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__2(x_91, x_93, x_94, x_94, x_2, x_118);
if (lean::obj_tag(x_119) == 0)
{
obj* x_120; obj* x_121; obj* x_122; obj* x_123; 
x_120 = lean::cnstr_get(x_119, 1);
lean::inc(x_120);
if (lean::is_exclusive(x_119)) {
 lean::cnstr_release(x_119, 0);
 lean::cnstr_release(x_119, 1);
 x_121 = x_119;
} else {
 lean::dec_ref(x_119);
 x_121 = lean::box(0);
}
if (lean::is_scalar(x_121)) {
 x_122 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_122 = x_121;
}
lean::cnstr_set(x_122, 0, x_99);
lean::cnstr_set(x_122, 1, x_120);
lean::inc(x_94);
x_123 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__3(x_91, x_93, x_94, x_94, x_2, x_122);
lean::dec(x_94);
if (lean::obj_tag(x_123) == 0)
{
obj* x_124; obj* x_125; obj* x_126; obj* x_127; obj* x_128; obj* x_129; obj* x_130; obj* x_131; obj* x_132; 
x_124 = lean::cnstr_get(x_123, 1);
lean::inc(x_124);
if (lean::is_exclusive(x_123)) {
 lean::cnstr_release(x_123, 0);
 lean::cnstr_release(x_123, 1);
 x_125 = x_123;
} else {
 lean::dec_ref(x_123);
 x_125 = lean::box(0);
}
x_126 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_127 = lean::string_append(x_124, x_126);
x_128 = lean::string_append(x_127, x_116);
x_129 = l_Lean_IR_EmitCpp_emitTailCall___closed__3;
x_130 = lean::string_append(x_128, x_129);
x_131 = lean::string_append(x_130, x_116);
if (lean::is_scalar(x_125)) {
 x_132 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_132 = x_125;
}
lean::cnstr_set(x_132, 0, x_99);
lean::cnstr_set(x_132, 1, x_131);
return x_132;
}
else
{
obj* x_133; obj* x_134; obj* x_135; obj* x_136; 
x_133 = lean::cnstr_get(x_123, 0);
lean::inc(x_133);
x_134 = lean::cnstr_get(x_123, 1);
lean::inc(x_134);
if (lean::is_exclusive(x_123)) {
 lean::cnstr_release(x_123, 0);
 lean::cnstr_release(x_123, 1);
 x_135 = x_123;
} else {
 lean::dec_ref(x_123);
 x_135 = lean::box(0);
}
if (lean::is_scalar(x_135)) {
 x_136 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_136 = x_135;
}
lean::cnstr_set(x_136, 0, x_133);
lean::cnstr_set(x_136, 1, x_134);
return x_136;
}
}
else
{
obj* x_137; obj* x_138; obj* x_139; obj* x_140; 
lean::dec(x_94);
x_137 = lean::cnstr_get(x_119, 0);
lean::inc(x_137);
x_138 = lean::cnstr_get(x_119, 1);
lean::inc(x_138);
if (lean::is_exclusive(x_119)) {
 lean::cnstr_release(x_119, 0);
 lean::cnstr_release(x_119, 1);
 x_139 = x_119;
} else {
 lean::dec_ref(x_119);
 x_139 = lean::box(0);
}
if (lean::is_scalar(x_139)) {
 x_140 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_140 = x_139;
}
lean::cnstr_set(x_140, 0, x_137);
lean::cnstr_set(x_140, 1, x_138);
return x_140;
}
}
}
}
}
else
{
obj* x_141; 
x_141 = lean::box(0);
x_4 = x_141;
goto block_11;
}
block_11:
{
uint8 x_5; 
lean::dec(x_4);
x_5 = !lean::is_exclusive(x_3);
if (x_5 == 0)
{
obj* x_6; obj* x_7; 
x_6 = lean::cnstr_get(x_3, 0);
lean::dec(x_6);
x_7 = l_Lean_IR_EmitCpp_emitTailCall___closed__1;
lean::cnstr_set_tag(x_3, 1);
lean::cnstr_set(x_3, 0, x_7);
return x_3;
}
else
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = lean::cnstr_get(x_3, 1);
lean::inc(x_8);
lean::dec(x_3);
x_9 = l_Lean_IR_EmitCpp_emitTailCall___closed__1;
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_8);
return x_10;
}
}
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_7;
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_7;
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__3___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_7;
}
}
obj* l_Lean_IR_EmitCpp_emitTailCall___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_emitTailCall(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitBlock___main___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("return ");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitBlock___main___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean_unreachable();");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitBlock___main(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_5; uint8 x_6; obj* x_7; obj* x_8; uint8 x_9; 
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_6 = lean::cnstr_get_scalar<uint8>(x_2, sizeof(void*)*3);
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
x_8 = lean::cnstr_get(x_2, 2);
lean::inc(x_8);
x_9 = !lean::is_exclusive(x_4);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_12; uint8 x_13; 
x_10 = lean::cnstr_get(x_4, 0);
lean::dec(x_10);
x_11 = lean::box(0);
lean::cnstr_set(x_4, 0, x_11);
x_12 = lean::cnstr_get(x_3, 4);
lean::inc(x_12);
x_13 = l_Lean_IR_isTailCallTo(x_12, x_2);
lean::dec(x_2);
lean::dec(x_12);
if (x_13 == 0)
{
obj* x_14; 
x_14 = l_Lean_IR_EmitCpp_emitVDecl(x_5, x_6, x_7, x_3, x_4);
if (lean::obj_tag(x_14) == 0)
{
uint8 x_15; 
x_15 = !lean::is_exclusive(x_14);
if (x_15 == 0)
{
obj* x_16; 
x_16 = lean::cnstr_get(x_14, 0);
lean::dec(x_16);
lean::cnstr_set(x_14, 0, x_11);
x_2 = x_8;
x_4 = x_14;
goto _start;
}
else
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_14, 1);
lean::inc(x_18);
lean::dec(x_14);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_11);
lean::cnstr_set(x_19, 1, x_18);
x_2 = x_8;
x_4 = x_19;
goto _start;
}
}
else
{
uint8 x_21; 
lean::dec(x_8);
lean::dec(x_3);
lean::dec(x_1);
x_21 = !lean::is_exclusive(x_14);
if (x_21 == 0)
{
return x_14;
}
else
{
obj* x_22; obj* x_23; obj* x_24; 
x_22 = lean::cnstr_get(x_14, 0);
x_23 = lean::cnstr_get(x_14, 1);
lean::inc(x_23);
lean::inc(x_22);
lean::dec(x_14);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_22);
lean::cnstr_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
obj* x_25; 
lean::dec(x_8);
lean::dec(x_5);
lean::dec(x_1);
x_25 = l_Lean_IR_EmitCpp_emitTailCall(x_7, x_3, x_4);
lean::dec(x_3);
lean::dec(x_7);
return x_25;
}
}
else
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; uint8 x_30; 
x_26 = lean::cnstr_get(x_4, 1);
lean::inc(x_26);
lean::dec(x_4);
x_27 = lean::box(0);
x_28 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_26);
x_29 = lean::cnstr_get(x_3, 4);
lean::inc(x_29);
x_30 = l_Lean_IR_isTailCallTo(x_29, x_2);
lean::dec(x_2);
lean::dec(x_29);
if (x_30 == 0)
{
obj* x_31; 
x_31 = l_Lean_IR_EmitCpp_emitVDecl(x_5, x_6, x_7, x_3, x_28);
if (lean::obj_tag(x_31) == 0)
{
obj* x_32; obj* x_33; obj* x_34; 
x_32 = lean::cnstr_get(x_31, 1);
lean::inc(x_32);
if (lean::is_exclusive(x_31)) {
 lean::cnstr_release(x_31, 0);
 lean::cnstr_release(x_31, 1);
 x_33 = x_31;
} else {
 lean::dec_ref(x_31);
 x_33 = lean::box(0);
}
if (lean::is_scalar(x_33)) {
 x_34 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_34 = x_33;
}
lean::cnstr_set(x_34, 0, x_27);
lean::cnstr_set(x_34, 1, x_32);
x_2 = x_8;
x_4 = x_34;
goto _start;
}
else
{
obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_8);
lean::dec(x_3);
lean::dec(x_1);
x_36 = lean::cnstr_get(x_31, 0);
lean::inc(x_36);
x_37 = lean::cnstr_get(x_31, 1);
lean::inc(x_37);
if (lean::is_exclusive(x_31)) {
 lean::cnstr_release(x_31, 0);
 lean::cnstr_release(x_31, 1);
 x_38 = x_31;
} else {
 lean::dec_ref(x_31);
 x_38 = lean::box(0);
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_36);
lean::cnstr_set(x_39, 1, x_37);
return x_39;
}
}
else
{
obj* x_40; 
lean::dec(x_8);
lean::dec(x_5);
lean::dec(x_1);
x_40 = l_Lean_IR_EmitCpp_emitTailCall(x_7, x_3, x_28);
lean::dec(x_3);
lean::dec(x_7);
return x_40;
}
}
}
case 1:
{
obj* x_41; 
x_41 = lean::cnstr_get(x_2, 3);
lean::inc(x_41);
lean::dec(x_2);
x_2 = x_41;
goto _start;
}
case 2:
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
x_43 = lean::cnstr_get(x_2, 0);
lean::inc(x_43);
x_44 = lean::cnstr_get(x_2, 1);
lean::inc(x_44);
x_45 = lean::cnstr_get(x_2, 2);
lean::inc(x_45);
x_46 = lean::cnstr_get(x_2, 3);
lean::inc(x_46);
lean::dec(x_2);
x_47 = l_Lean_IR_EmitCpp_emitSet(x_43, x_44, x_45, x_3, x_4);
if (lean::obj_tag(x_47) == 0)
{
uint8 x_48; 
x_48 = !lean::is_exclusive(x_47);
if (x_48 == 0)
{
obj* x_49; obj* x_50; 
x_49 = lean::cnstr_get(x_47, 0);
lean::dec(x_49);
x_50 = lean::box(0);
lean::cnstr_set(x_47, 0, x_50);
x_2 = x_46;
x_4 = x_47;
goto _start;
}
else
{
obj* x_52; obj* x_53; obj* x_54; 
x_52 = lean::cnstr_get(x_47, 1);
lean::inc(x_52);
lean::dec(x_47);
x_53 = lean::box(0);
x_54 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_52);
x_2 = x_46;
x_4 = x_54;
goto _start;
}
}
else
{
uint8 x_56; 
lean::dec(x_46);
lean::dec(x_3);
lean::dec(x_1);
x_56 = !lean::is_exclusive(x_47);
if (x_56 == 0)
{
return x_47;
}
else
{
obj* x_57; obj* x_58; obj* x_59; 
x_57 = lean::cnstr_get(x_47, 0);
x_58 = lean::cnstr_get(x_47, 1);
lean::inc(x_58);
lean::inc(x_57);
lean::dec(x_47);
x_59 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_59, 0, x_57);
lean::cnstr_set(x_59, 1, x_58);
return x_59;
}
}
}
case 3:
{
obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
x_60 = lean::cnstr_get(x_2, 0);
lean::inc(x_60);
x_61 = lean::cnstr_get(x_2, 1);
lean::inc(x_61);
x_62 = lean::cnstr_get(x_2, 2);
lean::inc(x_62);
lean::dec(x_2);
x_63 = l_Lean_IR_EmitCpp_emitSetTag(x_60, x_61, x_3, x_4);
if (lean::obj_tag(x_63) == 0)
{
uint8 x_64; 
x_64 = !lean::is_exclusive(x_63);
if (x_64 == 0)
{
obj* x_65; obj* x_66; 
x_65 = lean::cnstr_get(x_63, 0);
lean::dec(x_65);
x_66 = lean::box(0);
lean::cnstr_set(x_63, 0, x_66);
x_2 = x_62;
x_4 = x_63;
goto _start;
}
else
{
obj* x_68; obj* x_69; obj* x_70; 
x_68 = lean::cnstr_get(x_63, 1);
lean::inc(x_68);
lean::dec(x_63);
x_69 = lean::box(0);
x_70 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_70, 0, x_69);
lean::cnstr_set(x_70, 1, x_68);
x_2 = x_62;
x_4 = x_70;
goto _start;
}
}
else
{
uint8 x_72; 
lean::dec(x_62);
lean::dec(x_3);
lean::dec(x_1);
x_72 = !lean::is_exclusive(x_63);
if (x_72 == 0)
{
return x_63;
}
else
{
obj* x_73; obj* x_74; obj* x_75; 
x_73 = lean::cnstr_get(x_63, 0);
x_74 = lean::cnstr_get(x_63, 1);
lean::inc(x_74);
lean::inc(x_73);
lean::dec(x_63);
x_75 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_75, 0, x_73);
lean::cnstr_set(x_75, 1, x_74);
return x_75;
}
}
}
case 4:
{
obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; 
x_76 = lean::cnstr_get(x_2, 0);
lean::inc(x_76);
x_77 = lean::cnstr_get(x_2, 1);
lean::inc(x_77);
x_78 = lean::cnstr_get(x_2, 2);
lean::inc(x_78);
x_79 = lean::cnstr_get(x_2, 3);
lean::inc(x_79);
lean::dec(x_2);
x_80 = l_Lean_IR_EmitCpp_emitUSet(x_76, x_77, x_78, x_3, x_4);
if (lean::obj_tag(x_80) == 0)
{
uint8 x_81; 
x_81 = !lean::is_exclusive(x_80);
if (x_81 == 0)
{
obj* x_82; obj* x_83; 
x_82 = lean::cnstr_get(x_80, 0);
lean::dec(x_82);
x_83 = lean::box(0);
lean::cnstr_set(x_80, 0, x_83);
x_2 = x_79;
x_4 = x_80;
goto _start;
}
else
{
obj* x_85; obj* x_86; obj* x_87; 
x_85 = lean::cnstr_get(x_80, 1);
lean::inc(x_85);
lean::dec(x_80);
x_86 = lean::box(0);
x_87 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_87, 0, x_86);
lean::cnstr_set(x_87, 1, x_85);
x_2 = x_79;
x_4 = x_87;
goto _start;
}
}
else
{
uint8 x_89; 
lean::dec(x_79);
lean::dec(x_3);
lean::dec(x_1);
x_89 = !lean::is_exclusive(x_80);
if (x_89 == 0)
{
return x_80;
}
else
{
obj* x_90; obj* x_91; obj* x_92; 
x_90 = lean::cnstr_get(x_80, 0);
x_91 = lean::cnstr_get(x_80, 1);
lean::inc(x_91);
lean::inc(x_90);
lean::dec(x_80);
x_92 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_92, 0, x_90);
lean::cnstr_set(x_92, 1, x_91);
return x_92;
}
}
}
case 5:
{
obj* x_93; obj* x_94; obj* x_95; obj* x_96; obj* x_97; obj* x_98; 
x_93 = lean::cnstr_get(x_2, 0);
lean::inc(x_93);
x_94 = lean::cnstr_get(x_2, 1);
lean::inc(x_94);
x_95 = lean::cnstr_get(x_2, 2);
lean::inc(x_95);
x_96 = lean::cnstr_get(x_2, 3);
lean::inc(x_96);
x_97 = lean::cnstr_get(x_2, 4);
lean::inc(x_97);
lean::dec(x_2);
x_98 = l_Lean_IR_EmitCpp_emitSSet(x_93, x_94, x_95, x_96, x_3, x_4);
if (lean::obj_tag(x_98) == 0)
{
uint8 x_99; 
x_99 = !lean::is_exclusive(x_98);
if (x_99 == 0)
{
obj* x_100; obj* x_101; 
x_100 = lean::cnstr_get(x_98, 0);
lean::dec(x_100);
x_101 = lean::box(0);
lean::cnstr_set(x_98, 0, x_101);
x_2 = x_97;
x_4 = x_98;
goto _start;
}
else
{
obj* x_103; obj* x_104; obj* x_105; 
x_103 = lean::cnstr_get(x_98, 1);
lean::inc(x_103);
lean::dec(x_98);
x_104 = lean::box(0);
x_105 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_105, 0, x_104);
lean::cnstr_set(x_105, 1, x_103);
x_2 = x_97;
x_4 = x_105;
goto _start;
}
}
else
{
uint8 x_107; 
lean::dec(x_97);
lean::dec(x_3);
lean::dec(x_1);
x_107 = !lean::is_exclusive(x_98);
if (x_107 == 0)
{
return x_98;
}
else
{
obj* x_108; obj* x_109; obj* x_110; 
x_108 = lean::cnstr_get(x_98, 0);
x_109 = lean::cnstr_get(x_98, 1);
lean::inc(x_109);
lean::inc(x_108);
lean::dec(x_98);
x_110 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_110, 0, x_108);
lean::cnstr_set(x_110, 1, x_109);
return x_110;
}
}
}
case 6:
{
obj* x_111; obj* x_112; uint8 x_113; obj* x_114; obj* x_115; 
x_111 = lean::cnstr_get(x_2, 0);
lean::inc(x_111);
x_112 = lean::cnstr_get(x_2, 1);
lean::inc(x_112);
x_113 = lean::cnstr_get_scalar<uint8>(x_2, sizeof(void*)*3);
x_114 = lean::cnstr_get(x_2, 2);
lean::inc(x_114);
lean::dec(x_2);
x_115 = l_Lean_IR_EmitCpp_emitInc(x_111, x_112, x_113, x_3, x_4);
if (lean::obj_tag(x_115) == 0)
{
uint8 x_116; 
x_116 = !lean::is_exclusive(x_115);
if (x_116 == 0)
{
obj* x_117; obj* x_118; 
x_117 = lean::cnstr_get(x_115, 0);
lean::dec(x_117);
x_118 = lean::box(0);
lean::cnstr_set(x_115, 0, x_118);
x_2 = x_114;
x_4 = x_115;
goto _start;
}
else
{
obj* x_120; obj* x_121; obj* x_122; 
x_120 = lean::cnstr_get(x_115, 1);
lean::inc(x_120);
lean::dec(x_115);
x_121 = lean::box(0);
x_122 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_122, 0, x_121);
lean::cnstr_set(x_122, 1, x_120);
x_2 = x_114;
x_4 = x_122;
goto _start;
}
}
else
{
uint8 x_124; 
lean::dec(x_114);
lean::dec(x_3);
lean::dec(x_1);
x_124 = !lean::is_exclusive(x_115);
if (x_124 == 0)
{
return x_115;
}
else
{
obj* x_125; obj* x_126; obj* x_127; 
x_125 = lean::cnstr_get(x_115, 0);
x_126 = lean::cnstr_get(x_115, 1);
lean::inc(x_126);
lean::inc(x_125);
lean::dec(x_115);
x_127 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_127, 0, x_125);
lean::cnstr_set(x_127, 1, x_126);
return x_127;
}
}
}
case 7:
{
obj* x_128; obj* x_129; uint8 x_130; obj* x_131; obj* x_132; 
x_128 = lean::cnstr_get(x_2, 0);
lean::inc(x_128);
x_129 = lean::cnstr_get(x_2, 1);
lean::inc(x_129);
x_130 = lean::cnstr_get_scalar<uint8>(x_2, sizeof(void*)*3);
x_131 = lean::cnstr_get(x_2, 2);
lean::inc(x_131);
lean::dec(x_2);
x_132 = l_Lean_IR_EmitCpp_emitDec(x_128, x_129, x_130, x_3, x_4);
if (lean::obj_tag(x_132) == 0)
{
uint8 x_133; 
x_133 = !lean::is_exclusive(x_132);
if (x_133 == 0)
{
obj* x_134; obj* x_135; 
x_134 = lean::cnstr_get(x_132, 0);
lean::dec(x_134);
x_135 = lean::box(0);
lean::cnstr_set(x_132, 0, x_135);
x_2 = x_131;
x_4 = x_132;
goto _start;
}
else
{
obj* x_137; obj* x_138; obj* x_139; 
x_137 = lean::cnstr_get(x_132, 1);
lean::inc(x_137);
lean::dec(x_132);
x_138 = lean::box(0);
x_139 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_139, 0, x_138);
lean::cnstr_set(x_139, 1, x_137);
x_2 = x_131;
x_4 = x_139;
goto _start;
}
}
else
{
uint8 x_141; 
lean::dec(x_131);
lean::dec(x_3);
lean::dec(x_1);
x_141 = !lean::is_exclusive(x_132);
if (x_141 == 0)
{
return x_132;
}
else
{
obj* x_142; obj* x_143; obj* x_144; 
x_142 = lean::cnstr_get(x_132, 0);
x_143 = lean::cnstr_get(x_132, 1);
lean::inc(x_143);
lean::inc(x_142);
lean::dec(x_132);
x_144 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_144, 0, x_142);
lean::cnstr_set(x_144, 1, x_143);
return x_144;
}
}
}
case 8:
{
obj* x_145; obj* x_146; obj* x_147; 
x_145 = lean::cnstr_get(x_2, 0);
lean::inc(x_145);
x_146 = lean::cnstr_get(x_2, 1);
lean::inc(x_146);
lean::dec(x_2);
x_147 = l_Lean_IR_EmitCpp_emitDel(x_145, x_3, x_4);
if (lean::obj_tag(x_147) == 0)
{
uint8 x_148; 
x_148 = !lean::is_exclusive(x_147);
if (x_148 == 0)
{
obj* x_149; obj* x_150; 
x_149 = lean::cnstr_get(x_147, 0);
lean::dec(x_149);
x_150 = lean::box(0);
lean::cnstr_set(x_147, 0, x_150);
x_2 = x_146;
x_4 = x_147;
goto _start;
}
else
{
obj* x_152; obj* x_153; obj* x_154; 
x_152 = lean::cnstr_get(x_147, 1);
lean::inc(x_152);
lean::dec(x_147);
x_153 = lean::box(0);
x_154 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_154, 0, x_153);
lean::cnstr_set(x_154, 1, x_152);
x_2 = x_146;
x_4 = x_154;
goto _start;
}
}
else
{
uint8 x_156; 
lean::dec(x_146);
lean::dec(x_3);
lean::dec(x_1);
x_156 = !lean::is_exclusive(x_147);
if (x_156 == 0)
{
return x_147;
}
else
{
obj* x_157; obj* x_158; obj* x_159; 
x_157 = lean::cnstr_get(x_147, 0);
x_158 = lean::cnstr_get(x_147, 1);
lean::inc(x_158);
lean::inc(x_157);
lean::dec(x_147);
x_159 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_159, 0, x_157);
lean::cnstr_set(x_159, 1, x_158);
return x_159;
}
}
}
case 9:
{
obj* x_160; 
x_160 = lean::cnstr_get(x_2, 1);
lean::inc(x_160);
lean::dec(x_2);
x_2 = x_160;
goto _start;
}
case 10:
{
obj* x_162; obj* x_163; obj* x_164; 
x_162 = lean::cnstr_get(x_2, 1);
lean::inc(x_162);
x_163 = lean::cnstr_get(x_2, 2);
lean::inc(x_163);
lean::dec(x_2);
x_164 = l_Lean_IR_EmitCpp_emitCase(x_1, x_162, x_163, x_3, x_4);
return x_164;
}
case 11:
{
obj* x_165; uint8 x_166; 
lean::dec(x_1);
x_165 = lean::cnstr_get(x_2, 0);
lean::inc(x_165);
lean::dec(x_2);
x_166 = !lean::is_exclusive(x_4);
if (x_166 == 0)
{
obj* x_167; obj* x_168; obj* x_169; obj* x_170; obj* x_171; obj* x_172; 
x_167 = lean::cnstr_get(x_4, 1);
x_168 = lean::cnstr_get(x_4, 0);
lean::dec(x_168);
x_169 = l_Lean_IR_EmitCpp_emitBlock___main___closed__1;
x_170 = lean::string_append(x_167, x_169);
x_171 = lean::box(0);
lean::cnstr_set(x_4, 1, x_170);
lean::cnstr_set(x_4, 0, x_171);
x_172 = l_Lean_IR_EmitCpp_emitArg(x_165, x_3, x_4);
lean::dec(x_3);
if (lean::obj_tag(x_172) == 0)
{
uint8 x_173; 
x_173 = !lean::is_exclusive(x_172);
if (x_173 == 0)
{
obj* x_174; obj* x_175; obj* x_176; obj* x_177; obj* x_178; obj* x_179; 
x_174 = lean::cnstr_get(x_172, 1);
x_175 = lean::cnstr_get(x_172, 0);
lean::dec(x_175);
x_176 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_177 = lean::string_append(x_174, x_176);
x_178 = l_IO_println___rarg___closed__1;
x_179 = lean::string_append(x_177, x_178);
lean::cnstr_set(x_172, 1, x_179);
lean::cnstr_set(x_172, 0, x_171);
return x_172;
}
else
{
obj* x_180; obj* x_181; obj* x_182; obj* x_183; obj* x_184; obj* x_185; 
x_180 = lean::cnstr_get(x_172, 1);
lean::inc(x_180);
lean::dec(x_172);
x_181 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_182 = lean::string_append(x_180, x_181);
x_183 = l_IO_println___rarg___closed__1;
x_184 = lean::string_append(x_182, x_183);
x_185 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_185, 0, x_171);
lean::cnstr_set(x_185, 1, x_184);
return x_185;
}
}
else
{
uint8 x_186; 
x_186 = !lean::is_exclusive(x_172);
if (x_186 == 0)
{
return x_172;
}
else
{
obj* x_187; obj* x_188; obj* x_189; 
x_187 = lean::cnstr_get(x_172, 0);
x_188 = lean::cnstr_get(x_172, 1);
lean::inc(x_188);
lean::inc(x_187);
lean::dec(x_172);
x_189 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_189, 0, x_187);
lean::cnstr_set(x_189, 1, x_188);
return x_189;
}
}
}
else
{
obj* x_190; obj* x_191; obj* x_192; obj* x_193; obj* x_194; obj* x_195; 
x_190 = lean::cnstr_get(x_4, 1);
lean::inc(x_190);
lean::dec(x_4);
x_191 = l_Lean_IR_EmitCpp_emitBlock___main___closed__1;
x_192 = lean::string_append(x_190, x_191);
x_193 = lean::box(0);
x_194 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_194, 0, x_193);
lean::cnstr_set(x_194, 1, x_192);
x_195 = l_Lean_IR_EmitCpp_emitArg(x_165, x_3, x_194);
lean::dec(x_3);
if (lean::obj_tag(x_195) == 0)
{
obj* x_196; obj* x_197; obj* x_198; obj* x_199; obj* x_200; obj* x_201; obj* x_202; 
x_196 = lean::cnstr_get(x_195, 1);
lean::inc(x_196);
if (lean::is_exclusive(x_195)) {
 lean::cnstr_release(x_195, 0);
 lean::cnstr_release(x_195, 1);
 x_197 = x_195;
} else {
 lean::dec_ref(x_195);
 x_197 = lean::box(0);
}
x_198 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2;
x_199 = lean::string_append(x_196, x_198);
x_200 = l_IO_println___rarg___closed__1;
x_201 = lean::string_append(x_199, x_200);
if (lean::is_scalar(x_197)) {
 x_202 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_202 = x_197;
}
lean::cnstr_set(x_202, 0, x_193);
lean::cnstr_set(x_202, 1, x_201);
return x_202;
}
else
{
obj* x_203; obj* x_204; obj* x_205; obj* x_206; 
x_203 = lean::cnstr_get(x_195, 0);
lean::inc(x_203);
x_204 = lean::cnstr_get(x_195, 1);
lean::inc(x_204);
if (lean::is_exclusive(x_195)) {
 lean::cnstr_release(x_195, 0);
 lean::cnstr_release(x_195, 1);
 x_205 = x_195;
} else {
 lean::dec_ref(x_195);
 x_205 = lean::box(0);
}
if (lean::is_scalar(x_205)) {
 x_206 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_206 = x_205;
}
lean::cnstr_set(x_206, 0, x_203);
lean::cnstr_set(x_206, 1, x_204);
return x_206;
}
}
}
case 12:
{
obj* x_207; obj* x_208; obj* x_209; 
lean::dec(x_1);
x_207 = lean::cnstr_get(x_2, 0);
lean::inc(x_207);
x_208 = lean::cnstr_get(x_2, 1);
lean::inc(x_208);
lean::dec(x_2);
x_209 = l_Lean_IR_EmitCpp_emitJmp(x_207, x_208, x_3, x_4);
lean::dec(x_3);
lean::dec(x_208);
return x_209;
}
default: 
{
uint8 x_210; 
lean::dec(x_3);
lean::dec(x_1);
x_210 = !lean::is_exclusive(x_4);
if (x_210 == 0)
{
obj* x_211; obj* x_212; obj* x_213; obj* x_214; obj* x_215; obj* x_216; obj* x_217; 
x_211 = lean::cnstr_get(x_4, 1);
x_212 = lean::cnstr_get(x_4, 0);
lean::dec(x_212);
x_213 = l_Lean_IR_EmitCpp_emitBlock___main___closed__2;
x_214 = lean::string_append(x_211, x_213);
x_215 = l_IO_println___rarg___closed__1;
x_216 = lean::string_append(x_214, x_215);
x_217 = lean::box(0);
lean::cnstr_set(x_4, 1, x_216);
lean::cnstr_set(x_4, 0, x_217);
return x_4;
}
else
{
obj* x_218; obj* x_219; obj* x_220; obj* x_221; obj* x_222; obj* x_223; obj* x_224; 
x_218 = lean::cnstr_get(x_4, 1);
lean::inc(x_218);
lean::dec(x_4);
x_219 = l_Lean_IR_EmitCpp_emitBlock___main___closed__2;
x_220 = lean::string_append(x_218, x_219);
x_221 = l_IO_println___rarg___closed__1;
x_222 = lean::string_append(x_220, x_221);
x_223 = lean::box(0);
x_224 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_224, 0, x_223);
lean::cnstr_set(x_224, 1, x_222);
return x_224;
}
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitBlock(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_emitBlock___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
obj* l_Lean_IR_EmitCpp_emitJPs___main(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
if (lean::obj_tag(x_2) == 1)
{
obj* x_16; obj* x_17; obj* x_18; uint8 x_19; 
x_16 = lean::cnstr_get(x_2, 0);
lean::inc(x_16);
x_17 = lean::cnstr_get(x_2, 2);
lean::inc(x_17);
x_18 = lean::cnstr_get(x_2, 3);
lean::inc(x_18);
lean::dec(x_2);
x_19 = !lean::is_exclusive(x_4);
if (x_19 == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_20 = lean::cnstr_get(x_4, 1);
x_21 = lean::cnstr_get(x_4, 0);
lean::dec(x_21);
x_22 = l_Nat_repr(x_16);
x_23 = l_Lean_IR_JoinPointId_HasToString___closed__1;
x_24 = lean::string_append(x_23, x_22);
lean::dec(x_22);
x_25 = lean::string_append(x_20, x_24);
lean::dec(x_24);
x_26 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__2;
x_27 = lean::string_append(x_25, x_26);
x_28 = l_IO_println___rarg___closed__1;
x_29 = lean::string_append(x_27, x_28);
x_30 = lean::box(0);
lean::cnstr_set(x_4, 1, x_29);
lean::cnstr_set(x_4, 0, x_30);
lean::inc(x_1);
lean::inc(x_3);
x_31 = lean::apply_3(x_1, x_17, x_3, x_4);
if (lean::obj_tag(x_31) == 0)
{
uint8 x_32; 
x_32 = !lean::is_exclusive(x_31);
if (x_32 == 0)
{
obj* x_33; 
x_33 = lean::cnstr_get(x_31, 0);
lean::dec(x_33);
lean::cnstr_set(x_31, 0, x_30);
x_2 = x_18;
x_4 = x_31;
goto _start;
}
else
{
obj* x_35; obj* x_36; 
x_35 = lean::cnstr_get(x_31, 1);
lean::inc(x_35);
lean::dec(x_31);
x_36 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_36, 0, x_30);
lean::cnstr_set(x_36, 1, x_35);
x_2 = x_18;
x_4 = x_36;
goto _start;
}
}
else
{
uint8 x_38; 
lean::dec(x_18);
lean::dec(x_3);
lean::dec(x_1);
x_38 = !lean::is_exclusive(x_31);
if (x_38 == 0)
{
return x_31;
}
else
{
obj* x_39; obj* x_40; obj* x_41; 
x_39 = lean::cnstr_get(x_31, 0);
x_40 = lean::cnstr_get(x_31, 1);
lean::inc(x_40);
lean::inc(x_39);
lean::dec(x_31);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_39);
lean::cnstr_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_42 = lean::cnstr_get(x_4, 1);
lean::inc(x_42);
lean::dec(x_4);
x_43 = l_Nat_repr(x_16);
x_44 = l_Lean_IR_JoinPointId_HasToString___closed__1;
x_45 = lean::string_append(x_44, x_43);
lean::dec(x_43);
x_46 = lean::string_append(x_42, x_45);
lean::dec(x_45);
x_47 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__2;
x_48 = lean::string_append(x_46, x_47);
x_49 = l_IO_println___rarg___closed__1;
x_50 = lean::string_append(x_48, x_49);
x_51 = lean::box(0);
x_52 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_50);
lean::inc(x_1);
lean::inc(x_3);
x_53 = lean::apply_3(x_1, x_17, x_3, x_52);
if (lean::obj_tag(x_53) == 0)
{
obj* x_54; obj* x_55; obj* x_56; 
x_54 = lean::cnstr_get(x_53, 1);
lean::inc(x_54);
if (lean::is_exclusive(x_53)) {
 lean::cnstr_release(x_53, 0);
 lean::cnstr_release(x_53, 1);
 x_55 = x_53;
} else {
 lean::dec_ref(x_53);
 x_55 = lean::box(0);
}
if (lean::is_scalar(x_55)) {
 x_56 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_56 = x_55;
}
lean::cnstr_set(x_56, 0, x_51);
lean::cnstr_set(x_56, 1, x_54);
x_2 = x_18;
x_4 = x_56;
goto _start;
}
else
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
lean::dec(x_18);
lean::dec(x_3);
lean::dec(x_1);
x_58 = lean::cnstr_get(x_53, 0);
lean::inc(x_58);
x_59 = lean::cnstr_get(x_53, 1);
lean::inc(x_59);
if (lean::is_exclusive(x_53)) {
 lean::cnstr_release(x_53, 0);
 lean::cnstr_release(x_53, 1);
 x_60 = x_53;
} else {
 lean::dec_ref(x_53);
 x_60 = lean::box(0);
}
if (lean::is_scalar(x_60)) {
 x_61 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_61 = x_60;
}
lean::cnstr_set(x_61, 0, x_58);
lean::cnstr_set(x_61, 1, x_59);
return x_61;
}
}
}
else
{
obj* x_62; 
x_62 = lean::box(0);
x_5 = x_62;
goto block_15;
}
block_15:
{
uint8 x_6; 
lean::dec(x_5);
x_6 = l_Lean_IR_FnBody_isTerminal___main(x_2);
if (x_6 == 0)
{
obj* x_7; 
x_7 = l_Lean_IR_FnBody_body___main(x_2);
lean::dec(x_2);
x_2 = x_7;
goto _start;
}
else
{
uint8 x_9; 
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
x_9 = !lean::is_exclusive(x_4);
if (x_9 == 0)
{
obj* x_10; obj* x_11; 
x_10 = lean::cnstr_get(x_4, 0);
lean::dec(x_10);
x_11 = lean::box(0);
lean::cnstr_set(x_4, 0, x_11);
return x_4;
}
else
{
obj* x_12; obj* x_13; obj* x_14; 
x_12 = lean::cnstr_get(x_4, 1);
lean::inc(x_12);
lean::dec(x_4);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_12);
return x_14;
}
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitJPs(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_IR_EmitCpp_emitJPs___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitFnBody___main___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_IR_EmitCpp_emitFnBody___main), 3, 0);
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitFnBody___main(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; uint8 x_12; obj* x_13; 
x_5 = lean::cnstr_get(x_3, 1);
x_6 = lean::cnstr_get(x_3, 0);
lean::dec(x_6);
x_7 = l_Lean_IR_EmitCpp_emitTailCall___closed__4;
x_8 = lean::string_append(x_5, x_7);
x_9 = l_IO_println___rarg___closed__1;
x_10 = lean::string_append(x_8, x_9);
x_11 = lean::box(0);
lean::cnstr_set(x_3, 1, x_10);
lean::cnstr_set(x_3, 0, x_11);
x_12 = 0;
lean::inc(x_1);
x_13 = l_Lean_IR_EmitCpp_declareVars___main(x_1, x_12, x_2, x_3);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; uint8 x_15; 
x_14 = lean::cnstr_get(x_13, 0);
lean::inc(x_14);
x_15 = lean::unbox(x_14);
lean::dec(x_14);
if (x_15 == 0)
{
uint8 x_16; 
x_16 = !lean::is_exclusive(x_13);
if (x_16 == 0)
{
obj* x_17; obj* x_18; obj* x_19; 
x_17 = lean::cnstr_get(x_13, 0);
lean::dec(x_17);
lean::cnstr_set(x_13, 0, x_11);
x_18 = l_Lean_IR_EmitCpp_emitFnBody___main___closed__1;
lean::inc(x_2);
lean::inc(x_1);
x_19 = l_Lean_IR_EmitCpp_emitBlock___main(x_18, x_1, x_2, x_13);
if (lean::obj_tag(x_19) == 0)
{
uint8 x_20; 
x_20 = !lean::is_exclusive(x_19);
if (x_20 == 0)
{
obj* x_21; obj* x_22; 
x_21 = lean::cnstr_get(x_19, 0);
lean::dec(x_21);
lean::cnstr_set(x_19, 0, x_11);
x_22 = l_Lean_IR_EmitCpp_emitJPs___main(x_18, x_1, x_2, x_19);
if (lean::obj_tag(x_22) == 0)
{
uint8 x_23; 
x_23 = !lean::is_exclusive(x_22);
if (x_23 == 0)
{
obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_24 = lean::cnstr_get(x_22, 1);
x_25 = lean::cnstr_get(x_22, 0);
lean::dec(x_25);
x_26 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_27 = lean::string_append(x_24, x_26);
x_28 = lean::string_append(x_27, x_9);
lean::cnstr_set(x_22, 1, x_28);
lean::cnstr_set(x_22, 0, x_11);
return x_22;
}
else
{
obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_29 = lean::cnstr_get(x_22, 1);
lean::inc(x_29);
lean::dec(x_22);
x_30 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_31 = lean::string_append(x_29, x_30);
x_32 = lean::string_append(x_31, x_9);
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_11);
lean::cnstr_set(x_33, 1, x_32);
return x_33;
}
}
else
{
uint8 x_34; 
x_34 = !lean::is_exclusive(x_22);
if (x_34 == 0)
{
return x_22;
}
else
{
obj* x_35; obj* x_36; obj* x_37; 
x_35 = lean::cnstr_get(x_22, 0);
x_36 = lean::cnstr_get(x_22, 1);
lean::inc(x_36);
lean::inc(x_35);
lean::dec(x_22);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_35);
lean::cnstr_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
obj* x_38; obj* x_39; obj* x_40; 
x_38 = lean::cnstr_get(x_19, 1);
lean::inc(x_38);
lean::dec(x_19);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_11);
lean::cnstr_set(x_39, 1, x_38);
x_40 = l_Lean_IR_EmitCpp_emitJPs___main(x_18, x_1, x_2, x_39);
if (lean::obj_tag(x_40) == 0)
{
obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_41 = lean::cnstr_get(x_40, 1);
lean::inc(x_41);
if (lean::is_exclusive(x_40)) {
 lean::cnstr_release(x_40, 0);
 lean::cnstr_release(x_40, 1);
 x_42 = x_40;
} else {
 lean::dec_ref(x_40);
 x_42 = lean::box(0);
}
x_43 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_44 = lean::string_append(x_41, x_43);
x_45 = lean::string_append(x_44, x_9);
if (lean::is_scalar(x_42)) {
 x_46 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_46 = x_42;
}
lean::cnstr_set(x_46, 0, x_11);
lean::cnstr_set(x_46, 1, x_45);
return x_46;
}
else
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
x_47 = lean::cnstr_get(x_40, 0);
lean::inc(x_47);
x_48 = lean::cnstr_get(x_40, 1);
lean::inc(x_48);
if (lean::is_exclusive(x_40)) {
 lean::cnstr_release(x_40, 0);
 lean::cnstr_release(x_40, 1);
 x_49 = x_40;
} else {
 lean::dec_ref(x_40);
 x_49 = lean::box(0);
}
if (lean::is_scalar(x_49)) {
 x_50 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_50 = x_49;
}
lean::cnstr_set(x_50, 0, x_47);
lean::cnstr_set(x_50, 1, x_48);
return x_50;
}
}
}
else
{
uint8 x_51; 
lean::dec(x_2);
lean::dec(x_1);
x_51 = !lean::is_exclusive(x_19);
if (x_51 == 0)
{
return x_19;
}
else
{
obj* x_52; obj* x_53; obj* x_54; 
x_52 = lean::cnstr_get(x_19, 0);
x_53 = lean::cnstr_get(x_19, 1);
lean::inc(x_53);
lean::inc(x_52);
lean::dec(x_19);
x_54 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_54, 0, x_52);
lean::cnstr_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
obj* x_55; obj* x_56; obj* x_57; obj* x_58; 
x_55 = lean::cnstr_get(x_13, 1);
lean::inc(x_55);
lean::dec(x_13);
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_11);
lean::cnstr_set(x_56, 1, x_55);
x_57 = l_Lean_IR_EmitCpp_emitFnBody___main___closed__1;
lean::inc(x_2);
lean::inc(x_1);
x_58 = l_Lean_IR_EmitCpp_emitBlock___main(x_57, x_1, x_2, x_56);
if (lean::obj_tag(x_58) == 0)
{
obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
x_59 = lean::cnstr_get(x_58, 1);
lean::inc(x_59);
if (lean::is_exclusive(x_58)) {
 lean::cnstr_release(x_58, 0);
 lean::cnstr_release(x_58, 1);
 x_60 = x_58;
} else {
 lean::dec_ref(x_58);
 x_60 = lean::box(0);
}
if (lean::is_scalar(x_60)) {
 x_61 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_61 = x_60;
}
lean::cnstr_set(x_61, 0, x_11);
lean::cnstr_set(x_61, 1, x_59);
x_62 = l_Lean_IR_EmitCpp_emitJPs___main(x_57, x_1, x_2, x_61);
if (lean::obj_tag(x_62) == 0)
{
obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; 
x_63 = lean::cnstr_get(x_62, 1);
lean::inc(x_63);
if (lean::is_exclusive(x_62)) {
 lean::cnstr_release(x_62, 0);
 lean::cnstr_release(x_62, 1);
 x_64 = x_62;
} else {
 lean::dec_ref(x_62);
 x_64 = lean::box(0);
}
x_65 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_66 = lean::string_append(x_63, x_65);
x_67 = lean::string_append(x_66, x_9);
if (lean::is_scalar(x_64)) {
 x_68 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_68 = x_64;
}
lean::cnstr_set(x_68, 0, x_11);
lean::cnstr_set(x_68, 1, x_67);
return x_68;
}
else
{
obj* x_69; obj* x_70; obj* x_71; obj* x_72; 
x_69 = lean::cnstr_get(x_62, 0);
lean::inc(x_69);
x_70 = lean::cnstr_get(x_62, 1);
lean::inc(x_70);
if (lean::is_exclusive(x_62)) {
 lean::cnstr_release(x_62, 0);
 lean::cnstr_release(x_62, 1);
 x_71 = x_62;
} else {
 lean::dec_ref(x_62);
 x_71 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_72 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_72 = x_71;
}
lean::cnstr_set(x_72, 0, x_69);
lean::cnstr_set(x_72, 1, x_70);
return x_72;
}
}
else
{
obj* x_73; obj* x_74; obj* x_75; obj* x_76; 
lean::dec(x_2);
lean::dec(x_1);
x_73 = lean::cnstr_get(x_58, 0);
lean::inc(x_73);
x_74 = lean::cnstr_get(x_58, 1);
lean::inc(x_74);
if (lean::is_exclusive(x_58)) {
 lean::cnstr_release(x_58, 0);
 lean::cnstr_release(x_58, 1);
 x_75 = x_58;
} else {
 lean::dec_ref(x_58);
 x_75 = lean::box(0);
}
if (lean::is_scalar(x_75)) {
 x_76 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_76 = x_75;
}
lean::cnstr_set(x_76, 0, x_73);
lean::cnstr_set(x_76, 1, x_74);
return x_76;
}
}
}
else
{
uint8 x_77; 
x_77 = !lean::is_exclusive(x_13);
if (x_77 == 0)
{
obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; 
x_78 = lean::cnstr_get(x_13, 1);
x_79 = lean::cnstr_get(x_13, 0);
lean::dec(x_79);
x_80 = l_String_splitAux___main___closed__1;
x_81 = lean::string_append(x_78, x_80);
x_82 = lean::string_append(x_81, x_9);
lean::cnstr_set(x_13, 1, x_82);
lean::cnstr_set(x_13, 0, x_11);
x_83 = l_Lean_IR_EmitCpp_emitFnBody___main___closed__1;
lean::inc(x_2);
lean::inc(x_1);
x_84 = l_Lean_IR_EmitCpp_emitBlock___main(x_83, x_1, x_2, x_13);
if (lean::obj_tag(x_84) == 0)
{
uint8 x_85; 
x_85 = !lean::is_exclusive(x_84);
if (x_85 == 0)
{
obj* x_86; obj* x_87; 
x_86 = lean::cnstr_get(x_84, 0);
lean::dec(x_86);
lean::cnstr_set(x_84, 0, x_11);
x_87 = l_Lean_IR_EmitCpp_emitJPs___main(x_83, x_1, x_2, x_84);
if (lean::obj_tag(x_87) == 0)
{
uint8 x_88; 
x_88 = !lean::is_exclusive(x_87);
if (x_88 == 0)
{
obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; 
x_89 = lean::cnstr_get(x_87, 1);
x_90 = lean::cnstr_get(x_87, 0);
lean::dec(x_90);
x_91 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_92 = lean::string_append(x_89, x_91);
x_93 = lean::string_append(x_92, x_9);
lean::cnstr_set(x_87, 1, x_93);
lean::cnstr_set(x_87, 0, x_11);
return x_87;
}
else
{
obj* x_94; obj* x_95; obj* x_96; obj* x_97; obj* x_98; 
x_94 = lean::cnstr_get(x_87, 1);
lean::inc(x_94);
lean::dec(x_87);
x_95 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_96 = lean::string_append(x_94, x_95);
x_97 = lean::string_append(x_96, x_9);
x_98 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_98, 0, x_11);
lean::cnstr_set(x_98, 1, x_97);
return x_98;
}
}
else
{
uint8 x_99; 
x_99 = !lean::is_exclusive(x_87);
if (x_99 == 0)
{
return x_87;
}
else
{
obj* x_100; obj* x_101; obj* x_102; 
x_100 = lean::cnstr_get(x_87, 0);
x_101 = lean::cnstr_get(x_87, 1);
lean::inc(x_101);
lean::inc(x_100);
lean::dec(x_87);
x_102 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_102, 0, x_100);
lean::cnstr_set(x_102, 1, x_101);
return x_102;
}
}
}
else
{
obj* x_103; obj* x_104; obj* x_105; 
x_103 = lean::cnstr_get(x_84, 1);
lean::inc(x_103);
lean::dec(x_84);
x_104 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_104, 0, x_11);
lean::cnstr_set(x_104, 1, x_103);
x_105 = l_Lean_IR_EmitCpp_emitJPs___main(x_83, x_1, x_2, x_104);
if (lean::obj_tag(x_105) == 0)
{
obj* x_106; obj* x_107; obj* x_108; obj* x_109; obj* x_110; obj* x_111; 
x_106 = lean::cnstr_get(x_105, 1);
lean::inc(x_106);
if (lean::is_exclusive(x_105)) {
 lean::cnstr_release(x_105, 0);
 lean::cnstr_release(x_105, 1);
 x_107 = x_105;
} else {
 lean::dec_ref(x_105);
 x_107 = lean::box(0);
}
x_108 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_109 = lean::string_append(x_106, x_108);
x_110 = lean::string_append(x_109, x_9);
if (lean::is_scalar(x_107)) {
 x_111 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_111 = x_107;
}
lean::cnstr_set(x_111, 0, x_11);
lean::cnstr_set(x_111, 1, x_110);
return x_111;
}
else
{
obj* x_112; obj* x_113; obj* x_114; obj* x_115; 
x_112 = lean::cnstr_get(x_105, 0);
lean::inc(x_112);
x_113 = lean::cnstr_get(x_105, 1);
lean::inc(x_113);
if (lean::is_exclusive(x_105)) {
 lean::cnstr_release(x_105, 0);
 lean::cnstr_release(x_105, 1);
 x_114 = x_105;
} else {
 lean::dec_ref(x_105);
 x_114 = lean::box(0);
}
if (lean::is_scalar(x_114)) {
 x_115 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_115 = x_114;
}
lean::cnstr_set(x_115, 0, x_112);
lean::cnstr_set(x_115, 1, x_113);
return x_115;
}
}
}
else
{
uint8 x_116; 
lean::dec(x_2);
lean::dec(x_1);
x_116 = !lean::is_exclusive(x_84);
if (x_116 == 0)
{
return x_84;
}
else
{
obj* x_117; obj* x_118; obj* x_119; 
x_117 = lean::cnstr_get(x_84, 0);
x_118 = lean::cnstr_get(x_84, 1);
lean::inc(x_118);
lean::inc(x_117);
lean::dec(x_84);
x_119 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_119, 0, x_117);
lean::cnstr_set(x_119, 1, x_118);
return x_119;
}
}
}
else
{
obj* x_120; obj* x_121; obj* x_122; obj* x_123; obj* x_124; obj* x_125; obj* x_126; 
x_120 = lean::cnstr_get(x_13, 1);
lean::inc(x_120);
lean::dec(x_13);
x_121 = l_String_splitAux___main___closed__1;
x_122 = lean::string_append(x_120, x_121);
x_123 = lean::string_append(x_122, x_9);
x_124 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_124, 0, x_11);
lean::cnstr_set(x_124, 1, x_123);
x_125 = l_Lean_IR_EmitCpp_emitFnBody___main___closed__1;
lean::inc(x_2);
lean::inc(x_1);
x_126 = l_Lean_IR_EmitCpp_emitBlock___main(x_125, x_1, x_2, x_124);
if (lean::obj_tag(x_126) == 0)
{
obj* x_127; obj* x_128; obj* x_129; obj* x_130; 
x_127 = lean::cnstr_get(x_126, 1);
lean::inc(x_127);
if (lean::is_exclusive(x_126)) {
 lean::cnstr_release(x_126, 0);
 lean::cnstr_release(x_126, 1);
 x_128 = x_126;
} else {
 lean::dec_ref(x_126);
 x_128 = lean::box(0);
}
if (lean::is_scalar(x_128)) {
 x_129 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_129 = x_128;
}
lean::cnstr_set(x_129, 0, x_11);
lean::cnstr_set(x_129, 1, x_127);
x_130 = l_Lean_IR_EmitCpp_emitJPs___main(x_125, x_1, x_2, x_129);
if (lean::obj_tag(x_130) == 0)
{
obj* x_131; obj* x_132; obj* x_133; obj* x_134; obj* x_135; obj* x_136; 
x_131 = lean::cnstr_get(x_130, 1);
lean::inc(x_131);
if (lean::is_exclusive(x_130)) {
 lean::cnstr_release(x_130, 0);
 lean::cnstr_release(x_130, 1);
 x_132 = x_130;
} else {
 lean::dec_ref(x_130);
 x_132 = lean::box(0);
}
x_133 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_134 = lean::string_append(x_131, x_133);
x_135 = lean::string_append(x_134, x_9);
if (lean::is_scalar(x_132)) {
 x_136 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_136 = x_132;
}
lean::cnstr_set(x_136, 0, x_11);
lean::cnstr_set(x_136, 1, x_135);
return x_136;
}
else
{
obj* x_137; obj* x_138; obj* x_139; obj* x_140; 
x_137 = lean::cnstr_get(x_130, 0);
lean::inc(x_137);
x_138 = lean::cnstr_get(x_130, 1);
lean::inc(x_138);
if (lean::is_exclusive(x_130)) {
 lean::cnstr_release(x_130, 0);
 lean::cnstr_release(x_130, 1);
 x_139 = x_130;
} else {
 lean::dec_ref(x_130);
 x_139 = lean::box(0);
}
if (lean::is_scalar(x_139)) {
 x_140 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_140 = x_139;
}
lean::cnstr_set(x_140, 0, x_137);
lean::cnstr_set(x_140, 1, x_138);
return x_140;
}
}
else
{
obj* x_141; obj* x_142; obj* x_143; obj* x_144; 
lean::dec(x_2);
lean::dec(x_1);
x_141 = lean::cnstr_get(x_126, 0);
lean::inc(x_141);
x_142 = lean::cnstr_get(x_126, 1);
lean::inc(x_142);
if (lean::is_exclusive(x_126)) {
 lean::cnstr_release(x_126, 0);
 lean::cnstr_release(x_126, 1);
 x_143 = x_126;
} else {
 lean::dec_ref(x_126);
 x_143 = lean::box(0);
}
if (lean::is_scalar(x_143)) {
 x_144 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_144 = x_143;
}
lean::cnstr_set(x_144, 0, x_141);
lean::cnstr_set(x_144, 1, x_142);
return x_144;
}
}
}
}
else
{
uint8 x_145; 
lean::dec(x_2);
lean::dec(x_1);
x_145 = !lean::is_exclusive(x_13);
if (x_145 == 0)
{
return x_13;
}
else
{
obj* x_146; obj* x_147; obj* x_148; 
x_146 = lean::cnstr_get(x_13, 0);
x_147 = lean::cnstr_get(x_13, 1);
lean::inc(x_147);
lean::inc(x_146);
lean::dec(x_13);
x_148 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_148, 0, x_146);
lean::cnstr_set(x_148, 1, x_147);
return x_148;
}
}
}
else
{
obj* x_149; obj* x_150; obj* x_151; obj* x_152; obj* x_153; obj* x_154; obj* x_155; uint8 x_156; obj* x_157; 
x_149 = lean::cnstr_get(x_3, 1);
lean::inc(x_149);
lean::dec(x_3);
x_150 = l_Lean_IR_EmitCpp_emitTailCall___closed__4;
x_151 = lean::string_append(x_149, x_150);
x_152 = l_IO_println___rarg___closed__1;
x_153 = lean::string_append(x_151, x_152);
x_154 = lean::box(0);
x_155 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_155, 0, x_154);
lean::cnstr_set(x_155, 1, x_153);
x_156 = 0;
lean::inc(x_1);
x_157 = l_Lean_IR_EmitCpp_declareVars___main(x_1, x_156, x_2, x_155);
if (lean::obj_tag(x_157) == 0)
{
obj* x_158; uint8 x_159; 
x_158 = lean::cnstr_get(x_157, 0);
lean::inc(x_158);
x_159 = lean::unbox(x_158);
lean::dec(x_158);
if (x_159 == 0)
{
obj* x_160; obj* x_161; obj* x_162; obj* x_163; obj* x_164; 
x_160 = lean::cnstr_get(x_157, 1);
lean::inc(x_160);
if (lean::is_exclusive(x_157)) {
 lean::cnstr_release(x_157, 0);
 lean::cnstr_release(x_157, 1);
 x_161 = x_157;
} else {
 lean::dec_ref(x_157);
 x_161 = lean::box(0);
}
if (lean::is_scalar(x_161)) {
 x_162 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_162 = x_161;
}
lean::cnstr_set(x_162, 0, x_154);
lean::cnstr_set(x_162, 1, x_160);
x_163 = l_Lean_IR_EmitCpp_emitFnBody___main___closed__1;
lean::inc(x_2);
lean::inc(x_1);
x_164 = l_Lean_IR_EmitCpp_emitBlock___main(x_163, x_1, x_2, x_162);
if (lean::obj_tag(x_164) == 0)
{
obj* x_165; obj* x_166; obj* x_167; obj* x_168; 
x_165 = lean::cnstr_get(x_164, 1);
lean::inc(x_165);
if (lean::is_exclusive(x_164)) {
 lean::cnstr_release(x_164, 0);
 lean::cnstr_release(x_164, 1);
 x_166 = x_164;
} else {
 lean::dec_ref(x_164);
 x_166 = lean::box(0);
}
if (lean::is_scalar(x_166)) {
 x_167 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_167 = x_166;
}
lean::cnstr_set(x_167, 0, x_154);
lean::cnstr_set(x_167, 1, x_165);
x_168 = l_Lean_IR_EmitCpp_emitJPs___main(x_163, x_1, x_2, x_167);
if (lean::obj_tag(x_168) == 0)
{
obj* x_169; obj* x_170; obj* x_171; obj* x_172; obj* x_173; obj* x_174; 
x_169 = lean::cnstr_get(x_168, 1);
lean::inc(x_169);
if (lean::is_exclusive(x_168)) {
 lean::cnstr_release(x_168, 0);
 lean::cnstr_release(x_168, 1);
 x_170 = x_168;
} else {
 lean::dec_ref(x_168);
 x_170 = lean::box(0);
}
x_171 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_172 = lean::string_append(x_169, x_171);
x_173 = lean::string_append(x_172, x_152);
if (lean::is_scalar(x_170)) {
 x_174 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_174 = x_170;
}
lean::cnstr_set(x_174, 0, x_154);
lean::cnstr_set(x_174, 1, x_173);
return x_174;
}
else
{
obj* x_175; obj* x_176; obj* x_177; obj* x_178; 
x_175 = lean::cnstr_get(x_168, 0);
lean::inc(x_175);
x_176 = lean::cnstr_get(x_168, 1);
lean::inc(x_176);
if (lean::is_exclusive(x_168)) {
 lean::cnstr_release(x_168, 0);
 lean::cnstr_release(x_168, 1);
 x_177 = x_168;
} else {
 lean::dec_ref(x_168);
 x_177 = lean::box(0);
}
if (lean::is_scalar(x_177)) {
 x_178 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_178 = x_177;
}
lean::cnstr_set(x_178, 0, x_175);
lean::cnstr_set(x_178, 1, x_176);
return x_178;
}
}
else
{
obj* x_179; obj* x_180; obj* x_181; obj* x_182; 
lean::dec(x_2);
lean::dec(x_1);
x_179 = lean::cnstr_get(x_164, 0);
lean::inc(x_179);
x_180 = lean::cnstr_get(x_164, 1);
lean::inc(x_180);
if (lean::is_exclusive(x_164)) {
 lean::cnstr_release(x_164, 0);
 lean::cnstr_release(x_164, 1);
 x_181 = x_164;
} else {
 lean::dec_ref(x_164);
 x_181 = lean::box(0);
}
if (lean::is_scalar(x_181)) {
 x_182 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_182 = x_181;
}
lean::cnstr_set(x_182, 0, x_179);
lean::cnstr_set(x_182, 1, x_180);
return x_182;
}
}
else
{
obj* x_183; obj* x_184; obj* x_185; obj* x_186; obj* x_187; obj* x_188; obj* x_189; obj* x_190; 
x_183 = lean::cnstr_get(x_157, 1);
lean::inc(x_183);
if (lean::is_exclusive(x_157)) {
 lean::cnstr_release(x_157, 0);
 lean::cnstr_release(x_157, 1);
 x_184 = x_157;
} else {
 lean::dec_ref(x_157);
 x_184 = lean::box(0);
}
x_185 = l_String_splitAux___main___closed__1;
x_186 = lean::string_append(x_183, x_185);
x_187 = lean::string_append(x_186, x_152);
if (lean::is_scalar(x_184)) {
 x_188 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_188 = x_184;
}
lean::cnstr_set(x_188, 0, x_154);
lean::cnstr_set(x_188, 1, x_187);
x_189 = l_Lean_IR_EmitCpp_emitFnBody___main___closed__1;
lean::inc(x_2);
lean::inc(x_1);
x_190 = l_Lean_IR_EmitCpp_emitBlock___main(x_189, x_1, x_2, x_188);
if (lean::obj_tag(x_190) == 0)
{
obj* x_191; obj* x_192; obj* x_193; obj* x_194; 
x_191 = lean::cnstr_get(x_190, 1);
lean::inc(x_191);
if (lean::is_exclusive(x_190)) {
 lean::cnstr_release(x_190, 0);
 lean::cnstr_release(x_190, 1);
 x_192 = x_190;
} else {
 lean::dec_ref(x_190);
 x_192 = lean::box(0);
}
if (lean::is_scalar(x_192)) {
 x_193 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_193 = x_192;
}
lean::cnstr_set(x_193, 0, x_154);
lean::cnstr_set(x_193, 1, x_191);
x_194 = l_Lean_IR_EmitCpp_emitJPs___main(x_189, x_1, x_2, x_193);
if (lean::obj_tag(x_194) == 0)
{
obj* x_195; obj* x_196; obj* x_197; obj* x_198; obj* x_199; obj* x_200; 
x_195 = lean::cnstr_get(x_194, 1);
lean::inc(x_195);
if (lean::is_exclusive(x_194)) {
 lean::cnstr_release(x_194, 0);
 lean::cnstr_release(x_194, 1);
 x_196 = x_194;
} else {
 lean::dec_ref(x_194);
 x_196 = lean::box(0);
}
x_197 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_198 = lean::string_append(x_195, x_197);
x_199 = lean::string_append(x_198, x_152);
if (lean::is_scalar(x_196)) {
 x_200 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_200 = x_196;
}
lean::cnstr_set(x_200, 0, x_154);
lean::cnstr_set(x_200, 1, x_199);
return x_200;
}
else
{
obj* x_201; obj* x_202; obj* x_203; obj* x_204; 
x_201 = lean::cnstr_get(x_194, 0);
lean::inc(x_201);
x_202 = lean::cnstr_get(x_194, 1);
lean::inc(x_202);
if (lean::is_exclusive(x_194)) {
 lean::cnstr_release(x_194, 0);
 lean::cnstr_release(x_194, 1);
 x_203 = x_194;
} else {
 lean::dec_ref(x_194);
 x_203 = lean::box(0);
}
if (lean::is_scalar(x_203)) {
 x_204 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_204 = x_203;
}
lean::cnstr_set(x_204, 0, x_201);
lean::cnstr_set(x_204, 1, x_202);
return x_204;
}
}
else
{
obj* x_205; obj* x_206; obj* x_207; obj* x_208; 
lean::dec(x_2);
lean::dec(x_1);
x_205 = lean::cnstr_get(x_190, 0);
lean::inc(x_205);
x_206 = lean::cnstr_get(x_190, 1);
lean::inc(x_206);
if (lean::is_exclusive(x_190)) {
 lean::cnstr_release(x_190, 0);
 lean::cnstr_release(x_190, 1);
 x_207 = x_190;
} else {
 lean::dec_ref(x_190);
 x_207 = lean::box(0);
}
if (lean::is_scalar(x_207)) {
 x_208 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_208 = x_207;
}
lean::cnstr_set(x_208, 0, x_205);
lean::cnstr_set(x_208, 1, x_206);
return x_208;
}
}
}
else
{
obj* x_209; obj* x_210; obj* x_211; obj* x_212; 
lean::dec(x_2);
lean::dec(x_1);
x_209 = lean::cnstr_get(x_157, 0);
lean::inc(x_209);
x_210 = lean::cnstr_get(x_157, 1);
lean::inc(x_210);
if (lean::is_exclusive(x_157)) {
 lean::cnstr_release(x_157, 0);
 lean::cnstr_release(x_157, 1);
 x_211 = x_157;
} else {
 lean::dec_ref(x_157);
 x_211 = lean::box(0);
}
if (lean::is_scalar(x_211)) {
 x_212 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_212 = x_211;
}
lean::cnstr_set(x_212, 0, x_209);
lean::cnstr_set(x_212, 1, x_210);
return x_212;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitFnBody(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_emitFnBody___main(x_1, x_2, x_3);
return x_4;
}
}
obj* _init_l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("obj * ");
return x_1;
}
}
obj* _init_l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" = _args[");
return x_1;
}
}
obj* _init_l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("];");
return x_1;
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; uint8 x_7; 
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
uint8 x_8; 
x_8 = !lean::is_exclusive(x_5);
if (x_8 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_9 = lean::cnstr_get(x_5, 1);
x_10 = lean::cnstr_get(x_5, 0);
lean::dec(x_10);
x_11 = lean::mk_nat_obj(1u);
x_12 = lean::nat_sub(x_3, x_11);
lean::dec(x_3);
x_13 = lean::nat_sub(x_2, x_12);
x_14 = lean::nat_sub(x_13, x_11);
lean::dec(x_13);
x_15 = l_Lean_IR_paramInh;
x_16 = lean::array_get(x_15, x_1, x_14);
x_17 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__1;
x_18 = lean::string_append(x_9, x_17);
x_19 = lean::cnstr_get(x_16, 0);
lean::inc(x_19);
lean::dec(x_16);
x_20 = l_Nat_repr(x_19);
x_21 = l_Lean_IR_VarId_HasToString___closed__1;
x_22 = lean::string_append(x_21, x_20);
lean::dec(x_20);
x_23 = lean::string_append(x_18, x_22);
lean::dec(x_22);
x_24 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__2;
x_25 = lean::string_append(x_23, x_24);
x_26 = l_Nat_repr(x_14);
x_27 = lean::string_append(x_25, x_26);
lean::dec(x_26);
x_28 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__3;
x_29 = lean::string_append(x_27, x_28);
x_30 = l_IO_println___rarg___closed__1;
x_31 = lean::string_append(x_29, x_30);
x_32 = lean::box(0);
lean::cnstr_set(x_5, 1, x_31);
lean::cnstr_set(x_5, 0, x_32);
x_3 = x_12;
goto _start;
}
else
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; 
x_34 = lean::cnstr_get(x_5, 1);
lean::inc(x_34);
lean::dec(x_5);
x_35 = lean::mk_nat_obj(1u);
x_36 = lean::nat_sub(x_3, x_35);
lean::dec(x_3);
x_37 = lean::nat_sub(x_2, x_36);
x_38 = lean::nat_sub(x_37, x_35);
lean::dec(x_37);
x_39 = l_Lean_IR_paramInh;
x_40 = lean::array_get(x_39, x_1, x_38);
x_41 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__1;
x_42 = lean::string_append(x_34, x_41);
x_43 = lean::cnstr_get(x_40, 0);
lean::inc(x_43);
lean::dec(x_40);
x_44 = l_Nat_repr(x_43);
x_45 = l_Lean_IR_VarId_HasToString___closed__1;
x_46 = lean::string_append(x_45, x_44);
lean::dec(x_44);
x_47 = lean::string_append(x_42, x_46);
lean::dec(x_46);
x_48 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__2;
x_49 = lean::string_append(x_47, x_48);
x_50 = l_Nat_repr(x_38);
x_51 = lean::string_append(x_49, x_50);
lean::dec(x_50);
x_52 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__3;
x_53 = lean::string_append(x_51, x_52);
x_54 = l_IO_println___rarg___closed__1;
x_55 = lean::string_append(x_53, x_54);
x_56 = lean::box(0);
x_57 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_55);
x_3 = x_36;
x_5 = x_57;
goto _start;
}
}
else
{
uint8 x_59; 
lean::dec(x_3);
x_59 = !lean::is_exclusive(x_5);
if (x_59 == 0)
{
obj* x_60; obj* x_61; 
x_60 = lean::cnstr_get(x_5, 0);
lean::dec(x_60);
x_61 = lean::box(0);
lean::cnstr_set(x_5, 0, x_61);
return x_5;
}
else
{
obj* x_62; obj* x_63; obj* x_64; 
x_62 = lean::cnstr_get(x_5, 1);
lean::inc(x_62);
lean::dec(x_5);
x_63 = lean::box(0);
x_64 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_62);
return x_64;
}
}
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__2(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; uint8 x_7; 
x_6 = lean::mk_nat_obj(0u);
x_7 = lean::nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; uint8 x_29; 
x_8 = lean::mk_nat_obj(1u);
x_9 = lean::nat_sub(x_3, x_8);
lean::dec(x_3);
x_10 = lean::nat_sub(x_2, x_9);
x_11 = lean::nat_sub(x_10, x_8);
lean::dec(x_10);
x_29 = lean::nat_dec_lt(x_6, x_11);
if (x_29 == 0)
{
obj* x_30; 
x_30 = lean::cnstr_get(x_5, 1);
lean::inc(x_30);
lean::dec(x_5);
x_12 = x_30;
goto block_28;
}
else
{
obj* x_31; obj* x_32; obj* x_33; 
x_31 = lean::cnstr_get(x_5, 1);
lean::inc(x_31);
lean::dec(x_5);
x_32 = l_List_reprAux___main___rarg___closed__1;
x_33 = lean::string_append(x_31, x_32);
x_12 = x_33;
goto block_28;
}
block_28:
{
obj* x_13; obj* x_14; uint8 x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_13 = l_Lean_IR_paramInh;
x_14 = lean::array_get(x_13, x_1, x_11);
lean::dec(x_11);
x_15 = lean::cnstr_get_scalar<uint8>(x_14, sizeof(void*)*1 + 1);
x_16 = l_Lean_IR_EmitCpp_toCppType___main(x_15);
x_17 = lean::string_append(x_12, x_16);
lean::dec(x_16);
x_18 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1;
x_19 = lean::string_append(x_17, x_18);
x_20 = lean::cnstr_get(x_14, 0);
lean::inc(x_20);
lean::dec(x_14);
x_21 = l_Nat_repr(x_20);
x_22 = l_Lean_IR_VarId_HasToString___closed__1;
x_23 = lean::string_append(x_22, x_21);
lean::dec(x_21);
x_24 = lean::string_append(x_19, x_23);
lean::dec(x_23);
x_25 = lean::box(0);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_24);
x_3 = x_9;
x_5 = x_26;
goto _start;
}
}
else
{
uint8 x_34; 
lean::dec(x_3);
x_34 = !lean::is_exclusive(x_5);
if (x_34 == 0)
{
obj* x_35; obj* x_36; 
x_35 = lean::cnstr_get(x_5, 0);
lean::dec(x_35);
x_36 = lean::box(0);
lean::cnstr_set(x_5, 0, x_36);
return x_5;
}
else
{
obj* x_37; obj* x_38; obj* x_39; 
x_37 = lean::cnstr_get(x_5, 1);
lean::inc(x_37);
lean::dec(x_5);
x_38 = lean::box(0);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_37);
return x_39;
}
}
}
}
obj* _init_l_Lean_IR_EmitCpp_emitDeclAux___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("_start:");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitDeclAux___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("obj** _args");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitDeclAux(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_getEnv(x_2, x_3);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; uint8 x_13; uint8 x_14; 
x_6 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
x_8 = lean::box(0);
lean::inc(x_7);
lean::cnstr_set(x_4, 0, x_8);
lean::inc(x_1);
x_9 = l_Lean_IR_mkVarJPMaps(x_1);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_11 = lean::cnstr_get(x_9, 1);
lean::inc(x_11);
lean::dec(x_9);
x_12 = l_Lean_IR_Decl_name___main(x_1);
lean::inc(x_12);
x_13 = l_Lean_hasInitAttr(x_6, x_12);
if (x_13 == 0)
{
uint8 x_412; 
x_412 = 0;
x_14 = x_412;
goto block_411;
}
else
{
uint8 x_413; 
x_413 = 1;
x_14 = x_413;
goto block_411;
}
block_411:
{
if (x_14 == 0)
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_15; obj* x_16; uint8 x_17; obj* x_18; uint8 x_19; 
lean::dec(x_7);
x_15 = lean::cnstr_get(x_1, 0);
lean::inc(x_15);
x_16 = lean::cnstr_get(x_1, 1);
lean::inc(x_16);
x_17 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*3);
x_18 = lean::cnstr_get(x_1, 2);
lean::inc(x_18);
lean::dec(x_1);
x_19 = !lean::is_exclusive(x_2);
if (x_19 == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_20 = lean::cnstr_get(x_2, 0);
x_21 = lean::cnstr_get(x_2, 1);
x_22 = lean::cnstr_get(x_2, 3);
lean::dec(x_22);
x_23 = lean::cnstr_get(x_2, 2);
lean::dec(x_23);
lean::inc(x_11);
lean::inc(x_10);
lean::inc(x_21);
lean::inc(x_20);
lean::cnstr_set(x_2, 3, x_11);
lean::cnstr_set(x_2, 2, x_10);
lean::inc(x_15);
x_24 = l_Lean_IR_EmitCpp_openNamespacesFor(x_15, x_2, x_4);
if (lean::obj_tag(x_24) == 0)
{
uint8 x_25; 
x_25 = !lean::is_exclusive(x_24);
if (x_25 == 0)
{
obj* x_26; obj* x_27; 
x_26 = lean::cnstr_get(x_24, 0);
lean::dec(x_26);
lean::cnstr_set(x_24, 0, x_8);
lean::inc(x_15);
x_27 = l_Lean_IR_EmitCpp_toBaseCppName(x_15, x_2, x_24);
if (lean::obj_tag(x_27) == 0)
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_140; uint8 x_141; 
x_28 = lean::cnstr_get(x_27, 0);
lean::inc(x_28);
x_29 = lean::cnstr_get(x_27, 1);
lean::inc(x_29);
if (lean::is_exclusive(x_27)) {
 lean::cnstr_release(x_27, 0);
 lean::cnstr_release(x_27, 1);
 x_30 = x_27;
} else {
 lean::dec_ref(x_27);
 x_30 = lean::box(0);
}
x_31 = l_Lean_IR_EmitCpp_toCppType___main(x_17);
x_32 = lean::string_append(x_29, x_31);
lean::dec(x_31);
x_33 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1;
x_34 = lean::string_append(x_32, x_33);
x_35 = lean::array_get_size(x_16);
x_140 = lean::mk_nat_obj(0u);
x_141 = lean::nat_dec_lt(x_140, x_35);
if (x_141 == 0)
{
obj* x_142; obj* x_143; obj* x_144; obj* x_145; obj* x_146; 
x_142 = l_Lean_IR_EmitCpp_toCppInitName___closed__1;
x_143 = lean::string_append(x_142, x_28);
lean::dec(x_28);
x_144 = l_Unit_HasRepr___closed__1;
x_145 = lean::string_append(x_143, x_144);
x_146 = lean::string_append(x_34, x_145);
lean::dec(x_145);
x_36 = x_146;
goto block_139;
}
else
{
obj* x_147; obj* x_148; obj* x_149; obj* x_150; obj* x_151; obj* x_161; uint8 x_162; 
x_147 = lean::string_append(x_34, x_28);
lean::dec(x_28);
x_148 = l_Prod_HasRepr___rarg___closed__1;
x_149 = lean::string_append(x_147, x_148);
lean::inc(x_149);
x_150 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_150, 0, x_8);
lean::cnstr_set(x_150, 1, x_149);
x_161 = l_Lean_closureMaxArgs;
x_162 = lean::nat_dec_lt(x_161, x_35);
if (x_162 == 0)
{
lean::dec(x_149);
x_151 = x_8;
goto block_160;
}
else
{
uint8 x_163; 
x_163 = l_Lean_IR_ExplicitBoxing_isBoxedName___main(x_12);
if (x_163 == 0)
{
lean::dec(x_149);
x_151 = x_8;
goto block_160;
}
else
{
obj* x_164; obj* x_165; obj* x_166; obj* x_167; 
lean::dec(x_150);
x_164 = l_Lean_IR_EmitCpp_emitDeclAux___closed__2;
x_165 = lean::string_append(x_149, x_164);
x_166 = l_Option_HasRepr___rarg___closed__3;
x_167 = lean::string_append(x_165, x_166);
x_36 = x_167;
goto block_139;
}
}
block_160:
{
obj* x_152; 
lean::dec(x_151);
lean::inc(x_35);
x_152 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__2(x_16, x_35, x_35, x_2, x_150);
if (lean::obj_tag(x_152) == 0)
{
obj* x_153; obj* x_154; obj* x_155; 
x_153 = lean::cnstr_get(x_152, 1);
lean::inc(x_153);
lean::dec(x_152);
x_154 = l_Option_HasRepr___rarg___closed__3;
x_155 = lean::string_append(x_153, x_154);
x_36 = x_155;
goto block_139;
}
else
{
uint8 x_156; 
lean::dec(x_35);
lean::dec(x_30);
lean::dec(x_2);
lean::dec(x_21);
lean::dec(x_20);
lean::dec(x_18);
lean::dec(x_16);
lean::dec(x_15);
lean::dec(x_12);
lean::dec(x_11);
lean::dec(x_10);
x_156 = !lean::is_exclusive(x_152);
if (x_156 == 0)
{
return x_152;
}
else
{
obj* x_157; obj* x_158; obj* x_159; 
x_157 = lean::cnstr_get(x_152, 0);
x_158 = lean::cnstr_get(x_152, 1);
lean::inc(x_158);
lean::inc(x_157);
lean::dec(x_152);
x_159 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_159, 0, x_157);
lean::cnstr_set(x_159, 1, x_158);
return x_159;
}
}
}
}
block_139:
{
obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; uint8 x_43; 
x_37 = l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__2;
x_38 = lean::string_append(x_36, x_37);
x_39 = l_IO_println___rarg___closed__1;
x_40 = lean::string_append(x_38, x_39);
lean::inc(x_40);
if (lean::is_scalar(x_30)) {
 x_41 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_41 = x_30;
}
lean::cnstr_set(x_41, 0, x_8);
lean::cnstr_set(x_41, 1, x_40);
x_42 = l_Lean_closureMaxArgs;
x_43 = lean::nat_dec_lt(x_42, x_35);
if (x_43 == 0)
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
lean::dec(x_41);
lean::dec(x_35);
lean::dec(x_12);
x_44 = l_Lean_IR_EmitCpp_emitDeclAux___closed__1;
x_45 = lean::string_append(x_40, x_44);
x_46 = lean::string_append(x_45, x_39);
x_47 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_47, 0, x_8);
lean::cnstr_set(x_47, 1, x_46);
lean::inc(x_15);
x_48 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_48, 0, x_20);
lean::cnstr_set(x_48, 1, x_21);
lean::cnstr_set(x_48, 2, x_10);
lean::cnstr_set(x_48, 3, x_11);
lean::cnstr_set(x_48, 4, x_15);
lean::cnstr_set(x_48, 5, x_16);
x_49 = l_Lean_IR_EmitCpp_emitFnBody___main(x_18, x_48, x_47);
if (lean::obj_tag(x_49) == 0)
{
uint8 x_50; 
x_50 = !lean::is_exclusive(x_49);
if (x_50 == 0)
{
obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; 
x_51 = lean::cnstr_get(x_49, 1);
x_52 = lean::cnstr_get(x_49, 0);
lean::dec(x_52);
x_53 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_54 = lean::string_append(x_51, x_53);
x_55 = lean::string_append(x_54, x_39);
lean::cnstr_set(x_49, 1, x_55);
lean::cnstr_set(x_49, 0, x_8);
x_56 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_15, x_2, x_49);
lean::dec(x_2);
return x_56;
}
else
{
obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
x_57 = lean::cnstr_get(x_49, 1);
lean::inc(x_57);
lean::dec(x_49);
x_58 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_59 = lean::string_append(x_57, x_58);
x_60 = lean::string_append(x_59, x_39);
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_8);
lean::cnstr_set(x_61, 1, x_60);
x_62 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_15, x_2, x_61);
lean::dec(x_2);
return x_62;
}
}
else
{
uint8 x_63; 
lean::dec(x_2);
lean::dec(x_15);
x_63 = !lean::is_exclusive(x_49);
if (x_63 == 0)
{
return x_49;
}
else
{
obj* x_64; obj* x_65; obj* x_66; 
x_64 = lean::cnstr_get(x_49, 0);
x_65 = lean::cnstr_get(x_49, 1);
lean::inc(x_65);
lean::inc(x_64);
lean::dec(x_49);
x_66 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_66, 0, x_64);
lean::cnstr_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8 x_67; 
x_67 = l_Lean_IR_ExplicitBoxing_isBoxedName___main(x_12);
lean::dec(x_12);
if (x_67 == 0)
{
obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; 
lean::dec(x_41);
lean::dec(x_35);
x_68 = l_Lean_IR_EmitCpp_emitDeclAux___closed__1;
x_69 = lean::string_append(x_40, x_68);
x_70 = lean::string_append(x_69, x_39);
x_71 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_71, 0, x_8);
lean::cnstr_set(x_71, 1, x_70);
lean::inc(x_15);
x_72 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_72, 0, x_20);
lean::cnstr_set(x_72, 1, x_21);
lean::cnstr_set(x_72, 2, x_10);
lean::cnstr_set(x_72, 3, x_11);
lean::cnstr_set(x_72, 4, x_15);
lean::cnstr_set(x_72, 5, x_16);
x_73 = l_Lean_IR_EmitCpp_emitFnBody___main(x_18, x_72, x_71);
if (lean::obj_tag(x_73) == 0)
{
uint8 x_74; 
x_74 = !lean::is_exclusive(x_73);
if (x_74 == 0)
{
obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; 
x_75 = lean::cnstr_get(x_73, 1);
x_76 = lean::cnstr_get(x_73, 0);
lean::dec(x_76);
x_77 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_78 = lean::string_append(x_75, x_77);
x_79 = lean::string_append(x_78, x_39);
lean::cnstr_set(x_73, 1, x_79);
lean::cnstr_set(x_73, 0, x_8);
x_80 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_15, x_2, x_73);
lean::dec(x_2);
return x_80;
}
else
{
obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; 
x_81 = lean::cnstr_get(x_73, 1);
lean::inc(x_81);
lean::dec(x_73);
x_82 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_83 = lean::string_append(x_81, x_82);
x_84 = lean::string_append(x_83, x_39);
x_85 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_85, 0, x_8);
lean::cnstr_set(x_85, 1, x_84);
x_86 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_15, x_2, x_85);
lean::dec(x_2);
return x_86;
}
}
else
{
uint8 x_87; 
lean::dec(x_2);
lean::dec(x_15);
x_87 = !lean::is_exclusive(x_73);
if (x_87 == 0)
{
return x_73;
}
else
{
obj* x_88; obj* x_89; obj* x_90; 
x_88 = lean::cnstr_get(x_73, 0);
x_89 = lean::cnstr_get(x_73, 1);
lean::inc(x_89);
lean::inc(x_88);
lean::dec(x_73);
x_90 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_90, 0, x_88);
lean::cnstr_set(x_90, 1, x_89);
return x_90;
}
}
}
else
{
obj* x_91; 
lean::dec(x_40);
lean::inc(x_35);
x_91 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1(x_16, x_35, x_35, x_2, x_41);
lean::dec(x_35);
if (lean::obj_tag(x_91) == 0)
{
uint8 x_92; 
x_92 = !lean::is_exclusive(x_91);
if (x_92 == 0)
{
obj* x_93; obj* x_94; obj* x_95; obj* x_96; obj* x_97; obj* x_98; obj* x_99; 
x_93 = lean::cnstr_get(x_91, 1);
x_94 = lean::cnstr_get(x_91, 0);
lean::dec(x_94);
x_95 = l_Lean_IR_EmitCpp_emitDeclAux___closed__1;
x_96 = lean::string_append(x_93, x_95);
x_97 = lean::string_append(x_96, x_39);
lean::cnstr_set(x_91, 1, x_97);
lean::cnstr_set(x_91, 0, x_8);
lean::inc(x_15);
x_98 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_98, 0, x_20);
lean::cnstr_set(x_98, 1, x_21);
lean::cnstr_set(x_98, 2, x_10);
lean::cnstr_set(x_98, 3, x_11);
lean::cnstr_set(x_98, 4, x_15);
lean::cnstr_set(x_98, 5, x_16);
x_99 = l_Lean_IR_EmitCpp_emitFnBody___main(x_18, x_98, x_91);
if (lean::obj_tag(x_99) == 0)
{
uint8 x_100; 
x_100 = !lean::is_exclusive(x_99);
if (x_100 == 0)
{
obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; 
x_101 = lean::cnstr_get(x_99, 1);
x_102 = lean::cnstr_get(x_99, 0);
lean::dec(x_102);
x_103 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_104 = lean::string_append(x_101, x_103);
x_105 = lean::string_append(x_104, x_39);
lean::cnstr_set(x_99, 1, x_105);
lean::cnstr_set(x_99, 0, x_8);
x_106 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_15, x_2, x_99);
lean::dec(x_2);
return x_106;
}
else
{
obj* x_107; obj* x_108; obj* x_109; obj* x_110; obj* x_111; obj* x_112; 
x_107 = lean::cnstr_get(x_99, 1);
lean::inc(x_107);
lean::dec(x_99);
x_108 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_109 = lean::string_append(x_107, x_108);
x_110 = lean::string_append(x_109, x_39);
x_111 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_111, 0, x_8);
lean::cnstr_set(x_111, 1, x_110);
x_112 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_15, x_2, x_111);
lean::dec(x_2);
return x_112;
}
}
else
{
uint8 x_113; 
lean::dec(x_2);
lean::dec(x_15);
x_113 = !lean::is_exclusive(x_99);
if (x_113 == 0)
{
return x_99;
}
else
{
obj* x_114; obj* x_115; obj* x_116; 
x_114 = lean::cnstr_get(x_99, 0);
x_115 = lean::cnstr_get(x_99, 1);
lean::inc(x_115);
lean::inc(x_114);
lean::dec(x_99);
x_116 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_116, 0, x_114);
lean::cnstr_set(x_116, 1, x_115);
return x_116;
}
}
}
else
{
obj* x_117; obj* x_118; obj* x_119; obj* x_120; obj* x_121; obj* x_122; obj* x_123; 
x_117 = lean::cnstr_get(x_91, 1);
lean::inc(x_117);
lean::dec(x_91);
x_118 = l_Lean_IR_EmitCpp_emitDeclAux___closed__1;
x_119 = lean::string_append(x_117, x_118);
x_120 = lean::string_append(x_119, x_39);
x_121 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_121, 0, x_8);
lean::cnstr_set(x_121, 1, x_120);
lean::inc(x_15);
x_122 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_122, 0, x_20);
lean::cnstr_set(x_122, 1, x_21);
lean::cnstr_set(x_122, 2, x_10);
lean::cnstr_set(x_122, 3, x_11);
lean::cnstr_set(x_122, 4, x_15);
lean::cnstr_set(x_122, 5, x_16);
x_123 = l_Lean_IR_EmitCpp_emitFnBody___main(x_18, x_122, x_121);
if (lean::obj_tag(x_123) == 0)
{
obj* x_124; obj* x_125; obj* x_126; obj* x_127; obj* x_128; obj* x_129; obj* x_130; 
x_124 = lean::cnstr_get(x_123, 1);
lean::inc(x_124);
if (lean::is_exclusive(x_123)) {
 lean::cnstr_release(x_123, 0);
 lean::cnstr_release(x_123, 1);
 x_125 = x_123;
} else {
 lean::dec_ref(x_123);
 x_125 = lean::box(0);
}
x_126 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_127 = lean::string_append(x_124, x_126);
x_128 = lean::string_append(x_127, x_39);
if (lean::is_scalar(x_125)) {
 x_129 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_129 = x_125;
}
lean::cnstr_set(x_129, 0, x_8);
lean::cnstr_set(x_129, 1, x_128);
x_130 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_15, x_2, x_129);
lean::dec(x_2);
return x_130;
}
else
{
obj* x_131; obj* x_132; obj* x_133; obj* x_134; 
lean::dec(x_2);
lean::dec(x_15);
x_131 = lean::cnstr_get(x_123, 0);
lean::inc(x_131);
x_132 = lean::cnstr_get(x_123, 1);
lean::inc(x_132);
if (lean::is_exclusive(x_123)) {
 lean::cnstr_release(x_123, 0);
 lean::cnstr_release(x_123, 1);
 x_133 = x_123;
} else {
 lean::dec_ref(x_123);
 x_133 = lean::box(0);
}
if (lean::is_scalar(x_133)) {
 x_134 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_134 = x_133;
}
lean::cnstr_set(x_134, 0, x_131);
lean::cnstr_set(x_134, 1, x_132);
return x_134;
}
}
}
else
{
uint8 x_135; 
lean::dec(x_2);
lean::dec(x_21);
lean::dec(x_20);
lean::dec(x_18);
lean::dec(x_16);
lean::dec(x_15);
lean::dec(x_11);
lean::dec(x_10);
x_135 = !lean::is_exclusive(x_91);
if (x_135 == 0)
{
return x_91;
}
else
{
obj* x_136; obj* x_137; obj* x_138; 
x_136 = lean::cnstr_get(x_91, 0);
x_137 = lean::cnstr_get(x_91, 1);
lean::inc(x_137);
lean::inc(x_136);
lean::dec(x_91);
x_138 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_138, 0, x_136);
lean::cnstr_set(x_138, 1, x_137);
return x_138;
}
}
}
}
}
}
else
{
uint8 x_168; 
lean::dec(x_2);
lean::dec(x_21);
lean::dec(x_20);
lean::dec(x_18);
lean::dec(x_16);
lean::dec(x_15);
lean::dec(x_12);
lean::dec(x_11);
lean::dec(x_10);
x_168 = !lean::is_exclusive(x_27);
if (x_168 == 0)
{
return x_27;
}
else
{
obj* x_169; obj* x_170; obj* x_171; 
x_169 = lean::cnstr_get(x_27, 0);
x_170 = lean::cnstr_get(x_27, 1);
lean::inc(x_170);
lean::inc(x_169);
lean::dec(x_27);
x_171 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_171, 0, x_169);
lean::cnstr_set(x_171, 1, x_170);
return x_171;
}
}
}
else
{
obj* x_172; obj* x_173; obj* x_174; 
x_172 = lean::cnstr_get(x_24, 1);
lean::inc(x_172);
lean::dec(x_24);
x_173 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_173, 0, x_8);
lean::cnstr_set(x_173, 1, x_172);
lean::inc(x_15);
x_174 = l_Lean_IR_EmitCpp_toBaseCppName(x_15, x_2, x_173);
if (lean::obj_tag(x_174) == 0)
{
obj* x_175; obj* x_176; obj* x_177; obj* x_178; obj* x_179; obj* x_180; obj* x_181; obj* x_182; obj* x_183; obj* x_251; uint8 x_252; 
x_175 = lean::cnstr_get(x_174, 0);
lean::inc(x_175);
x_176 = lean::cnstr_get(x_174, 1);
lean::inc(x_176);
if (lean::is_exclusive(x_174)) {
 lean::cnstr_release(x_174, 0);
 lean::cnstr_release(x_174, 1);
 x_177 = x_174;
} else {
 lean::dec_ref(x_174);
 x_177 = lean::box(0);
}
x_178 = l_Lean_IR_EmitCpp_toCppType___main(x_17);
x_179 = lean::string_append(x_176, x_178);
lean::dec(x_178);
x_180 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1;
x_181 = lean::string_append(x_179, x_180);
x_182 = lean::array_get_size(x_16);
x_251 = lean::mk_nat_obj(0u);
x_252 = lean::nat_dec_lt(x_251, x_182);
if (x_252 == 0)
{
obj* x_253; obj* x_254; obj* x_255; obj* x_256; obj* x_257; 
x_253 = l_Lean_IR_EmitCpp_toCppInitName___closed__1;
x_254 = lean::string_append(x_253, x_175);
lean::dec(x_175);
x_255 = l_Unit_HasRepr___closed__1;
x_256 = lean::string_append(x_254, x_255);
x_257 = lean::string_append(x_181, x_256);
lean::dec(x_256);
x_183 = x_257;
goto block_250;
}
else
{
obj* x_258; obj* x_259; obj* x_260; obj* x_261; obj* x_262; obj* x_272; uint8 x_273; 
x_258 = lean::string_append(x_181, x_175);
lean::dec(x_175);
x_259 = l_Prod_HasRepr___rarg___closed__1;
x_260 = lean::string_append(x_258, x_259);
lean::inc(x_260);
x_261 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_261, 0, x_8);
lean::cnstr_set(x_261, 1, x_260);
x_272 = l_Lean_closureMaxArgs;
x_273 = lean::nat_dec_lt(x_272, x_182);
if (x_273 == 0)
{
lean::dec(x_260);
x_262 = x_8;
goto block_271;
}
else
{
uint8 x_274; 
x_274 = l_Lean_IR_ExplicitBoxing_isBoxedName___main(x_12);
if (x_274 == 0)
{
lean::dec(x_260);
x_262 = x_8;
goto block_271;
}
else
{
obj* x_275; obj* x_276; obj* x_277; obj* x_278; 
lean::dec(x_261);
x_275 = l_Lean_IR_EmitCpp_emitDeclAux___closed__2;
x_276 = lean::string_append(x_260, x_275);
x_277 = l_Option_HasRepr___rarg___closed__3;
x_278 = lean::string_append(x_276, x_277);
x_183 = x_278;
goto block_250;
}
}
block_271:
{
obj* x_263; 
lean::dec(x_262);
lean::inc(x_182);
x_263 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__2(x_16, x_182, x_182, x_2, x_261);
if (lean::obj_tag(x_263) == 0)
{
obj* x_264; obj* x_265; obj* x_266; 
x_264 = lean::cnstr_get(x_263, 1);
lean::inc(x_264);
lean::dec(x_263);
x_265 = l_Option_HasRepr___rarg___closed__3;
x_266 = lean::string_append(x_264, x_265);
x_183 = x_266;
goto block_250;
}
else
{
obj* x_267; obj* x_268; obj* x_269; obj* x_270; 
lean::dec(x_182);
lean::dec(x_177);
lean::dec(x_2);
lean::dec(x_21);
lean::dec(x_20);
lean::dec(x_18);
lean::dec(x_16);
lean::dec(x_15);
lean::dec(x_12);
lean::dec(x_11);
lean::dec(x_10);
x_267 = lean::cnstr_get(x_263, 0);
lean::inc(x_267);
x_268 = lean::cnstr_get(x_263, 1);
lean::inc(x_268);
if (lean::is_exclusive(x_263)) {
 lean::cnstr_release(x_263, 0);
 lean::cnstr_release(x_263, 1);
 x_269 = x_263;
} else {
 lean::dec_ref(x_263);
 x_269 = lean::box(0);
}
if (lean::is_scalar(x_269)) {
 x_270 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_270 = x_269;
}
lean::cnstr_set(x_270, 0, x_267);
lean::cnstr_set(x_270, 1, x_268);
return x_270;
}
}
}
block_250:
{
obj* x_184; obj* x_185; obj* x_186; obj* x_187; obj* x_188; obj* x_189; uint8 x_190; 
x_184 = l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__2;
x_185 = lean::string_append(x_183, x_184);
x_186 = l_IO_println___rarg___closed__1;
x_187 = lean::string_append(x_185, x_186);
lean::inc(x_187);
if (lean::is_scalar(x_177)) {
 x_188 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_188 = x_177;
}
lean::cnstr_set(x_188, 0, x_8);
lean::cnstr_set(x_188, 1, x_187);
x_189 = l_Lean_closureMaxArgs;
x_190 = lean::nat_dec_lt(x_189, x_182);
if (x_190 == 0)
{
obj* x_191; obj* x_192; obj* x_193; obj* x_194; obj* x_195; obj* x_196; 
lean::dec(x_188);
lean::dec(x_182);
lean::dec(x_12);
x_191 = l_Lean_IR_EmitCpp_emitDeclAux___closed__1;
x_192 = lean::string_append(x_187, x_191);
x_193 = lean::string_append(x_192, x_186);
x_194 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_194, 0, x_8);
lean::cnstr_set(x_194, 1, x_193);
lean::inc(x_15);
x_195 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_195, 0, x_20);
lean::cnstr_set(x_195, 1, x_21);
lean::cnstr_set(x_195, 2, x_10);
lean::cnstr_set(x_195, 3, x_11);
lean::cnstr_set(x_195, 4, x_15);
lean::cnstr_set(x_195, 5, x_16);
x_196 = l_Lean_IR_EmitCpp_emitFnBody___main(x_18, x_195, x_194);
if (lean::obj_tag(x_196) == 0)
{
obj* x_197; obj* x_198; obj* x_199; obj* x_200; obj* x_201; obj* x_202; obj* x_203; 
x_197 = lean::cnstr_get(x_196, 1);
lean::inc(x_197);
if (lean::is_exclusive(x_196)) {
 lean::cnstr_release(x_196, 0);
 lean::cnstr_release(x_196, 1);
 x_198 = x_196;
} else {
 lean::dec_ref(x_196);
 x_198 = lean::box(0);
}
x_199 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_200 = lean::string_append(x_197, x_199);
x_201 = lean::string_append(x_200, x_186);
if (lean::is_scalar(x_198)) {
 x_202 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_202 = x_198;
}
lean::cnstr_set(x_202, 0, x_8);
lean::cnstr_set(x_202, 1, x_201);
x_203 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_15, x_2, x_202);
lean::dec(x_2);
return x_203;
}
else
{
obj* x_204; obj* x_205; obj* x_206; obj* x_207; 
lean::dec(x_2);
lean::dec(x_15);
x_204 = lean::cnstr_get(x_196, 0);
lean::inc(x_204);
x_205 = lean::cnstr_get(x_196, 1);
lean::inc(x_205);
if (lean::is_exclusive(x_196)) {
 lean::cnstr_release(x_196, 0);
 lean::cnstr_release(x_196, 1);
 x_206 = x_196;
} else {
 lean::dec_ref(x_196);
 x_206 = lean::box(0);
}
if (lean::is_scalar(x_206)) {
 x_207 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_207 = x_206;
}
lean::cnstr_set(x_207, 0, x_204);
lean::cnstr_set(x_207, 1, x_205);
return x_207;
}
}
else
{
uint8 x_208; 
x_208 = l_Lean_IR_ExplicitBoxing_isBoxedName___main(x_12);
lean::dec(x_12);
if (x_208 == 0)
{
obj* x_209; obj* x_210; obj* x_211; obj* x_212; obj* x_213; obj* x_214; 
lean::dec(x_188);
lean::dec(x_182);
x_209 = l_Lean_IR_EmitCpp_emitDeclAux___closed__1;
x_210 = lean::string_append(x_187, x_209);
x_211 = lean::string_append(x_210, x_186);
x_212 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_212, 0, x_8);
lean::cnstr_set(x_212, 1, x_211);
lean::inc(x_15);
x_213 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_213, 0, x_20);
lean::cnstr_set(x_213, 1, x_21);
lean::cnstr_set(x_213, 2, x_10);
lean::cnstr_set(x_213, 3, x_11);
lean::cnstr_set(x_213, 4, x_15);
lean::cnstr_set(x_213, 5, x_16);
x_214 = l_Lean_IR_EmitCpp_emitFnBody___main(x_18, x_213, x_212);
if (lean::obj_tag(x_214) == 0)
{
obj* x_215; obj* x_216; obj* x_217; obj* x_218; obj* x_219; obj* x_220; obj* x_221; 
x_215 = lean::cnstr_get(x_214, 1);
lean::inc(x_215);
if (lean::is_exclusive(x_214)) {
 lean::cnstr_release(x_214, 0);
 lean::cnstr_release(x_214, 1);
 x_216 = x_214;
} else {
 lean::dec_ref(x_214);
 x_216 = lean::box(0);
}
x_217 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_218 = lean::string_append(x_215, x_217);
x_219 = lean::string_append(x_218, x_186);
if (lean::is_scalar(x_216)) {
 x_220 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_220 = x_216;
}
lean::cnstr_set(x_220, 0, x_8);
lean::cnstr_set(x_220, 1, x_219);
x_221 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_15, x_2, x_220);
lean::dec(x_2);
return x_221;
}
else
{
obj* x_222; obj* x_223; obj* x_224; obj* x_225; 
lean::dec(x_2);
lean::dec(x_15);
x_222 = lean::cnstr_get(x_214, 0);
lean::inc(x_222);
x_223 = lean::cnstr_get(x_214, 1);
lean::inc(x_223);
if (lean::is_exclusive(x_214)) {
 lean::cnstr_release(x_214, 0);
 lean::cnstr_release(x_214, 1);
 x_224 = x_214;
} else {
 lean::dec_ref(x_214);
 x_224 = lean::box(0);
}
if (lean::is_scalar(x_224)) {
 x_225 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_225 = x_224;
}
lean::cnstr_set(x_225, 0, x_222);
lean::cnstr_set(x_225, 1, x_223);
return x_225;
}
}
else
{
obj* x_226; 
lean::dec(x_187);
lean::inc(x_182);
x_226 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1(x_16, x_182, x_182, x_2, x_188);
lean::dec(x_182);
if (lean::obj_tag(x_226) == 0)
{
obj* x_227; obj* x_228; obj* x_229; obj* x_230; obj* x_231; obj* x_232; obj* x_233; obj* x_234; 
x_227 = lean::cnstr_get(x_226, 1);
lean::inc(x_227);
if (lean::is_exclusive(x_226)) {
 lean::cnstr_release(x_226, 0);
 lean::cnstr_release(x_226, 1);
 x_228 = x_226;
} else {
 lean::dec_ref(x_226);
 x_228 = lean::box(0);
}
x_229 = l_Lean_IR_EmitCpp_emitDeclAux___closed__1;
x_230 = lean::string_append(x_227, x_229);
x_231 = lean::string_append(x_230, x_186);
if (lean::is_scalar(x_228)) {
 x_232 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_232 = x_228;
}
lean::cnstr_set(x_232, 0, x_8);
lean::cnstr_set(x_232, 1, x_231);
lean::inc(x_15);
x_233 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_233, 0, x_20);
lean::cnstr_set(x_233, 1, x_21);
lean::cnstr_set(x_233, 2, x_10);
lean::cnstr_set(x_233, 3, x_11);
lean::cnstr_set(x_233, 4, x_15);
lean::cnstr_set(x_233, 5, x_16);
x_234 = l_Lean_IR_EmitCpp_emitFnBody___main(x_18, x_233, x_232);
if (lean::obj_tag(x_234) == 0)
{
obj* x_235; obj* x_236; obj* x_237; obj* x_238; obj* x_239; obj* x_240; obj* x_241; 
x_235 = lean::cnstr_get(x_234, 1);
lean::inc(x_235);
if (lean::is_exclusive(x_234)) {
 lean::cnstr_release(x_234, 0);
 lean::cnstr_release(x_234, 1);
 x_236 = x_234;
} else {
 lean::dec_ref(x_234);
 x_236 = lean::box(0);
}
x_237 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_238 = lean::string_append(x_235, x_237);
x_239 = lean::string_append(x_238, x_186);
if (lean::is_scalar(x_236)) {
 x_240 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_240 = x_236;
}
lean::cnstr_set(x_240, 0, x_8);
lean::cnstr_set(x_240, 1, x_239);
x_241 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_15, x_2, x_240);
lean::dec(x_2);
return x_241;
}
else
{
obj* x_242; obj* x_243; obj* x_244; obj* x_245; 
lean::dec(x_2);
lean::dec(x_15);
x_242 = lean::cnstr_get(x_234, 0);
lean::inc(x_242);
x_243 = lean::cnstr_get(x_234, 1);
lean::inc(x_243);
if (lean::is_exclusive(x_234)) {
 lean::cnstr_release(x_234, 0);
 lean::cnstr_release(x_234, 1);
 x_244 = x_234;
} else {
 lean::dec_ref(x_234);
 x_244 = lean::box(0);
}
if (lean::is_scalar(x_244)) {
 x_245 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_245 = x_244;
}
lean::cnstr_set(x_245, 0, x_242);
lean::cnstr_set(x_245, 1, x_243);
return x_245;
}
}
else
{
obj* x_246; obj* x_247; obj* x_248; obj* x_249; 
lean::dec(x_2);
lean::dec(x_21);
lean::dec(x_20);
lean::dec(x_18);
lean::dec(x_16);
lean::dec(x_15);
lean::dec(x_11);
lean::dec(x_10);
x_246 = lean::cnstr_get(x_226, 0);
lean::inc(x_246);
x_247 = lean::cnstr_get(x_226, 1);
lean::inc(x_247);
if (lean::is_exclusive(x_226)) {
 lean::cnstr_release(x_226, 0);
 lean::cnstr_release(x_226, 1);
 x_248 = x_226;
} else {
 lean::dec_ref(x_226);
 x_248 = lean::box(0);
}
if (lean::is_scalar(x_248)) {
 x_249 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_249 = x_248;
}
lean::cnstr_set(x_249, 0, x_246);
lean::cnstr_set(x_249, 1, x_247);
return x_249;
}
}
}
}
}
else
{
obj* x_279; obj* x_280; obj* x_281; obj* x_282; 
lean::dec(x_2);
lean::dec(x_21);
lean::dec(x_20);
lean::dec(x_18);
lean::dec(x_16);
lean::dec(x_15);
lean::dec(x_12);
lean::dec(x_11);
lean::dec(x_10);
x_279 = lean::cnstr_get(x_174, 0);
lean::inc(x_279);
x_280 = lean::cnstr_get(x_174, 1);
lean::inc(x_280);
if (lean::is_exclusive(x_174)) {
 lean::cnstr_release(x_174, 0);
 lean::cnstr_release(x_174, 1);
 x_281 = x_174;
} else {
 lean::dec_ref(x_174);
 x_281 = lean::box(0);
}
if (lean::is_scalar(x_281)) {
 x_282 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_282 = x_281;
}
lean::cnstr_set(x_282, 0, x_279);
lean::cnstr_set(x_282, 1, x_280);
return x_282;
}
}
}
else
{
uint8 x_283; 
lean::dec(x_2);
lean::dec(x_21);
lean::dec(x_20);
lean::dec(x_18);
lean::dec(x_16);
lean::dec(x_15);
lean::dec(x_12);
lean::dec(x_11);
lean::dec(x_10);
x_283 = !lean::is_exclusive(x_24);
if (x_283 == 0)
{
return x_24;
}
else
{
obj* x_284; obj* x_285; obj* x_286; 
x_284 = lean::cnstr_get(x_24, 0);
x_285 = lean::cnstr_get(x_24, 1);
lean::inc(x_285);
lean::inc(x_284);
lean::dec(x_24);
x_286 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_286, 0, x_284);
lean::cnstr_set(x_286, 1, x_285);
return x_286;
}
}
}
else
{
obj* x_287; obj* x_288; obj* x_289; obj* x_290; obj* x_291; obj* x_292; 
x_287 = lean::cnstr_get(x_2, 0);
x_288 = lean::cnstr_get(x_2, 1);
x_289 = lean::cnstr_get(x_2, 4);
x_290 = lean::cnstr_get(x_2, 5);
lean::inc(x_290);
lean::inc(x_289);
lean::inc(x_288);
lean::inc(x_287);
lean::dec(x_2);
lean::inc(x_11);
lean::inc(x_10);
lean::inc(x_288);
lean::inc(x_287);
x_291 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_291, 0, x_287);
lean::cnstr_set(x_291, 1, x_288);
lean::cnstr_set(x_291, 2, x_10);
lean::cnstr_set(x_291, 3, x_11);
lean::cnstr_set(x_291, 4, x_289);
lean::cnstr_set(x_291, 5, x_290);
lean::inc(x_15);
x_292 = l_Lean_IR_EmitCpp_openNamespacesFor(x_15, x_291, x_4);
if (lean::obj_tag(x_292) == 0)
{
obj* x_293; obj* x_294; obj* x_295; obj* x_296; 
x_293 = lean::cnstr_get(x_292, 1);
lean::inc(x_293);
if (lean::is_exclusive(x_292)) {
 lean::cnstr_release(x_292, 0);
 lean::cnstr_release(x_292, 1);
 x_294 = x_292;
} else {
 lean::dec_ref(x_292);
 x_294 = lean::box(0);
}
if (lean::is_scalar(x_294)) {
 x_295 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_295 = x_294;
}
lean::cnstr_set(x_295, 0, x_8);
lean::cnstr_set(x_295, 1, x_293);
lean::inc(x_15);
x_296 = l_Lean_IR_EmitCpp_toBaseCppName(x_15, x_291, x_295);
if (lean::obj_tag(x_296) == 0)
{
obj* x_297; obj* x_298; obj* x_299; obj* x_300; obj* x_301; obj* x_302; obj* x_303; obj* x_304; obj* x_305; obj* x_373; uint8 x_374; 
x_297 = lean::cnstr_get(x_296, 0);
lean::inc(x_297);
x_298 = lean::cnstr_get(x_296, 1);
lean::inc(x_298);
if (lean::is_exclusive(x_296)) {
 lean::cnstr_release(x_296, 0);
 lean::cnstr_release(x_296, 1);
 x_299 = x_296;
} else {
 lean::dec_ref(x_296);
 x_299 = lean::box(0);
}
x_300 = l_Lean_IR_EmitCpp_toCppType___main(x_17);
x_301 = lean::string_append(x_298, x_300);
lean::dec(x_300);
x_302 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1;
x_303 = lean::string_append(x_301, x_302);
x_304 = lean::array_get_size(x_16);
x_373 = lean::mk_nat_obj(0u);
x_374 = lean::nat_dec_lt(x_373, x_304);
if (x_374 == 0)
{
obj* x_375; obj* x_376; obj* x_377; obj* x_378; obj* x_379; 
x_375 = l_Lean_IR_EmitCpp_toCppInitName___closed__1;
x_376 = lean::string_append(x_375, x_297);
lean::dec(x_297);
x_377 = l_Unit_HasRepr___closed__1;
x_378 = lean::string_append(x_376, x_377);
x_379 = lean::string_append(x_303, x_378);
lean::dec(x_378);
x_305 = x_379;
goto block_372;
}
else
{
obj* x_380; obj* x_381; obj* x_382; obj* x_383; obj* x_384; obj* x_394; uint8 x_395; 
x_380 = lean::string_append(x_303, x_297);
lean::dec(x_297);
x_381 = l_Prod_HasRepr___rarg___closed__1;
x_382 = lean::string_append(x_380, x_381);
lean::inc(x_382);
x_383 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_383, 0, x_8);
lean::cnstr_set(x_383, 1, x_382);
x_394 = l_Lean_closureMaxArgs;
x_395 = lean::nat_dec_lt(x_394, x_304);
if (x_395 == 0)
{
lean::dec(x_382);
x_384 = x_8;
goto block_393;
}
else
{
uint8 x_396; 
x_396 = l_Lean_IR_ExplicitBoxing_isBoxedName___main(x_12);
if (x_396 == 0)
{
lean::dec(x_382);
x_384 = x_8;
goto block_393;
}
else
{
obj* x_397; obj* x_398; obj* x_399; obj* x_400; 
lean::dec(x_383);
x_397 = l_Lean_IR_EmitCpp_emitDeclAux___closed__2;
x_398 = lean::string_append(x_382, x_397);
x_399 = l_Option_HasRepr___rarg___closed__3;
x_400 = lean::string_append(x_398, x_399);
x_305 = x_400;
goto block_372;
}
}
block_393:
{
obj* x_385; 
lean::dec(x_384);
lean::inc(x_304);
x_385 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__2(x_16, x_304, x_304, x_291, x_383);
if (lean::obj_tag(x_385) == 0)
{
obj* x_386; obj* x_387; obj* x_388; 
x_386 = lean::cnstr_get(x_385, 1);
lean::inc(x_386);
lean::dec(x_385);
x_387 = l_Option_HasRepr___rarg___closed__3;
x_388 = lean::string_append(x_386, x_387);
x_305 = x_388;
goto block_372;
}
else
{
obj* x_389; obj* x_390; obj* x_391; obj* x_392; 
lean::dec(x_304);
lean::dec(x_299);
lean::dec(x_291);
lean::dec(x_288);
lean::dec(x_287);
lean::dec(x_18);
lean::dec(x_16);
lean::dec(x_15);
lean::dec(x_12);
lean::dec(x_11);
lean::dec(x_10);
x_389 = lean::cnstr_get(x_385, 0);
lean::inc(x_389);
x_390 = lean::cnstr_get(x_385, 1);
lean::inc(x_390);
if (lean::is_exclusive(x_385)) {
 lean::cnstr_release(x_385, 0);
 lean::cnstr_release(x_385, 1);
 x_391 = x_385;
} else {
 lean::dec_ref(x_385);
 x_391 = lean::box(0);
}
if (lean::is_scalar(x_391)) {
 x_392 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_392 = x_391;
}
lean::cnstr_set(x_392, 0, x_389);
lean::cnstr_set(x_392, 1, x_390);
return x_392;
}
}
}
block_372:
{
obj* x_306; obj* x_307; obj* x_308; obj* x_309; obj* x_310; obj* x_311; uint8 x_312; 
x_306 = l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__2;
x_307 = lean::string_append(x_305, x_306);
x_308 = l_IO_println___rarg___closed__1;
x_309 = lean::string_append(x_307, x_308);
lean::inc(x_309);
if (lean::is_scalar(x_299)) {
 x_310 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_310 = x_299;
}
lean::cnstr_set(x_310, 0, x_8);
lean::cnstr_set(x_310, 1, x_309);
x_311 = l_Lean_closureMaxArgs;
x_312 = lean::nat_dec_lt(x_311, x_304);
if (x_312 == 0)
{
obj* x_313; obj* x_314; obj* x_315; obj* x_316; obj* x_317; obj* x_318; 
lean::dec(x_310);
lean::dec(x_304);
lean::dec(x_12);
x_313 = l_Lean_IR_EmitCpp_emitDeclAux___closed__1;
x_314 = lean::string_append(x_309, x_313);
x_315 = lean::string_append(x_314, x_308);
x_316 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_316, 0, x_8);
lean::cnstr_set(x_316, 1, x_315);
lean::inc(x_15);
x_317 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_317, 0, x_287);
lean::cnstr_set(x_317, 1, x_288);
lean::cnstr_set(x_317, 2, x_10);
lean::cnstr_set(x_317, 3, x_11);
lean::cnstr_set(x_317, 4, x_15);
lean::cnstr_set(x_317, 5, x_16);
x_318 = l_Lean_IR_EmitCpp_emitFnBody___main(x_18, x_317, x_316);
if (lean::obj_tag(x_318) == 0)
{
obj* x_319; obj* x_320; obj* x_321; obj* x_322; obj* x_323; obj* x_324; obj* x_325; 
x_319 = lean::cnstr_get(x_318, 1);
lean::inc(x_319);
if (lean::is_exclusive(x_318)) {
 lean::cnstr_release(x_318, 0);
 lean::cnstr_release(x_318, 1);
 x_320 = x_318;
} else {
 lean::dec_ref(x_318);
 x_320 = lean::box(0);
}
x_321 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_322 = lean::string_append(x_319, x_321);
x_323 = lean::string_append(x_322, x_308);
if (lean::is_scalar(x_320)) {
 x_324 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_324 = x_320;
}
lean::cnstr_set(x_324, 0, x_8);
lean::cnstr_set(x_324, 1, x_323);
x_325 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_15, x_291, x_324);
lean::dec(x_291);
return x_325;
}
else
{
obj* x_326; obj* x_327; obj* x_328; obj* x_329; 
lean::dec(x_291);
lean::dec(x_15);
x_326 = lean::cnstr_get(x_318, 0);
lean::inc(x_326);
x_327 = lean::cnstr_get(x_318, 1);
lean::inc(x_327);
if (lean::is_exclusive(x_318)) {
 lean::cnstr_release(x_318, 0);
 lean::cnstr_release(x_318, 1);
 x_328 = x_318;
} else {
 lean::dec_ref(x_318);
 x_328 = lean::box(0);
}
if (lean::is_scalar(x_328)) {
 x_329 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_329 = x_328;
}
lean::cnstr_set(x_329, 0, x_326);
lean::cnstr_set(x_329, 1, x_327);
return x_329;
}
}
else
{
uint8 x_330; 
x_330 = l_Lean_IR_ExplicitBoxing_isBoxedName___main(x_12);
lean::dec(x_12);
if (x_330 == 0)
{
obj* x_331; obj* x_332; obj* x_333; obj* x_334; obj* x_335; obj* x_336; 
lean::dec(x_310);
lean::dec(x_304);
x_331 = l_Lean_IR_EmitCpp_emitDeclAux___closed__1;
x_332 = lean::string_append(x_309, x_331);
x_333 = lean::string_append(x_332, x_308);
x_334 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_334, 0, x_8);
lean::cnstr_set(x_334, 1, x_333);
lean::inc(x_15);
x_335 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_335, 0, x_287);
lean::cnstr_set(x_335, 1, x_288);
lean::cnstr_set(x_335, 2, x_10);
lean::cnstr_set(x_335, 3, x_11);
lean::cnstr_set(x_335, 4, x_15);
lean::cnstr_set(x_335, 5, x_16);
x_336 = l_Lean_IR_EmitCpp_emitFnBody___main(x_18, x_335, x_334);
if (lean::obj_tag(x_336) == 0)
{
obj* x_337; obj* x_338; obj* x_339; obj* x_340; obj* x_341; obj* x_342; obj* x_343; 
x_337 = lean::cnstr_get(x_336, 1);
lean::inc(x_337);
if (lean::is_exclusive(x_336)) {
 lean::cnstr_release(x_336, 0);
 lean::cnstr_release(x_336, 1);
 x_338 = x_336;
} else {
 lean::dec_ref(x_336);
 x_338 = lean::box(0);
}
x_339 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_340 = lean::string_append(x_337, x_339);
x_341 = lean::string_append(x_340, x_308);
if (lean::is_scalar(x_338)) {
 x_342 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_342 = x_338;
}
lean::cnstr_set(x_342, 0, x_8);
lean::cnstr_set(x_342, 1, x_341);
x_343 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_15, x_291, x_342);
lean::dec(x_291);
return x_343;
}
else
{
obj* x_344; obj* x_345; obj* x_346; obj* x_347; 
lean::dec(x_291);
lean::dec(x_15);
x_344 = lean::cnstr_get(x_336, 0);
lean::inc(x_344);
x_345 = lean::cnstr_get(x_336, 1);
lean::inc(x_345);
if (lean::is_exclusive(x_336)) {
 lean::cnstr_release(x_336, 0);
 lean::cnstr_release(x_336, 1);
 x_346 = x_336;
} else {
 lean::dec_ref(x_336);
 x_346 = lean::box(0);
}
if (lean::is_scalar(x_346)) {
 x_347 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_347 = x_346;
}
lean::cnstr_set(x_347, 0, x_344);
lean::cnstr_set(x_347, 1, x_345);
return x_347;
}
}
else
{
obj* x_348; 
lean::dec(x_309);
lean::inc(x_304);
x_348 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1(x_16, x_304, x_304, x_291, x_310);
lean::dec(x_304);
if (lean::obj_tag(x_348) == 0)
{
obj* x_349; obj* x_350; obj* x_351; obj* x_352; obj* x_353; obj* x_354; obj* x_355; obj* x_356; 
x_349 = lean::cnstr_get(x_348, 1);
lean::inc(x_349);
if (lean::is_exclusive(x_348)) {
 lean::cnstr_release(x_348, 0);
 lean::cnstr_release(x_348, 1);
 x_350 = x_348;
} else {
 lean::dec_ref(x_348);
 x_350 = lean::box(0);
}
x_351 = l_Lean_IR_EmitCpp_emitDeclAux___closed__1;
x_352 = lean::string_append(x_349, x_351);
x_353 = lean::string_append(x_352, x_308);
if (lean::is_scalar(x_350)) {
 x_354 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_354 = x_350;
}
lean::cnstr_set(x_354, 0, x_8);
lean::cnstr_set(x_354, 1, x_353);
lean::inc(x_15);
x_355 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_355, 0, x_287);
lean::cnstr_set(x_355, 1, x_288);
lean::cnstr_set(x_355, 2, x_10);
lean::cnstr_set(x_355, 3, x_11);
lean::cnstr_set(x_355, 4, x_15);
lean::cnstr_set(x_355, 5, x_16);
x_356 = l_Lean_IR_EmitCpp_emitFnBody___main(x_18, x_355, x_354);
if (lean::obj_tag(x_356) == 0)
{
obj* x_357; obj* x_358; obj* x_359; obj* x_360; obj* x_361; obj* x_362; obj* x_363; 
x_357 = lean::cnstr_get(x_356, 1);
lean::inc(x_357);
if (lean::is_exclusive(x_356)) {
 lean::cnstr_release(x_356, 0);
 lean::cnstr_release(x_356, 1);
 x_358 = x_356;
} else {
 lean::dec_ref(x_356);
 x_358 = lean::box(0);
}
x_359 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_360 = lean::string_append(x_357, x_359);
x_361 = lean::string_append(x_360, x_308);
if (lean::is_scalar(x_358)) {
 x_362 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_362 = x_358;
}
lean::cnstr_set(x_362, 0, x_8);
lean::cnstr_set(x_362, 1, x_361);
x_363 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_15, x_291, x_362);
lean::dec(x_291);
return x_363;
}
else
{
obj* x_364; obj* x_365; obj* x_366; obj* x_367; 
lean::dec(x_291);
lean::dec(x_15);
x_364 = lean::cnstr_get(x_356, 0);
lean::inc(x_364);
x_365 = lean::cnstr_get(x_356, 1);
lean::inc(x_365);
if (lean::is_exclusive(x_356)) {
 lean::cnstr_release(x_356, 0);
 lean::cnstr_release(x_356, 1);
 x_366 = x_356;
} else {
 lean::dec_ref(x_356);
 x_366 = lean::box(0);
}
if (lean::is_scalar(x_366)) {
 x_367 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_367 = x_366;
}
lean::cnstr_set(x_367, 0, x_364);
lean::cnstr_set(x_367, 1, x_365);
return x_367;
}
}
else
{
obj* x_368; obj* x_369; obj* x_370; obj* x_371; 
lean::dec(x_291);
lean::dec(x_288);
lean::dec(x_287);
lean::dec(x_18);
lean::dec(x_16);
lean::dec(x_15);
lean::dec(x_11);
lean::dec(x_10);
x_368 = lean::cnstr_get(x_348, 0);
lean::inc(x_368);
x_369 = lean::cnstr_get(x_348, 1);
lean::inc(x_369);
if (lean::is_exclusive(x_348)) {
 lean::cnstr_release(x_348, 0);
 lean::cnstr_release(x_348, 1);
 x_370 = x_348;
} else {
 lean::dec_ref(x_348);
 x_370 = lean::box(0);
}
if (lean::is_scalar(x_370)) {
 x_371 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_371 = x_370;
}
lean::cnstr_set(x_371, 0, x_368);
lean::cnstr_set(x_371, 1, x_369);
return x_371;
}
}
}
}
}
else
{
obj* x_401; obj* x_402; obj* x_403; obj* x_404; 
lean::dec(x_291);
lean::dec(x_288);
lean::dec(x_287);
lean::dec(x_18);
lean::dec(x_16);
lean::dec(x_15);
lean::dec(x_12);
lean::dec(x_11);
lean::dec(x_10);
x_401 = lean::cnstr_get(x_296, 0);
lean::inc(x_401);
x_402 = lean::cnstr_get(x_296, 1);
lean::inc(x_402);
if (lean::is_exclusive(x_296)) {
 lean::cnstr_release(x_296, 0);
 lean::cnstr_release(x_296, 1);
 x_403 = x_296;
} else {
 lean::dec_ref(x_296);
 x_403 = lean::box(0);
}
if (lean::is_scalar(x_403)) {
 x_404 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_404 = x_403;
}
lean::cnstr_set(x_404, 0, x_401);
lean::cnstr_set(x_404, 1, x_402);
return x_404;
}
}
else
{
obj* x_405; obj* x_406; obj* x_407; obj* x_408; 
lean::dec(x_291);
lean::dec(x_288);
lean::dec(x_287);
lean::dec(x_18);
lean::dec(x_16);
lean::dec(x_15);
lean::dec(x_12);
lean::dec(x_11);
lean::dec(x_10);
x_405 = lean::cnstr_get(x_292, 0);
lean::inc(x_405);
x_406 = lean::cnstr_get(x_292, 1);
lean::inc(x_406);
if (lean::is_exclusive(x_292)) {
 lean::cnstr_release(x_292, 0);
 lean::cnstr_release(x_292, 1);
 x_407 = x_292;
} else {
 lean::dec_ref(x_292);
 x_407 = lean::box(0);
}
if (lean::is_scalar(x_407)) {
 x_408 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_408 = x_407;
}
lean::cnstr_set(x_408, 0, x_405);
lean::cnstr_set(x_408, 1, x_406);
return x_408;
}
}
}
else
{
obj* x_409; 
lean::dec(x_12);
lean::dec(x_11);
lean::dec(x_10);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
x_409 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_409, 0, x_8);
lean::cnstr_set(x_409, 1, x_7);
return x_409;
}
}
else
{
obj* x_410; 
lean::dec(x_12);
lean::dec(x_11);
lean::dec(x_10);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
x_410 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_410, 0, x_8);
lean::cnstr_set(x_410, 1, x_7);
return x_410;
}
}
}
else
{
obj* x_414; obj* x_415; obj* x_416; obj* x_417; obj* x_418; obj* x_419; obj* x_420; obj* x_421; uint8 x_422; uint8 x_423; 
x_414 = lean::cnstr_get(x_4, 0);
x_415 = lean::cnstr_get(x_4, 1);
lean::inc(x_415);
lean::inc(x_414);
lean::dec(x_4);
x_416 = lean::box(0);
lean::inc(x_415);
x_417 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_417, 0, x_416);
lean::cnstr_set(x_417, 1, x_415);
lean::inc(x_1);
x_418 = l_Lean_IR_mkVarJPMaps(x_1);
x_419 = lean::cnstr_get(x_418, 0);
lean::inc(x_419);
x_420 = lean::cnstr_get(x_418, 1);
lean::inc(x_420);
lean::dec(x_418);
x_421 = l_Lean_IR_Decl_name___main(x_1);
lean::inc(x_421);
x_422 = l_Lean_hasInitAttr(x_414, x_421);
if (x_422 == 0)
{
uint8 x_554; 
x_554 = 0;
x_423 = x_554;
goto block_553;
}
else
{
uint8 x_555; 
x_555 = 1;
x_423 = x_555;
goto block_553;
}
block_553:
{
if (x_423 == 0)
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_424; obj* x_425; uint8 x_426; obj* x_427; obj* x_428; obj* x_429; obj* x_430; obj* x_431; obj* x_432; obj* x_433; obj* x_434; 
lean::dec(x_415);
x_424 = lean::cnstr_get(x_1, 0);
lean::inc(x_424);
x_425 = lean::cnstr_get(x_1, 1);
lean::inc(x_425);
x_426 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*3);
x_427 = lean::cnstr_get(x_1, 2);
lean::inc(x_427);
lean::dec(x_1);
x_428 = lean::cnstr_get(x_2, 0);
lean::inc(x_428);
x_429 = lean::cnstr_get(x_2, 1);
lean::inc(x_429);
x_430 = lean::cnstr_get(x_2, 4);
lean::inc(x_430);
x_431 = lean::cnstr_get(x_2, 5);
lean::inc(x_431);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_release(x_2, 1);
 lean::cnstr_release(x_2, 2);
 lean::cnstr_release(x_2, 3);
 lean::cnstr_release(x_2, 4);
 lean::cnstr_release(x_2, 5);
 x_432 = x_2;
} else {
 lean::dec_ref(x_2);
 x_432 = lean::box(0);
}
lean::inc(x_420);
lean::inc(x_419);
lean::inc(x_429);
lean::inc(x_428);
if (lean::is_scalar(x_432)) {
 x_433 = lean::alloc_cnstr(0, 6, 0);
} else {
 x_433 = x_432;
}
lean::cnstr_set(x_433, 0, x_428);
lean::cnstr_set(x_433, 1, x_429);
lean::cnstr_set(x_433, 2, x_419);
lean::cnstr_set(x_433, 3, x_420);
lean::cnstr_set(x_433, 4, x_430);
lean::cnstr_set(x_433, 5, x_431);
lean::inc(x_424);
x_434 = l_Lean_IR_EmitCpp_openNamespacesFor(x_424, x_433, x_417);
if (lean::obj_tag(x_434) == 0)
{
obj* x_435; obj* x_436; obj* x_437; obj* x_438; 
x_435 = lean::cnstr_get(x_434, 1);
lean::inc(x_435);
if (lean::is_exclusive(x_434)) {
 lean::cnstr_release(x_434, 0);
 lean::cnstr_release(x_434, 1);
 x_436 = x_434;
} else {
 lean::dec_ref(x_434);
 x_436 = lean::box(0);
}
if (lean::is_scalar(x_436)) {
 x_437 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_437 = x_436;
}
lean::cnstr_set(x_437, 0, x_416);
lean::cnstr_set(x_437, 1, x_435);
lean::inc(x_424);
x_438 = l_Lean_IR_EmitCpp_toBaseCppName(x_424, x_433, x_437);
if (lean::obj_tag(x_438) == 0)
{
obj* x_439; obj* x_440; obj* x_441; obj* x_442; obj* x_443; obj* x_444; obj* x_445; obj* x_446; obj* x_447; obj* x_515; uint8 x_516; 
x_439 = lean::cnstr_get(x_438, 0);
lean::inc(x_439);
x_440 = lean::cnstr_get(x_438, 1);
lean::inc(x_440);
if (lean::is_exclusive(x_438)) {
 lean::cnstr_release(x_438, 0);
 lean::cnstr_release(x_438, 1);
 x_441 = x_438;
} else {
 lean::dec_ref(x_438);
 x_441 = lean::box(0);
}
x_442 = l_Lean_IR_EmitCpp_toCppType___main(x_426);
x_443 = lean::string_append(x_440, x_442);
lean::dec(x_442);
x_444 = l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1;
x_445 = lean::string_append(x_443, x_444);
x_446 = lean::array_get_size(x_425);
x_515 = lean::mk_nat_obj(0u);
x_516 = lean::nat_dec_lt(x_515, x_446);
if (x_516 == 0)
{
obj* x_517; obj* x_518; obj* x_519; obj* x_520; obj* x_521; 
x_517 = l_Lean_IR_EmitCpp_toCppInitName___closed__1;
x_518 = lean::string_append(x_517, x_439);
lean::dec(x_439);
x_519 = l_Unit_HasRepr___closed__1;
x_520 = lean::string_append(x_518, x_519);
x_521 = lean::string_append(x_445, x_520);
lean::dec(x_520);
x_447 = x_521;
goto block_514;
}
else
{
obj* x_522; obj* x_523; obj* x_524; obj* x_525; obj* x_526; obj* x_536; uint8 x_537; 
x_522 = lean::string_append(x_445, x_439);
lean::dec(x_439);
x_523 = l_Prod_HasRepr___rarg___closed__1;
x_524 = lean::string_append(x_522, x_523);
lean::inc(x_524);
x_525 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_525, 0, x_416);
lean::cnstr_set(x_525, 1, x_524);
x_536 = l_Lean_closureMaxArgs;
x_537 = lean::nat_dec_lt(x_536, x_446);
if (x_537 == 0)
{
lean::dec(x_524);
x_526 = x_416;
goto block_535;
}
else
{
uint8 x_538; 
x_538 = l_Lean_IR_ExplicitBoxing_isBoxedName___main(x_421);
if (x_538 == 0)
{
lean::dec(x_524);
x_526 = x_416;
goto block_535;
}
else
{
obj* x_539; obj* x_540; obj* x_541; obj* x_542; 
lean::dec(x_525);
x_539 = l_Lean_IR_EmitCpp_emitDeclAux___closed__2;
x_540 = lean::string_append(x_524, x_539);
x_541 = l_Option_HasRepr___rarg___closed__3;
x_542 = lean::string_append(x_540, x_541);
x_447 = x_542;
goto block_514;
}
}
block_535:
{
obj* x_527; 
lean::dec(x_526);
lean::inc(x_446);
x_527 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__2(x_425, x_446, x_446, x_433, x_525);
if (lean::obj_tag(x_527) == 0)
{
obj* x_528; obj* x_529; obj* x_530; 
x_528 = lean::cnstr_get(x_527, 1);
lean::inc(x_528);
lean::dec(x_527);
x_529 = l_Option_HasRepr___rarg___closed__3;
x_530 = lean::string_append(x_528, x_529);
x_447 = x_530;
goto block_514;
}
else
{
obj* x_531; obj* x_532; obj* x_533; obj* x_534; 
lean::dec(x_446);
lean::dec(x_441);
lean::dec(x_433);
lean::dec(x_429);
lean::dec(x_428);
lean::dec(x_427);
lean::dec(x_425);
lean::dec(x_424);
lean::dec(x_421);
lean::dec(x_420);
lean::dec(x_419);
x_531 = lean::cnstr_get(x_527, 0);
lean::inc(x_531);
x_532 = lean::cnstr_get(x_527, 1);
lean::inc(x_532);
if (lean::is_exclusive(x_527)) {
 lean::cnstr_release(x_527, 0);
 lean::cnstr_release(x_527, 1);
 x_533 = x_527;
} else {
 lean::dec_ref(x_527);
 x_533 = lean::box(0);
}
if (lean::is_scalar(x_533)) {
 x_534 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_534 = x_533;
}
lean::cnstr_set(x_534, 0, x_531);
lean::cnstr_set(x_534, 1, x_532);
return x_534;
}
}
}
block_514:
{
obj* x_448; obj* x_449; obj* x_450; obj* x_451; obj* x_452; obj* x_453; uint8 x_454; 
x_448 = l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__2;
x_449 = lean::string_append(x_447, x_448);
x_450 = l_IO_println___rarg___closed__1;
x_451 = lean::string_append(x_449, x_450);
lean::inc(x_451);
if (lean::is_scalar(x_441)) {
 x_452 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_452 = x_441;
}
lean::cnstr_set(x_452, 0, x_416);
lean::cnstr_set(x_452, 1, x_451);
x_453 = l_Lean_closureMaxArgs;
x_454 = lean::nat_dec_lt(x_453, x_446);
if (x_454 == 0)
{
obj* x_455; obj* x_456; obj* x_457; obj* x_458; obj* x_459; obj* x_460; 
lean::dec(x_452);
lean::dec(x_446);
lean::dec(x_421);
x_455 = l_Lean_IR_EmitCpp_emitDeclAux___closed__1;
x_456 = lean::string_append(x_451, x_455);
x_457 = lean::string_append(x_456, x_450);
x_458 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_458, 0, x_416);
lean::cnstr_set(x_458, 1, x_457);
lean::inc(x_424);
x_459 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_459, 0, x_428);
lean::cnstr_set(x_459, 1, x_429);
lean::cnstr_set(x_459, 2, x_419);
lean::cnstr_set(x_459, 3, x_420);
lean::cnstr_set(x_459, 4, x_424);
lean::cnstr_set(x_459, 5, x_425);
x_460 = l_Lean_IR_EmitCpp_emitFnBody___main(x_427, x_459, x_458);
if (lean::obj_tag(x_460) == 0)
{
obj* x_461; obj* x_462; obj* x_463; obj* x_464; obj* x_465; obj* x_466; obj* x_467; 
x_461 = lean::cnstr_get(x_460, 1);
lean::inc(x_461);
if (lean::is_exclusive(x_460)) {
 lean::cnstr_release(x_460, 0);
 lean::cnstr_release(x_460, 1);
 x_462 = x_460;
} else {
 lean::dec_ref(x_460);
 x_462 = lean::box(0);
}
x_463 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_464 = lean::string_append(x_461, x_463);
x_465 = lean::string_append(x_464, x_450);
if (lean::is_scalar(x_462)) {
 x_466 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_466 = x_462;
}
lean::cnstr_set(x_466, 0, x_416);
lean::cnstr_set(x_466, 1, x_465);
x_467 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_424, x_433, x_466);
lean::dec(x_433);
return x_467;
}
else
{
obj* x_468; obj* x_469; obj* x_470; obj* x_471; 
lean::dec(x_433);
lean::dec(x_424);
x_468 = lean::cnstr_get(x_460, 0);
lean::inc(x_468);
x_469 = lean::cnstr_get(x_460, 1);
lean::inc(x_469);
if (lean::is_exclusive(x_460)) {
 lean::cnstr_release(x_460, 0);
 lean::cnstr_release(x_460, 1);
 x_470 = x_460;
} else {
 lean::dec_ref(x_460);
 x_470 = lean::box(0);
}
if (lean::is_scalar(x_470)) {
 x_471 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_471 = x_470;
}
lean::cnstr_set(x_471, 0, x_468);
lean::cnstr_set(x_471, 1, x_469);
return x_471;
}
}
else
{
uint8 x_472; 
x_472 = l_Lean_IR_ExplicitBoxing_isBoxedName___main(x_421);
lean::dec(x_421);
if (x_472 == 0)
{
obj* x_473; obj* x_474; obj* x_475; obj* x_476; obj* x_477; obj* x_478; 
lean::dec(x_452);
lean::dec(x_446);
x_473 = l_Lean_IR_EmitCpp_emitDeclAux___closed__1;
x_474 = lean::string_append(x_451, x_473);
x_475 = lean::string_append(x_474, x_450);
x_476 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_476, 0, x_416);
lean::cnstr_set(x_476, 1, x_475);
lean::inc(x_424);
x_477 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_477, 0, x_428);
lean::cnstr_set(x_477, 1, x_429);
lean::cnstr_set(x_477, 2, x_419);
lean::cnstr_set(x_477, 3, x_420);
lean::cnstr_set(x_477, 4, x_424);
lean::cnstr_set(x_477, 5, x_425);
x_478 = l_Lean_IR_EmitCpp_emitFnBody___main(x_427, x_477, x_476);
if (lean::obj_tag(x_478) == 0)
{
obj* x_479; obj* x_480; obj* x_481; obj* x_482; obj* x_483; obj* x_484; obj* x_485; 
x_479 = lean::cnstr_get(x_478, 1);
lean::inc(x_479);
if (lean::is_exclusive(x_478)) {
 lean::cnstr_release(x_478, 0);
 lean::cnstr_release(x_478, 1);
 x_480 = x_478;
} else {
 lean::dec_ref(x_478);
 x_480 = lean::box(0);
}
x_481 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_482 = lean::string_append(x_479, x_481);
x_483 = lean::string_append(x_482, x_450);
if (lean::is_scalar(x_480)) {
 x_484 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_484 = x_480;
}
lean::cnstr_set(x_484, 0, x_416);
lean::cnstr_set(x_484, 1, x_483);
x_485 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_424, x_433, x_484);
lean::dec(x_433);
return x_485;
}
else
{
obj* x_486; obj* x_487; obj* x_488; obj* x_489; 
lean::dec(x_433);
lean::dec(x_424);
x_486 = lean::cnstr_get(x_478, 0);
lean::inc(x_486);
x_487 = lean::cnstr_get(x_478, 1);
lean::inc(x_487);
if (lean::is_exclusive(x_478)) {
 lean::cnstr_release(x_478, 0);
 lean::cnstr_release(x_478, 1);
 x_488 = x_478;
} else {
 lean::dec_ref(x_478);
 x_488 = lean::box(0);
}
if (lean::is_scalar(x_488)) {
 x_489 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_489 = x_488;
}
lean::cnstr_set(x_489, 0, x_486);
lean::cnstr_set(x_489, 1, x_487);
return x_489;
}
}
else
{
obj* x_490; 
lean::dec(x_451);
lean::inc(x_446);
x_490 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1(x_425, x_446, x_446, x_433, x_452);
lean::dec(x_446);
if (lean::obj_tag(x_490) == 0)
{
obj* x_491; obj* x_492; obj* x_493; obj* x_494; obj* x_495; obj* x_496; obj* x_497; obj* x_498; 
x_491 = lean::cnstr_get(x_490, 1);
lean::inc(x_491);
if (lean::is_exclusive(x_490)) {
 lean::cnstr_release(x_490, 0);
 lean::cnstr_release(x_490, 1);
 x_492 = x_490;
} else {
 lean::dec_ref(x_490);
 x_492 = lean::box(0);
}
x_493 = l_Lean_IR_EmitCpp_emitDeclAux___closed__1;
x_494 = lean::string_append(x_491, x_493);
x_495 = lean::string_append(x_494, x_450);
if (lean::is_scalar(x_492)) {
 x_496 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_496 = x_492;
}
lean::cnstr_set(x_496, 0, x_416);
lean::cnstr_set(x_496, 1, x_495);
lean::inc(x_424);
x_497 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_497, 0, x_428);
lean::cnstr_set(x_497, 1, x_429);
lean::cnstr_set(x_497, 2, x_419);
lean::cnstr_set(x_497, 3, x_420);
lean::cnstr_set(x_497, 4, x_424);
lean::cnstr_set(x_497, 5, x_425);
x_498 = l_Lean_IR_EmitCpp_emitFnBody___main(x_427, x_497, x_496);
if (lean::obj_tag(x_498) == 0)
{
obj* x_499; obj* x_500; obj* x_501; obj* x_502; obj* x_503; obj* x_504; obj* x_505; 
x_499 = lean::cnstr_get(x_498, 1);
lean::inc(x_499);
if (lean::is_exclusive(x_498)) {
 lean::cnstr_release(x_498, 0);
 lean::cnstr_release(x_498, 1);
 x_500 = x_498;
} else {
 lean::dec_ref(x_498);
 x_500 = lean::box(0);
}
x_501 = l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1;
x_502 = lean::string_append(x_499, x_501);
x_503 = lean::string_append(x_502, x_450);
if (lean::is_scalar(x_500)) {
 x_504 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_504 = x_500;
}
lean::cnstr_set(x_504, 0, x_416);
lean::cnstr_set(x_504, 1, x_503);
x_505 = l_Lean_IR_EmitCpp_closeNamespacesFor(x_424, x_433, x_504);
lean::dec(x_433);
return x_505;
}
else
{
obj* x_506; obj* x_507; obj* x_508; obj* x_509; 
lean::dec(x_433);
lean::dec(x_424);
x_506 = lean::cnstr_get(x_498, 0);
lean::inc(x_506);
x_507 = lean::cnstr_get(x_498, 1);
lean::inc(x_507);
if (lean::is_exclusive(x_498)) {
 lean::cnstr_release(x_498, 0);
 lean::cnstr_release(x_498, 1);
 x_508 = x_498;
} else {
 lean::dec_ref(x_498);
 x_508 = lean::box(0);
}
if (lean::is_scalar(x_508)) {
 x_509 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_509 = x_508;
}
lean::cnstr_set(x_509, 0, x_506);
lean::cnstr_set(x_509, 1, x_507);
return x_509;
}
}
else
{
obj* x_510; obj* x_511; obj* x_512; obj* x_513; 
lean::dec(x_433);
lean::dec(x_429);
lean::dec(x_428);
lean::dec(x_427);
lean::dec(x_425);
lean::dec(x_424);
lean::dec(x_420);
lean::dec(x_419);
x_510 = lean::cnstr_get(x_490, 0);
lean::inc(x_510);
x_511 = lean::cnstr_get(x_490, 1);
lean::inc(x_511);
if (lean::is_exclusive(x_490)) {
 lean::cnstr_release(x_490, 0);
 lean::cnstr_release(x_490, 1);
 x_512 = x_490;
} else {
 lean::dec_ref(x_490);
 x_512 = lean::box(0);
}
if (lean::is_scalar(x_512)) {
 x_513 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_513 = x_512;
}
lean::cnstr_set(x_513, 0, x_510);
lean::cnstr_set(x_513, 1, x_511);
return x_513;
}
}
}
}
}
else
{
obj* x_543; obj* x_544; obj* x_545; obj* x_546; 
lean::dec(x_433);
lean::dec(x_429);
lean::dec(x_428);
lean::dec(x_427);
lean::dec(x_425);
lean::dec(x_424);
lean::dec(x_421);
lean::dec(x_420);
lean::dec(x_419);
x_543 = lean::cnstr_get(x_438, 0);
lean::inc(x_543);
x_544 = lean::cnstr_get(x_438, 1);
lean::inc(x_544);
if (lean::is_exclusive(x_438)) {
 lean::cnstr_release(x_438, 0);
 lean::cnstr_release(x_438, 1);
 x_545 = x_438;
} else {
 lean::dec_ref(x_438);
 x_545 = lean::box(0);
}
if (lean::is_scalar(x_545)) {
 x_546 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_546 = x_545;
}
lean::cnstr_set(x_546, 0, x_543);
lean::cnstr_set(x_546, 1, x_544);
return x_546;
}
}
else
{
obj* x_547; obj* x_548; obj* x_549; obj* x_550; 
lean::dec(x_433);
lean::dec(x_429);
lean::dec(x_428);
lean::dec(x_427);
lean::dec(x_425);
lean::dec(x_424);
lean::dec(x_421);
lean::dec(x_420);
lean::dec(x_419);
x_547 = lean::cnstr_get(x_434, 0);
lean::inc(x_547);
x_548 = lean::cnstr_get(x_434, 1);
lean::inc(x_548);
if (lean::is_exclusive(x_434)) {
 lean::cnstr_release(x_434, 0);
 lean::cnstr_release(x_434, 1);
 x_549 = x_434;
} else {
 lean::dec_ref(x_434);
 x_549 = lean::box(0);
}
if (lean::is_scalar(x_549)) {
 x_550 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_550 = x_549;
}
lean::cnstr_set(x_550, 0, x_547);
lean::cnstr_set(x_550, 1, x_548);
return x_550;
}
}
else
{
obj* x_551; 
lean::dec(x_421);
lean::dec(x_420);
lean::dec(x_419);
lean::dec(x_417);
lean::dec(x_2);
lean::dec(x_1);
x_551 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_551, 0, x_416);
lean::cnstr_set(x_551, 1, x_415);
return x_551;
}
}
else
{
obj* x_552; 
lean::dec(x_421);
lean::dec(x_420);
lean::dec(x_419);
lean::dec(x_417);
lean::dec(x_2);
lean::dec(x_1);
x_552 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_552, 0, x_416);
lean::cnstr_set(x_552, 1, x_415);
return x_552;
}
}
}
}
else
{
uint8 x_556; 
lean::dec(x_2);
lean::dec(x_1);
x_556 = !lean::is_exclusive(x_4);
if (x_556 == 0)
{
return x_4;
}
else
{
obj* x_557; obj* x_558; obj* x_559; 
x_557 = lean::cnstr_get(x_4, 0);
x_558 = lean::cnstr_get(x_4, 1);
lean::inc(x_558);
lean::inc(x_557);
lean::dec(x_4);
x_559 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_559, 0, x_557);
lean::cnstr_set(x_559, 1, x_558);
return x_559;
}
}
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
return x_6;
}
}
obj* l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__2(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
return x_6;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitDecl___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("\ncompiling:\n");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitDecl(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = l_Lean_IR_Decl_normalizeIds(x_1);
lean::inc(x_4);
x_5 = l_Lean_IR_EmitCpp_emitDeclAux(x_4, x_2, x_3);
if (lean::obj_tag(x_5) == 0)
{
lean::dec(x_4);
return x_5;
}
else
{
uint8 x_6; 
x_6 = !lean::is_exclusive(x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = lean::cnstr_get(x_5, 0);
x_8 = l_Lean_IR_EmitCpp_emitDecl___closed__1;
x_9 = lean::string_append(x_7, x_8);
x_10 = lean::ir::decl_to_string_core(x_4);
x_11 = lean::string_append(x_9, x_10);
lean::dec(x_10);
lean::cnstr_set(x_5, 0, x_11);
return x_5;
}
else
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_12 = lean::cnstr_get(x_5, 0);
x_13 = lean::cnstr_get(x_5, 1);
lean::inc(x_13);
lean::inc(x_12);
lean::dec(x_5);
x_14 = l_Lean_IR_EmitCpp_emitDecl___closed__1;
x_15 = lean::string_append(x_12, x_14);
x_16 = lean::ir::decl_to_string_core(x_4);
x_17 = lean::string_append(x_15, x_16);
lean::dec(x_16);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_13);
return x_18;
}
}
}
}
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitFns___spec__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_4; 
lean::dec(x_2);
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; 
x_5 = lean::cnstr_get(x_3, 0);
lean::dec(x_5);
x_6 = lean::box(0);
lean::cnstr_set(x_3, 0, x_6);
return x_3;
}
else
{
obj* x_7; obj* x_8; obj* x_9; 
x_7 = lean::cnstr_get(x_3, 1);
lean::inc(x_7);
lean::dec(x_3);
x_8 = lean::box(0);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
return x_9;
}
}
else
{
obj* x_10; obj* x_11; obj* x_12; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_11 = lean::cnstr_get(x_1, 1);
lean::inc(x_11);
lean::dec(x_1);
lean::inc(x_2);
x_12 = l_Lean_IR_EmitCpp_emitDecl(x_10, x_2, x_3);
if (lean::obj_tag(x_12) == 0)
{
uint8 x_13; 
x_13 = !lean::is_exclusive(x_12);
if (x_13 == 0)
{
obj* x_14; obj* x_15; 
x_14 = lean::cnstr_get(x_12, 0);
lean::dec(x_14);
x_15 = lean::box(0);
lean::cnstr_set(x_12, 0, x_15);
x_1 = x_11;
x_3 = x_12;
goto _start;
}
else
{
obj* x_17; obj* x_18; obj* x_19; 
x_17 = lean::cnstr_get(x_12, 1);
lean::inc(x_17);
lean::dec(x_12);
x_18 = lean::box(0);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_17);
x_1 = x_11;
x_3 = x_19;
goto _start;
}
}
else
{
uint8 x_21; 
lean::dec(x_11);
lean::dec(x_2);
x_21 = !lean::is_exclusive(x_12);
if (x_21 == 0)
{
return x_12;
}
else
{
obj* x_22; obj* x_23; obj* x_24; 
x_22 = lean::cnstr_get(x_12, 0);
x_23 = lean::cnstr_get(x_12, 1);
lean::inc(x_23);
lean::inc(x_22);
lean::dec(x_12);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_22);
lean::cnstr_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitFns(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_EmitCpp_getEnv(x_1, x_2);
if (lean::obj_tag(x_3) == 0)
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_5 = lean::cnstr_get(x_3, 0);
x_6 = lean::box(0);
lean::cnstr_set(x_3, 0, x_6);
x_7 = l_Lean_IR_declMapExt;
x_8 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_7, x_5);
lean::dec(x_5);
x_9 = l_List_reverse___rarg(x_8);
x_10 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitFns___spec__1(x_9, x_1, x_3);
return x_10;
}
else
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_11 = lean::cnstr_get(x_3, 0);
x_12 = lean::cnstr_get(x_3, 1);
lean::inc(x_12);
lean::inc(x_11);
lean::dec(x_3);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_12);
x_15 = l_Lean_IR_declMapExt;
x_16 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_15, x_11);
lean::dec(x_11);
x_17 = l_List_reverse___rarg(x_16);
x_18 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitFns___spec__1(x_17, x_1, x_14);
return x_18;
}
}
else
{
uint8 x_19; 
lean::dec(x_1);
x_19 = !lean::is_exclusive(x_3);
if (x_19 == 0)
{
return x_3;
}
else
{
obj* x_20; obj* x_21; obj* x_22; 
x_20 = lean::cnstr_get(x_3, 0);
x_21 = lean::cnstr_get(x_3, 1);
lean::inc(x_21);
lean::inc(x_20);
lean::dec(x_3);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_20);
lean::cnstr_set(x_22, 1, x_21);
return x_22;
}
}
}
}
obj* _init_l_Lean_IR_EmitCpp_quoteNameAux___main___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::mk_const_name(");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_quoteNameAux___main(obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 1)
{
obj* x_2; obj* x_3; obj* x_4; uint8 x_5; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean_name_dec_eq(x_2, x_4);
if (x_5 == 0)
{
obj* x_6; 
x_6 = l_Lean_IR_EmitCpp_quoteNameAux___main(x_2);
if (lean::obj_tag(x_6) == 0)
{
lean::dec(x_3);
return x_6;
}
else
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_8 = lean::cnstr_get(x_6, 0);
x_9 = l_Lean_IR_EmitCpp_quoteNameAux___main___closed__1;
x_10 = lean::string_append(x_9, x_8);
lean::dec(x_8);
x_11 = l_List_reprAux___main___rarg___closed__1;
x_12 = lean::string_append(x_10, x_11);
x_13 = l_String_quote(x_3);
x_14 = lean::string_append(x_12, x_13);
lean::dec(x_13);
x_15 = l_Option_HasRepr___rarg___closed__3;
x_16 = lean::string_append(x_14, x_15);
lean::cnstr_set(x_6, 0, x_16);
return x_6;
}
else
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_17 = lean::cnstr_get(x_6, 0);
lean::inc(x_17);
lean::dec(x_6);
x_18 = l_Lean_IR_EmitCpp_quoteNameAux___main___closed__1;
x_19 = lean::string_append(x_18, x_17);
lean::dec(x_17);
x_20 = l_List_reprAux___main___rarg___closed__1;
x_21 = lean::string_append(x_19, x_20);
x_22 = l_String_quote(x_3);
x_23 = lean::string_append(x_21, x_22);
lean::dec(x_22);
x_24 = l_Option_HasRepr___rarg___closed__3;
x_25 = lean::string_append(x_23, x_24);
x_26 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_26, 0, x_25);
return x_26;
}
}
}
else
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
lean::dec(x_2);
x_27 = l_String_quote(x_3);
x_28 = l_Lean_IR_EmitCpp_quoteNameAux___main___closed__1;
x_29 = lean::string_append(x_28, x_27);
lean::dec(x_27);
x_30 = l_Option_HasRepr___rarg___closed__3;
x_31 = lean::string_append(x_29, x_30);
x_32 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_32, 0, x_31);
return x_32;
}
}
else
{
obj* x_33; 
lean::dec(x_1);
x_33 = lean::box(0);
return x_33;
}
}
}
obj* l_Lean_IR_EmitCpp_quoteNameAux(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_IR_EmitCpp_quoteNameAux___main(x_1);
return x_2;
}
}
obj* l_Lean_IR_EmitCpp_quoteName(obj* x_1) {
_start:
{
uint8 x_2; 
x_2 = l_Lean_Name_isInternal___main(x_1);
if (x_2 == 0)
{
obj* x_3; 
x_3 = l_Lean_IR_EmitCpp_quoteNameAux___main(x_1);
return x_3;
}
else
{
obj* x_4; 
lean::dec(x_1);
x_4 = lean::box(0);
return x_4;
}
}
}
obj* _init_l_Lean_IR_EmitCpp_emitDeclInit___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("REGISTER_LEAN_FUNCTION(");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitDeclInit___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("();");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitDeclInit___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::register_constant(");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitDeclInit___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("));");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitDeclInit___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lean::mark_persistent(");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitDeclInit___closed__6() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("w = ");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitDeclInit___closed__7() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("if (io_result_is_error(w)) return w;");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitDeclInit___closed__8() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" = io_result_get_value(w);");
return x_1;
}
}
obj* l_Lean_IR_EmitCpp_emitDeclInit(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_getEnv(x_2, x_3);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; uint8 x_10; 
x_6 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
x_8 = lean::box(0);
lean::inc(x_7);
lean::cnstr_set(x_4, 0, x_8);
x_9 = l_Lean_IR_Decl_name___main(x_1);
lean::inc(x_9);
x_10 = l_Lean_isIOUnitInitFn(x_6, x_9);
if (x_10 == 0)
{
obj* x_11; obj* x_12; obj* x_13; uint8 x_14; 
x_11 = l_Lean_IR_Decl_params___main(x_1);
x_12 = lean::array_get_size(x_11);
lean::dec(x_11);
x_13 = lean::mk_nat_obj(0u);
x_14 = lean::nat_dec_eq(x_12, x_13);
if (x_14 == 0)
{
obj* x_15; 
lean::dec(x_4);
lean::inc(x_9);
x_15 = l_Lean_IR_EmitCpp_quoteName(x_9);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; 
lean::dec(x_12);
lean::dec(x_9);
lean::dec(x_6);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_8);
lean::cnstr_set(x_16, 1, x_7);
return x_16;
}
else
{
obj* x_17; uint8 x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_17 = lean::cnstr_get(x_15, 0);
lean::inc(x_17);
lean::dec(x_15);
x_18 = l_Lean_IR_ExplicitBoxing_requiresBoxedVersion(x_6, x_1);
lean::dec(x_6);
x_19 = l_Lean_IR_EmitCpp_emitDeclInit___closed__1;
x_20 = lean::string_append(x_19, x_17);
lean::dec(x_17);
x_21 = l_List_reprAux___main___rarg___closed__1;
x_22 = lean::string_append(x_20, x_21);
x_23 = l_Nat_repr(x_12);
x_24 = lean::string_append(x_22, x_23);
lean::dec(x_23);
x_25 = lean::string_append(x_24, x_21);
if (x_18 == 0)
{
obj* x_26; obj* x_27; obj* x_28; 
x_26 = lean::string_append(x_7, x_25);
lean::dec(x_25);
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_8);
lean::cnstr_set(x_27, 1, x_26);
x_28 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_27);
if (lean::obj_tag(x_28) == 0)
{
uint8 x_29; 
x_29 = !lean::is_exclusive(x_28);
if (x_29 == 0)
{
obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
x_30 = lean::cnstr_get(x_28, 1);
x_31 = lean::cnstr_get(x_28, 0);
lean::dec(x_31);
x_32 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_33 = lean::string_append(x_30, x_32);
x_34 = l_IO_println___rarg___closed__1;
x_35 = lean::string_append(x_33, x_34);
lean::cnstr_set(x_28, 1, x_35);
lean::cnstr_set(x_28, 0, x_8);
return x_28;
}
else
{
obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
x_36 = lean::cnstr_get(x_28, 1);
lean::inc(x_36);
lean::dec(x_28);
x_37 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_38 = lean::string_append(x_36, x_37);
x_39 = l_IO_println___rarg___closed__1;
x_40 = lean::string_append(x_38, x_39);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_8);
lean::cnstr_set(x_41, 1, x_40);
return x_41;
}
}
else
{
uint8 x_42; 
x_42 = !lean::is_exclusive(x_28);
if (x_42 == 0)
{
return x_28;
}
else
{
obj* x_43; obj* x_44; obj* x_45; 
x_43 = lean::cnstr_get(x_28, 0);
x_44 = lean::cnstr_get(x_28, 1);
lean::inc(x_44);
lean::inc(x_43);
lean::dec(x_28);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_43);
lean::cnstr_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
x_46 = l_Lean_IR_ExplicitBoxing_mkBoxedName___closed__1;
x_47 = lean_name_mk_string(x_9, x_46);
x_48 = lean::string_append(x_7, x_25);
lean::dec(x_25);
x_49 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_49, 0, x_8);
lean::cnstr_set(x_49, 1, x_48);
x_50 = l_Lean_IR_EmitCpp_emitCppName(x_47, x_2, x_49);
if (lean::obj_tag(x_50) == 0)
{
uint8 x_51; 
x_51 = !lean::is_exclusive(x_50);
if (x_51 == 0)
{
obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; 
x_52 = lean::cnstr_get(x_50, 1);
x_53 = lean::cnstr_get(x_50, 0);
lean::dec(x_53);
x_54 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_55 = lean::string_append(x_52, x_54);
x_56 = l_IO_println___rarg___closed__1;
x_57 = lean::string_append(x_55, x_56);
lean::cnstr_set(x_50, 1, x_57);
lean::cnstr_set(x_50, 0, x_8);
return x_50;
}
else
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
x_58 = lean::cnstr_get(x_50, 1);
lean::inc(x_58);
lean::dec(x_50);
x_59 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_60 = lean::string_append(x_58, x_59);
x_61 = l_IO_println___rarg___closed__1;
x_62 = lean::string_append(x_60, x_61);
x_63 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_63, 0, x_8);
lean::cnstr_set(x_63, 1, x_62);
return x_63;
}
}
else
{
uint8 x_64; 
x_64 = !lean::is_exclusive(x_50);
if (x_64 == 0)
{
return x_50;
}
else
{
obj* x_65; obj* x_66; obj* x_67; 
x_65 = lean::cnstr_get(x_50, 0);
x_66 = lean::cnstr_get(x_50, 1);
lean::inc(x_66);
lean::inc(x_65);
lean::dec(x_50);
x_67 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_67, 0, x_65);
lean::cnstr_set(x_67, 1, x_66);
return x_67;
}
}
}
}
}
else
{
obj* x_68; 
lean::dec(x_12);
lean::inc(x_9);
x_68 = lean::get_init_fn_name_for_core(x_6, x_9);
if (lean::obj_tag(x_68) == 0)
{
obj* x_69; 
lean::dec(x_7);
lean::inc(x_9);
x_69 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_4);
if (lean::obj_tag(x_69) == 0)
{
uint8 x_70; 
x_70 = !lean::is_exclusive(x_69);
if (x_70 == 0)
{
obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; 
x_71 = lean::cnstr_get(x_69, 1);
x_72 = lean::cnstr_get(x_69, 0);
lean::dec(x_72);
x_73 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___closed__1;
x_74 = lean::string_append(x_71, x_73);
lean::cnstr_set(x_69, 1, x_74);
lean::cnstr_set(x_69, 0, x_8);
lean::inc(x_9);
x_75 = l_Lean_IR_EmitCpp_emitCppInitName(x_9, x_2, x_69);
if (lean::obj_tag(x_75) == 0)
{
uint8 x_76; 
x_76 = !lean::is_exclusive(x_75);
if (x_76 == 0)
{
obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; uint8 x_83; uint8 x_84; 
x_77 = lean::cnstr_get(x_75, 1);
x_78 = lean::cnstr_get(x_75, 0);
lean::dec(x_78);
x_79 = l_Lean_IR_EmitCpp_emitDeclInit___closed__2;
x_80 = lean::string_append(x_77, x_79);
x_81 = l_IO_println___rarg___closed__1;
x_82 = lean::string_append(x_80, x_81);
x_83 = l_Lean_IR_Decl_resultType___main(x_1);
x_84 = l_Lean_IR_IRType_isObj___main(x_83);
if (x_84 == 0)
{
uint8 x_85; 
x_85 = l_Lean_IR_IRType_isIrrelevant___main(x_83);
if (x_85 == 0)
{
obj* x_86; 
lean::inc(x_9);
x_86 = l_Lean_IR_EmitCpp_quoteName(x_9);
if (lean::obj_tag(x_86) == 0)
{
lean::dec(x_9);
lean::cnstr_set(x_75, 1, x_82);
lean::cnstr_set(x_75, 0, x_8);
return x_75;
}
else
{
obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; 
x_87 = lean::cnstr_get(x_86, 0);
lean::inc(x_87);
lean::dec(x_86);
x_88 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_89 = lean::string_append(x_88, x_87);
lean::dec(x_87);
x_90 = l_List_reprAux___main___rarg___closed__1;
x_91 = lean::string_append(x_89, x_90);
x_92 = lean::string_append(x_82, x_91);
lean::dec(x_91);
lean::cnstr_set(x_75, 1, x_92);
lean::cnstr_set(x_75, 0, x_8);
x_93 = l_Lean_IR_EmitCpp_emitBoxFn(x_83, x_2, x_75);
if (lean::obj_tag(x_93) == 0)
{
uint8 x_94; 
x_94 = !lean::is_exclusive(x_93);
if (x_94 == 0)
{
obj* x_95; obj* x_96; obj* x_97; obj* x_98; obj* x_99; 
x_95 = lean::cnstr_get(x_93, 1);
x_96 = lean::cnstr_get(x_93, 0);
lean::dec(x_96);
x_97 = l_Prod_HasRepr___rarg___closed__1;
x_98 = lean::string_append(x_95, x_97);
lean::cnstr_set(x_93, 1, x_98);
lean::cnstr_set(x_93, 0, x_8);
x_99 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_93);
if (lean::obj_tag(x_99) == 0)
{
uint8 x_100; 
x_100 = !lean::is_exclusive(x_99);
if (x_100 == 0)
{
obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; 
x_101 = lean::cnstr_get(x_99, 1);
x_102 = lean::cnstr_get(x_99, 0);
lean::dec(x_102);
x_103 = l_Lean_IR_EmitCpp_emitDeclInit___closed__4;
x_104 = lean::string_append(x_101, x_103);
x_105 = lean::string_append(x_104, x_81);
lean::cnstr_set(x_99, 1, x_105);
lean::cnstr_set(x_99, 0, x_8);
return x_99;
}
else
{
obj* x_106; obj* x_107; obj* x_108; obj* x_109; obj* x_110; 
x_106 = lean::cnstr_get(x_99, 1);
lean::inc(x_106);
lean::dec(x_99);
x_107 = l_Lean_IR_EmitCpp_emitDeclInit___closed__4;
x_108 = lean::string_append(x_106, x_107);
x_109 = lean::string_append(x_108, x_81);
x_110 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_110, 0, x_8);
lean::cnstr_set(x_110, 1, x_109);
return x_110;
}
}
else
{
uint8 x_111; 
x_111 = !lean::is_exclusive(x_99);
if (x_111 == 0)
{
return x_99;
}
else
{
obj* x_112; obj* x_113; obj* x_114; 
x_112 = lean::cnstr_get(x_99, 0);
x_113 = lean::cnstr_get(x_99, 1);
lean::inc(x_113);
lean::inc(x_112);
lean::dec(x_99);
x_114 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_114, 0, x_112);
lean::cnstr_set(x_114, 1, x_113);
return x_114;
}
}
}
else
{
obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; 
x_115 = lean::cnstr_get(x_93, 1);
lean::inc(x_115);
lean::dec(x_93);
x_116 = l_Prod_HasRepr___rarg___closed__1;
x_117 = lean::string_append(x_115, x_116);
x_118 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_118, 0, x_8);
lean::cnstr_set(x_118, 1, x_117);
x_119 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_118);
if (lean::obj_tag(x_119) == 0)
{
obj* x_120; obj* x_121; obj* x_122; obj* x_123; obj* x_124; obj* x_125; 
x_120 = lean::cnstr_get(x_119, 1);
lean::inc(x_120);
if (lean::is_exclusive(x_119)) {
 lean::cnstr_release(x_119, 0);
 lean::cnstr_release(x_119, 1);
 x_121 = x_119;
} else {
 lean::dec_ref(x_119);
 x_121 = lean::box(0);
}
x_122 = l_Lean_IR_EmitCpp_emitDeclInit___closed__4;
x_123 = lean::string_append(x_120, x_122);
x_124 = lean::string_append(x_123, x_81);
if (lean::is_scalar(x_121)) {
 x_125 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_125 = x_121;
}
lean::cnstr_set(x_125, 0, x_8);
lean::cnstr_set(x_125, 1, x_124);
return x_125;
}
else
{
obj* x_126; obj* x_127; obj* x_128; obj* x_129; 
x_126 = lean::cnstr_get(x_119, 0);
lean::inc(x_126);
x_127 = lean::cnstr_get(x_119, 1);
lean::inc(x_127);
if (lean::is_exclusive(x_119)) {
 lean::cnstr_release(x_119, 0);
 lean::cnstr_release(x_119, 1);
 x_128 = x_119;
} else {
 lean::dec_ref(x_119);
 x_128 = lean::box(0);
}
if (lean::is_scalar(x_128)) {
 x_129 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_129 = x_128;
}
lean::cnstr_set(x_129, 0, x_126);
lean::cnstr_set(x_129, 1, x_127);
return x_129;
}
}
}
else
{
uint8 x_130; 
lean::dec(x_9);
x_130 = !lean::is_exclusive(x_93);
if (x_130 == 0)
{
return x_93;
}
else
{
obj* x_131; obj* x_132; obj* x_133; 
x_131 = lean::cnstr_get(x_93, 0);
x_132 = lean::cnstr_get(x_93, 1);
lean::inc(x_132);
lean::inc(x_131);
lean::dec(x_93);
x_133 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_133, 0, x_131);
lean::cnstr_set(x_133, 1, x_132);
return x_133;
}
}
}
}
else
{
lean::dec(x_9);
lean::cnstr_set(x_75, 1, x_82);
lean::cnstr_set(x_75, 0, x_8);
return x_75;
}
}
else
{
obj* x_134; obj* x_135; obj* x_136; 
x_134 = l_Lean_IR_EmitCpp_emitDeclInit___closed__5;
x_135 = lean::string_append(x_82, x_134);
lean::cnstr_set(x_75, 1, x_135);
lean::cnstr_set(x_75, 0, x_8);
lean::inc(x_9);
x_136 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_75);
if (lean::obj_tag(x_136) == 0)
{
uint8 x_137; 
x_137 = !lean::is_exclusive(x_136);
if (x_137 == 0)
{
obj* x_138; obj* x_139; obj* x_140; obj* x_141; obj* x_142; obj* x_143; 
x_138 = lean::cnstr_get(x_136, 1);
x_139 = lean::cnstr_get(x_136, 0);
lean::dec(x_139);
x_140 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_141 = lean::string_append(x_138, x_140);
x_142 = lean::string_append(x_141, x_81);
lean::inc(x_9);
x_143 = l_Lean_IR_EmitCpp_quoteName(x_9);
if (lean::obj_tag(x_143) == 0)
{
lean::dec(x_9);
lean::cnstr_set(x_136, 1, x_142);
lean::cnstr_set(x_136, 0, x_8);
return x_136;
}
else
{
obj* x_144; obj* x_145; obj* x_146; obj* x_147; obj* x_148; obj* x_149; obj* x_150; 
x_144 = lean::cnstr_get(x_143, 0);
lean::inc(x_144);
lean::dec(x_143);
x_145 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_146 = lean::string_append(x_145, x_144);
lean::dec(x_144);
x_147 = l_List_reprAux___main___rarg___closed__1;
x_148 = lean::string_append(x_146, x_147);
x_149 = lean::string_append(x_142, x_148);
lean::dec(x_148);
lean::cnstr_set(x_136, 1, x_149);
lean::cnstr_set(x_136, 0, x_8);
x_150 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_136);
if (lean::obj_tag(x_150) == 0)
{
uint8 x_151; 
x_151 = !lean::is_exclusive(x_150);
if (x_151 == 0)
{
obj* x_152; obj* x_153; obj* x_154; obj* x_155; 
x_152 = lean::cnstr_get(x_150, 1);
x_153 = lean::cnstr_get(x_150, 0);
lean::dec(x_153);
x_154 = lean::string_append(x_152, x_140);
x_155 = lean::string_append(x_154, x_81);
lean::cnstr_set(x_150, 1, x_155);
lean::cnstr_set(x_150, 0, x_8);
return x_150;
}
else
{
obj* x_156; obj* x_157; obj* x_158; obj* x_159; 
x_156 = lean::cnstr_get(x_150, 1);
lean::inc(x_156);
lean::dec(x_150);
x_157 = lean::string_append(x_156, x_140);
x_158 = lean::string_append(x_157, x_81);
x_159 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_159, 0, x_8);
lean::cnstr_set(x_159, 1, x_158);
return x_159;
}
}
else
{
uint8 x_160; 
x_160 = !lean::is_exclusive(x_150);
if (x_160 == 0)
{
return x_150;
}
else
{
obj* x_161; obj* x_162; obj* x_163; 
x_161 = lean::cnstr_get(x_150, 0);
x_162 = lean::cnstr_get(x_150, 1);
lean::inc(x_162);
lean::inc(x_161);
lean::dec(x_150);
x_163 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_163, 0, x_161);
lean::cnstr_set(x_163, 1, x_162);
return x_163;
}
}
}
}
else
{
obj* x_164; obj* x_165; obj* x_166; obj* x_167; obj* x_168; 
x_164 = lean::cnstr_get(x_136, 1);
lean::inc(x_164);
lean::dec(x_136);
x_165 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_166 = lean::string_append(x_164, x_165);
x_167 = lean::string_append(x_166, x_81);
lean::inc(x_9);
x_168 = l_Lean_IR_EmitCpp_quoteName(x_9);
if (lean::obj_tag(x_168) == 0)
{
obj* x_169; 
lean::dec(x_9);
x_169 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_169, 0, x_8);
lean::cnstr_set(x_169, 1, x_167);
return x_169;
}
else
{
obj* x_170; obj* x_171; obj* x_172; obj* x_173; obj* x_174; obj* x_175; obj* x_176; obj* x_177; 
x_170 = lean::cnstr_get(x_168, 0);
lean::inc(x_170);
lean::dec(x_168);
x_171 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_172 = lean::string_append(x_171, x_170);
lean::dec(x_170);
x_173 = l_List_reprAux___main___rarg___closed__1;
x_174 = lean::string_append(x_172, x_173);
x_175 = lean::string_append(x_167, x_174);
lean::dec(x_174);
x_176 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_176, 0, x_8);
lean::cnstr_set(x_176, 1, x_175);
x_177 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_176);
if (lean::obj_tag(x_177) == 0)
{
obj* x_178; obj* x_179; obj* x_180; obj* x_181; obj* x_182; 
x_178 = lean::cnstr_get(x_177, 1);
lean::inc(x_178);
if (lean::is_exclusive(x_177)) {
 lean::cnstr_release(x_177, 0);
 lean::cnstr_release(x_177, 1);
 x_179 = x_177;
} else {
 lean::dec_ref(x_177);
 x_179 = lean::box(0);
}
x_180 = lean::string_append(x_178, x_165);
x_181 = lean::string_append(x_180, x_81);
if (lean::is_scalar(x_179)) {
 x_182 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_182 = x_179;
}
lean::cnstr_set(x_182, 0, x_8);
lean::cnstr_set(x_182, 1, x_181);
return x_182;
}
else
{
obj* x_183; obj* x_184; obj* x_185; obj* x_186; 
x_183 = lean::cnstr_get(x_177, 0);
lean::inc(x_183);
x_184 = lean::cnstr_get(x_177, 1);
lean::inc(x_184);
if (lean::is_exclusive(x_177)) {
 lean::cnstr_release(x_177, 0);
 lean::cnstr_release(x_177, 1);
 x_185 = x_177;
} else {
 lean::dec_ref(x_177);
 x_185 = lean::box(0);
}
if (lean::is_scalar(x_185)) {
 x_186 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_186 = x_185;
}
lean::cnstr_set(x_186, 0, x_183);
lean::cnstr_set(x_186, 1, x_184);
return x_186;
}
}
}
}
else
{
uint8 x_187; 
lean::dec(x_9);
x_187 = !lean::is_exclusive(x_136);
if (x_187 == 0)
{
return x_136;
}
else
{
obj* x_188; obj* x_189; obj* x_190; 
x_188 = lean::cnstr_get(x_136, 0);
x_189 = lean::cnstr_get(x_136, 1);
lean::inc(x_189);
lean::inc(x_188);
lean::dec(x_136);
x_190 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_190, 0, x_188);
lean::cnstr_set(x_190, 1, x_189);
return x_190;
}
}
}
}
else
{
obj* x_191; obj* x_192; obj* x_193; obj* x_194; obj* x_195; uint8 x_196; uint8 x_197; 
x_191 = lean::cnstr_get(x_75, 1);
lean::inc(x_191);
lean::dec(x_75);
x_192 = l_Lean_IR_EmitCpp_emitDeclInit___closed__2;
x_193 = lean::string_append(x_191, x_192);
x_194 = l_IO_println___rarg___closed__1;
x_195 = lean::string_append(x_193, x_194);
x_196 = l_Lean_IR_Decl_resultType___main(x_1);
x_197 = l_Lean_IR_IRType_isObj___main(x_196);
if (x_197 == 0)
{
uint8 x_198; 
x_198 = l_Lean_IR_IRType_isIrrelevant___main(x_196);
if (x_198 == 0)
{
obj* x_199; 
lean::inc(x_9);
x_199 = l_Lean_IR_EmitCpp_quoteName(x_9);
if (lean::obj_tag(x_199) == 0)
{
obj* x_200; 
lean::dec(x_9);
x_200 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_200, 0, x_8);
lean::cnstr_set(x_200, 1, x_195);
return x_200;
}
else
{
obj* x_201; obj* x_202; obj* x_203; obj* x_204; obj* x_205; obj* x_206; obj* x_207; obj* x_208; 
x_201 = lean::cnstr_get(x_199, 0);
lean::inc(x_201);
lean::dec(x_199);
x_202 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_203 = lean::string_append(x_202, x_201);
lean::dec(x_201);
x_204 = l_List_reprAux___main___rarg___closed__1;
x_205 = lean::string_append(x_203, x_204);
x_206 = lean::string_append(x_195, x_205);
lean::dec(x_205);
x_207 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_207, 0, x_8);
lean::cnstr_set(x_207, 1, x_206);
x_208 = l_Lean_IR_EmitCpp_emitBoxFn(x_196, x_2, x_207);
if (lean::obj_tag(x_208) == 0)
{
obj* x_209; obj* x_210; obj* x_211; obj* x_212; obj* x_213; obj* x_214; 
x_209 = lean::cnstr_get(x_208, 1);
lean::inc(x_209);
if (lean::is_exclusive(x_208)) {
 lean::cnstr_release(x_208, 0);
 lean::cnstr_release(x_208, 1);
 x_210 = x_208;
} else {
 lean::dec_ref(x_208);
 x_210 = lean::box(0);
}
x_211 = l_Prod_HasRepr___rarg___closed__1;
x_212 = lean::string_append(x_209, x_211);
if (lean::is_scalar(x_210)) {
 x_213 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_213 = x_210;
}
lean::cnstr_set(x_213, 0, x_8);
lean::cnstr_set(x_213, 1, x_212);
x_214 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_213);
if (lean::obj_tag(x_214) == 0)
{
obj* x_215; obj* x_216; obj* x_217; obj* x_218; obj* x_219; obj* x_220; 
x_215 = lean::cnstr_get(x_214, 1);
lean::inc(x_215);
if (lean::is_exclusive(x_214)) {
 lean::cnstr_release(x_214, 0);
 lean::cnstr_release(x_214, 1);
 x_216 = x_214;
} else {
 lean::dec_ref(x_214);
 x_216 = lean::box(0);
}
x_217 = l_Lean_IR_EmitCpp_emitDeclInit___closed__4;
x_218 = lean::string_append(x_215, x_217);
x_219 = lean::string_append(x_218, x_194);
if (lean::is_scalar(x_216)) {
 x_220 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_220 = x_216;
}
lean::cnstr_set(x_220, 0, x_8);
lean::cnstr_set(x_220, 1, x_219);
return x_220;
}
else
{
obj* x_221; obj* x_222; obj* x_223; obj* x_224; 
x_221 = lean::cnstr_get(x_214, 0);
lean::inc(x_221);
x_222 = lean::cnstr_get(x_214, 1);
lean::inc(x_222);
if (lean::is_exclusive(x_214)) {
 lean::cnstr_release(x_214, 0);
 lean::cnstr_release(x_214, 1);
 x_223 = x_214;
} else {
 lean::dec_ref(x_214);
 x_223 = lean::box(0);
}
if (lean::is_scalar(x_223)) {
 x_224 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_224 = x_223;
}
lean::cnstr_set(x_224, 0, x_221);
lean::cnstr_set(x_224, 1, x_222);
return x_224;
}
}
else
{
obj* x_225; obj* x_226; obj* x_227; obj* x_228; 
lean::dec(x_9);
x_225 = lean::cnstr_get(x_208, 0);
lean::inc(x_225);
x_226 = lean::cnstr_get(x_208, 1);
lean::inc(x_226);
if (lean::is_exclusive(x_208)) {
 lean::cnstr_release(x_208, 0);
 lean::cnstr_release(x_208, 1);
 x_227 = x_208;
} else {
 lean::dec_ref(x_208);
 x_227 = lean::box(0);
}
if (lean::is_scalar(x_227)) {
 x_228 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_228 = x_227;
}
lean::cnstr_set(x_228, 0, x_225);
lean::cnstr_set(x_228, 1, x_226);
return x_228;
}
}
}
else
{
obj* x_229; 
lean::dec(x_9);
x_229 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_229, 0, x_8);
lean::cnstr_set(x_229, 1, x_195);
return x_229;
}
}
else
{
obj* x_230; obj* x_231; obj* x_232; obj* x_233; 
x_230 = l_Lean_IR_EmitCpp_emitDeclInit___closed__5;
x_231 = lean::string_append(x_195, x_230);
x_232 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_232, 0, x_8);
lean::cnstr_set(x_232, 1, x_231);
lean::inc(x_9);
x_233 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_232);
if (lean::obj_tag(x_233) == 0)
{
obj* x_234; obj* x_235; obj* x_236; obj* x_237; obj* x_238; obj* x_239; 
x_234 = lean::cnstr_get(x_233, 1);
lean::inc(x_234);
if (lean::is_exclusive(x_233)) {
 lean::cnstr_release(x_233, 0);
 lean::cnstr_release(x_233, 1);
 x_235 = x_233;
} else {
 lean::dec_ref(x_233);
 x_235 = lean::box(0);
}
x_236 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_237 = lean::string_append(x_234, x_236);
x_238 = lean::string_append(x_237, x_194);
lean::inc(x_9);
x_239 = l_Lean_IR_EmitCpp_quoteName(x_9);
if (lean::obj_tag(x_239) == 0)
{
obj* x_240; 
lean::dec(x_9);
if (lean::is_scalar(x_235)) {
 x_240 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_240 = x_235;
}
lean::cnstr_set(x_240, 0, x_8);
lean::cnstr_set(x_240, 1, x_238);
return x_240;
}
else
{
obj* x_241; obj* x_242; obj* x_243; obj* x_244; obj* x_245; obj* x_246; obj* x_247; obj* x_248; 
x_241 = lean::cnstr_get(x_239, 0);
lean::inc(x_241);
lean::dec(x_239);
x_242 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_243 = lean::string_append(x_242, x_241);
lean::dec(x_241);
x_244 = l_List_reprAux___main___rarg___closed__1;
x_245 = lean::string_append(x_243, x_244);
x_246 = lean::string_append(x_238, x_245);
lean::dec(x_245);
if (lean::is_scalar(x_235)) {
 x_247 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_247 = x_235;
}
lean::cnstr_set(x_247, 0, x_8);
lean::cnstr_set(x_247, 1, x_246);
x_248 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_247);
if (lean::obj_tag(x_248) == 0)
{
obj* x_249; obj* x_250; obj* x_251; obj* x_252; obj* x_253; 
x_249 = lean::cnstr_get(x_248, 1);
lean::inc(x_249);
if (lean::is_exclusive(x_248)) {
 lean::cnstr_release(x_248, 0);
 lean::cnstr_release(x_248, 1);
 x_250 = x_248;
} else {
 lean::dec_ref(x_248);
 x_250 = lean::box(0);
}
x_251 = lean::string_append(x_249, x_236);
x_252 = lean::string_append(x_251, x_194);
if (lean::is_scalar(x_250)) {
 x_253 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_253 = x_250;
}
lean::cnstr_set(x_253, 0, x_8);
lean::cnstr_set(x_253, 1, x_252);
return x_253;
}
else
{
obj* x_254; obj* x_255; obj* x_256; obj* x_257; 
x_254 = lean::cnstr_get(x_248, 0);
lean::inc(x_254);
x_255 = lean::cnstr_get(x_248, 1);
lean::inc(x_255);
if (lean::is_exclusive(x_248)) {
 lean::cnstr_release(x_248, 0);
 lean::cnstr_release(x_248, 1);
 x_256 = x_248;
} else {
 lean::dec_ref(x_248);
 x_256 = lean::box(0);
}
if (lean::is_scalar(x_256)) {
 x_257 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_257 = x_256;
}
lean::cnstr_set(x_257, 0, x_254);
lean::cnstr_set(x_257, 1, x_255);
return x_257;
}
}
}
else
{
obj* x_258; obj* x_259; obj* x_260; obj* x_261; 
lean::dec(x_9);
x_258 = lean::cnstr_get(x_233, 0);
lean::inc(x_258);
x_259 = lean::cnstr_get(x_233, 1);
lean::inc(x_259);
if (lean::is_exclusive(x_233)) {
 lean::cnstr_release(x_233, 0);
 lean::cnstr_release(x_233, 1);
 x_260 = x_233;
} else {
 lean::dec_ref(x_233);
 x_260 = lean::box(0);
}
if (lean::is_scalar(x_260)) {
 x_261 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_261 = x_260;
}
lean::cnstr_set(x_261, 0, x_258);
lean::cnstr_set(x_261, 1, x_259);
return x_261;
}
}
}
}
else
{
uint8 x_262; 
lean::dec(x_9);
x_262 = !lean::is_exclusive(x_75);
if (x_262 == 0)
{
return x_75;
}
else
{
obj* x_263; obj* x_264; obj* x_265; 
x_263 = lean::cnstr_get(x_75, 0);
x_264 = lean::cnstr_get(x_75, 1);
lean::inc(x_264);
lean::inc(x_263);
lean::dec(x_75);
x_265 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_265, 0, x_263);
lean::cnstr_set(x_265, 1, x_264);
return x_265;
}
}
}
else
{
obj* x_266; obj* x_267; obj* x_268; obj* x_269; obj* x_270; 
x_266 = lean::cnstr_get(x_69, 1);
lean::inc(x_266);
lean::dec(x_69);
x_267 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___closed__1;
x_268 = lean::string_append(x_266, x_267);
x_269 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_269, 0, x_8);
lean::cnstr_set(x_269, 1, x_268);
lean::inc(x_9);
x_270 = l_Lean_IR_EmitCpp_emitCppInitName(x_9, x_2, x_269);
if (lean::obj_tag(x_270) == 0)
{
obj* x_271; obj* x_272; obj* x_273; obj* x_274; obj* x_275; obj* x_276; uint8 x_277; uint8 x_278; 
x_271 = lean::cnstr_get(x_270, 1);
lean::inc(x_271);
if (lean::is_exclusive(x_270)) {
 lean::cnstr_release(x_270, 0);
 lean::cnstr_release(x_270, 1);
 x_272 = x_270;
} else {
 lean::dec_ref(x_270);
 x_272 = lean::box(0);
}
x_273 = l_Lean_IR_EmitCpp_emitDeclInit___closed__2;
x_274 = lean::string_append(x_271, x_273);
x_275 = l_IO_println___rarg___closed__1;
x_276 = lean::string_append(x_274, x_275);
x_277 = l_Lean_IR_Decl_resultType___main(x_1);
x_278 = l_Lean_IR_IRType_isObj___main(x_277);
if (x_278 == 0)
{
uint8 x_279; 
x_279 = l_Lean_IR_IRType_isIrrelevant___main(x_277);
if (x_279 == 0)
{
obj* x_280; 
lean::inc(x_9);
x_280 = l_Lean_IR_EmitCpp_quoteName(x_9);
if (lean::obj_tag(x_280) == 0)
{
obj* x_281; 
lean::dec(x_9);
if (lean::is_scalar(x_272)) {
 x_281 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_281 = x_272;
}
lean::cnstr_set(x_281, 0, x_8);
lean::cnstr_set(x_281, 1, x_276);
return x_281;
}
else
{
obj* x_282; obj* x_283; obj* x_284; obj* x_285; obj* x_286; obj* x_287; obj* x_288; obj* x_289; 
x_282 = lean::cnstr_get(x_280, 0);
lean::inc(x_282);
lean::dec(x_280);
x_283 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_284 = lean::string_append(x_283, x_282);
lean::dec(x_282);
x_285 = l_List_reprAux___main___rarg___closed__1;
x_286 = lean::string_append(x_284, x_285);
x_287 = lean::string_append(x_276, x_286);
lean::dec(x_286);
if (lean::is_scalar(x_272)) {
 x_288 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_288 = x_272;
}
lean::cnstr_set(x_288, 0, x_8);
lean::cnstr_set(x_288, 1, x_287);
x_289 = l_Lean_IR_EmitCpp_emitBoxFn(x_277, x_2, x_288);
if (lean::obj_tag(x_289) == 0)
{
obj* x_290; obj* x_291; obj* x_292; obj* x_293; obj* x_294; obj* x_295; 
x_290 = lean::cnstr_get(x_289, 1);
lean::inc(x_290);
if (lean::is_exclusive(x_289)) {
 lean::cnstr_release(x_289, 0);
 lean::cnstr_release(x_289, 1);
 x_291 = x_289;
} else {
 lean::dec_ref(x_289);
 x_291 = lean::box(0);
}
x_292 = l_Prod_HasRepr___rarg___closed__1;
x_293 = lean::string_append(x_290, x_292);
if (lean::is_scalar(x_291)) {
 x_294 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_294 = x_291;
}
lean::cnstr_set(x_294, 0, x_8);
lean::cnstr_set(x_294, 1, x_293);
x_295 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_294);
if (lean::obj_tag(x_295) == 0)
{
obj* x_296; obj* x_297; obj* x_298; obj* x_299; obj* x_300; obj* x_301; 
x_296 = lean::cnstr_get(x_295, 1);
lean::inc(x_296);
if (lean::is_exclusive(x_295)) {
 lean::cnstr_release(x_295, 0);
 lean::cnstr_release(x_295, 1);
 x_297 = x_295;
} else {
 lean::dec_ref(x_295);
 x_297 = lean::box(0);
}
x_298 = l_Lean_IR_EmitCpp_emitDeclInit___closed__4;
x_299 = lean::string_append(x_296, x_298);
x_300 = lean::string_append(x_299, x_275);
if (lean::is_scalar(x_297)) {
 x_301 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_301 = x_297;
}
lean::cnstr_set(x_301, 0, x_8);
lean::cnstr_set(x_301, 1, x_300);
return x_301;
}
else
{
obj* x_302; obj* x_303; obj* x_304; obj* x_305; 
x_302 = lean::cnstr_get(x_295, 0);
lean::inc(x_302);
x_303 = lean::cnstr_get(x_295, 1);
lean::inc(x_303);
if (lean::is_exclusive(x_295)) {
 lean::cnstr_release(x_295, 0);
 lean::cnstr_release(x_295, 1);
 x_304 = x_295;
} else {
 lean::dec_ref(x_295);
 x_304 = lean::box(0);
}
if (lean::is_scalar(x_304)) {
 x_305 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_305 = x_304;
}
lean::cnstr_set(x_305, 0, x_302);
lean::cnstr_set(x_305, 1, x_303);
return x_305;
}
}
else
{
obj* x_306; obj* x_307; obj* x_308; obj* x_309; 
lean::dec(x_9);
x_306 = lean::cnstr_get(x_289, 0);
lean::inc(x_306);
x_307 = lean::cnstr_get(x_289, 1);
lean::inc(x_307);
if (lean::is_exclusive(x_289)) {
 lean::cnstr_release(x_289, 0);
 lean::cnstr_release(x_289, 1);
 x_308 = x_289;
} else {
 lean::dec_ref(x_289);
 x_308 = lean::box(0);
}
if (lean::is_scalar(x_308)) {
 x_309 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_309 = x_308;
}
lean::cnstr_set(x_309, 0, x_306);
lean::cnstr_set(x_309, 1, x_307);
return x_309;
}
}
}
else
{
obj* x_310; 
lean::dec(x_9);
if (lean::is_scalar(x_272)) {
 x_310 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_310 = x_272;
}
lean::cnstr_set(x_310, 0, x_8);
lean::cnstr_set(x_310, 1, x_276);
return x_310;
}
}
else
{
obj* x_311; obj* x_312; obj* x_313; obj* x_314; 
x_311 = l_Lean_IR_EmitCpp_emitDeclInit___closed__5;
x_312 = lean::string_append(x_276, x_311);
if (lean::is_scalar(x_272)) {
 x_313 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_313 = x_272;
}
lean::cnstr_set(x_313, 0, x_8);
lean::cnstr_set(x_313, 1, x_312);
lean::inc(x_9);
x_314 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_313);
if (lean::obj_tag(x_314) == 0)
{
obj* x_315; obj* x_316; obj* x_317; obj* x_318; obj* x_319; obj* x_320; 
x_315 = lean::cnstr_get(x_314, 1);
lean::inc(x_315);
if (lean::is_exclusive(x_314)) {
 lean::cnstr_release(x_314, 0);
 lean::cnstr_release(x_314, 1);
 x_316 = x_314;
} else {
 lean::dec_ref(x_314);
 x_316 = lean::box(0);
}
x_317 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_318 = lean::string_append(x_315, x_317);
x_319 = lean::string_append(x_318, x_275);
lean::inc(x_9);
x_320 = l_Lean_IR_EmitCpp_quoteName(x_9);
if (lean::obj_tag(x_320) == 0)
{
obj* x_321; 
lean::dec(x_9);
if (lean::is_scalar(x_316)) {
 x_321 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_321 = x_316;
}
lean::cnstr_set(x_321, 0, x_8);
lean::cnstr_set(x_321, 1, x_319);
return x_321;
}
else
{
obj* x_322; obj* x_323; obj* x_324; obj* x_325; obj* x_326; obj* x_327; obj* x_328; obj* x_329; 
x_322 = lean::cnstr_get(x_320, 0);
lean::inc(x_322);
lean::dec(x_320);
x_323 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_324 = lean::string_append(x_323, x_322);
lean::dec(x_322);
x_325 = l_List_reprAux___main___rarg___closed__1;
x_326 = lean::string_append(x_324, x_325);
x_327 = lean::string_append(x_319, x_326);
lean::dec(x_326);
if (lean::is_scalar(x_316)) {
 x_328 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_328 = x_316;
}
lean::cnstr_set(x_328, 0, x_8);
lean::cnstr_set(x_328, 1, x_327);
x_329 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_328);
if (lean::obj_tag(x_329) == 0)
{
obj* x_330; obj* x_331; obj* x_332; obj* x_333; obj* x_334; 
x_330 = lean::cnstr_get(x_329, 1);
lean::inc(x_330);
if (lean::is_exclusive(x_329)) {
 lean::cnstr_release(x_329, 0);
 lean::cnstr_release(x_329, 1);
 x_331 = x_329;
} else {
 lean::dec_ref(x_329);
 x_331 = lean::box(0);
}
x_332 = lean::string_append(x_330, x_317);
x_333 = lean::string_append(x_332, x_275);
if (lean::is_scalar(x_331)) {
 x_334 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_334 = x_331;
}
lean::cnstr_set(x_334, 0, x_8);
lean::cnstr_set(x_334, 1, x_333);
return x_334;
}
else
{
obj* x_335; obj* x_336; obj* x_337; obj* x_338; 
x_335 = lean::cnstr_get(x_329, 0);
lean::inc(x_335);
x_336 = lean::cnstr_get(x_329, 1);
lean::inc(x_336);
if (lean::is_exclusive(x_329)) {
 lean::cnstr_release(x_329, 0);
 lean::cnstr_release(x_329, 1);
 x_337 = x_329;
} else {
 lean::dec_ref(x_329);
 x_337 = lean::box(0);
}
if (lean::is_scalar(x_337)) {
 x_338 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_338 = x_337;
}
lean::cnstr_set(x_338, 0, x_335);
lean::cnstr_set(x_338, 1, x_336);
return x_338;
}
}
}
else
{
obj* x_339; obj* x_340; obj* x_341; obj* x_342; 
lean::dec(x_9);
x_339 = lean::cnstr_get(x_314, 0);
lean::inc(x_339);
x_340 = lean::cnstr_get(x_314, 1);
lean::inc(x_340);
if (lean::is_exclusive(x_314)) {
 lean::cnstr_release(x_314, 0);
 lean::cnstr_release(x_314, 1);
 x_341 = x_314;
} else {
 lean::dec_ref(x_314);
 x_341 = lean::box(0);
}
if (lean::is_scalar(x_341)) {
 x_342 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_342 = x_341;
}
lean::cnstr_set(x_342, 0, x_339);
lean::cnstr_set(x_342, 1, x_340);
return x_342;
}
}
}
else
{
obj* x_343; obj* x_344; obj* x_345; obj* x_346; 
lean::dec(x_9);
x_343 = lean::cnstr_get(x_270, 0);
lean::inc(x_343);
x_344 = lean::cnstr_get(x_270, 1);
lean::inc(x_344);
if (lean::is_exclusive(x_270)) {
 lean::cnstr_release(x_270, 0);
 lean::cnstr_release(x_270, 1);
 x_345 = x_270;
} else {
 lean::dec_ref(x_270);
 x_345 = lean::box(0);
}
if (lean::is_scalar(x_345)) {
 x_346 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_346 = x_345;
}
lean::cnstr_set(x_346, 0, x_343);
lean::cnstr_set(x_346, 1, x_344);
return x_346;
}
}
}
else
{
uint8 x_347; 
lean::dec(x_9);
x_347 = !lean::is_exclusive(x_69);
if (x_347 == 0)
{
return x_69;
}
else
{
obj* x_348; obj* x_349; obj* x_350; 
x_348 = lean::cnstr_get(x_69, 0);
x_349 = lean::cnstr_get(x_69, 1);
lean::inc(x_349);
lean::inc(x_348);
lean::dec(x_69);
x_350 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_350, 0, x_348);
lean::cnstr_set(x_350, 1, x_349);
return x_350;
}
}
}
else
{
obj* x_351; obj* x_352; obj* x_353; obj* x_354; obj* x_355; 
lean::dec(x_4);
x_351 = lean::cnstr_get(x_68, 0);
lean::inc(x_351);
lean::dec(x_68);
x_352 = l_Lean_IR_EmitCpp_emitDeclInit___closed__6;
x_353 = lean::string_append(x_7, x_352);
x_354 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_354, 0, x_8);
lean::cnstr_set(x_354, 1, x_353);
x_355 = l_Lean_IR_EmitCpp_emitCppName(x_351, x_2, x_354);
if (lean::obj_tag(x_355) == 0)
{
uint8 x_356; 
x_356 = !lean::is_exclusive(x_355);
if (x_356 == 0)
{
obj* x_357; obj* x_358; obj* x_359; obj* x_360; obj* x_361; obj* x_362; obj* x_363; obj* x_364; obj* x_365; obj* x_366; 
x_357 = lean::cnstr_get(x_355, 1);
x_358 = lean::cnstr_get(x_355, 0);
lean::dec(x_358);
x_359 = l_Lean_IR_EmitCpp_emitMainFn___closed__4;
x_360 = lean::string_append(x_357, x_359);
x_361 = l_IO_println___rarg___closed__1;
x_362 = lean::string_append(x_360, x_361);
x_363 = l_Lean_IR_EmitCpp_emitDeclInit___closed__7;
x_364 = lean::string_append(x_362, x_363);
x_365 = lean::string_append(x_364, x_361);
lean::cnstr_set(x_355, 1, x_365);
lean::cnstr_set(x_355, 0, x_8);
lean::inc(x_9);
x_366 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_355);
if (lean::obj_tag(x_366) == 0)
{
uint8 x_367; 
x_367 = !lean::is_exclusive(x_366);
if (x_367 == 0)
{
obj* x_368; obj* x_369; obj* x_370; obj* x_371; obj* x_372; uint8 x_373; uint8 x_374; 
x_368 = lean::cnstr_get(x_366, 1);
x_369 = lean::cnstr_get(x_366, 0);
lean::dec(x_369);
x_370 = l_Lean_IR_EmitCpp_emitDeclInit___closed__8;
x_371 = lean::string_append(x_368, x_370);
x_372 = lean::string_append(x_371, x_361);
x_373 = l_Lean_IR_Decl_resultType___main(x_1);
x_374 = l_Lean_IR_IRType_isObj___main(x_373);
if (x_374 == 0)
{
uint8 x_375; 
x_375 = l_Lean_IR_IRType_isIrrelevant___main(x_373);
if (x_375 == 0)
{
obj* x_376; 
lean::inc(x_9);
x_376 = l_Lean_IR_EmitCpp_quoteName(x_9);
if (lean::obj_tag(x_376) == 0)
{
lean::dec(x_9);
lean::cnstr_set(x_366, 1, x_372);
lean::cnstr_set(x_366, 0, x_8);
return x_366;
}
else
{
obj* x_377; obj* x_378; obj* x_379; obj* x_380; obj* x_381; obj* x_382; obj* x_383; 
x_377 = lean::cnstr_get(x_376, 0);
lean::inc(x_377);
lean::dec(x_376);
x_378 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_379 = lean::string_append(x_378, x_377);
lean::dec(x_377);
x_380 = l_List_reprAux___main___rarg___closed__1;
x_381 = lean::string_append(x_379, x_380);
x_382 = lean::string_append(x_372, x_381);
lean::dec(x_381);
lean::cnstr_set(x_366, 1, x_382);
lean::cnstr_set(x_366, 0, x_8);
x_383 = l_Lean_IR_EmitCpp_emitBoxFn(x_373, x_2, x_366);
if (lean::obj_tag(x_383) == 0)
{
uint8 x_384; 
x_384 = !lean::is_exclusive(x_383);
if (x_384 == 0)
{
obj* x_385; obj* x_386; obj* x_387; obj* x_388; obj* x_389; 
x_385 = lean::cnstr_get(x_383, 1);
x_386 = lean::cnstr_get(x_383, 0);
lean::dec(x_386);
x_387 = l_Prod_HasRepr___rarg___closed__1;
x_388 = lean::string_append(x_385, x_387);
lean::cnstr_set(x_383, 1, x_388);
lean::cnstr_set(x_383, 0, x_8);
x_389 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_383);
if (lean::obj_tag(x_389) == 0)
{
uint8 x_390; 
x_390 = !lean::is_exclusive(x_389);
if (x_390 == 0)
{
obj* x_391; obj* x_392; obj* x_393; obj* x_394; obj* x_395; 
x_391 = lean::cnstr_get(x_389, 1);
x_392 = lean::cnstr_get(x_389, 0);
lean::dec(x_392);
x_393 = l_Lean_IR_EmitCpp_emitDeclInit___closed__4;
x_394 = lean::string_append(x_391, x_393);
x_395 = lean::string_append(x_394, x_361);
lean::cnstr_set(x_389, 1, x_395);
lean::cnstr_set(x_389, 0, x_8);
return x_389;
}
else
{
obj* x_396; obj* x_397; obj* x_398; obj* x_399; obj* x_400; 
x_396 = lean::cnstr_get(x_389, 1);
lean::inc(x_396);
lean::dec(x_389);
x_397 = l_Lean_IR_EmitCpp_emitDeclInit___closed__4;
x_398 = lean::string_append(x_396, x_397);
x_399 = lean::string_append(x_398, x_361);
x_400 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_400, 0, x_8);
lean::cnstr_set(x_400, 1, x_399);
return x_400;
}
}
else
{
uint8 x_401; 
x_401 = !lean::is_exclusive(x_389);
if (x_401 == 0)
{
return x_389;
}
else
{
obj* x_402; obj* x_403; obj* x_404; 
x_402 = lean::cnstr_get(x_389, 0);
x_403 = lean::cnstr_get(x_389, 1);
lean::inc(x_403);
lean::inc(x_402);
lean::dec(x_389);
x_404 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_404, 0, x_402);
lean::cnstr_set(x_404, 1, x_403);
return x_404;
}
}
}
else
{
obj* x_405; obj* x_406; obj* x_407; obj* x_408; obj* x_409; 
x_405 = lean::cnstr_get(x_383, 1);
lean::inc(x_405);
lean::dec(x_383);
x_406 = l_Prod_HasRepr___rarg___closed__1;
x_407 = lean::string_append(x_405, x_406);
x_408 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_408, 0, x_8);
lean::cnstr_set(x_408, 1, x_407);
x_409 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_408);
if (lean::obj_tag(x_409) == 0)
{
obj* x_410; obj* x_411; obj* x_412; obj* x_413; obj* x_414; obj* x_415; 
x_410 = lean::cnstr_get(x_409, 1);
lean::inc(x_410);
if (lean::is_exclusive(x_409)) {
 lean::cnstr_release(x_409, 0);
 lean::cnstr_release(x_409, 1);
 x_411 = x_409;
} else {
 lean::dec_ref(x_409);
 x_411 = lean::box(0);
}
x_412 = l_Lean_IR_EmitCpp_emitDeclInit___closed__4;
x_413 = lean::string_append(x_410, x_412);
x_414 = lean::string_append(x_413, x_361);
if (lean::is_scalar(x_411)) {
 x_415 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_415 = x_411;
}
lean::cnstr_set(x_415, 0, x_8);
lean::cnstr_set(x_415, 1, x_414);
return x_415;
}
else
{
obj* x_416; obj* x_417; obj* x_418; obj* x_419; 
x_416 = lean::cnstr_get(x_409, 0);
lean::inc(x_416);
x_417 = lean::cnstr_get(x_409, 1);
lean::inc(x_417);
if (lean::is_exclusive(x_409)) {
 lean::cnstr_release(x_409, 0);
 lean::cnstr_release(x_409, 1);
 x_418 = x_409;
} else {
 lean::dec_ref(x_409);
 x_418 = lean::box(0);
}
if (lean::is_scalar(x_418)) {
 x_419 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_419 = x_418;
}
lean::cnstr_set(x_419, 0, x_416);
lean::cnstr_set(x_419, 1, x_417);
return x_419;
}
}
}
else
{
uint8 x_420; 
lean::dec(x_9);
x_420 = !lean::is_exclusive(x_383);
if (x_420 == 0)
{
return x_383;
}
else
{
obj* x_421; obj* x_422; obj* x_423; 
x_421 = lean::cnstr_get(x_383, 0);
x_422 = lean::cnstr_get(x_383, 1);
lean::inc(x_422);
lean::inc(x_421);
lean::dec(x_383);
x_423 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_423, 0, x_421);
lean::cnstr_set(x_423, 1, x_422);
return x_423;
}
}
}
}
else
{
lean::dec(x_9);
lean::cnstr_set(x_366, 1, x_372);
lean::cnstr_set(x_366, 0, x_8);
return x_366;
}
}
else
{
obj* x_424; obj* x_425; obj* x_426; 
x_424 = l_Lean_IR_EmitCpp_emitDeclInit___closed__5;
x_425 = lean::string_append(x_372, x_424);
lean::cnstr_set(x_366, 1, x_425);
lean::cnstr_set(x_366, 0, x_8);
lean::inc(x_9);
x_426 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_366);
if (lean::obj_tag(x_426) == 0)
{
uint8 x_427; 
x_427 = !lean::is_exclusive(x_426);
if (x_427 == 0)
{
obj* x_428; obj* x_429; obj* x_430; obj* x_431; obj* x_432; obj* x_433; 
x_428 = lean::cnstr_get(x_426, 1);
x_429 = lean::cnstr_get(x_426, 0);
lean::dec(x_429);
x_430 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_431 = lean::string_append(x_428, x_430);
x_432 = lean::string_append(x_431, x_361);
lean::inc(x_9);
x_433 = l_Lean_IR_EmitCpp_quoteName(x_9);
if (lean::obj_tag(x_433) == 0)
{
lean::dec(x_9);
lean::cnstr_set(x_426, 1, x_432);
lean::cnstr_set(x_426, 0, x_8);
return x_426;
}
else
{
obj* x_434; obj* x_435; obj* x_436; obj* x_437; obj* x_438; obj* x_439; obj* x_440; 
x_434 = lean::cnstr_get(x_433, 0);
lean::inc(x_434);
lean::dec(x_433);
x_435 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_436 = lean::string_append(x_435, x_434);
lean::dec(x_434);
x_437 = l_List_reprAux___main___rarg___closed__1;
x_438 = lean::string_append(x_436, x_437);
x_439 = lean::string_append(x_432, x_438);
lean::dec(x_438);
lean::cnstr_set(x_426, 1, x_439);
lean::cnstr_set(x_426, 0, x_8);
x_440 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_426);
if (lean::obj_tag(x_440) == 0)
{
uint8 x_441; 
x_441 = !lean::is_exclusive(x_440);
if (x_441 == 0)
{
obj* x_442; obj* x_443; obj* x_444; obj* x_445; 
x_442 = lean::cnstr_get(x_440, 1);
x_443 = lean::cnstr_get(x_440, 0);
lean::dec(x_443);
x_444 = lean::string_append(x_442, x_430);
x_445 = lean::string_append(x_444, x_361);
lean::cnstr_set(x_440, 1, x_445);
lean::cnstr_set(x_440, 0, x_8);
return x_440;
}
else
{
obj* x_446; obj* x_447; obj* x_448; obj* x_449; 
x_446 = lean::cnstr_get(x_440, 1);
lean::inc(x_446);
lean::dec(x_440);
x_447 = lean::string_append(x_446, x_430);
x_448 = lean::string_append(x_447, x_361);
x_449 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_449, 0, x_8);
lean::cnstr_set(x_449, 1, x_448);
return x_449;
}
}
else
{
uint8 x_450; 
x_450 = !lean::is_exclusive(x_440);
if (x_450 == 0)
{
return x_440;
}
else
{
obj* x_451; obj* x_452; obj* x_453; 
x_451 = lean::cnstr_get(x_440, 0);
x_452 = lean::cnstr_get(x_440, 1);
lean::inc(x_452);
lean::inc(x_451);
lean::dec(x_440);
x_453 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_453, 0, x_451);
lean::cnstr_set(x_453, 1, x_452);
return x_453;
}
}
}
}
else
{
obj* x_454; obj* x_455; obj* x_456; obj* x_457; obj* x_458; 
x_454 = lean::cnstr_get(x_426, 1);
lean::inc(x_454);
lean::dec(x_426);
x_455 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_456 = lean::string_append(x_454, x_455);
x_457 = lean::string_append(x_456, x_361);
lean::inc(x_9);
x_458 = l_Lean_IR_EmitCpp_quoteName(x_9);
if (lean::obj_tag(x_458) == 0)
{
obj* x_459; 
lean::dec(x_9);
x_459 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_459, 0, x_8);
lean::cnstr_set(x_459, 1, x_457);
return x_459;
}
else
{
obj* x_460; obj* x_461; obj* x_462; obj* x_463; obj* x_464; obj* x_465; obj* x_466; obj* x_467; 
x_460 = lean::cnstr_get(x_458, 0);
lean::inc(x_460);
lean::dec(x_458);
x_461 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_462 = lean::string_append(x_461, x_460);
lean::dec(x_460);
x_463 = l_List_reprAux___main___rarg___closed__1;
x_464 = lean::string_append(x_462, x_463);
x_465 = lean::string_append(x_457, x_464);
lean::dec(x_464);
x_466 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_466, 0, x_8);
lean::cnstr_set(x_466, 1, x_465);
x_467 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_466);
if (lean::obj_tag(x_467) == 0)
{
obj* x_468; obj* x_469; obj* x_470; obj* x_471; obj* x_472; 
x_468 = lean::cnstr_get(x_467, 1);
lean::inc(x_468);
if (lean::is_exclusive(x_467)) {
 lean::cnstr_release(x_467, 0);
 lean::cnstr_release(x_467, 1);
 x_469 = x_467;
} else {
 lean::dec_ref(x_467);
 x_469 = lean::box(0);
}
x_470 = lean::string_append(x_468, x_455);
x_471 = lean::string_append(x_470, x_361);
if (lean::is_scalar(x_469)) {
 x_472 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_472 = x_469;
}
lean::cnstr_set(x_472, 0, x_8);
lean::cnstr_set(x_472, 1, x_471);
return x_472;
}
else
{
obj* x_473; obj* x_474; obj* x_475; obj* x_476; 
x_473 = lean::cnstr_get(x_467, 0);
lean::inc(x_473);
x_474 = lean::cnstr_get(x_467, 1);
lean::inc(x_474);
if (lean::is_exclusive(x_467)) {
 lean::cnstr_release(x_467, 0);
 lean::cnstr_release(x_467, 1);
 x_475 = x_467;
} else {
 lean::dec_ref(x_467);
 x_475 = lean::box(0);
}
if (lean::is_scalar(x_475)) {
 x_476 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_476 = x_475;
}
lean::cnstr_set(x_476, 0, x_473);
lean::cnstr_set(x_476, 1, x_474);
return x_476;
}
}
}
}
else
{
uint8 x_477; 
lean::dec(x_9);
x_477 = !lean::is_exclusive(x_426);
if (x_477 == 0)
{
return x_426;
}
else
{
obj* x_478; obj* x_479; obj* x_480; 
x_478 = lean::cnstr_get(x_426, 0);
x_479 = lean::cnstr_get(x_426, 1);
lean::inc(x_479);
lean::inc(x_478);
lean::dec(x_426);
x_480 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_480, 0, x_478);
lean::cnstr_set(x_480, 1, x_479);
return x_480;
}
}
}
}
else
{
obj* x_481; obj* x_482; obj* x_483; obj* x_484; uint8 x_485; uint8 x_486; 
x_481 = lean::cnstr_get(x_366, 1);
lean::inc(x_481);
lean::dec(x_366);
x_482 = l_Lean_IR_EmitCpp_emitDeclInit___closed__8;
x_483 = lean::string_append(x_481, x_482);
x_484 = lean::string_append(x_483, x_361);
x_485 = l_Lean_IR_Decl_resultType___main(x_1);
x_486 = l_Lean_IR_IRType_isObj___main(x_485);
if (x_486 == 0)
{
uint8 x_487; 
x_487 = l_Lean_IR_IRType_isIrrelevant___main(x_485);
if (x_487 == 0)
{
obj* x_488; 
lean::inc(x_9);
x_488 = l_Lean_IR_EmitCpp_quoteName(x_9);
if (lean::obj_tag(x_488) == 0)
{
obj* x_489; 
lean::dec(x_9);
x_489 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_489, 0, x_8);
lean::cnstr_set(x_489, 1, x_484);
return x_489;
}
else
{
obj* x_490; obj* x_491; obj* x_492; obj* x_493; obj* x_494; obj* x_495; obj* x_496; obj* x_497; 
x_490 = lean::cnstr_get(x_488, 0);
lean::inc(x_490);
lean::dec(x_488);
x_491 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_492 = lean::string_append(x_491, x_490);
lean::dec(x_490);
x_493 = l_List_reprAux___main___rarg___closed__1;
x_494 = lean::string_append(x_492, x_493);
x_495 = lean::string_append(x_484, x_494);
lean::dec(x_494);
x_496 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_496, 0, x_8);
lean::cnstr_set(x_496, 1, x_495);
x_497 = l_Lean_IR_EmitCpp_emitBoxFn(x_485, x_2, x_496);
if (lean::obj_tag(x_497) == 0)
{
obj* x_498; obj* x_499; obj* x_500; obj* x_501; obj* x_502; obj* x_503; 
x_498 = lean::cnstr_get(x_497, 1);
lean::inc(x_498);
if (lean::is_exclusive(x_497)) {
 lean::cnstr_release(x_497, 0);
 lean::cnstr_release(x_497, 1);
 x_499 = x_497;
} else {
 lean::dec_ref(x_497);
 x_499 = lean::box(0);
}
x_500 = l_Prod_HasRepr___rarg___closed__1;
x_501 = lean::string_append(x_498, x_500);
if (lean::is_scalar(x_499)) {
 x_502 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_502 = x_499;
}
lean::cnstr_set(x_502, 0, x_8);
lean::cnstr_set(x_502, 1, x_501);
x_503 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_502);
if (lean::obj_tag(x_503) == 0)
{
obj* x_504; obj* x_505; obj* x_506; obj* x_507; obj* x_508; obj* x_509; 
x_504 = lean::cnstr_get(x_503, 1);
lean::inc(x_504);
if (lean::is_exclusive(x_503)) {
 lean::cnstr_release(x_503, 0);
 lean::cnstr_release(x_503, 1);
 x_505 = x_503;
} else {
 lean::dec_ref(x_503);
 x_505 = lean::box(0);
}
x_506 = l_Lean_IR_EmitCpp_emitDeclInit___closed__4;
x_507 = lean::string_append(x_504, x_506);
x_508 = lean::string_append(x_507, x_361);
if (lean::is_scalar(x_505)) {
 x_509 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_509 = x_505;
}
lean::cnstr_set(x_509, 0, x_8);
lean::cnstr_set(x_509, 1, x_508);
return x_509;
}
else
{
obj* x_510; obj* x_511; obj* x_512; obj* x_513; 
x_510 = lean::cnstr_get(x_503, 0);
lean::inc(x_510);
x_511 = lean::cnstr_get(x_503, 1);
lean::inc(x_511);
if (lean::is_exclusive(x_503)) {
 lean::cnstr_release(x_503, 0);
 lean::cnstr_release(x_503, 1);
 x_512 = x_503;
} else {
 lean::dec_ref(x_503);
 x_512 = lean::box(0);
}
if (lean::is_scalar(x_512)) {
 x_513 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_513 = x_512;
}
lean::cnstr_set(x_513, 0, x_510);
lean::cnstr_set(x_513, 1, x_511);
return x_513;
}
}
else
{
obj* x_514; obj* x_515; obj* x_516; obj* x_517; 
lean::dec(x_9);
x_514 = lean::cnstr_get(x_497, 0);
lean::inc(x_514);
x_515 = lean::cnstr_get(x_497, 1);
lean::inc(x_515);
if (lean::is_exclusive(x_497)) {
 lean::cnstr_release(x_497, 0);
 lean::cnstr_release(x_497, 1);
 x_516 = x_497;
} else {
 lean::dec_ref(x_497);
 x_516 = lean::box(0);
}
if (lean::is_scalar(x_516)) {
 x_517 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_517 = x_516;
}
lean::cnstr_set(x_517, 0, x_514);
lean::cnstr_set(x_517, 1, x_515);
return x_517;
}
}
}
else
{
obj* x_518; 
lean::dec(x_9);
x_518 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_518, 0, x_8);
lean::cnstr_set(x_518, 1, x_484);
return x_518;
}
}
else
{
obj* x_519; obj* x_520; obj* x_521; obj* x_522; 
x_519 = l_Lean_IR_EmitCpp_emitDeclInit___closed__5;
x_520 = lean::string_append(x_484, x_519);
x_521 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_521, 0, x_8);
lean::cnstr_set(x_521, 1, x_520);
lean::inc(x_9);
x_522 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_521);
if (lean::obj_tag(x_522) == 0)
{
obj* x_523; obj* x_524; obj* x_525; obj* x_526; obj* x_527; obj* x_528; 
x_523 = lean::cnstr_get(x_522, 1);
lean::inc(x_523);
if (lean::is_exclusive(x_522)) {
 lean::cnstr_release(x_522, 0);
 lean::cnstr_release(x_522, 1);
 x_524 = x_522;
} else {
 lean::dec_ref(x_522);
 x_524 = lean::box(0);
}
x_525 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_526 = lean::string_append(x_523, x_525);
x_527 = lean::string_append(x_526, x_361);
lean::inc(x_9);
x_528 = l_Lean_IR_EmitCpp_quoteName(x_9);
if (lean::obj_tag(x_528) == 0)
{
obj* x_529; 
lean::dec(x_9);
if (lean::is_scalar(x_524)) {
 x_529 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_529 = x_524;
}
lean::cnstr_set(x_529, 0, x_8);
lean::cnstr_set(x_529, 1, x_527);
return x_529;
}
else
{
obj* x_530; obj* x_531; obj* x_532; obj* x_533; obj* x_534; obj* x_535; obj* x_536; obj* x_537; 
x_530 = lean::cnstr_get(x_528, 0);
lean::inc(x_530);
lean::dec(x_528);
x_531 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_532 = lean::string_append(x_531, x_530);
lean::dec(x_530);
x_533 = l_List_reprAux___main___rarg___closed__1;
x_534 = lean::string_append(x_532, x_533);
x_535 = lean::string_append(x_527, x_534);
lean::dec(x_534);
if (lean::is_scalar(x_524)) {
 x_536 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_536 = x_524;
}
lean::cnstr_set(x_536, 0, x_8);
lean::cnstr_set(x_536, 1, x_535);
x_537 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_536);
if (lean::obj_tag(x_537) == 0)
{
obj* x_538; obj* x_539; obj* x_540; obj* x_541; obj* x_542; 
x_538 = lean::cnstr_get(x_537, 1);
lean::inc(x_538);
if (lean::is_exclusive(x_537)) {
 lean::cnstr_release(x_537, 0);
 lean::cnstr_release(x_537, 1);
 x_539 = x_537;
} else {
 lean::dec_ref(x_537);
 x_539 = lean::box(0);
}
x_540 = lean::string_append(x_538, x_525);
x_541 = lean::string_append(x_540, x_361);
if (lean::is_scalar(x_539)) {
 x_542 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_542 = x_539;
}
lean::cnstr_set(x_542, 0, x_8);
lean::cnstr_set(x_542, 1, x_541);
return x_542;
}
else
{
obj* x_543; obj* x_544; obj* x_545; obj* x_546; 
x_543 = lean::cnstr_get(x_537, 0);
lean::inc(x_543);
x_544 = lean::cnstr_get(x_537, 1);
lean::inc(x_544);
if (lean::is_exclusive(x_537)) {
 lean::cnstr_release(x_537, 0);
 lean::cnstr_release(x_537, 1);
 x_545 = x_537;
} else {
 lean::dec_ref(x_537);
 x_545 = lean::box(0);
}
if (lean::is_scalar(x_545)) {
 x_546 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_546 = x_545;
}
lean::cnstr_set(x_546, 0, x_543);
lean::cnstr_set(x_546, 1, x_544);
return x_546;
}
}
}
else
{
obj* x_547; obj* x_548; obj* x_549; obj* x_550; 
lean::dec(x_9);
x_547 = lean::cnstr_get(x_522, 0);
lean::inc(x_547);
x_548 = lean::cnstr_get(x_522, 1);
lean::inc(x_548);
if (lean::is_exclusive(x_522)) {
 lean::cnstr_release(x_522, 0);
 lean::cnstr_release(x_522, 1);
 x_549 = x_522;
} else {
 lean::dec_ref(x_522);
 x_549 = lean::box(0);
}
if (lean::is_scalar(x_549)) {
 x_550 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_550 = x_549;
}
lean::cnstr_set(x_550, 0, x_547);
lean::cnstr_set(x_550, 1, x_548);
return x_550;
}
}
}
}
else
{
uint8 x_551; 
lean::dec(x_9);
x_551 = !lean::is_exclusive(x_366);
if (x_551 == 0)
{
return x_366;
}
else
{
obj* x_552; obj* x_553; obj* x_554; 
x_552 = lean::cnstr_get(x_366, 0);
x_553 = lean::cnstr_get(x_366, 1);
lean::inc(x_553);
lean::inc(x_552);
lean::dec(x_366);
x_554 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_554, 0, x_552);
lean::cnstr_set(x_554, 1, x_553);
return x_554;
}
}
}
else
{
obj* x_555; obj* x_556; obj* x_557; obj* x_558; obj* x_559; obj* x_560; obj* x_561; obj* x_562; obj* x_563; obj* x_564; 
x_555 = lean::cnstr_get(x_355, 1);
lean::inc(x_555);
lean::dec(x_355);
x_556 = l_Lean_IR_EmitCpp_emitMainFn___closed__4;
x_557 = lean::string_append(x_555, x_556);
x_558 = l_IO_println___rarg___closed__1;
x_559 = lean::string_append(x_557, x_558);
x_560 = l_Lean_IR_EmitCpp_emitDeclInit___closed__7;
x_561 = lean::string_append(x_559, x_560);
x_562 = lean::string_append(x_561, x_558);
x_563 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_563, 0, x_8);
lean::cnstr_set(x_563, 1, x_562);
lean::inc(x_9);
x_564 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_563);
if (lean::obj_tag(x_564) == 0)
{
obj* x_565; obj* x_566; obj* x_567; obj* x_568; obj* x_569; uint8 x_570; uint8 x_571; 
x_565 = lean::cnstr_get(x_564, 1);
lean::inc(x_565);
if (lean::is_exclusive(x_564)) {
 lean::cnstr_release(x_564, 0);
 lean::cnstr_release(x_564, 1);
 x_566 = x_564;
} else {
 lean::dec_ref(x_564);
 x_566 = lean::box(0);
}
x_567 = l_Lean_IR_EmitCpp_emitDeclInit___closed__8;
x_568 = lean::string_append(x_565, x_567);
x_569 = lean::string_append(x_568, x_558);
x_570 = l_Lean_IR_Decl_resultType___main(x_1);
x_571 = l_Lean_IR_IRType_isObj___main(x_570);
if (x_571 == 0)
{
uint8 x_572; 
x_572 = l_Lean_IR_IRType_isIrrelevant___main(x_570);
if (x_572 == 0)
{
obj* x_573; 
lean::inc(x_9);
x_573 = l_Lean_IR_EmitCpp_quoteName(x_9);
if (lean::obj_tag(x_573) == 0)
{
obj* x_574; 
lean::dec(x_9);
if (lean::is_scalar(x_566)) {
 x_574 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_574 = x_566;
}
lean::cnstr_set(x_574, 0, x_8);
lean::cnstr_set(x_574, 1, x_569);
return x_574;
}
else
{
obj* x_575; obj* x_576; obj* x_577; obj* x_578; obj* x_579; obj* x_580; obj* x_581; obj* x_582; 
x_575 = lean::cnstr_get(x_573, 0);
lean::inc(x_575);
lean::dec(x_573);
x_576 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_577 = lean::string_append(x_576, x_575);
lean::dec(x_575);
x_578 = l_List_reprAux___main___rarg___closed__1;
x_579 = lean::string_append(x_577, x_578);
x_580 = lean::string_append(x_569, x_579);
lean::dec(x_579);
if (lean::is_scalar(x_566)) {
 x_581 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_581 = x_566;
}
lean::cnstr_set(x_581, 0, x_8);
lean::cnstr_set(x_581, 1, x_580);
x_582 = l_Lean_IR_EmitCpp_emitBoxFn(x_570, x_2, x_581);
if (lean::obj_tag(x_582) == 0)
{
obj* x_583; obj* x_584; obj* x_585; obj* x_586; obj* x_587; obj* x_588; 
x_583 = lean::cnstr_get(x_582, 1);
lean::inc(x_583);
if (lean::is_exclusive(x_582)) {
 lean::cnstr_release(x_582, 0);
 lean::cnstr_release(x_582, 1);
 x_584 = x_582;
} else {
 lean::dec_ref(x_582);
 x_584 = lean::box(0);
}
x_585 = l_Prod_HasRepr___rarg___closed__1;
x_586 = lean::string_append(x_583, x_585);
if (lean::is_scalar(x_584)) {
 x_587 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_587 = x_584;
}
lean::cnstr_set(x_587, 0, x_8);
lean::cnstr_set(x_587, 1, x_586);
x_588 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_587);
if (lean::obj_tag(x_588) == 0)
{
obj* x_589; obj* x_590; obj* x_591; obj* x_592; obj* x_593; obj* x_594; 
x_589 = lean::cnstr_get(x_588, 1);
lean::inc(x_589);
if (lean::is_exclusive(x_588)) {
 lean::cnstr_release(x_588, 0);
 lean::cnstr_release(x_588, 1);
 x_590 = x_588;
} else {
 lean::dec_ref(x_588);
 x_590 = lean::box(0);
}
x_591 = l_Lean_IR_EmitCpp_emitDeclInit___closed__4;
x_592 = lean::string_append(x_589, x_591);
x_593 = lean::string_append(x_592, x_558);
if (lean::is_scalar(x_590)) {
 x_594 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_594 = x_590;
}
lean::cnstr_set(x_594, 0, x_8);
lean::cnstr_set(x_594, 1, x_593);
return x_594;
}
else
{
obj* x_595; obj* x_596; obj* x_597; obj* x_598; 
x_595 = lean::cnstr_get(x_588, 0);
lean::inc(x_595);
x_596 = lean::cnstr_get(x_588, 1);
lean::inc(x_596);
if (lean::is_exclusive(x_588)) {
 lean::cnstr_release(x_588, 0);
 lean::cnstr_release(x_588, 1);
 x_597 = x_588;
} else {
 lean::dec_ref(x_588);
 x_597 = lean::box(0);
}
if (lean::is_scalar(x_597)) {
 x_598 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_598 = x_597;
}
lean::cnstr_set(x_598, 0, x_595);
lean::cnstr_set(x_598, 1, x_596);
return x_598;
}
}
else
{
obj* x_599; obj* x_600; obj* x_601; obj* x_602; 
lean::dec(x_9);
x_599 = lean::cnstr_get(x_582, 0);
lean::inc(x_599);
x_600 = lean::cnstr_get(x_582, 1);
lean::inc(x_600);
if (lean::is_exclusive(x_582)) {
 lean::cnstr_release(x_582, 0);
 lean::cnstr_release(x_582, 1);
 x_601 = x_582;
} else {
 lean::dec_ref(x_582);
 x_601 = lean::box(0);
}
if (lean::is_scalar(x_601)) {
 x_602 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_602 = x_601;
}
lean::cnstr_set(x_602, 0, x_599);
lean::cnstr_set(x_602, 1, x_600);
return x_602;
}
}
}
else
{
obj* x_603; 
lean::dec(x_9);
if (lean::is_scalar(x_566)) {
 x_603 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_603 = x_566;
}
lean::cnstr_set(x_603, 0, x_8);
lean::cnstr_set(x_603, 1, x_569);
return x_603;
}
}
else
{
obj* x_604; obj* x_605; obj* x_606; obj* x_607; 
x_604 = l_Lean_IR_EmitCpp_emitDeclInit___closed__5;
x_605 = lean::string_append(x_569, x_604);
if (lean::is_scalar(x_566)) {
 x_606 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_606 = x_566;
}
lean::cnstr_set(x_606, 0, x_8);
lean::cnstr_set(x_606, 1, x_605);
lean::inc(x_9);
x_607 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_606);
if (lean::obj_tag(x_607) == 0)
{
obj* x_608; obj* x_609; obj* x_610; obj* x_611; obj* x_612; obj* x_613; 
x_608 = lean::cnstr_get(x_607, 1);
lean::inc(x_608);
if (lean::is_exclusive(x_607)) {
 lean::cnstr_release(x_607, 0);
 lean::cnstr_release(x_607, 1);
 x_609 = x_607;
} else {
 lean::dec_ref(x_607);
 x_609 = lean::box(0);
}
x_610 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_611 = lean::string_append(x_608, x_610);
x_612 = lean::string_append(x_611, x_558);
lean::inc(x_9);
x_613 = l_Lean_IR_EmitCpp_quoteName(x_9);
if (lean::obj_tag(x_613) == 0)
{
obj* x_614; 
lean::dec(x_9);
if (lean::is_scalar(x_609)) {
 x_614 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_614 = x_609;
}
lean::cnstr_set(x_614, 0, x_8);
lean::cnstr_set(x_614, 1, x_612);
return x_614;
}
else
{
obj* x_615; obj* x_616; obj* x_617; obj* x_618; obj* x_619; obj* x_620; obj* x_621; obj* x_622; 
x_615 = lean::cnstr_get(x_613, 0);
lean::inc(x_615);
lean::dec(x_613);
x_616 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_617 = lean::string_append(x_616, x_615);
lean::dec(x_615);
x_618 = l_List_reprAux___main___rarg___closed__1;
x_619 = lean::string_append(x_617, x_618);
x_620 = lean::string_append(x_612, x_619);
lean::dec(x_619);
if (lean::is_scalar(x_609)) {
 x_621 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_621 = x_609;
}
lean::cnstr_set(x_621, 0, x_8);
lean::cnstr_set(x_621, 1, x_620);
x_622 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_621);
if (lean::obj_tag(x_622) == 0)
{
obj* x_623; obj* x_624; obj* x_625; obj* x_626; obj* x_627; 
x_623 = lean::cnstr_get(x_622, 1);
lean::inc(x_623);
if (lean::is_exclusive(x_622)) {
 lean::cnstr_release(x_622, 0);
 lean::cnstr_release(x_622, 1);
 x_624 = x_622;
} else {
 lean::dec_ref(x_622);
 x_624 = lean::box(0);
}
x_625 = lean::string_append(x_623, x_610);
x_626 = lean::string_append(x_625, x_558);
if (lean::is_scalar(x_624)) {
 x_627 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_627 = x_624;
}
lean::cnstr_set(x_627, 0, x_8);
lean::cnstr_set(x_627, 1, x_626);
return x_627;
}
else
{
obj* x_628; obj* x_629; obj* x_630; obj* x_631; 
x_628 = lean::cnstr_get(x_622, 0);
lean::inc(x_628);
x_629 = lean::cnstr_get(x_622, 1);
lean::inc(x_629);
if (lean::is_exclusive(x_622)) {
 lean::cnstr_release(x_622, 0);
 lean::cnstr_release(x_622, 1);
 x_630 = x_622;
} else {
 lean::dec_ref(x_622);
 x_630 = lean::box(0);
}
if (lean::is_scalar(x_630)) {
 x_631 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_631 = x_630;
}
lean::cnstr_set(x_631, 0, x_628);
lean::cnstr_set(x_631, 1, x_629);
return x_631;
}
}
}
else
{
obj* x_632; obj* x_633; obj* x_634; obj* x_635; 
lean::dec(x_9);
x_632 = lean::cnstr_get(x_607, 0);
lean::inc(x_632);
x_633 = lean::cnstr_get(x_607, 1);
lean::inc(x_633);
if (lean::is_exclusive(x_607)) {
 lean::cnstr_release(x_607, 0);
 lean::cnstr_release(x_607, 1);
 x_634 = x_607;
} else {
 lean::dec_ref(x_607);
 x_634 = lean::box(0);
}
if (lean::is_scalar(x_634)) {
 x_635 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_635 = x_634;
}
lean::cnstr_set(x_635, 0, x_632);
lean::cnstr_set(x_635, 1, x_633);
return x_635;
}
}
}
else
{
obj* x_636; obj* x_637; obj* x_638; obj* x_639; 
lean::dec(x_9);
x_636 = lean::cnstr_get(x_564, 0);
lean::inc(x_636);
x_637 = lean::cnstr_get(x_564, 1);
lean::inc(x_637);
if (lean::is_exclusive(x_564)) {
 lean::cnstr_release(x_564, 0);
 lean::cnstr_release(x_564, 1);
 x_638 = x_564;
} else {
 lean::dec_ref(x_564);
 x_638 = lean::box(0);
}
if (lean::is_scalar(x_638)) {
 x_639 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_639 = x_638;
}
lean::cnstr_set(x_639, 0, x_636);
lean::cnstr_set(x_639, 1, x_637);
return x_639;
}
}
}
else
{
uint8 x_640; 
lean::dec(x_9);
x_640 = !lean::is_exclusive(x_355);
if (x_640 == 0)
{
return x_355;
}
else
{
obj* x_641; obj* x_642; obj* x_643; 
x_641 = lean::cnstr_get(x_355, 0);
x_642 = lean::cnstr_get(x_355, 1);
lean::inc(x_642);
lean::inc(x_641);
lean::dec(x_355);
x_643 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_643, 0, x_641);
lean::cnstr_set(x_643, 1, x_642);
return x_643;
}
}
}
}
}
else
{
obj* x_644; obj* x_645; obj* x_646; obj* x_647; 
lean::dec(x_4);
lean::dec(x_6);
x_644 = l_Lean_IR_EmitCpp_emitDeclInit___closed__6;
x_645 = lean::string_append(x_7, x_644);
x_646 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_646, 0, x_8);
lean::cnstr_set(x_646, 1, x_645);
x_647 = l_Lean_IR_EmitCpp_emitCppName(x_9, x_2, x_646);
if (lean::obj_tag(x_647) == 0)
{
uint8 x_648; 
x_648 = !lean::is_exclusive(x_647);
if (x_648 == 0)
{
obj* x_649; obj* x_650; obj* x_651; obj* x_652; obj* x_653; obj* x_654; obj* x_655; obj* x_656; obj* x_657; 
x_649 = lean::cnstr_get(x_647, 1);
x_650 = lean::cnstr_get(x_647, 0);
lean::dec(x_650);
x_651 = l_Lean_IR_EmitCpp_emitMainFn___closed__4;
x_652 = lean::string_append(x_649, x_651);
x_653 = l_IO_println___rarg___closed__1;
x_654 = lean::string_append(x_652, x_653);
x_655 = l_Lean_IR_EmitCpp_emitDeclInit___closed__7;
x_656 = lean::string_append(x_654, x_655);
x_657 = lean::string_append(x_656, x_653);
lean::cnstr_set(x_647, 1, x_657);
lean::cnstr_set(x_647, 0, x_8);
return x_647;
}
else
{
obj* x_658; obj* x_659; obj* x_660; obj* x_661; obj* x_662; obj* x_663; obj* x_664; obj* x_665; obj* x_666; 
x_658 = lean::cnstr_get(x_647, 1);
lean::inc(x_658);
lean::dec(x_647);
x_659 = l_Lean_IR_EmitCpp_emitMainFn___closed__4;
x_660 = lean::string_append(x_658, x_659);
x_661 = l_IO_println___rarg___closed__1;
x_662 = lean::string_append(x_660, x_661);
x_663 = l_Lean_IR_EmitCpp_emitDeclInit___closed__7;
x_664 = lean::string_append(x_662, x_663);
x_665 = lean::string_append(x_664, x_661);
x_666 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_666, 0, x_8);
lean::cnstr_set(x_666, 1, x_665);
return x_666;
}
}
else
{
uint8 x_667; 
x_667 = !lean::is_exclusive(x_647);
if (x_667 == 0)
{
return x_647;
}
else
{
obj* x_668; obj* x_669; obj* x_670; 
x_668 = lean::cnstr_get(x_647, 0);
x_669 = lean::cnstr_get(x_647, 1);
lean::inc(x_669);
lean::inc(x_668);
lean::dec(x_647);
x_670 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_670, 0, x_668);
lean::cnstr_set(x_670, 1, x_669);
return x_670;
}
}
}
}
else
{
obj* x_671; obj* x_672; obj* x_673; obj* x_674; obj* x_675; uint8 x_676; 
x_671 = lean::cnstr_get(x_4, 0);
x_672 = lean::cnstr_get(x_4, 1);
lean::inc(x_672);
lean::inc(x_671);
lean::dec(x_4);
x_673 = lean::box(0);
lean::inc(x_672);
x_674 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_674, 0, x_673);
lean::cnstr_set(x_674, 1, x_672);
x_675 = l_Lean_IR_Decl_name___main(x_1);
lean::inc(x_675);
x_676 = l_Lean_isIOUnitInitFn(x_671, x_675);
if (x_676 == 0)
{
obj* x_677; obj* x_678; obj* x_679; uint8 x_680; 
x_677 = l_Lean_IR_Decl_params___main(x_1);
x_678 = lean::array_get_size(x_677);
lean::dec(x_677);
x_679 = lean::mk_nat_obj(0u);
x_680 = lean::nat_dec_eq(x_678, x_679);
if (x_680 == 0)
{
obj* x_681; 
lean::dec(x_674);
lean::inc(x_675);
x_681 = l_Lean_IR_EmitCpp_quoteName(x_675);
if (lean::obj_tag(x_681) == 0)
{
obj* x_682; 
lean::dec(x_678);
lean::dec(x_675);
lean::dec(x_671);
x_682 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_682, 0, x_673);
lean::cnstr_set(x_682, 1, x_672);
return x_682;
}
else
{
obj* x_683; uint8 x_684; obj* x_685; obj* x_686; obj* x_687; obj* x_688; obj* x_689; obj* x_690; obj* x_691; 
x_683 = lean::cnstr_get(x_681, 0);
lean::inc(x_683);
lean::dec(x_681);
x_684 = l_Lean_IR_ExplicitBoxing_requiresBoxedVersion(x_671, x_1);
lean::dec(x_671);
x_685 = l_Lean_IR_EmitCpp_emitDeclInit___closed__1;
x_686 = lean::string_append(x_685, x_683);
lean::dec(x_683);
x_687 = l_List_reprAux___main___rarg___closed__1;
x_688 = lean::string_append(x_686, x_687);
x_689 = l_Nat_repr(x_678);
x_690 = lean::string_append(x_688, x_689);
lean::dec(x_689);
x_691 = lean::string_append(x_690, x_687);
if (x_684 == 0)
{
obj* x_692; obj* x_693; obj* x_694; 
x_692 = lean::string_append(x_672, x_691);
lean::dec(x_691);
x_693 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_693, 0, x_673);
lean::cnstr_set(x_693, 1, x_692);
x_694 = l_Lean_IR_EmitCpp_emitCppName(x_675, x_2, x_693);
if (lean::obj_tag(x_694) == 0)
{
obj* x_695; obj* x_696; obj* x_697; obj* x_698; obj* x_699; obj* x_700; obj* x_701; 
x_695 = lean::cnstr_get(x_694, 1);
lean::inc(x_695);
if (lean::is_exclusive(x_694)) {
 lean::cnstr_release(x_694, 0);
 lean::cnstr_release(x_694, 1);
 x_696 = x_694;
} else {
 lean::dec_ref(x_694);
 x_696 = lean::box(0);
}
x_697 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_698 = lean::string_append(x_695, x_697);
x_699 = l_IO_println___rarg___closed__1;
x_700 = lean::string_append(x_698, x_699);
if (lean::is_scalar(x_696)) {
 x_701 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_701 = x_696;
}
lean::cnstr_set(x_701, 0, x_673);
lean::cnstr_set(x_701, 1, x_700);
return x_701;
}
else
{
obj* x_702; obj* x_703; obj* x_704; obj* x_705; 
x_702 = lean::cnstr_get(x_694, 0);
lean::inc(x_702);
x_703 = lean::cnstr_get(x_694, 1);
lean::inc(x_703);
if (lean::is_exclusive(x_694)) {
 lean::cnstr_release(x_694, 0);
 lean::cnstr_release(x_694, 1);
 x_704 = x_694;
} else {
 lean::dec_ref(x_694);
 x_704 = lean::box(0);
}
if (lean::is_scalar(x_704)) {
 x_705 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_705 = x_704;
}
lean::cnstr_set(x_705, 0, x_702);
lean::cnstr_set(x_705, 1, x_703);
return x_705;
}
}
else
{
obj* x_706; obj* x_707; obj* x_708; obj* x_709; obj* x_710; 
x_706 = l_Lean_IR_ExplicitBoxing_mkBoxedName___closed__1;
x_707 = lean_name_mk_string(x_675, x_706);
x_708 = lean::string_append(x_672, x_691);
lean::dec(x_691);
x_709 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_709, 0, x_673);
lean::cnstr_set(x_709, 1, x_708);
x_710 = l_Lean_IR_EmitCpp_emitCppName(x_707, x_2, x_709);
if (lean::obj_tag(x_710) == 0)
{
obj* x_711; obj* x_712; obj* x_713; obj* x_714; obj* x_715; obj* x_716; obj* x_717; 
x_711 = lean::cnstr_get(x_710, 1);
lean::inc(x_711);
if (lean::is_exclusive(x_710)) {
 lean::cnstr_release(x_710, 0);
 lean::cnstr_release(x_710, 1);
 x_712 = x_710;
} else {
 lean::dec_ref(x_710);
 x_712 = lean::box(0);
}
x_713 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_714 = lean::string_append(x_711, x_713);
x_715 = l_IO_println___rarg___closed__1;
x_716 = lean::string_append(x_714, x_715);
if (lean::is_scalar(x_712)) {
 x_717 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_717 = x_712;
}
lean::cnstr_set(x_717, 0, x_673);
lean::cnstr_set(x_717, 1, x_716);
return x_717;
}
else
{
obj* x_718; obj* x_719; obj* x_720; obj* x_721; 
x_718 = lean::cnstr_get(x_710, 0);
lean::inc(x_718);
x_719 = lean::cnstr_get(x_710, 1);
lean::inc(x_719);
if (lean::is_exclusive(x_710)) {
 lean::cnstr_release(x_710, 0);
 lean::cnstr_release(x_710, 1);
 x_720 = x_710;
} else {
 lean::dec_ref(x_710);
 x_720 = lean::box(0);
}
if (lean::is_scalar(x_720)) {
 x_721 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_721 = x_720;
}
lean::cnstr_set(x_721, 0, x_718);
lean::cnstr_set(x_721, 1, x_719);
return x_721;
}
}
}
}
else
{
obj* x_722; 
lean::dec(x_678);
lean::inc(x_675);
x_722 = lean::get_init_fn_name_for_core(x_671, x_675);
if (lean::obj_tag(x_722) == 0)
{
obj* x_723; 
lean::dec(x_672);
lean::inc(x_675);
x_723 = l_Lean_IR_EmitCpp_emitCppName(x_675, x_2, x_674);
if (lean::obj_tag(x_723) == 0)
{
obj* x_724; obj* x_725; obj* x_726; obj* x_727; obj* x_728; obj* x_729; 
x_724 = lean::cnstr_get(x_723, 1);
lean::inc(x_724);
if (lean::is_exclusive(x_723)) {
 lean::cnstr_release(x_723, 0);
 lean::cnstr_release(x_723, 1);
 x_725 = x_723;
} else {
 lean::dec_ref(x_723);
 x_725 = lean::box(0);
}
x_726 = l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___closed__1;
x_727 = lean::string_append(x_724, x_726);
if (lean::is_scalar(x_725)) {
 x_728 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_728 = x_725;
}
lean::cnstr_set(x_728, 0, x_673);
lean::cnstr_set(x_728, 1, x_727);
lean::inc(x_675);
x_729 = l_Lean_IR_EmitCpp_emitCppInitName(x_675, x_2, x_728);
if (lean::obj_tag(x_729) == 0)
{
obj* x_730; obj* x_731; obj* x_732; obj* x_733; obj* x_734; obj* x_735; uint8 x_736; uint8 x_737; 
x_730 = lean::cnstr_get(x_729, 1);
lean::inc(x_730);
if (lean::is_exclusive(x_729)) {
 lean::cnstr_release(x_729, 0);
 lean::cnstr_release(x_729, 1);
 x_731 = x_729;
} else {
 lean::dec_ref(x_729);
 x_731 = lean::box(0);
}
x_732 = l_Lean_IR_EmitCpp_emitDeclInit___closed__2;
x_733 = lean::string_append(x_730, x_732);
x_734 = l_IO_println___rarg___closed__1;
x_735 = lean::string_append(x_733, x_734);
x_736 = l_Lean_IR_Decl_resultType___main(x_1);
x_737 = l_Lean_IR_IRType_isObj___main(x_736);
if (x_737 == 0)
{
uint8 x_738; 
x_738 = l_Lean_IR_IRType_isIrrelevant___main(x_736);
if (x_738 == 0)
{
obj* x_739; 
lean::inc(x_675);
x_739 = l_Lean_IR_EmitCpp_quoteName(x_675);
if (lean::obj_tag(x_739) == 0)
{
obj* x_740; 
lean::dec(x_675);
if (lean::is_scalar(x_731)) {
 x_740 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_740 = x_731;
}
lean::cnstr_set(x_740, 0, x_673);
lean::cnstr_set(x_740, 1, x_735);
return x_740;
}
else
{
obj* x_741; obj* x_742; obj* x_743; obj* x_744; obj* x_745; obj* x_746; obj* x_747; obj* x_748; 
x_741 = lean::cnstr_get(x_739, 0);
lean::inc(x_741);
lean::dec(x_739);
x_742 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_743 = lean::string_append(x_742, x_741);
lean::dec(x_741);
x_744 = l_List_reprAux___main___rarg___closed__1;
x_745 = lean::string_append(x_743, x_744);
x_746 = lean::string_append(x_735, x_745);
lean::dec(x_745);
if (lean::is_scalar(x_731)) {
 x_747 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_747 = x_731;
}
lean::cnstr_set(x_747, 0, x_673);
lean::cnstr_set(x_747, 1, x_746);
x_748 = l_Lean_IR_EmitCpp_emitBoxFn(x_736, x_2, x_747);
if (lean::obj_tag(x_748) == 0)
{
obj* x_749; obj* x_750; obj* x_751; obj* x_752; obj* x_753; obj* x_754; 
x_749 = lean::cnstr_get(x_748, 1);
lean::inc(x_749);
if (lean::is_exclusive(x_748)) {
 lean::cnstr_release(x_748, 0);
 lean::cnstr_release(x_748, 1);
 x_750 = x_748;
} else {
 lean::dec_ref(x_748);
 x_750 = lean::box(0);
}
x_751 = l_Prod_HasRepr___rarg___closed__1;
x_752 = lean::string_append(x_749, x_751);
if (lean::is_scalar(x_750)) {
 x_753 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_753 = x_750;
}
lean::cnstr_set(x_753, 0, x_673);
lean::cnstr_set(x_753, 1, x_752);
x_754 = l_Lean_IR_EmitCpp_emitCppName(x_675, x_2, x_753);
if (lean::obj_tag(x_754) == 0)
{
obj* x_755; obj* x_756; obj* x_757; obj* x_758; obj* x_759; obj* x_760; 
x_755 = lean::cnstr_get(x_754, 1);
lean::inc(x_755);
if (lean::is_exclusive(x_754)) {
 lean::cnstr_release(x_754, 0);
 lean::cnstr_release(x_754, 1);
 x_756 = x_754;
} else {
 lean::dec_ref(x_754);
 x_756 = lean::box(0);
}
x_757 = l_Lean_IR_EmitCpp_emitDeclInit___closed__4;
x_758 = lean::string_append(x_755, x_757);
x_759 = lean::string_append(x_758, x_734);
if (lean::is_scalar(x_756)) {
 x_760 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_760 = x_756;
}
lean::cnstr_set(x_760, 0, x_673);
lean::cnstr_set(x_760, 1, x_759);
return x_760;
}
else
{
obj* x_761; obj* x_762; obj* x_763; obj* x_764; 
x_761 = lean::cnstr_get(x_754, 0);
lean::inc(x_761);
x_762 = lean::cnstr_get(x_754, 1);
lean::inc(x_762);
if (lean::is_exclusive(x_754)) {
 lean::cnstr_release(x_754, 0);
 lean::cnstr_release(x_754, 1);
 x_763 = x_754;
} else {
 lean::dec_ref(x_754);
 x_763 = lean::box(0);
}
if (lean::is_scalar(x_763)) {
 x_764 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_764 = x_763;
}
lean::cnstr_set(x_764, 0, x_761);
lean::cnstr_set(x_764, 1, x_762);
return x_764;
}
}
else
{
obj* x_765; obj* x_766; obj* x_767; obj* x_768; 
lean::dec(x_675);
x_765 = lean::cnstr_get(x_748, 0);
lean::inc(x_765);
x_766 = lean::cnstr_get(x_748, 1);
lean::inc(x_766);
if (lean::is_exclusive(x_748)) {
 lean::cnstr_release(x_748, 0);
 lean::cnstr_release(x_748, 1);
 x_767 = x_748;
} else {
 lean::dec_ref(x_748);
 x_767 = lean::box(0);
}
if (lean::is_scalar(x_767)) {
 x_768 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_768 = x_767;
}
lean::cnstr_set(x_768, 0, x_765);
lean::cnstr_set(x_768, 1, x_766);
return x_768;
}
}
}
else
{
obj* x_769; 
lean::dec(x_675);
if (lean::is_scalar(x_731)) {
 x_769 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_769 = x_731;
}
lean::cnstr_set(x_769, 0, x_673);
lean::cnstr_set(x_769, 1, x_735);
return x_769;
}
}
else
{
obj* x_770; obj* x_771; obj* x_772; obj* x_773; 
x_770 = l_Lean_IR_EmitCpp_emitDeclInit___closed__5;
x_771 = lean::string_append(x_735, x_770);
if (lean::is_scalar(x_731)) {
 x_772 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_772 = x_731;
}
lean::cnstr_set(x_772, 0, x_673);
lean::cnstr_set(x_772, 1, x_771);
lean::inc(x_675);
x_773 = l_Lean_IR_EmitCpp_emitCppName(x_675, x_2, x_772);
if (lean::obj_tag(x_773) == 0)
{
obj* x_774; obj* x_775; obj* x_776; obj* x_777; obj* x_778; obj* x_779; 
x_774 = lean::cnstr_get(x_773, 1);
lean::inc(x_774);
if (lean::is_exclusive(x_773)) {
 lean::cnstr_release(x_773, 0);
 lean::cnstr_release(x_773, 1);
 x_775 = x_773;
} else {
 lean::dec_ref(x_773);
 x_775 = lean::box(0);
}
x_776 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_777 = lean::string_append(x_774, x_776);
x_778 = lean::string_append(x_777, x_734);
lean::inc(x_675);
x_779 = l_Lean_IR_EmitCpp_quoteName(x_675);
if (lean::obj_tag(x_779) == 0)
{
obj* x_780; 
lean::dec(x_675);
if (lean::is_scalar(x_775)) {
 x_780 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_780 = x_775;
}
lean::cnstr_set(x_780, 0, x_673);
lean::cnstr_set(x_780, 1, x_778);
return x_780;
}
else
{
obj* x_781; obj* x_782; obj* x_783; obj* x_784; obj* x_785; obj* x_786; obj* x_787; obj* x_788; 
x_781 = lean::cnstr_get(x_779, 0);
lean::inc(x_781);
lean::dec(x_779);
x_782 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_783 = lean::string_append(x_782, x_781);
lean::dec(x_781);
x_784 = l_List_reprAux___main___rarg___closed__1;
x_785 = lean::string_append(x_783, x_784);
x_786 = lean::string_append(x_778, x_785);
lean::dec(x_785);
if (lean::is_scalar(x_775)) {
 x_787 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_787 = x_775;
}
lean::cnstr_set(x_787, 0, x_673);
lean::cnstr_set(x_787, 1, x_786);
x_788 = l_Lean_IR_EmitCpp_emitCppName(x_675, x_2, x_787);
if (lean::obj_tag(x_788) == 0)
{
obj* x_789; obj* x_790; obj* x_791; obj* x_792; obj* x_793; 
x_789 = lean::cnstr_get(x_788, 1);
lean::inc(x_789);
if (lean::is_exclusive(x_788)) {
 lean::cnstr_release(x_788, 0);
 lean::cnstr_release(x_788, 1);
 x_790 = x_788;
} else {
 lean::dec_ref(x_788);
 x_790 = lean::box(0);
}
x_791 = lean::string_append(x_789, x_776);
x_792 = lean::string_append(x_791, x_734);
if (lean::is_scalar(x_790)) {
 x_793 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_793 = x_790;
}
lean::cnstr_set(x_793, 0, x_673);
lean::cnstr_set(x_793, 1, x_792);
return x_793;
}
else
{
obj* x_794; obj* x_795; obj* x_796; obj* x_797; 
x_794 = lean::cnstr_get(x_788, 0);
lean::inc(x_794);
x_795 = lean::cnstr_get(x_788, 1);
lean::inc(x_795);
if (lean::is_exclusive(x_788)) {
 lean::cnstr_release(x_788, 0);
 lean::cnstr_release(x_788, 1);
 x_796 = x_788;
} else {
 lean::dec_ref(x_788);
 x_796 = lean::box(0);
}
if (lean::is_scalar(x_796)) {
 x_797 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_797 = x_796;
}
lean::cnstr_set(x_797, 0, x_794);
lean::cnstr_set(x_797, 1, x_795);
return x_797;
}
}
}
else
{
obj* x_798; obj* x_799; obj* x_800; obj* x_801; 
lean::dec(x_675);
x_798 = lean::cnstr_get(x_773, 0);
lean::inc(x_798);
x_799 = lean::cnstr_get(x_773, 1);
lean::inc(x_799);
if (lean::is_exclusive(x_773)) {
 lean::cnstr_release(x_773, 0);
 lean::cnstr_release(x_773, 1);
 x_800 = x_773;
} else {
 lean::dec_ref(x_773);
 x_800 = lean::box(0);
}
if (lean::is_scalar(x_800)) {
 x_801 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_801 = x_800;
}
lean::cnstr_set(x_801, 0, x_798);
lean::cnstr_set(x_801, 1, x_799);
return x_801;
}
}
}
else
{
obj* x_802; obj* x_803; obj* x_804; obj* x_805; 
lean::dec(x_675);
x_802 = lean::cnstr_get(x_729, 0);
lean::inc(x_802);
x_803 = lean::cnstr_get(x_729, 1);
lean::inc(x_803);
if (lean::is_exclusive(x_729)) {
 lean::cnstr_release(x_729, 0);
 lean::cnstr_release(x_729, 1);
 x_804 = x_729;
} else {
 lean::dec_ref(x_729);
 x_804 = lean::box(0);
}
if (lean::is_scalar(x_804)) {
 x_805 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_805 = x_804;
}
lean::cnstr_set(x_805, 0, x_802);
lean::cnstr_set(x_805, 1, x_803);
return x_805;
}
}
else
{
obj* x_806; obj* x_807; obj* x_808; obj* x_809; 
lean::dec(x_675);
x_806 = lean::cnstr_get(x_723, 0);
lean::inc(x_806);
x_807 = lean::cnstr_get(x_723, 1);
lean::inc(x_807);
if (lean::is_exclusive(x_723)) {
 lean::cnstr_release(x_723, 0);
 lean::cnstr_release(x_723, 1);
 x_808 = x_723;
} else {
 lean::dec_ref(x_723);
 x_808 = lean::box(0);
}
if (lean::is_scalar(x_808)) {
 x_809 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_809 = x_808;
}
lean::cnstr_set(x_809, 0, x_806);
lean::cnstr_set(x_809, 1, x_807);
return x_809;
}
}
else
{
obj* x_810; obj* x_811; obj* x_812; obj* x_813; obj* x_814; 
lean::dec(x_674);
x_810 = lean::cnstr_get(x_722, 0);
lean::inc(x_810);
lean::dec(x_722);
x_811 = l_Lean_IR_EmitCpp_emitDeclInit___closed__6;
x_812 = lean::string_append(x_672, x_811);
x_813 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_813, 0, x_673);
lean::cnstr_set(x_813, 1, x_812);
x_814 = l_Lean_IR_EmitCpp_emitCppName(x_810, x_2, x_813);
if (lean::obj_tag(x_814) == 0)
{
obj* x_815; obj* x_816; obj* x_817; obj* x_818; obj* x_819; obj* x_820; obj* x_821; obj* x_822; obj* x_823; obj* x_824; obj* x_825; 
x_815 = lean::cnstr_get(x_814, 1);
lean::inc(x_815);
if (lean::is_exclusive(x_814)) {
 lean::cnstr_release(x_814, 0);
 lean::cnstr_release(x_814, 1);
 x_816 = x_814;
} else {
 lean::dec_ref(x_814);
 x_816 = lean::box(0);
}
x_817 = l_Lean_IR_EmitCpp_emitMainFn___closed__4;
x_818 = lean::string_append(x_815, x_817);
x_819 = l_IO_println___rarg___closed__1;
x_820 = lean::string_append(x_818, x_819);
x_821 = l_Lean_IR_EmitCpp_emitDeclInit___closed__7;
x_822 = lean::string_append(x_820, x_821);
x_823 = lean::string_append(x_822, x_819);
if (lean::is_scalar(x_816)) {
 x_824 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_824 = x_816;
}
lean::cnstr_set(x_824, 0, x_673);
lean::cnstr_set(x_824, 1, x_823);
lean::inc(x_675);
x_825 = l_Lean_IR_EmitCpp_emitCppName(x_675, x_2, x_824);
if (lean::obj_tag(x_825) == 0)
{
obj* x_826; obj* x_827; obj* x_828; obj* x_829; obj* x_830; uint8 x_831; uint8 x_832; 
x_826 = lean::cnstr_get(x_825, 1);
lean::inc(x_826);
if (lean::is_exclusive(x_825)) {
 lean::cnstr_release(x_825, 0);
 lean::cnstr_release(x_825, 1);
 x_827 = x_825;
} else {
 lean::dec_ref(x_825);
 x_827 = lean::box(0);
}
x_828 = l_Lean_IR_EmitCpp_emitDeclInit___closed__8;
x_829 = lean::string_append(x_826, x_828);
x_830 = lean::string_append(x_829, x_819);
x_831 = l_Lean_IR_Decl_resultType___main(x_1);
x_832 = l_Lean_IR_IRType_isObj___main(x_831);
if (x_832 == 0)
{
uint8 x_833; 
x_833 = l_Lean_IR_IRType_isIrrelevant___main(x_831);
if (x_833 == 0)
{
obj* x_834; 
lean::inc(x_675);
x_834 = l_Lean_IR_EmitCpp_quoteName(x_675);
if (lean::obj_tag(x_834) == 0)
{
obj* x_835; 
lean::dec(x_675);
if (lean::is_scalar(x_827)) {
 x_835 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_835 = x_827;
}
lean::cnstr_set(x_835, 0, x_673);
lean::cnstr_set(x_835, 1, x_830);
return x_835;
}
else
{
obj* x_836; obj* x_837; obj* x_838; obj* x_839; obj* x_840; obj* x_841; obj* x_842; obj* x_843; 
x_836 = lean::cnstr_get(x_834, 0);
lean::inc(x_836);
lean::dec(x_834);
x_837 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_838 = lean::string_append(x_837, x_836);
lean::dec(x_836);
x_839 = l_List_reprAux___main___rarg___closed__1;
x_840 = lean::string_append(x_838, x_839);
x_841 = lean::string_append(x_830, x_840);
lean::dec(x_840);
if (lean::is_scalar(x_827)) {
 x_842 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_842 = x_827;
}
lean::cnstr_set(x_842, 0, x_673);
lean::cnstr_set(x_842, 1, x_841);
x_843 = l_Lean_IR_EmitCpp_emitBoxFn(x_831, x_2, x_842);
if (lean::obj_tag(x_843) == 0)
{
obj* x_844; obj* x_845; obj* x_846; obj* x_847; obj* x_848; obj* x_849; 
x_844 = lean::cnstr_get(x_843, 1);
lean::inc(x_844);
if (lean::is_exclusive(x_843)) {
 lean::cnstr_release(x_843, 0);
 lean::cnstr_release(x_843, 1);
 x_845 = x_843;
} else {
 lean::dec_ref(x_843);
 x_845 = lean::box(0);
}
x_846 = l_Prod_HasRepr___rarg___closed__1;
x_847 = lean::string_append(x_844, x_846);
if (lean::is_scalar(x_845)) {
 x_848 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_848 = x_845;
}
lean::cnstr_set(x_848, 0, x_673);
lean::cnstr_set(x_848, 1, x_847);
x_849 = l_Lean_IR_EmitCpp_emitCppName(x_675, x_2, x_848);
if (lean::obj_tag(x_849) == 0)
{
obj* x_850; obj* x_851; obj* x_852; obj* x_853; obj* x_854; obj* x_855; 
x_850 = lean::cnstr_get(x_849, 1);
lean::inc(x_850);
if (lean::is_exclusive(x_849)) {
 lean::cnstr_release(x_849, 0);
 lean::cnstr_release(x_849, 1);
 x_851 = x_849;
} else {
 lean::dec_ref(x_849);
 x_851 = lean::box(0);
}
x_852 = l_Lean_IR_EmitCpp_emitDeclInit___closed__4;
x_853 = lean::string_append(x_850, x_852);
x_854 = lean::string_append(x_853, x_819);
if (lean::is_scalar(x_851)) {
 x_855 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_855 = x_851;
}
lean::cnstr_set(x_855, 0, x_673);
lean::cnstr_set(x_855, 1, x_854);
return x_855;
}
else
{
obj* x_856; obj* x_857; obj* x_858; obj* x_859; 
x_856 = lean::cnstr_get(x_849, 0);
lean::inc(x_856);
x_857 = lean::cnstr_get(x_849, 1);
lean::inc(x_857);
if (lean::is_exclusive(x_849)) {
 lean::cnstr_release(x_849, 0);
 lean::cnstr_release(x_849, 1);
 x_858 = x_849;
} else {
 lean::dec_ref(x_849);
 x_858 = lean::box(0);
}
if (lean::is_scalar(x_858)) {
 x_859 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_859 = x_858;
}
lean::cnstr_set(x_859, 0, x_856);
lean::cnstr_set(x_859, 1, x_857);
return x_859;
}
}
else
{
obj* x_860; obj* x_861; obj* x_862; obj* x_863; 
lean::dec(x_675);
x_860 = lean::cnstr_get(x_843, 0);
lean::inc(x_860);
x_861 = lean::cnstr_get(x_843, 1);
lean::inc(x_861);
if (lean::is_exclusive(x_843)) {
 lean::cnstr_release(x_843, 0);
 lean::cnstr_release(x_843, 1);
 x_862 = x_843;
} else {
 lean::dec_ref(x_843);
 x_862 = lean::box(0);
}
if (lean::is_scalar(x_862)) {
 x_863 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_863 = x_862;
}
lean::cnstr_set(x_863, 0, x_860);
lean::cnstr_set(x_863, 1, x_861);
return x_863;
}
}
}
else
{
obj* x_864; 
lean::dec(x_675);
if (lean::is_scalar(x_827)) {
 x_864 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_864 = x_827;
}
lean::cnstr_set(x_864, 0, x_673);
lean::cnstr_set(x_864, 1, x_830);
return x_864;
}
}
else
{
obj* x_865; obj* x_866; obj* x_867; obj* x_868; 
x_865 = l_Lean_IR_EmitCpp_emitDeclInit___closed__5;
x_866 = lean::string_append(x_830, x_865);
if (lean::is_scalar(x_827)) {
 x_867 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_867 = x_827;
}
lean::cnstr_set(x_867, 0, x_673);
lean::cnstr_set(x_867, 1, x_866);
lean::inc(x_675);
x_868 = l_Lean_IR_EmitCpp_emitCppName(x_675, x_2, x_867);
if (lean::obj_tag(x_868) == 0)
{
obj* x_869; obj* x_870; obj* x_871; obj* x_872; obj* x_873; obj* x_874; 
x_869 = lean::cnstr_get(x_868, 1);
lean::inc(x_869);
if (lean::is_exclusive(x_868)) {
 lean::cnstr_release(x_868, 0);
 lean::cnstr_release(x_868, 1);
 x_870 = x_868;
} else {
 lean::dec_ref(x_868);
 x_870 = lean::box(0);
}
x_871 = l_Lean_IR_EmitCpp_emitInc___closed__2;
x_872 = lean::string_append(x_869, x_871);
x_873 = lean::string_append(x_872, x_819);
lean::inc(x_675);
x_874 = l_Lean_IR_EmitCpp_quoteName(x_675);
if (lean::obj_tag(x_874) == 0)
{
obj* x_875; 
lean::dec(x_675);
if (lean::is_scalar(x_870)) {
 x_875 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_875 = x_870;
}
lean::cnstr_set(x_875, 0, x_673);
lean::cnstr_set(x_875, 1, x_873);
return x_875;
}
else
{
obj* x_876; obj* x_877; obj* x_878; obj* x_879; obj* x_880; obj* x_881; obj* x_882; obj* x_883; 
x_876 = lean::cnstr_get(x_874, 0);
lean::inc(x_876);
lean::dec(x_874);
x_877 = l_Lean_IR_EmitCpp_emitDeclInit___closed__3;
x_878 = lean::string_append(x_877, x_876);
lean::dec(x_876);
x_879 = l_List_reprAux___main___rarg___closed__1;
x_880 = lean::string_append(x_878, x_879);
x_881 = lean::string_append(x_873, x_880);
lean::dec(x_880);
if (lean::is_scalar(x_870)) {
 x_882 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_882 = x_870;
}
lean::cnstr_set(x_882, 0, x_673);
lean::cnstr_set(x_882, 1, x_881);
x_883 = l_Lean_IR_EmitCpp_emitCppName(x_675, x_2, x_882);
if (lean::obj_tag(x_883) == 0)
{
obj* x_884; obj* x_885; obj* x_886; obj* x_887; obj* x_888; 
x_884 = lean::cnstr_get(x_883, 1);
lean::inc(x_884);
if (lean::is_exclusive(x_883)) {
 lean::cnstr_release(x_883, 0);
 lean::cnstr_release(x_883, 1);
 x_885 = x_883;
} else {
 lean::dec_ref(x_883);
 x_885 = lean::box(0);
}
x_886 = lean::string_append(x_884, x_871);
x_887 = lean::string_append(x_886, x_819);
if (lean::is_scalar(x_885)) {
 x_888 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_888 = x_885;
}
lean::cnstr_set(x_888, 0, x_673);
lean::cnstr_set(x_888, 1, x_887);
return x_888;
}
else
{
obj* x_889; obj* x_890; obj* x_891; obj* x_892; 
x_889 = lean::cnstr_get(x_883, 0);
lean::inc(x_889);
x_890 = lean::cnstr_get(x_883, 1);
lean::inc(x_890);
if (lean::is_exclusive(x_883)) {
 lean::cnstr_release(x_883, 0);
 lean::cnstr_release(x_883, 1);
 x_891 = x_883;
} else {
 lean::dec_ref(x_883);
 x_891 = lean::box(0);
}
if (lean::is_scalar(x_891)) {
 x_892 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_892 = x_891;
}
lean::cnstr_set(x_892, 0, x_889);
lean::cnstr_set(x_892, 1, x_890);
return x_892;
}
}
}
else
{
obj* x_893; obj* x_894; obj* x_895; obj* x_896; 
lean::dec(x_675);
x_893 = lean::cnstr_get(x_868, 0);
lean::inc(x_893);
x_894 = lean::cnstr_get(x_868, 1);
lean::inc(x_894);
if (lean::is_exclusive(x_868)) {
 lean::cnstr_release(x_868, 0);
 lean::cnstr_release(x_868, 1);
 x_895 = x_868;
} else {
 lean::dec_ref(x_868);
 x_895 = lean::box(0);
}
if (lean::is_scalar(x_895)) {
 x_896 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_896 = x_895;
}
lean::cnstr_set(x_896, 0, x_893);
lean::cnstr_set(x_896, 1, x_894);
return x_896;
}
}
}
else
{
obj* x_897; obj* x_898; obj* x_899; obj* x_900; 
lean::dec(x_675);
x_897 = lean::cnstr_get(x_825, 0);
lean::inc(x_897);
x_898 = lean::cnstr_get(x_825, 1);
lean::inc(x_898);
if (lean::is_exclusive(x_825)) {
 lean::cnstr_release(x_825, 0);
 lean::cnstr_release(x_825, 1);
 x_899 = x_825;
} else {
 lean::dec_ref(x_825);
 x_899 = lean::box(0);
}
if (lean::is_scalar(x_899)) {
 x_900 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_900 = x_899;
}
lean::cnstr_set(x_900, 0, x_897);
lean::cnstr_set(x_900, 1, x_898);
return x_900;
}
}
else
{
obj* x_901; obj* x_902; obj* x_903; obj* x_904; 
lean::dec(x_675);
x_901 = lean::cnstr_get(x_814, 0);
lean::inc(x_901);
x_902 = lean::cnstr_get(x_814, 1);
lean::inc(x_902);
if (lean::is_exclusive(x_814)) {
 lean::cnstr_release(x_814, 0);
 lean::cnstr_release(x_814, 1);
 x_903 = x_814;
} else {
 lean::dec_ref(x_814);
 x_903 = lean::box(0);
}
if (lean::is_scalar(x_903)) {
 x_904 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_904 = x_903;
}
lean::cnstr_set(x_904, 0, x_901);
lean::cnstr_set(x_904, 1, x_902);
return x_904;
}
}
}
}
else
{
obj* x_905; obj* x_906; obj* x_907; obj* x_908; 
lean::dec(x_674);
lean::dec(x_671);
x_905 = l_Lean_IR_EmitCpp_emitDeclInit___closed__6;
x_906 = lean::string_append(x_672, x_905);
x_907 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_907, 0, x_673);
lean::cnstr_set(x_907, 1, x_906);
x_908 = l_Lean_IR_EmitCpp_emitCppName(x_675, x_2, x_907);
if (lean::obj_tag(x_908) == 0)
{
obj* x_909; obj* x_910; obj* x_911; obj* x_912; obj* x_913; obj* x_914; obj* x_915; obj* x_916; obj* x_917; obj* x_918; 
x_909 = lean::cnstr_get(x_908, 1);
lean::inc(x_909);
if (lean::is_exclusive(x_908)) {
 lean::cnstr_release(x_908, 0);
 lean::cnstr_release(x_908, 1);
 x_910 = x_908;
} else {
 lean::dec_ref(x_908);
 x_910 = lean::box(0);
}
x_911 = l_Lean_IR_EmitCpp_emitMainFn___closed__4;
x_912 = lean::string_append(x_909, x_911);
x_913 = l_IO_println___rarg___closed__1;
x_914 = lean::string_append(x_912, x_913);
x_915 = l_Lean_IR_EmitCpp_emitDeclInit___closed__7;
x_916 = lean::string_append(x_914, x_915);
x_917 = lean::string_append(x_916, x_913);
if (lean::is_scalar(x_910)) {
 x_918 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_918 = x_910;
}
lean::cnstr_set(x_918, 0, x_673);
lean::cnstr_set(x_918, 1, x_917);
return x_918;
}
else
{
obj* x_919; obj* x_920; obj* x_921; obj* x_922; 
x_919 = lean::cnstr_get(x_908, 0);
lean::inc(x_919);
x_920 = lean::cnstr_get(x_908, 1);
lean::inc(x_920);
if (lean::is_exclusive(x_908)) {
 lean::cnstr_release(x_908, 0);
 lean::cnstr_release(x_908, 1);
 x_921 = x_908;
} else {
 lean::dec_ref(x_908);
 x_921 = lean::box(0);
}
if (lean::is_scalar(x_921)) {
 x_922 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_922 = x_921;
}
lean::cnstr_set(x_922, 0, x_919);
lean::cnstr_set(x_922, 1, x_920);
return x_922;
}
}
}
}
else
{
uint8 x_923; 
x_923 = !lean::is_exclusive(x_4);
if (x_923 == 0)
{
return x_4;
}
else
{
obj* x_924; obj* x_925; obj* x_926; 
x_924 = lean::cnstr_get(x_4, 0);
x_925 = lean::cnstr_get(x_4, 1);
lean::inc(x_925);
lean::inc(x_924);
lean::dec(x_4);
x_926 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_926, 0, x_924);
lean::cnstr_set(x_926, 1, x_925);
return x_926;
}
}
}
}
obj* l_Lean_IR_EmitCpp_emitDeclInit___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_IR_EmitCpp_emitDeclInit(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("obj* initialize_");
return x_1;
}
}
obj* _init_l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("(obj*);");
return x_1;
}
}
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::array_get_size(x_1);
x_6 = lean::nat_dec_lt(x_2, x_5);
lean::dec(x_5);
if (x_6 == 0)
{
uint8 x_7; 
lean::dec(x_2);
x_7 = !lean::is_exclusive(x_4);
if (x_7 == 0)
{
obj* x_8; obj* x_9; 
x_8 = lean::cnstr_get(x_4, 0);
lean::dec(x_8);
x_9 = lean::box(0);
lean::cnstr_set(x_4, 0, x_9);
return x_4;
}
else
{
obj* x_10; obj* x_11; obj* x_12; 
x_10 = lean::cnstr_get(x_4, 1);
lean::inc(x_10);
lean::dec(x_4);
x_11 = lean::box(0);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_10);
return x_12;
}
}
else
{
uint8 x_13; 
x_13 = !lean::is_exclusive(x_4);
if (x_13 == 0)
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_14 = lean::cnstr_get(x_4, 1);
x_15 = lean::cnstr_get(x_4, 0);
lean::dec(x_15);
x_16 = lean::array_fget(x_1, x_2);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_2, x_17);
lean::dec(x_2);
x_19 = l_String_splitAux___main___closed__1;
x_20 = l_Lean_Name_mangle(x_16, x_19);
x_21 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__1;
x_22 = lean::string_append(x_21, x_20);
lean::dec(x_20);
x_23 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__2;
x_24 = lean::string_append(x_22, x_23);
x_25 = lean::string_append(x_14, x_24);
lean::dec(x_24);
x_26 = l_IO_println___rarg___closed__1;
x_27 = lean::string_append(x_25, x_26);
x_28 = lean::box(0);
lean::cnstr_set(x_4, 1, x_27);
lean::cnstr_set(x_4, 0, x_28);
x_2 = x_18;
goto _start;
}
else
{
obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; 
x_30 = lean::cnstr_get(x_4, 1);
lean::inc(x_30);
lean::dec(x_4);
x_31 = lean::array_fget(x_1, x_2);
x_32 = lean::mk_nat_obj(1u);
x_33 = lean::nat_add(x_2, x_32);
lean::dec(x_2);
x_34 = l_String_splitAux___main___closed__1;
x_35 = l_Lean_Name_mangle(x_31, x_34);
x_36 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__1;
x_37 = lean::string_append(x_36, x_35);
lean::dec(x_35);
x_38 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__2;
x_39 = lean::string_append(x_37, x_38);
x_40 = lean::string_append(x_30, x_39);
lean::dec(x_39);
x_41 = l_IO_println___rarg___closed__1;
x_42 = lean::string_append(x_40, x_41);
x_43 = lean::box(0);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_43);
lean::cnstr_set(x_44, 1, x_42);
x_2 = x_33;
x_4 = x_44;
goto _start;
}
}
}
}
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__2(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; uint8 x_7; 
x_6 = lean::array_get_size(x_2);
x_7 = lean::nat_dec_lt(x_3, x_6);
lean::dec(x_6);
if (x_7 == 0)
{
uint8 x_8; 
lean::dec(x_3);
lean::dec(x_1);
x_8 = !lean::is_exclusive(x_5);
if (x_8 == 0)
{
obj* x_9; obj* x_10; 
x_9 = lean::cnstr_get(x_5, 0);
lean::dec(x_9);
x_10 = lean::box(0);
lean::cnstr_set(x_5, 0, x_10);
return x_5;
}
else
{
obj* x_11; obj* x_12; obj* x_13; 
x_11 = lean::cnstr_get(x_5, 1);
lean::inc(x_11);
lean::dec(x_5);
x_12 = lean::box(0);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_11);
return x_13;
}
}
else
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_14 = lean::array_fget(x_2, x_3);
x_15 = lean::mk_nat_obj(1u);
x_16 = lean::nat_add(x_3, x_15);
lean::dec(x_3);
x_17 = l_String_splitAux___main___closed__1;
x_18 = l_Lean_Name_mangle(x_14, x_17);
x_19 = l_Lean_IR_EmitCpp_emitMainFn___closed__3;
x_20 = lean::string_append(x_19, x_18);
lean::dec(x_18);
x_21 = l_Lean_IR_EmitCpp_emitMainFn___closed__4;
x_22 = lean::string_append(x_20, x_21);
lean::inc(x_1);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_1);
x_24 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_23, x_4, x_5);
lean::dec(x_23);
if (lean::obj_tag(x_24) == 0)
{
uint8 x_25; 
x_25 = !lean::is_exclusive(x_24);
if (x_25 == 0)
{
obj* x_26; obj* x_27; 
x_26 = lean::cnstr_get(x_24, 0);
lean::dec(x_26);
x_27 = lean::box(0);
lean::cnstr_set(x_24, 0, x_27);
x_3 = x_16;
x_5 = x_24;
goto _start;
}
else
{
obj* x_29; obj* x_30; obj* x_31; 
x_29 = lean::cnstr_get(x_24, 1);
lean::inc(x_29);
lean::dec(x_24);
x_30 = lean::box(0);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_29);
x_3 = x_16;
x_5 = x_31;
goto _start;
}
}
else
{
uint8 x_33; 
lean::dec(x_16);
lean::dec(x_1);
x_33 = !lean::is_exclusive(x_24);
if (x_33 == 0)
{
return x_24;
}
else
{
obj* x_34; obj* x_35; obj* x_36; 
x_34 = lean::cnstr_get(x_24, 0);
x_35 = lean::cnstr_get(x_24, 1);
lean::inc(x_35);
lean::inc(x_34);
lean::dec(x_24);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_34);
lean::cnstr_set(x_36, 1, x_35);
return x_36;
}
}
}
}
}
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitInitFn___spec__3(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; 
x_5 = lean::cnstr_get(x_3, 0);
lean::dec(x_5);
x_6 = lean::box(0);
lean::cnstr_set(x_3, 0, x_6);
return x_3;
}
else
{
obj* x_7; obj* x_8; obj* x_9; 
x_7 = lean::cnstr_get(x_3, 1);
lean::inc(x_7);
lean::dec(x_3);
x_8 = lean::box(0);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_7);
return x_9;
}
}
else
{
obj* x_10; obj* x_11; obj* x_12; 
x_10 = lean::cnstr_get(x_1, 0);
x_11 = lean::cnstr_get(x_1, 1);
x_12 = l_Lean_IR_EmitCpp_emitDeclInit(x_10, x_2, x_3);
if (lean::obj_tag(x_12) == 0)
{
uint8 x_13; 
x_13 = !lean::is_exclusive(x_12);
if (x_13 == 0)
{
obj* x_14; obj* x_15; 
x_14 = lean::cnstr_get(x_12, 0);
lean::dec(x_14);
x_15 = lean::box(0);
lean::cnstr_set(x_12, 0, x_15);
x_1 = x_11;
x_3 = x_12;
goto _start;
}
else
{
obj* x_17; obj* x_18; obj* x_19; 
x_17 = lean::cnstr_get(x_12, 1);
lean::inc(x_17);
lean::dec(x_12);
x_18 = lean::box(0);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_17);
x_1 = x_11;
x_3 = x_19;
goto _start;
}
}
else
{
uint8 x_21; 
x_21 = !lean::is_exclusive(x_12);
if (x_21 == 0)
{
return x_12;
}
else
{
obj* x_22; obj* x_23; obj* x_24; 
x_22 = lean::cnstr_get(x_12, 0);
x_23 = lean::cnstr_get(x_12, 1);
lean::inc(x_23);
lean::inc(x_22);
lean::dec(x_12);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_22);
lean::cnstr_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
obj* _init_l_Lean_IR_EmitCpp_emitInitFn___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("(obj* w) {");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitInitFn___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_1 = lean::box(0);
x_2 = lean::mk_string("if (io_result_is_error(w)) return w;");
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_string("_G_initialized = true;");
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::mk_string("if (_G_initialized) return w;");
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_5);
return x_7;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitInitFn___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("static bool _G_initialized = false;");
return x_1;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitInitFn___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = lean::mk_string("if (io_result_is_error(w)) return w;");
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* _init_l_Lean_IR_EmitCpp_emitInitFn___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = lean::box(0);
x_2 = lean::mk_string("}");
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_string("return w;");
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
return x_5;
}
}
obj* l_Lean_IR_EmitCpp_emitInitFn(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_EmitCpp_getEnv(x_1, x_2);
if (lean::obj_tag(x_3) == 0)
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = lean::cnstr_get(x_3, 0);
x_6 = lean::box(0);
lean::cnstr_set(x_3, 0, x_6);
x_7 = l_Lean_IR_EmitCpp_getModName(x_1, x_3);
if (lean::obj_tag(x_7) == 0)
{
uint8 x_8; 
x_8 = !lean::is_exclusive(x_7);
if (x_8 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_9 = lean::cnstr_get(x_7, 0);
lean::cnstr_set(x_7, 0, x_6);
x_10 = l_Lean_Environment_imports(x_5);
x_11 = lean::mk_nat_obj(0u);
x_12 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1(x_10, x_11, x_1, x_7);
if (lean::obj_tag(x_12) == 0)
{
uint8 x_13; 
x_13 = !lean::is_exclusive(x_12);
if (x_13 == 0)
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_14 = lean::cnstr_get(x_12, 0);
lean::dec(x_14);
lean::cnstr_set(x_12, 0, x_6);
x_15 = l_String_splitAux___main___closed__1;
x_16 = l_Lean_Name_mangle(x_9, x_15);
x_17 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__1;
x_18 = lean::string_append(x_17, x_16);
lean::dec(x_16);
x_19 = l_Lean_IR_EmitCpp_emitInitFn___closed__1;
x_20 = lean::string_append(x_18, x_19);
x_21 = l_Lean_IR_EmitCpp_emitInitFn___closed__2;
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_20);
lean::cnstr_set(x_22, 1, x_21);
x_23 = l_Lean_IR_EmitCpp_emitInitFn___closed__3;
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_22);
x_25 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_24, x_1, x_12);
lean::dec(x_24);
if (lean::obj_tag(x_25) == 0)
{
uint8 x_26; 
x_26 = !lean::is_exclusive(x_25);
if (x_26 == 0)
{
obj* x_27; obj* x_28; obj* x_29; 
x_27 = lean::cnstr_get(x_25, 0);
lean::dec(x_27);
lean::cnstr_set(x_25, 0, x_6);
x_28 = l_Lean_IR_EmitCpp_emitInitFn___closed__4;
x_29 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__2(x_28, x_10, x_11, x_1, x_25);
lean::dec(x_10);
if (lean::obj_tag(x_29) == 0)
{
uint8 x_30; 
x_30 = !lean::is_exclusive(x_29);
if (x_30 == 0)
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
x_31 = lean::cnstr_get(x_29, 0);
lean::dec(x_31);
lean::cnstr_set(x_29, 0, x_6);
x_32 = l_Lean_IR_declMapExt;
x_33 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_32, x_5);
lean::dec(x_5);
x_34 = l_List_reverse___rarg(x_33);
x_35 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitInitFn___spec__3(x_34, x_1, x_29);
lean::dec(x_34);
if (lean::obj_tag(x_35) == 0)
{
uint8 x_36; 
x_36 = !lean::is_exclusive(x_35);
if (x_36 == 0)
{
obj* x_37; obj* x_38; obj* x_39; 
x_37 = lean::cnstr_get(x_35, 0);
lean::dec(x_37);
lean::cnstr_set(x_35, 0, x_6);
x_38 = l_Lean_IR_EmitCpp_emitInitFn___closed__5;
x_39 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_38, x_1, x_35);
return x_39;
}
else
{
obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_40 = lean::cnstr_get(x_35, 1);
lean::inc(x_40);
lean::dec(x_35);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_6);
lean::cnstr_set(x_41, 1, x_40);
x_42 = l_Lean_IR_EmitCpp_emitInitFn___closed__5;
x_43 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_42, x_1, x_41);
return x_43;
}
}
else
{
uint8 x_44; 
x_44 = !lean::is_exclusive(x_35);
if (x_44 == 0)
{
return x_35;
}
else
{
obj* x_45; obj* x_46; obj* x_47; 
x_45 = lean::cnstr_get(x_35, 0);
x_46 = lean::cnstr_get(x_35, 1);
lean::inc(x_46);
lean::inc(x_45);
lean::dec(x_35);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_45);
lean::cnstr_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_48 = lean::cnstr_get(x_29, 1);
lean::inc(x_48);
lean::dec(x_29);
x_49 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_49, 0, x_6);
lean::cnstr_set(x_49, 1, x_48);
x_50 = l_Lean_IR_declMapExt;
x_51 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_50, x_5);
lean::dec(x_5);
x_52 = l_List_reverse___rarg(x_51);
x_53 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitInitFn___spec__3(x_52, x_1, x_49);
lean::dec(x_52);
if (lean::obj_tag(x_53) == 0)
{
obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; 
x_54 = lean::cnstr_get(x_53, 1);
lean::inc(x_54);
if (lean::is_exclusive(x_53)) {
 lean::cnstr_release(x_53, 0);
 lean::cnstr_release(x_53, 1);
 x_55 = x_53;
} else {
 lean::dec_ref(x_53);
 x_55 = lean::box(0);
}
if (lean::is_scalar(x_55)) {
 x_56 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_56 = x_55;
}
lean::cnstr_set(x_56, 0, x_6);
lean::cnstr_set(x_56, 1, x_54);
x_57 = l_Lean_IR_EmitCpp_emitInitFn___closed__5;
x_58 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_57, x_1, x_56);
return x_58;
}
else
{
obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
x_59 = lean::cnstr_get(x_53, 0);
lean::inc(x_59);
x_60 = lean::cnstr_get(x_53, 1);
lean::inc(x_60);
if (lean::is_exclusive(x_53)) {
 lean::cnstr_release(x_53, 0);
 lean::cnstr_release(x_53, 1);
 x_61 = x_53;
} else {
 lean::dec_ref(x_53);
 x_61 = lean::box(0);
}
if (lean::is_scalar(x_61)) {
 x_62 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_62 = x_61;
}
lean::cnstr_set(x_62, 0, x_59);
lean::cnstr_set(x_62, 1, x_60);
return x_62;
}
}
}
else
{
uint8 x_63; 
lean::dec(x_5);
x_63 = !lean::is_exclusive(x_29);
if (x_63 == 0)
{
return x_29;
}
else
{
obj* x_64; obj* x_65; obj* x_66; 
x_64 = lean::cnstr_get(x_29, 0);
x_65 = lean::cnstr_get(x_29, 1);
lean::inc(x_65);
lean::inc(x_64);
lean::dec(x_29);
x_66 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_66, 0, x_64);
lean::cnstr_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_67 = lean::cnstr_get(x_25, 1);
lean::inc(x_67);
lean::dec(x_25);
x_68 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_68, 0, x_6);
lean::cnstr_set(x_68, 1, x_67);
x_69 = l_Lean_IR_EmitCpp_emitInitFn___closed__4;
x_70 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__2(x_69, x_10, x_11, x_1, x_68);
lean::dec(x_10);
if (lean::obj_tag(x_70) == 0)
{
obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; 
x_71 = lean::cnstr_get(x_70, 1);
lean::inc(x_71);
if (lean::is_exclusive(x_70)) {
 lean::cnstr_release(x_70, 0);
 lean::cnstr_release(x_70, 1);
 x_72 = x_70;
} else {
 lean::dec_ref(x_70);
 x_72 = lean::box(0);
}
if (lean::is_scalar(x_72)) {
 x_73 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_73 = x_72;
}
lean::cnstr_set(x_73, 0, x_6);
lean::cnstr_set(x_73, 1, x_71);
x_74 = l_Lean_IR_declMapExt;
x_75 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_74, x_5);
lean::dec(x_5);
x_76 = l_List_reverse___rarg(x_75);
x_77 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitInitFn___spec__3(x_76, x_1, x_73);
lean::dec(x_76);
if (lean::obj_tag(x_77) == 0)
{
obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
x_78 = lean::cnstr_get(x_77, 1);
lean::inc(x_78);
if (lean::is_exclusive(x_77)) {
 lean::cnstr_release(x_77, 0);
 lean::cnstr_release(x_77, 1);
 x_79 = x_77;
} else {
 lean::dec_ref(x_77);
 x_79 = lean::box(0);
}
if (lean::is_scalar(x_79)) {
 x_80 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_80 = x_79;
}
lean::cnstr_set(x_80, 0, x_6);
lean::cnstr_set(x_80, 1, x_78);
x_81 = l_Lean_IR_EmitCpp_emitInitFn___closed__5;
x_82 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_81, x_1, x_80);
return x_82;
}
else
{
obj* x_83; obj* x_84; obj* x_85; obj* x_86; 
x_83 = lean::cnstr_get(x_77, 0);
lean::inc(x_83);
x_84 = lean::cnstr_get(x_77, 1);
lean::inc(x_84);
if (lean::is_exclusive(x_77)) {
 lean::cnstr_release(x_77, 0);
 lean::cnstr_release(x_77, 1);
 x_85 = x_77;
} else {
 lean::dec_ref(x_77);
 x_85 = lean::box(0);
}
if (lean::is_scalar(x_85)) {
 x_86 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_86 = x_85;
}
lean::cnstr_set(x_86, 0, x_83);
lean::cnstr_set(x_86, 1, x_84);
return x_86;
}
}
else
{
obj* x_87; obj* x_88; obj* x_89; obj* x_90; 
lean::dec(x_5);
x_87 = lean::cnstr_get(x_70, 0);
lean::inc(x_87);
x_88 = lean::cnstr_get(x_70, 1);
lean::inc(x_88);
if (lean::is_exclusive(x_70)) {
 lean::cnstr_release(x_70, 0);
 lean::cnstr_release(x_70, 1);
 x_89 = x_70;
} else {
 lean::dec_ref(x_70);
 x_89 = lean::box(0);
}
if (lean::is_scalar(x_89)) {
 x_90 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_90 = x_89;
}
lean::cnstr_set(x_90, 0, x_87);
lean::cnstr_set(x_90, 1, x_88);
return x_90;
}
}
}
else
{
uint8 x_91; 
lean::dec(x_10);
lean::dec(x_5);
x_91 = !lean::is_exclusive(x_25);
if (x_91 == 0)
{
return x_25;
}
else
{
obj* x_92; obj* x_93; obj* x_94; 
x_92 = lean::cnstr_get(x_25, 0);
x_93 = lean::cnstr_get(x_25, 1);
lean::inc(x_93);
lean::inc(x_92);
lean::dec(x_25);
x_94 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_94, 0, x_92);
lean::cnstr_set(x_94, 1, x_93);
return x_94;
}
}
}
else
{
obj* x_95; obj* x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; 
x_95 = lean::cnstr_get(x_12, 1);
lean::inc(x_95);
lean::dec(x_12);
x_96 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_96, 0, x_6);
lean::cnstr_set(x_96, 1, x_95);
x_97 = l_String_splitAux___main___closed__1;
x_98 = l_Lean_Name_mangle(x_9, x_97);
x_99 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__1;
x_100 = lean::string_append(x_99, x_98);
lean::dec(x_98);
x_101 = l_Lean_IR_EmitCpp_emitInitFn___closed__1;
x_102 = lean::string_append(x_100, x_101);
x_103 = l_Lean_IR_EmitCpp_emitInitFn___closed__2;
x_104 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_104, 0, x_102);
lean::cnstr_set(x_104, 1, x_103);
x_105 = l_Lean_IR_EmitCpp_emitInitFn___closed__3;
x_106 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_106, 0, x_105);
lean::cnstr_set(x_106, 1, x_104);
x_107 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_106, x_1, x_96);
lean::dec(x_106);
if (lean::obj_tag(x_107) == 0)
{
obj* x_108; obj* x_109; obj* x_110; obj* x_111; obj* x_112; 
x_108 = lean::cnstr_get(x_107, 1);
lean::inc(x_108);
if (lean::is_exclusive(x_107)) {
 lean::cnstr_release(x_107, 0);
 lean::cnstr_release(x_107, 1);
 x_109 = x_107;
} else {
 lean::dec_ref(x_107);
 x_109 = lean::box(0);
}
if (lean::is_scalar(x_109)) {
 x_110 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_110 = x_109;
}
lean::cnstr_set(x_110, 0, x_6);
lean::cnstr_set(x_110, 1, x_108);
x_111 = l_Lean_IR_EmitCpp_emitInitFn___closed__4;
x_112 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__2(x_111, x_10, x_11, x_1, x_110);
lean::dec(x_10);
if (lean::obj_tag(x_112) == 0)
{
obj* x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; 
x_113 = lean::cnstr_get(x_112, 1);
lean::inc(x_113);
if (lean::is_exclusive(x_112)) {
 lean::cnstr_release(x_112, 0);
 lean::cnstr_release(x_112, 1);
 x_114 = x_112;
} else {
 lean::dec_ref(x_112);
 x_114 = lean::box(0);
}
if (lean::is_scalar(x_114)) {
 x_115 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_115 = x_114;
}
lean::cnstr_set(x_115, 0, x_6);
lean::cnstr_set(x_115, 1, x_113);
x_116 = l_Lean_IR_declMapExt;
x_117 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_116, x_5);
lean::dec(x_5);
x_118 = l_List_reverse___rarg(x_117);
x_119 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitInitFn___spec__3(x_118, x_1, x_115);
lean::dec(x_118);
if (lean::obj_tag(x_119) == 0)
{
obj* x_120; obj* x_121; obj* x_122; obj* x_123; obj* x_124; 
x_120 = lean::cnstr_get(x_119, 1);
lean::inc(x_120);
if (lean::is_exclusive(x_119)) {
 lean::cnstr_release(x_119, 0);
 lean::cnstr_release(x_119, 1);
 x_121 = x_119;
} else {
 lean::dec_ref(x_119);
 x_121 = lean::box(0);
}
if (lean::is_scalar(x_121)) {
 x_122 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_122 = x_121;
}
lean::cnstr_set(x_122, 0, x_6);
lean::cnstr_set(x_122, 1, x_120);
x_123 = l_Lean_IR_EmitCpp_emitInitFn___closed__5;
x_124 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_123, x_1, x_122);
return x_124;
}
else
{
obj* x_125; obj* x_126; obj* x_127; obj* x_128; 
x_125 = lean::cnstr_get(x_119, 0);
lean::inc(x_125);
x_126 = lean::cnstr_get(x_119, 1);
lean::inc(x_126);
if (lean::is_exclusive(x_119)) {
 lean::cnstr_release(x_119, 0);
 lean::cnstr_release(x_119, 1);
 x_127 = x_119;
} else {
 lean::dec_ref(x_119);
 x_127 = lean::box(0);
}
if (lean::is_scalar(x_127)) {
 x_128 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_128 = x_127;
}
lean::cnstr_set(x_128, 0, x_125);
lean::cnstr_set(x_128, 1, x_126);
return x_128;
}
}
else
{
obj* x_129; obj* x_130; obj* x_131; obj* x_132; 
lean::dec(x_5);
x_129 = lean::cnstr_get(x_112, 0);
lean::inc(x_129);
x_130 = lean::cnstr_get(x_112, 1);
lean::inc(x_130);
if (lean::is_exclusive(x_112)) {
 lean::cnstr_release(x_112, 0);
 lean::cnstr_release(x_112, 1);
 x_131 = x_112;
} else {
 lean::dec_ref(x_112);
 x_131 = lean::box(0);
}
if (lean::is_scalar(x_131)) {
 x_132 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_132 = x_131;
}
lean::cnstr_set(x_132, 0, x_129);
lean::cnstr_set(x_132, 1, x_130);
return x_132;
}
}
else
{
obj* x_133; obj* x_134; obj* x_135; obj* x_136; 
lean::dec(x_10);
lean::dec(x_5);
x_133 = lean::cnstr_get(x_107, 0);
lean::inc(x_133);
x_134 = lean::cnstr_get(x_107, 1);
lean::inc(x_134);
if (lean::is_exclusive(x_107)) {
 lean::cnstr_release(x_107, 0);
 lean::cnstr_release(x_107, 1);
 x_135 = x_107;
} else {
 lean::dec_ref(x_107);
 x_135 = lean::box(0);
}
if (lean::is_scalar(x_135)) {
 x_136 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_136 = x_135;
}
lean::cnstr_set(x_136, 0, x_133);
lean::cnstr_set(x_136, 1, x_134);
return x_136;
}
}
}
else
{
uint8 x_137; 
lean::dec(x_10);
lean::dec(x_9);
lean::dec(x_5);
x_137 = !lean::is_exclusive(x_12);
if (x_137 == 0)
{
return x_12;
}
else
{
obj* x_138; obj* x_139; obj* x_140; 
x_138 = lean::cnstr_get(x_12, 0);
x_139 = lean::cnstr_get(x_12, 1);
lean::inc(x_139);
lean::inc(x_138);
lean::dec(x_12);
x_140 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_140, 0, x_138);
lean::cnstr_set(x_140, 1, x_139);
return x_140;
}
}
}
else
{
obj* x_141; obj* x_142; obj* x_143; obj* x_144; obj* x_145; obj* x_146; 
x_141 = lean::cnstr_get(x_7, 0);
x_142 = lean::cnstr_get(x_7, 1);
lean::inc(x_142);
lean::inc(x_141);
lean::dec(x_7);
x_143 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_143, 0, x_6);
lean::cnstr_set(x_143, 1, x_142);
x_144 = l_Lean_Environment_imports(x_5);
x_145 = lean::mk_nat_obj(0u);
x_146 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1(x_144, x_145, x_1, x_143);
if (lean::obj_tag(x_146) == 0)
{
obj* x_147; obj* x_148; obj* x_149; obj* x_150; obj* x_151; obj* x_152; obj* x_153; obj* x_154; obj* x_155; obj* x_156; obj* x_157; obj* x_158; obj* x_159; obj* x_160; 
x_147 = lean::cnstr_get(x_146, 1);
lean::inc(x_147);
if (lean::is_exclusive(x_146)) {
 lean::cnstr_release(x_146, 0);
 lean::cnstr_release(x_146, 1);
 x_148 = x_146;
} else {
 lean::dec_ref(x_146);
 x_148 = lean::box(0);
}
if (lean::is_scalar(x_148)) {
 x_149 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_149 = x_148;
}
lean::cnstr_set(x_149, 0, x_6);
lean::cnstr_set(x_149, 1, x_147);
x_150 = l_String_splitAux___main___closed__1;
x_151 = l_Lean_Name_mangle(x_141, x_150);
x_152 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__1;
x_153 = lean::string_append(x_152, x_151);
lean::dec(x_151);
x_154 = l_Lean_IR_EmitCpp_emitInitFn___closed__1;
x_155 = lean::string_append(x_153, x_154);
x_156 = l_Lean_IR_EmitCpp_emitInitFn___closed__2;
x_157 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_157, 0, x_155);
lean::cnstr_set(x_157, 1, x_156);
x_158 = l_Lean_IR_EmitCpp_emitInitFn___closed__3;
x_159 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_159, 0, x_158);
lean::cnstr_set(x_159, 1, x_157);
x_160 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_159, x_1, x_149);
lean::dec(x_159);
if (lean::obj_tag(x_160) == 0)
{
obj* x_161; obj* x_162; obj* x_163; obj* x_164; obj* x_165; 
x_161 = lean::cnstr_get(x_160, 1);
lean::inc(x_161);
if (lean::is_exclusive(x_160)) {
 lean::cnstr_release(x_160, 0);
 lean::cnstr_release(x_160, 1);
 x_162 = x_160;
} else {
 lean::dec_ref(x_160);
 x_162 = lean::box(0);
}
if (lean::is_scalar(x_162)) {
 x_163 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_163 = x_162;
}
lean::cnstr_set(x_163, 0, x_6);
lean::cnstr_set(x_163, 1, x_161);
x_164 = l_Lean_IR_EmitCpp_emitInitFn___closed__4;
x_165 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__2(x_164, x_144, x_145, x_1, x_163);
lean::dec(x_144);
if (lean::obj_tag(x_165) == 0)
{
obj* x_166; obj* x_167; obj* x_168; obj* x_169; obj* x_170; obj* x_171; obj* x_172; 
x_166 = lean::cnstr_get(x_165, 1);
lean::inc(x_166);
if (lean::is_exclusive(x_165)) {
 lean::cnstr_release(x_165, 0);
 lean::cnstr_release(x_165, 1);
 x_167 = x_165;
} else {
 lean::dec_ref(x_165);
 x_167 = lean::box(0);
}
if (lean::is_scalar(x_167)) {
 x_168 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_168 = x_167;
}
lean::cnstr_set(x_168, 0, x_6);
lean::cnstr_set(x_168, 1, x_166);
x_169 = l_Lean_IR_declMapExt;
x_170 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_169, x_5);
lean::dec(x_5);
x_171 = l_List_reverse___rarg(x_170);
x_172 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitInitFn___spec__3(x_171, x_1, x_168);
lean::dec(x_171);
if (lean::obj_tag(x_172) == 0)
{
obj* x_173; obj* x_174; obj* x_175; obj* x_176; obj* x_177; 
x_173 = lean::cnstr_get(x_172, 1);
lean::inc(x_173);
if (lean::is_exclusive(x_172)) {
 lean::cnstr_release(x_172, 0);
 lean::cnstr_release(x_172, 1);
 x_174 = x_172;
} else {
 lean::dec_ref(x_172);
 x_174 = lean::box(0);
}
if (lean::is_scalar(x_174)) {
 x_175 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_175 = x_174;
}
lean::cnstr_set(x_175, 0, x_6);
lean::cnstr_set(x_175, 1, x_173);
x_176 = l_Lean_IR_EmitCpp_emitInitFn___closed__5;
x_177 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_176, x_1, x_175);
return x_177;
}
else
{
obj* x_178; obj* x_179; obj* x_180; obj* x_181; 
x_178 = lean::cnstr_get(x_172, 0);
lean::inc(x_178);
x_179 = lean::cnstr_get(x_172, 1);
lean::inc(x_179);
if (lean::is_exclusive(x_172)) {
 lean::cnstr_release(x_172, 0);
 lean::cnstr_release(x_172, 1);
 x_180 = x_172;
} else {
 lean::dec_ref(x_172);
 x_180 = lean::box(0);
}
if (lean::is_scalar(x_180)) {
 x_181 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_181 = x_180;
}
lean::cnstr_set(x_181, 0, x_178);
lean::cnstr_set(x_181, 1, x_179);
return x_181;
}
}
else
{
obj* x_182; obj* x_183; obj* x_184; obj* x_185; 
lean::dec(x_5);
x_182 = lean::cnstr_get(x_165, 0);
lean::inc(x_182);
x_183 = lean::cnstr_get(x_165, 1);
lean::inc(x_183);
if (lean::is_exclusive(x_165)) {
 lean::cnstr_release(x_165, 0);
 lean::cnstr_release(x_165, 1);
 x_184 = x_165;
} else {
 lean::dec_ref(x_165);
 x_184 = lean::box(0);
}
if (lean::is_scalar(x_184)) {
 x_185 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_185 = x_184;
}
lean::cnstr_set(x_185, 0, x_182);
lean::cnstr_set(x_185, 1, x_183);
return x_185;
}
}
else
{
obj* x_186; obj* x_187; obj* x_188; obj* x_189; 
lean::dec(x_144);
lean::dec(x_5);
x_186 = lean::cnstr_get(x_160, 0);
lean::inc(x_186);
x_187 = lean::cnstr_get(x_160, 1);
lean::inc(x_187);
if (lean::is_exclusive(x_160)) {
 lean::cnstr_release(x_160, 0);
 lean::cnstr_release(x_160, 1);
 x_188 = x_160;
} else {
 lean::dec_ref(x_160);
 x_188 = lean::box(0);
}
if (lean::is_scalar(x_188)) {
 x_189 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_189 = x_188;
}
lean::cnstr_set(x_189, 0, x_186);
lean::cnstr_set(x_189, 1, x_187);
return x_189;
}
}
else
{
obj* x_190; obj* x_191; obj* x_192; obj* x_193; 
lean::dec(x_144);
lean::dec(x_141);
lean::dec(x_5);
x_190 = lean::cnstr_get(x_146, 0);
lean::inc(x_190);
x_191 = lean::cnstr_get(x_146, 1);
lean::inc(x_191);
if (lean::is_exclusive(x_146)) {
 lean::cnstr_release(x_146, 0);
 lean::cnstr_release(x_146, 1);
 x_192 = x_146;
} else {
 lean::dec_ref(x_146);
 x_192 = lean::box(0);
}
if (lean::is_scalar(x_192)) {
 x_193 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_193 = x_192;
}
lean::cnstr_set(x_193, 0, x_190);
lean::cnstr_set(x_193, 1, x_191);
return x_193;
}
}
}
else
{
uint8 x_194; 
lean::dec(x_5);
x_194 = !lean::is_exclusive(x_7);
if (x_194 == 0)
{
return x_7;
}
else
{
obj* x_195; obj* x_196; obj* x_197; 
x_195 = lean::cnstr_get(x_7, 0);
x_196 = lean::cnstr_get(x_7, 1);
lean::inc(x_196);
lean::inc(x_195);
lean::dec(x_7);
x_197 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_197, 0, x_195);
lean::cnstr_set(x_197, 1, x_196);
return x_197;
}
}
}
else
{
obj* x_198; obj* x_199; obj* x_200; obj* x_201; obj* x_202; 
x_198 = lean::cnstr_get(x_3, 0);
x_199 = lean::cnstr_get(x_3, 1);
lean::inc(x_199);
lean::inc(x_198);
lean::dec(x_3);
x_200 = lean::box(0);
x_201 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_201, 0, x_200);
lean::cnstr_set(x_201, 1, x_199);
x_202 = l_Lean_IR_EmitCpp_getModName(x_1, x_201);
if (lean::obj_tag(x_202) == 0)
{
obj* x_203; obj* x_204; obj* x_205; obj* x_206; obj* x_207; obj* x_208; obj* x_209; 
x_203 = lean::cnstr_get(x_202, 0);
lean::inc(x_203);
x_204 = lean::cnstr_get(x_202, 1);
lean::inc(x_204);
if (lean::is_exclusive(x_202)) {
 lean::cnstr_release(x_202, 0);
 lean::cnstr_release(x_202, 1);
 x_205 = x_202;
} else {
 lean::dec_ref(x_202);
 x_205 = lean::box(0);
}
if (lean::is_scalar(x_205)) {
 x_206 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_206 = x_205;
}
lean::cnstr_set(x_206, 0, x_200);
lean::cnstr_set(x_206, 1, x_204);
x_207 = l_Lean_Environment_imports(x_198);
x_208 = lean::mk_nat_obj(0u);
x_209 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1(x_207, x_208, x_1, x_206);
if (lean::obj_tag(x_209) == 0)
{
obj* x_210; obj* x_211; obj* x_212; obj* x_213; obj* x_214; obj* x_215; obj* x_216; obj* x_217; obj* x_218; obj* x_219; obj* x_220; obj* x_221; obj* x_222; obj* x_223; 
x_210 = lean::cnstr_get(x_209, 1);
lean::inc(x_210);
if (lean::is_exclusive(x_209)) {
 lean::cnstr_release(x_209, 0);
 lean::cnstr_release(x_209, 1);
 x_211 = x_209;
} else {
 lean::dec_ref(x_209);
 x_211 = lean::box(0);
}
if (lean::is_scalar(x_211)) {
 x_212 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_212 = x_211;
}
lean::cnstr_set(x_212, 0, x_200);
lean::cnstr_set(x_212, 1, x_210);
x_213 = l_String_splitAux___main___closed__1;
x_214 = l_Lean_Name_mangle(x_203, x_213);
x_215 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__1;
x_216 = lean::string_append(x_215, x_214);
lean::dec(x_214);
x_217 = l_Lean_IR_EmitCpp_emitInitFn___closed__1;
x_218 = lean::string_append(x_216, x_217);
x_219 = l_Lean_IR_EmitCpp_emitInitFn___closed__2;
x_220 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_220, 0, x_218);
lean::cnstr_set(x_220, 1, x_219);
x_221 = l_Lean_IR_EmitCpp_emitInitFn___closed__3;
x_222 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_222, 0, x_221);
lean::cnstr_set(x_222, 1, x_220);
x_223 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_222, x_1, x_212);
lean::dec(x_222);
if (lean::obj_tag(x_223) == 0)
{
obj* x_224; obj* x_225; obj* x_226; obj* x_227; obj* x_228; 
x_224 = lean::cnstr_get(x_223, 1);
lean::inc(x_224);
if (lean::is_exclusive(x_223)) {
 lean::cnstr_release(x_223, 0);
 lean::cnstr_release(x_223, 1);
 x_225 = x_223;
} else {
 lean::dec_ref(x_223);
 x_225 = lean::box(0);
}
if (lean::is_scalar(x_225)) {
 x_226 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_226 = x_225;
}
lean::cnstr_set(x_226, 0, x_200);
lean::cnstr_set(x_226, 1, x_224);
x_227 = l_Lean_IR_EmitCpp_emitInitFn___closed__4;
x_228 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__2(x_227, x_207, x_208, x_1, x_226);
lean::dec(x_207);
if (lean::obj_tag(x_228) == 0)
{
obj* x_229; obj* x_230; obj* x_231; obj* x_232; obj* x_233; obj* x_234; obj* x_235; 
x_229 = lean::cnstr_get(x_228, 1);
lean::inc(x_229);
if (lean::is_exclusive(x_228)) {
 lean::cnstr_release(x_228, 0);
 lean::cnstr_release(x_228, 1);
 x_230 = x_228;
} else {
 lean::dec_ref(x_228);
 x_230 = lean::box(0);
}
if (lean::is_scalar(x_230)) {
 x_231 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_231 = x_230;
}
lean::cnstr_set(x_231, 0, x_200);
lean::cnstr_set(x_231, 1, x_229);
x_232 = l_Lean_IR_declMapExt;
x_233 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_232, x_198);
lean::dec(x_198);
x_234 = l_List_reverse___rarg(x_233);
x_235 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitInitFn___spec__3(x_234, x_1, x_231);
lean::dec(x_234);
if (lean::obj_tag(x_235) == 0)
{
obj* x_236; obj* x_237; obj* x_238; obj* x_239; obj* x_240; 
x_236 = lean::cnstr_get(x_235, 1);
lean::inc(x_236);
if (lean::is_exclusive(x_235)) {
 lean::cnstr_release(x_235, 0);
 lean::cnstr_release(x_235, 1);
 x_237 = x_235;
} else {
 lean::dec_ref(x_235);
 x_237 = lean::box(0);
}
if (lean::is_scalar(x_237)) {
 x_238 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_238 = x_237;
}
lean::cnstr_set(x_238, 0, x_200);
lean::cnstr_set(x_238, 1, x_236);
x_239 = l_Lean_IR_EmitCpp_emitInitFn___closed__5;
x_240 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitMainFn___spec__2(x_239, x_1, x_238);
return x_240;
}
else
{
obj* x_241; obj* x_242; obj* x_243; obj* x_244; 
x_241 = lean::cnstr_get(x_235, 0);
lean::inc(x_241);
x_242 = lean::cnstr_get(x_235, 1);
lean::inc(x_242);
if (lean::is_exclusive(x_235)) {
 lean::cnstr_release(x_235, 0);
 lean::cnstr_release(x_235, 1);
 x_243 = x_235;
} else {
 lean::dec_ref(x_235);
 x_243 = lean::box(0);
}
if (lean::is_scalar(x_243)) {
 x_244 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_244 = x_243;
}
lean::cnstr_set(x_244, 0, x_241);
lean::cnstr_set(x_244, 1, x_242);
return x_244;
}
}
else
{
obj* x_245; obj* x_246; obj* x_247; obj* x_248; 
lean::dec(x_198);
x_245 = lean::cnstr_get(x_228, 0);
lean::inc(x_245);
x_246 = lean::cnstr_get(x_228, 1);
lean::inc(x_246);
if (lean::is_exclusive(x_228)) {
 lean::cnstr_release(x_228, 0);
 lean::cnstr_release(x_228, 1);
 x_247 = x_228;
} else {
 lean::dec_ref(x_228);
 x_247 = lean::box(0);
}
if (lean::is_scalar(x_247)) {
 x_248 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_248 = x_247;
}
lean::cnstr_set(x_248, 0, x_245);
lean::cnstr_set(x_248, 1, x_246);
return x_248;
}
}
else
{
obj* x_249; obj* x_250; obj* x_251; obj* x_252; 
lean::dec(x_207);
lean::dec(x_198);
x_249 = lean::cnstr_get(x_223, 0);
lean::inc(x_249);
x_250 = lean::cnstr_get(x_223, 1);
lean::inc(x_250);
if (lean::is_exclusive(x_223)) {
 lean::cnstr_release(x_223, 0);
 lean::cnstr_release(x_223, 1);
 x_251 = x_223;
} else {
 lean::dec_ref(x_223);
 x_251 = lean::box(0);
}
if (lean::is_scalar(x_251)) {
 x_252 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_252 = x_251;
}
lean::cnstr_set(x_252, 0, x_249);
lean::cnstr_set(x_252, 1, x_250);
return x_252;
}
}
else
{
obj* x_253; obj* x_254; obj* x_255; obj* x_256; 
lean::dec(x_207);
lean::dec(x_203);
lean::dec(x_198);
x_253 = lean::cnstr_get(x_209, 0);
lean::inc(x_253);
x_254 = lean::cnstr_get(x_209, 1);
lean::inc(x_254);
if (lean::is_exclusive(x_209)) {
 lean::cnstr_release(x_209, 0);
 lean::cnstr_release(x_209, 1);
 x_255 = x_209;
} else {
 lean::dec_ref(x_209);
 x_255 = lean::box(0);
}
if (lean::is_scalar(x_255)) {
 x_256 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_256 = x_255;
}
lean::cnstr_set(x_256, 0, x_253);
lean::cnstr_set(x_256, 1, x_254);
return x_256;
}
}
else
{
obj* x_257; obj* x_258; obj* x_259; obj* x_260; 
lean::dec(x_198);
x_257 = lean::cnstr_get(x_202, 0);
lean::inc(x_257);
x_258 = lean::cnstr_get(x_202, 1);
lean::inc(x_258);
if (lean::is_exclusive(x_202)) {
 lean::cnstr_release(x_202, 0);
 lean::cnstr_release(x_202, 1);
 x_259 = x_202;
} else {
 lean::dec_ref(x_202);
 x_259 = lean::box(0);
}
if (lean::is_scalar(x_259)) {
 x_260 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_260 = x_259;
}
lean::cnstr_set(x_260, 0, x_257);
lean::cnstr_set(x_260, 1, x_258);
return x_260;
}
}
}
else
{
uint8 x_261; 
x_261 = !lean::is_exclusive(x_3);
if (x_261 == 0)
{
return x_3;
}
else
{
obj* x_262; obj* x_263; obj* x_264; 
x_262 = lean::cnstr_get(x_3, 0);
x_263 = lean::cnstr_get(x_3, 1);
lean::inc(x_263);
lean::inc(x_262);
lean::dec(x_3);
x_264 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_264, 0, x_262);
lean::cnstr_set(x_264, 1, x_263);
return x_264;
}
}
}
}
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1(x_1, x_2, x_3, x_4);
lean::dec(x_3);
lean::dec(x_1);
return x_5;
}
}
obj* l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__2(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_2);
return x_6;
}
}
obj* l_List_mfor___main___at_Lean_IR_EmitCpp_emitInitFn___spec__3___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_List_mfor___main___at_Lean_IR_EmitCpp_emitInitFn___spec__3(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_IR_EmitCpp_emitInitFn___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_EmitCpp_emitInitFn(x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_IR_EmitCpp_main(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_IR_EmitCpp_emitFileHeader(x_1, x_2);
if (lean::obj_tag(x_3) == 0)
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = lean::cnstr_get(x_3, 0);
lean::dec(x_5);
x_6 = lean::box(0);
lean::cnstr_set(x_3, 0, x_6);
x_7 = l_Lean_IR_EmitCpp_emitFnDecls(x_1, x_3);
if (lean::obj_tag(x_7) == 0)
{
uint8 x_8; 
x_8 = !lean::is_exclusive(x_7);
if (x_8 == 0)
{
obj* x_9; obj* x_10; 
x_9 = lean::cnstr_get(x_7, 0);
lean::dec(x_9);
lean::cnstr_set(x_7, 0, x_6);
lean::inc(x_1);
x_10 = l_Lean_IR_EmitCpp_emitFns(x_1, x_7);
if (lean::obj_tag(x_10) == 0)
{
uint8 x_11; 
x_11 = !lean::is_exclusive(x_10);
if (x_11 == 0)
{
obj* x_12; obj* x_13; 
x_12 = lean::cnstr_get(x_10, 0);
lean::dec(x_12);
lean::cnstr_set(x_10, 0, x_6);
x_13 = l_Lean_IR_EmitCpp_emitInitFn(x_1, x_10);
if (lean::obj_tag(x_13) == 0)
{
uint8 x_14; 
x_14 = !lean::is_exclusive(x_13);
if (x_14 == 0)
{
obj* x_15; obj* x_16; 
x_15 = lean::cnstr_get(x_13, 0);
lean::dec(x_15);
lean::cnstr_set(x_13, 0, x_6);
x_16 = l_Lean_IR_EmitCpp_emitMainFnIfNeeded(x_1, x_13);
lean::dec(x_1);
return x_16;
}
else
{
obj* x_17; obj* x_18; obj* x_19; 
x_17 = lean::cnstr_get(x_13, 1);
lean::inc(x_17);
lean::dec(x_13);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_6);
lean::cnstr_set(x_18, 1, x_17);
x_19 = l_Lean_IR_EmitCpp_emitMainFnIfNeeded(x_1, x_18);
lean::dec(x_1);
return x_19;
}
}
else
{
uint8 x_20; 
lean::dec(x_1);
x_20 = !lean::is_exclusive(x_13);
if (x_20 == 0)
{
return x_13;
}
else
{
obj* x_21; obj* x_22; obj* x_23; 
x_21 = lean::cnstr_get(x_13, 0);
x_22 = lean::cnstr_get(x_13, 1);
lean::inc(x_22);
lean::inc(x_21);
lean::dec(x_13);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
obj* x_24; obj* x_25; obj* x_26; 
x_24 = lean::cnstr_get(x_10, 1);
lean::inc(x_24);
lean::dec(x_10);
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_6);
lean::cnstr_set(x_25, 1, x_24);
x_26 = l_Lean_IR_EmitCpp_emitInitFn(x_1, x_25);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_27 = lean::cnstr_get(x_26, 1);
lean::inc(x_27);
if (lean::is_exclusive(x_26)) {
 lean::cnstr_release(x_26, 0);
 lean::cnstr_release(x_26, 1);
 x_28 = x_26;
} else {
 lean::dec_ref(x_26);
 x_28 = lean::box(0);
}
if (lean::is_scalar(x_28)) {
 x_29 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_29 = x_28;
}
lean::cnstr_set(x_29, 0, x_6);
lean::cnstr_set(x_29, 1, x_27);
x_30 = l_Lean_IR_EmitCpp_emitMainFnIfNeeded(x_1, x_29);
lean::dec(x_1);
return x_30;
}
else
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
lean::dec(x_1);
x_31 = lean::cnstr_get(x_26, 0);
lean::inc(x_31);
x_32 = lean::cnstr_get(x_26, 1);
lean::inc(x_32);
if (lean::is_exclusive(x_26)) {
 lean::cnstr_release(x_26, 0);
 lean::cnstr_release(x_26, 1);
 x_33 = x_26;
} else {
 lean::dec_ref(x_26);
 x_33 = lean::box(0);
}
if (lean::is_scalar(x_33)) {
 x_34 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_34 = x_33;
}
lean::cnstr_set(x_34, 0, x_31);
lean::cnstr_set(x_34, 1, x_32);
return x_34;
}
}
}
else
{
uint8 x_35; 
lean::dec(x_1);
x_35 = !lean::is_exclusive(x_10);
if (x_35 == 0)
{
return x_10;
}
else
{
obj* x_36; obj* x_37; obj* x_38; 
x_36 = lean::cnstr_get(x_10, 0);
x_37 = lean::cnstr_get(x_10, 1);
lean::inc(x_37);
lean::inc(x_36);
lean::dec(x_10);
x_38 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_38, 0, x_36);
lean::cnstr_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
obj* x_39; obj* x_40; obj* x_41; 
x_39 = lean::cnstr_get(x_7, 1);
lean::inc(x_39);
lean::dec(x_7);
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_6);
lean::cnstr_set(x_40, 1, x_39);
lean::inc(x_1);
x_41 = l_Lean_IR_EmitCpp_emitFns(x_1, x_40);
if (lean::obj_tag(x_41) == 0)
{
obj* x_42; obj* x_43; obj* x_44; obj* x_45; 
x_42 = lean::cnstr_get(x_41, 1);
lean::inc(x_42);
if (lean::is_exclusive(x_41)) {
 lean::cnstr_release(x_41, 0);
 lean::cnstr_release(x_41, 1);
 x_43 = x_41;
} else {
 lean::dec_ref(x_41);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_43)) {
 x_44 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_44 = x_43;
}
lean::cnstr_set(x_44, 0, x_6);
lean::cnstr_set(x_44, 1, x_42);
x_45 = l_Lean_IR_EmitCpp_emitInitFn(x_1, x_44);
if (lean::obj_tag(x_45) == 0)
{
obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
x_46 = lean::cnstr_get(x_45, 1);
lean::inc(x_46);
if (lean::is_exclusive(x_45)) {
 lean::cnstr_release(x_45, 0);
 lean::cnstr_release(x_45, 1);
 x_47 = x_45;
} else {
 lean::dec_ref(x_45);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_47)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_47;
}
lean::cnstr_set(x_48, 0, x_6);
lean::cnstr_set(x_48, 1, x_46);
x_49 = l_Lean_IR_EmitCpp_emitMainFnIfNeeded(x_1, x_48);
lean::dec(x_1);
return x_49;
}
else
{
obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
lean::dec(x_1);
x_50 = lean::cnstr_get(x_45, 0);
lean::inc(x_50);
x_51 = lean::cnstr_get(x_45, 1);
lean::inc(x_51);
if (lean::is_exclusive(x_45)) {
 lean::cnstr_release(x_45, 0);
 lean::cnstr_release(x_45, 1);
 x_52 = x_45;
} else {
 lean::dec_ref(x_45);
 x_52 = lean::box(0);
}
if (lean::is_scalar(x_52)) {
 x_53 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_53 = x_52;
}
lean::cnstr_set(x_53, 0, x_50);
lean::cnstr_set(x_53, 1, x_51);
return x_53;
}
}
else
{
obj* x_54; obj* x_55; obj* x_56; obj* x_57; 
lean::dec(x_1);
x_54 = lean::cnstr_get(x_41, 0);
lean::inc(x_54);
x_55 = lean::cnstr_get(x_41, 1);
lean::inc(x_55);
if (lean::is_exclusive(x_41)) {
 lean::cnstr_release(x_41, 0);
 lean::cnstr_release(x_41, 1);
 x_56 = x_41;
} else {
 lean::dec_ref(x_41);
 x_56 = lean::box(0);
}
if (lean::is_scalar(x_56)) {
 x_57 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_57 = x_56;
}
lean::cnstr_set(x_57, 0, x_54);
lean::cnstr_set(x_57, 1, x_55);
return x_57;
}
}
}
else
{
uint8 x_58; 
lean::dec(x_1);
x_58 = !lean::is_exclusive(x_7);
if (x_58 == 0)
{
return x_7;
}
else
{
obj* x_59; obj* x_60; obj* x_61; 
x_59 = lean::cnstr_get(x_7, 0);
x_60 = lean::cnstr_get(x_7, 1);
lean::inc(x_60);
lean::inc(x_59);
lean::dec(x_7);
x_61 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_61, 0, x_59);
lean::cnstr_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
obj* x_62; obj* x_63; obj* x_64; obj* x_65; 
x_62 = lean::cnstr_get(x_3, 1);
lean::inc(x_62);
lean::dec(x_3);
x_63 = lean::box(0);
x_64 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_62);
x_65 = l_Lean_IR_EmitCpp_emitFnDecls(x_1, x_64);
if (lean::obj_tag(x_65) == 0)
{
obj* x_66; obj* x_67; obj* x_68; obj* x_69; 
x_66 = lean::cnstr_get(x_65, 1);
lean::inc(x_66);
if (lean::is_exclusive(x_65)) {
 lean::cnstr_release(x_65, 0);
 lean::cnstr_release(x_65, 1);
 x_67 = x_65;
} else {
 lean::dec_ref(x_65);
 x_67 = lean::box(0);
}
if (lean::is_scalar(x_67)) {
 x_68 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_68 = x_67;
}
lean::cnstr_set(x_68, 0, x_63);
lean::cnstr_set(x_68, 1, x_66);
lean::inc(x_1);
x_69 = l_Lean_IR_EmitCpp_emitFns(x_1, x_68);
if (lean::obj_tag(x_69) == 0)
{
obj* x_70; obj* x_71; obj* x_72; obj* x_73; 
x_70 = lean::cnstr_get(x_69, 1);
lean::inc(x_70);
if (lean::is_exclusive(x_69)) {
 lean::cnstr_release(x_69, 0);
 lean::cnstr_release(x_69, 1);
 x_71 = x_69;
} else {
 lean::dec_ref(x_69);
 x_71 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_72 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_72 = x_71;
}
lean::cnstr_set(x_72, 0, x_63);
lean::cnstr_set(x_72, 1, x_70);
x_73 = l_Lean_IR_EmitCpp_emitInitFn(x_1, x_72);
if (lean::obj_tag(x_73) == 0)
{
obj* x_74; obj* x_75; obj* x_76; obj* x_77; 
x_74 = lean::cnstr_get(x_73, 1);
lean::inc(x_74);
if (lean::is_exclusive(x_73)) {
 lean::cnstr_release(x_73, 0);
 lean::cnstr_release(x_73, 1);
 x_75 = x_73;
} else {
 lean::dec_ref(x_73);
 x_75 = lean::box(0);
}
if (lean::is_scalar(x_75)) {
 x_76 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_76 = x_75;
}
lean::cnstr_set(x_76, 0, x_63);
lean::cnstr_set(x_76, 1, x_74);
x_77 = l_Lean_IR_EmitCpp_emitMainFnIfNeeded(x_1, x_76);
lean::dec(x_1);
return x_77;
}
else
{
obj* x_78; obj* x_79; obj* x_80; obj* x_81; 
lean::dec(x_1);
x_78 = lean::cnstr_get(x_73, 0);
lean::inc(x_78);
x_79 = lean::cnstr_get(x_73, 1);
lean::inc(x_79);
if (lean::is_exclusive(x_73)) {
 lean::cnstr_release(x_73, 0);
 lean::cnstr_release(x_73, 1);
 x_80 = x_73;
} else {
 lean::dec_ref(x_73);
 x_80 = lean::box(0);
}
if (lean::is_scalar(x_80)) {
 x_81 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_81 = x_80;
}
lean::cnstr_set(x_81, 0, x_78);
lean::cnstr_set(x_81, 1, x_79);
return x_81;
}
}
else
{
obj* x_82; obj* x_83; obj* x_84; obj* x_85; 
lean::dec(x_1);
x_82 = lean::cnstr_get(x_69, 0);
lean::inc(x_82);
x_83 = lean::cnstr_get(x_69, 1);
lean::inc(x_83);
if (lean::is_exclusive(x_69)) {
 lean::cnstr_release(x_69, 0);
 lean::cnstr_release(x_69, 1);
 x_84 = x_69;
} else {
 lean::dec_ref(x_69);
 x_84 = lean::box(0);
}
if (lean::is_scalar(x_84)) {
 x_85 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_85 = x_84;
}
lean::cnstr_set(x_85, 0, x_82);
lean::cnstr_set(x_85, 1, x_83);
return x_85;
}
}
else
{
obj* x_86; obj* x_87; obj* x_88; obj* x_89; 
lean::dec(x_1);
x_86 = lean::cnstr_get(x_65, 0);
lean::inc(x_86);
x_87 = lean::cnstr_get(x_65, 1);
lean::inc(x_87);
if (lean::is_exclusive(x_65)) {
 lean::cnstr_release(x_65, 0);
 lean::cnstr_release(x_65, 1);
 x_88 = x_65;
} else {
 lean::dec_ref(x_65);
 x_88 = lean::box(0);
}
if (lean::is_scalar(x_88)) {
 x_89 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_89 = x_88;
}
lean::cnstr_set(x_89, 0, x_86);
lean::cnstr_set(x_89, 1, x_87);
return x_89;
}
}
}
else
{
uint8 x_90; 
lean::dec(x_1);
x_90 = !lean::is_exclusive(x_3);
if (x_90 == 0)
{
return x_3;
}
else
{
obj* x_91; obj* x_92; obj* x_93; 
x_91 = lean::cnstr_get(x_3, 0);
x_92 = lean::cnstr_get(x_3, 1);
lean::inc(x_92);
lean::inc(x_91);
lean::dec(x_3);
x_93 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_93, 0, x_91);
lean::cnstr_set(x_93, 1, x_92);
return x_93;
}
}
}
}
obj* _init_l_Lean_IR_emitCpp___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = lean::mk_string("");
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
namespace lean {
namespace ir {
obj* emit_cpp_core(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_3 = l_HashMap_Inhabited___closed__1;
x_4 = lean::box(0);
x_5 = l_Array_empty___closed__1;
x_6 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_2);
lean::cnstr_set(x_6, 2, x_3);
lean::cnstr_set(x_6, 3, x_3);
lean::cnstr_set(x_6, 4, x_4);
lean::cnstr_set(x_6, 5, x_5);
x_7 = l_Lean_IR_emitCpp___closed__1;
x_8 = l_Lean_IR_EmitCpp_main(x_6, x_7);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; obj* x_10; 
x_9 = lean::cnstr_get(x_8, 1);
lean::inc(x_9);
lean::dec(x_8);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_9);
return x_10;
}
else
{
obj* x_11; obj* x_12; 
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
lean::dec(x_8);
x_12 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_12, 0, x_11);
return x_12;
}
}
}
}
}
obj* initialize_init_control_conditional(obj*);
obj* initialize_init_lean_runtime(obj*);
obj* initialize_init_lean_compiler_namemangling(obj*);
obj* initialize_init_lean_compiler_exportattr(obj*);
obj* initialize_init_lean_compiler_initattr(obj*);
obj* initialize_init_lean_compiler_ir_compilerm(obj*);
obj* initialize_init_lean_compiler_ir_emitutil(obj*);
obj* initialize_init_lean_compiler_ir_normids(obj*);
obj* initialize_init_lean_compiler_ir_simpcase(obj*);
obj* initialize_init_lean_compiler_ir_boxing(obj*);
static bool _G_initialized = false;
obj* initialize_init_lean_compiler_ir_emitcpp(obj* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (io_result_is_error(w)) return w;
w = initialize_init_control_conditional(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_runtime(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_compiler_namemangling(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_compiler_exportattr(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_compiler_initattr(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_compiler_ir_compilerm(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_compiler_ir_emitutil(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_compiler_ir_normids(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_compiler_ir_simpcase(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_compiler_ir_boxing(w);
if (io_result_is_error(w)) return w;
l_Lean_IR_EmitCpp_leanMainFn = _init_l_Lean_IR_EmitCpp_leanMainFn();
lean::mark_persistent(l_Lean_IR_EmitCpp_leanMainFn);
lean::register_constant(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "leanMainFn"), l_Lean_IR_EmitCpp_leanMainFn);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "getEnv"), 2, l_Lean_IR_EmitCpp_getEnv___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "getModName"), 2, l_Lean_IR_EmitCpp_getModName___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "getDecl"), 3, l_Lean_IR_EmitCpp_getDecl___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emit"), 1, l_Lean_IR_EmitCpp_emit);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitLn"), 1, l_Lean_IR_EmitCpp_emitLn);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitLns"), 1, l_Lean_IR_EmitCpp_emitLns);
l_Lean_IR_EmitCpp_argToCppString___closed__1 = _init_l_Lean_IR_EmitCpp_argToCppString___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_argToCppString___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "argToCppString"), 1, l_Lean_IR_EmitCpp_argToCppString);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitArg"), 3, l_Lean_IR_EmitCpp_emitArg___boxed);
l_Lean_IR_EmitCpp_toCppType___main___closed__1 = _init_l_Lean_IR_EmitCpp_toCppType___main___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_toCppType___main___closed__1);
l_Lean_IR_EmitCpp_toCppType___main___closed__2 = _init_l_Lean_IR_EmitCpp_toCppType___main___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_toCppType___main___closed__2);
l_Lean_IR_EmitCpp_toCppType___main___closed__3 = _init_l_Lean_IR_EmitCpp_toCppType___main___closed__3();
lean::mark_persistent(l_Lean_IR_EmitCpp_toCppType___main___closed__3);
l_Lean_IR_EmitCpp_toCppType___main___closed__4 = _init_l_Lean_IR_EmitCpp_toCppType___main___closed__4();
lean::mark_persistent(l_Lean_IR_EmitCpp_toCppType___main___closed__4);
l_Lean_IR_EmitCpp_toCppType___main___closed__5 = _init_l_Lean_IR_EmitCpp_toCppType___main___closed__5();
lean::mark_persistent(l_Lean_IR_EmitCpp_toCppType___main___closed__5);
l_Lean_IR_EmitCpp_toCppType___main___closed__6 = _init_l_Lean_IR_EmitCpp_toCppType___main___closed__6();
lean::mark_persistent(l_Lean_IR_EmitCpp_toCppType___main___closed__6);
l_Lean_IR_EmitCpp_toCppType___main___closed__7 = _init_l_Lean_IR_EmitCpp_toCppType___main___closed__7();
lean::mark_persistent(l_Lean_IR_EmitCpp_toCppType___main___closed__7);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "toCppType"), 1, l_Lean_IR_EmitCpp_toCppType___boxed);
l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__1 = _init_l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__1);
l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__2 = _init_l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__2);
l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__3 = _init_l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__3();
lean::mark_persistent(l_Lean_IR_EmitCpp_openNamespacesAux___main___closed__3);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "openNamespacesAux"), 3, l_Lean_IR_EmitCpp_openNamespacesAux___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "openNamespaces"), 3, l_Lean_IR_EmitCpp_openNamespaces___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "openNamespacesFor"), 3, l_Lean_IR_EmitCpp_openNamespacesFor___boxed);
l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1 = _init_l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_closeNamespacesAux___main___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "closeNamespacesAux"), 3, l_Lean_IR_EmitCpp_closeNamespacesAux___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "closeNamespaces"), 3, l_Lean_IR_EmitCpp_closeNamespaces___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "closeNamespacesFor"), 3, l_Lean_IR_EmitCpp_closeNamespacesFor___boxed);
l_Lean_IR_EmitCpp_throwInvalidExportName___rarg___closed__1 = _init_l_Lean_IR_EmitCpp_throwInvalidExportName___rarg___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_throwInvalidExportName___rarg___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "throwInvalidExportName"), 1, l_Lean_IR_EmitCpp_throwInvalidExportName);
l_Lean_IR_EmitCpp_toBaseCppName___closed__1 = _init_l_Lean_IR_EmitCpp_toBaseCppName___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_toBaseCppName___closed__1);
l_Lean_IR_EmitCpp_toBaseCppName___closed__2 = _init_l_Lean_IR_EmitCpp_toBaseCppName___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_toBaseCppName___closed__2);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "toBaseCppName"), 3, l_Lean_IR_EmitCpp_toBaseCppName___boxed);
l_Lean_IR_EmitCpp_toCppName___closed__1 = _init_l_Lean_IR_EmitCpp_toCppName___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_toCppName___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "toCppName"), 3, l_Lean_IR_EmitCpp_toCppName___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitCppName"), 3, l_Lean_IR_EmitCpp_emitCppName___boxed);
l_Lean_IR_EmitCpp_toCppInitName___closed__1 = _init_l_Lean_IR_EmitCpp_toCppInitName___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_toCppInitName___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "toCppInitName"), 3, l_Lean_IR_EmitCpp_toCppInitName___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitCppInitName"), 3, l_Lean_IR_EmitCpp_emitCppInitName___boxed);
l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1 = _init_l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitFnDeclAux___closed__1);
l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2 = _init_l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitFnDeclAux___closed__2);
l_Lean_IR_EmitCpp_emitFnDeclAux___closed__3 = _init_l_Lean_IR_EmitCpp_emitFnDeclAux___closed__3();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitFnDeclAux___closed__3);
l_Lean_IR_EmitCpp_emitFnDeclAux___closed__4 = _init_l_Lean_IR_EmitCpp_emitFnDeclAux___closed__4();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitFnDeclAux___closed__4);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitFnDeclAux"), 5, l_Lean_IR_EmitCpp_emitFnDeclAux___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitFnDecl"), 4, l_Lean_IR_EmitCpp_emitFnDecl___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "cppQualifiedNameToName"), 1, l_Lean_IR_EmitCpp_cppQualifiedNameToName);
l_Lean_IR_EmitCpp_emitExternDeclAux___closed__1 = _init_l_Lean_IR_EmitCpp_emitExternDeclAux___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitExternDeclAux___closed__1);
l_Lean_IR_EmitCpp_emitExternDeclAux___closed__2 = _init_l_Lean_IR_EmitCpp_emitExternDeclAux___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitExternDeclAux___closed__2);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitExternDeclAux"), 4, l_Lean_IR_EmitCpp_emitExternDeclAux___boxed);
l_List_mfor___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__5___closed__1 = _init_l_List_mfor___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__5___closed__1();
lean::mark_persistent(l_List_mfor___main___at_Lean_IR_EmitCpp_emitFnDecls___spec__5___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitFnDecls"), 2, l_Lean_IR_EmitCpp_emitFnDecls___boxed);
l_Lean_IR_EmitCpp_emitMainFn___closed__1 = _init_l_Lean_IR_EmitCpp_emitMainFn___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitMainFn___closed__1);
l_Lean_IR_EmitCpp_emitMainFn___closed__2 = _init_l_Lean_IR_EmitCpp_emitMainFn___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitMainFn___closed__2);
l_Lean_IR_EmitCpp_emitMainFn___closed__3 = _init_l_Lean_IR_EmitCpp_emitMainFn___closed__3();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitMainFn___closed__3);
l_Lean_IR_EmitCpp_emitMainFn___closed__4 = _init_l_Lean_IR_EmitCpp_emitMainFn___closed__4();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitMainFn___closed__4);
l_Lean_IR_EmitCpp_emitMainFn___closed__5 = _init_l_Lean_IR_EmitCpp_emitMainFn___closed__5();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitMainFn___closed__5);
l_Lean_IR_EmitCpp_emitMainFn___closed__6 = _init_l_Lean_IR_EmitCpp_emitMainFn___closed__6();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitMainFn___closed__6);
l_Lean_IR_EmitCpp_emitMainFn___closed__7 = _init_l_Lean_IR_EmitCpp_emitMainFn___closed__7();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitMainFn___closed__7);
l_Lean_IR_EmitCpp_emitMainFn___closed__8 = _init_l_Lean_IR_EmitCpp_emitMainFn___closed__8();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitMainFn___closed__8);
l_Lean_IR_EmitCpp_emitMainFn___closed__9 = _init_l_Lean_IR_EmitCpp_emitMainFn___closed__9();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitMainFn___closed__9);
l_Lean_IR_EmitCpp_emitMainFn___closed__10 = _init_l_Lean_IR_EmitCpp_emitMainFn___closed__10();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitMainFn___closed__10);
l_Lean_IR_EmitCpp_emitMainFn___closed__11 = _init_l_Lean_IR_EmitCpp_emitMainFn___closed__11();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitMainFn___closed__11);
l_Lean_IR_EmitCpp_emitMainFn___closed__12 = _init_l_Lean_IR_EmitCpp_emitMainFn___closed__12();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitMainFn___closed__12);
l_Lean_IR_EmitCpp_emitMainFn___closed__13 = _init_l_Lean_IR_EmitCpp_emitMainFn___closed__13();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitMainFn___closed__13);
l_Lean_IR_EmitCpp_emitMainFn___closed__14 = _init_l_Lean_IR_EmitCpp_emitMainFn___closed__14();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitMainFn___closed__14);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitMainFn"), 2, l_Lean_IR_EmitCpp_emitMainFn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "hasMainFn"), 2, l_Lean_IR_EmitCpp_hasMainFn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitMainFnIfNeeded"), 2, l_Lean_IR_EmitCpp_emitMainFnIfNeeded___boxed);
l_Lean_IR_EmitCpp_emitFileHeader___closed__1 = _init_l_Lean_IR_EmitCpp_emitFileHeader___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitFileHeader___closed__1);
l_Lean_IR_EmitCpp_emitFileHeader___closed__2 = _init_l_Lean_IR_EmitCpp_emitFileHeader___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitFileHeader___closed__2);
l_Lean_IR_EmitCpp_emitFileHeader___closed__3 = _init_l_Lean_IR_EmitCpp_emitFileHeader___closed__3();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitFileHeader___closed__3);
l_Lean_IR_EmitCpp_emitFileHeader___closed__4 = _init_l_Lean_IR_EmitCpp_emitFileHeader___closed__4();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitFileHeader___closed__4);
l_Lean_IR_EmitCpp_emitFileHeader___closed__5 = _init_l_Lean_IR_EmitCpp_emitFileHeader___closed__5();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitFileHeader___closed__5);
l_Lean_IR_EmitCpp_emitFileHeader___closed__6 = _init_l_Lean_IR_EmitCpp_emitFileHeader___closed__6();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitFileHeader___closed__6);
l_Lean_IR_EmitCpp_emitFileHeader___closed__7 = _init_l_Lean_IR_EmitCpp_emitFileHeader___closed__7();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitFileHeader___closed__7);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitFileHeader"), 2, l_Lean_IR_EmitCpp_emitFileHeader___boxed);
l_Lean_IR_EmitCpp_throwUnknownVar___rarg___closed__1 = _init_l_Lean_IR_EmitCpp_throwUnknownVar___rarg___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_throwUnknownVar___rarg___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "throwUnknownVar"), 1, l_Lean_IR_EmitCpp_throwUnknownVar);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "isObj"), 3, l_Lean_IR_EmitCpp_isObj___boxed);
l_Lean_IR_EmitCpp_getJPParams___closed__1 = _init_l_Lean_IR_EmitCpp_getJPParams___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_getJPParams___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "getJPParams"), 3, l_Lean_IR_EmitCpp_getJPParams___boxed);
l_Lean_IR_EmitCpp_declareVar___closed__1 = _init_l_Lean_IR_EmitCpp_declareVar___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_declareVar___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "declareVar"), 4, l_Lean_IR_EmitCpp_declareVar___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "declareParams"), 3, l_Lean_IR_EmitCpp_declareParams___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "declareVars"), 4, l_Lean_IR_EmitCpp_declareVars___boxed);
l_Lean_IR_EmitCpp_emitTag___closed__1 = _init_l_Lean_IR_EmitCpp_emitTag___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitTag___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitTag"), 3, l_Lean_IR_EmitCpp_emitTag___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "isIf"), 1, l_Lean_IR_EmitCpp_isIf___boxed);
l_Lean_IR_EmitCpp_emitIf___closed__1 = _init_l_Lean_IR_EmitCpp_emitIf___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitIf___closed__1);
l_Lean_IR_EmitCpp_emitIf___closed__2 = _init_l_Lean_IR_EmitCpp_emitIf___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitIf___closed__2);
l_Lean_IR_EmitCpp_emitIf___closed__3 = _init_l_Lean_IR_EmitCpp_emitIf___closed__3();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitIf___closed__3);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitIf"), 7, l_Lean_IR_EmitCpp_emitIf);
l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__1 = _init_l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__1();
lean::mark_persistent(l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__1);
l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__2 = _init_l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__2();
lean::mark_persistent(l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__2);
l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__3 = _init_l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__3();
lean::mark_persistent(l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitCase___spec__1___closed__3);
l_Lean_IR_EmitCpp_emitCase___closed__1 = _init_l_Lean_IR_EmitCpp_emitCase___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitCase___closed__1);
l_Lean_IR_EmitCpp_emitCase___closed__2 = _init_l_Lean_IR_EmitCpp_emitCase___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitCase___closed__2);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitCase"), 5, l_Lean_IR_EmitCpp_emitCase);
l_Lean_IR_EmitCpp_emitInc___closed__1 = _init_l_Lean_IR_EmitCpp_emitInc___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitInc___closed__1);
l_Lean_IR_EmitCpp_emitInc___closed__2 = _init_l_Lean_IR_EmitCpp_emitInc___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitInc___closed__2);
l_Lean_IR_EmitCpp_emitInc___closed__3 = _init_l_Lean_IR_EmitCpp_emitInc___closed__3();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitInc___closed__3);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitInc"), 5, l_Lean_IR_EmitCpp_emitInc___boxed);
l_Lean_IR_EmitCpp_emitDec___closed__1 = _init_l_Lean_IR_EmitCpp_emitDec___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitDec___closed__1);
l_Lean_IR_EmitCpp_emitDec___closed__2 = _init_l_Lean_IR_EmitCpp_emitDec___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitDec___closed__2);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitDec"), 5, l_Lean_IR_EmitCpp_emitDec___boxed);
l_Lean_IR_EmitCpp_emitDel___closed__1 = _init_l_Lean_IR_EmitCpp_emitDel___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitDel___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitDel"), 3, l_Lean_IR_EmitCpp_emitDel___boxed);
l_Lean_IR_EmitCpp_emitSetTag___closed__1 = _init_l_Lean_IR_EmitCpp_emitSetTag___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitSetTag___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitSetTag"), 4, l_Lean_IR_EmitCpp_emitSetTag___boxed);
l_Lean_IR_EmitCpp_emitSet___closed__1 = _init_l_Lean_IR_EmitCpp_emitSet___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitSet___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitSet"), 5, l_Lean_IR_EmitCpp_emitSet___boxed);
l_Lean_IR_EmitCpp_emitOffset___closed__1 = _init_l_Lean_IR_EmitCpp_emitOffset___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitOffset___closed__1);
l_Lean_IR_EmitCpp_emitOffset___closed__2 = _init_l_Lean_IR_EmitCpp_emitOffset___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitOffset___closed__2);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitOffset"), 4, l_Lean_IR_EmitCpp_emitOffset___boxed);
l_Lean_IR_EmitCpp_emitUSet___closed__1 = _init_l_Lean_IR_EmitCpp_emitUSet___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitUSet___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitUSet"), 5, l_Lean_IR_EmitCpp_emitUSet___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitSSet"), 6, l_Lean_IR_EmitCpp_emitSSet___boxed);
l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___closed__1 = _init_l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___closed__1();
lean::mark_persistent(l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitJmp___spec__1___closed__1);
l_Lean_IR_EmitCpp_emitJmp___closed__1 = _init_l_Lean_IR_EmitCpp_emitJmp___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitJmp___closed__1);
l_Lean_IR_EmitCpp_emitJmp___closed__2 = _init_l_Lean_IR_EmitCpp_emitJmp___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitJmp___closed__2);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitJmp"), 4, l_Lean_IR_EmitCpp_emitJmp___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitLhs"), 3, l_Lean_IR_EmitCpp_emitLhs___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitArgs"), 3, l_Lean_IR_EmitCpp_emitArgs___boxed);
l_Lean_IR_EmitCpp_emitCtorScalarSize___closed__1 = _init_l_Lean_IR_EmitCpp_emitCtorScalarSize___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitCtorScalarSize___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitCtorScalarSize"), 4, l_Lean_IR_EmitCpp_emitCtorScalarSize___boxed);
l_Lean_IR_EmitCpp_emitAllocCtor___closed__1 = _init_l_Lean_IR_EmitCpp_emitAllocCtor___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitAllocCtor___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitAllocCtor"), 3, l_Lean_IR_EmitCpp_emitAllocCtor___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitCtorSetArgs"), 4, l_Lean_IR_EmitCpp_emitCtorSetArgs___boxed);
l_Lean_IR_EmitCpp_emitCtor___closed__1 = _init_l_Lean_IR_EmitCpp_emitCtor___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitCtor___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitCtor"), 5, l_Lean_IR_EmitCpp_emitCtor___boxed);
l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitReset___spec__1___closed__1 = _init_l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitReset___spec__1___closed__1();
lean::mark_persistent(l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitReset___spec__1___closed__1);
l_Lean_IR_EmitCpp_emitReset___closed__1 = _init_l_Lean_IR_EmitCpp_emitReset___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitReset___closed__1);
l_Lean_IR_EmitCpp_emitReset___closed__2 = _init_l_Lean_IR_EmitCpp_emitReset___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitReset___closed__2);
l_Lean_IR_EmitCpp_emitReset___closed__3 = _init_l_Lean_IR_EmitCpp_emitReset___closed__3();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitReset___closed__3);
l_Lean_IR_EmitCpp_emitReset___closed__4 = _init_l_Lean_IR_EmitCpp_emitReset___closed__4();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitReset___closed__4);
l_Lean_IR_EmitCpp_emitReset___closed__5 = _init_l_Lean_IR_EmitCpp_emitReset___closed__5();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitReset___closed__5);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitReset"), 5, l_Lean_IR_EmitCpp_emitReset___boxed);
l_Lean_IR_EmitCpp_emitReuse___closed__1 = _init_l_Lean_IR_EmitCpp_emitReuse___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitReuse___closed__1);
l_Lean_IR_EmitCpp_emitReuse___closed__2 = _init_l_Lean_IR_EmitCpp_emitReuse___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitReuse___closed__2);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitReuse"), 7, l_Lean_IR_EmitCpp_emitReuse___boxed);
l_Lean_IR_EmitCpp_emitProj___closed__1 = _init_l_Lean_IR_EmitCpp_emitProj___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitProj___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitProj"), 5, l_Lean_IR_EmitCpp_emitProj___boxed);
l_Lean_IR_EmitCpp_emitUProj___closed__1 = _init_l_Lean_IR_EmitCpp_emitUProj___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitUProj___closed__1);
l_Lean_IR_EmitCpp_emitUProj___closed__2 = _init_l_Lean_IR_EmitCpp_emitUProj___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitUProj___closed__2);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitUProj"), 5, l_Lean_IR_EmitCpp_emitUProj___boxed);
l_Lean_IR_EmitCpp_emitSProj___closed__1 = _init_l_Lean_IR_EmitCpp_emitSProj___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitSProj___closed__1);
l_Lean_IR_EmitCpp_emitSProj___closed__2 = _init_l_Lean_IR_EmitCpp_emitSProj___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitSProj___closed__2);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitSProj"), 7, l_Lean_IR_EmitCpp_emitSProj___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "toStringArgs"), 1, l_Lean_IR_EmitCpp_toStringArgs___boxed);
l_Lean_IR_EmitCpp_emitFullApp___closed__1 = _init_l_Lean_IR_EmitCpp_emitFullApp___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitFullApp___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitFullApp"), 5, l_Lean_IR_EmitCpp_emitFullApp___boxed);
l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitPartialApp___spec__1___closed__1 = _init_l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitPartialApp___spec__1___closed__1();
lean::mark_persistent(l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitPartialApp___spec__1___closed__1);
l_Lean_IR_EmitCpp_emitPartialApp___closed__1 = _init_l_Lean_IR_EmitCpp_emitPartialApp___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitPartialApp___closed__1);
l_Lean_IR_EmitCpp_emitPartialApp___closed__2 = _init_l_Lean_IR_EmitCpp_emitPartialApp___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitPartialApp___closed__2);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitPartialApp"), 5, l_Lean_IR_EmitCpp_emitPartialApp___boxed);
l_Lean_IR_EmitCpp_emitApp___closed__1 = _init_l_Lean_IR_EmitCpp_emitApp___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitApp___closed__1);
l_Lean_IR_EmitCpp_emitApp___closed__2 = _init_l_Lean_IR_EmitCpp_emitApp___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitApp___closed__2);
l_Lean_IR_EmitCpp_emitApp___closed__3 = _init_l_Lean_IR_EmitCpp_emitApp___closed__3();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitApp___closed__3);
l_Lean_IR_EmitCpp_emitApp___closed__4 = _init_l_Lean_IR_EmitCpp_emitApp___closed__4();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitApp___closed__4);
l_Lean_IR_EmitCpp_emitApp___closed__5 = _init_l_Lean_IR_EmitCpp_emitApp___closed__5();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitApp___closed__5);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitApp"), 5, l_Lean_IR_EmitCpp_emitApp___boxed);
l_Lean_IR_EmitCpp_emitBoxFn___closed__1 = _init_l_Lean_IR_EmitCpp_emitBoxFn___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitBoxFn___closed__1);
l_Lean_IR_EmitCpp_emitBoxFn___closed__2 = _init_l_Lean_IR_EmitCpp_emitBoxFn___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitBoxFn___closed__2);
l_Lean_IR_EmitCpp_emitBoxFn___closed__3 = _init_l_Lean_IR_EmitCpp_emitBoxFn___closed__3();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitBoxFn___closed__3);
l_Lean_IR_EmitCpp_emitBoxFn___closed__4 = _init_l_Lean_IR_EmitCpp_emitBoxFn___closed__4();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitBoxFn___closed__4);
l_Lean_IR_EmitCpp_emitBoxFn___closed__5 = _init_l_Lean_IR_EmitCpp_emitBoxFn___closed__5();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitBoxFn___closed__5);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitBoxFn"), 3, l_Lean_IR_EmitCpp_emitBoxFn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitBox"), 5, l_Lean_IR_EmitCpp_emitBox___boxed);
l_Lean_IR_EmitCpp_emitUnbox___closed__1 = _init_l_Lean_IR_EmitCpp_emitUnbox___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitUnbox___closed__1);
l_Lean_IR_EmitCpp_emitUnbox___closed__2 = _init_l_Lean_IR_EmitCpp_emitUnbox___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitUnbox___closed__2);
l_Lean_IR_EmitCpp_emitUnbox___closed__3 = _init_l_Lean_IR_EmitCpp_emitUnbox___closed__3();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitUnbox___closed__3);
l_Lean_IR_EmitCpp_emitUnbox___closed__4 = _init_l_Lean_IR_EmitCpp_emitUnbox___closed__4();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitUnbox___closed__4);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitUnbox"), 5, l_Lean_IR_EmitCpp_emitUnbox___boxed);
l_Lean_IR_EmitCpp_emitIsShared___closed__1 = _init_l_Lean_IR_EmitCpp_emitIsShared___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitIsShared___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitIsShared"), 4, l_Lean_IR_EmitCpp_emitIsShared___boxed);
l_Lean_IR_EmitCpp_emitIsTaggedPtr___closed__1 = _init_l_Lean_IR_EmitCpp_emitIsTaggedPtr___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitIsTaggedPtr___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitIsTaggedPtr"), 4, l_Lean_IR_EmitCpp_emitIsTaggedPtr___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "toHexDigit"), 1, l_Lean_IR_EmitCpp_toHexDigit___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "quoteString"), 1, l_Lean_IR_EmitCpp_quoteString___boxed);
l_Lean_IR_EmitCpp_emitNumLit___closed__1 = _init_l_Lean_IR_EmitCpp_emitNumLit___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitNumLit___closed__1);
l_Lean_IR_EmitCpp_emitNumLit___closed__2 = _init_l_Lean_IR_EmitCpp_emitNumLit___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitNumLit___closed__2);
l_Lean_IR_EmitCpp_emitNumLit___closed__3 = _init_l_Lean_IR_EmitCpp_emitNumLit___closed__3();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitNumLit___closed__3);
l_Lean_IR_EmitCpp_emitNumLit___closed__4 = _init_l_Lean_IR_EmitCpp_emitNumLit___closed__4();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitNumLit___closed__4);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitNumLit"), 4, l_Lean_IR_EmitCpp_emitNumLit___boxed);
l_Lean_IR_EmitCpp_emitLit___closed__1 = _init_l_Lean_IR_EmitCpp_emitLit___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitLit___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitLit"), 5, l_Lean_IR_EmitCpp_emitLit___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitVDecl"), 5, l_Lean_IR_EmitCpp_emitVDecl___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "isTailCall"), 5, l_Lean_IR_EmitCpp_isTailCall___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "paramEqArg"), 2, l_Lean_IR_EmitCpp_paramEqArg___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "overwriteParam"), 2, l_Lean_IR_EmitCpp_overwriteParam___boxed);
l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__2___closed__1 = _init_l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__2___closed__1();
lean::mark_persistent(l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__2___closed__1);
l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__3___closed__1 = _init_l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__3___closed__1();
lean::mark_persistent(l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitTailCall___spec__3___closed__1);
l_Lean_IR_EmitCpp_emitTailCall___closed__1 = _init_l_Lean_IR_EmitCpp_emitTailCall___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitTailCall___closed__1);
l_Lean_IR_EmitCpp_emitTailCall___closed__2 = _init_l_Lean_IR_EmitCpp_emitTailCall___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitTailCall___closed__2);
l_Lean_IR_EmitCpp_emitTailCall___closed__3 = _init_l_Lean_IR_EmitCpp_emitTailCall___closed__3();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitTailCall___closed__3);
l_Lean_IR_EmitCpp_emitTailCall___closed__4 = _init_l_Lean_IR_EmitCpp_emitTailCall___closed__4();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitTailCall___closed__4);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitTailCall"), 3, l_Lean_IR_EmitCpp_emitTailCall___boxed);
l_Lean_IR_EmitCpp_emitBlock___main___closed__1 = _init_l_Lean_IR_EmitCpp_emitBlock___main___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitBlock___main___closed__1);
l_Lean_IR_EmitCpp_emitBlock___main___closed__2 = _init_l_Lean_IR_EmitCpp_emitBlock___main___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitBlock___main___closed__2);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitBlock"), 4, l_Lean_IR_EmitCpp_emitBlock);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitJPs"), 4, l_Lean_IR_EmitCpp_emitJPs);
l_Lean_IR_EmitCpp_emitFnBody___main___closed__1 = _init_l_Lean_IR_EmitCpp_emitFnBody___main___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitFnBody___main___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitFnBody"), 3, l_Lean_IR_EmitCpp_emitFnBody);
l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__1 = _init_l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__1();
lean::mark_persistent(l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__1);
l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__2 = _init_l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__2();
lean::mark_persistent(l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__2);
l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__3 = _init_l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__3();
lean::mark_persistent(l_Nat_mforAux___main___at_Lean_IR_EmitCpp_emitDeclAux___spec__1___closed__3);
l_Lean_IR_EmitCpp_emitDeclAux___closed__1 = _init_l_Lean_IR_EmitCpp_emitDeclAux___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitDeclAux___closed__1);
l_Lean_IR_EmitCpp_emitDeclAux___closed__2 = _init_l_Lean_IR_EmitCpp_emitDeclAux___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitDeclAux___closed__2);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitDeclAux"), 3, l_Lean_IR_EmitCpp_emitDeclAux);
l_Lean_IR_EmitCpp_emitDecl___closed__1 = _init_l_Lean_IR_EmitCpp_emitDecl___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitDecl___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitDecl"), 3, l_Lean_IR_EmitCpp_emitDecl);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitFns"), 2, l_Lean_IR_EmitCpp_emitFns);
l_Lean_IR_EmitCpp_quoteNameAux___main___closed__1 = _init_l_Lean_IR_EmitCpp_quoteNameAux___main___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_quoteNameAux___main___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "quoteNameAux"), 1, l_Lean_IR_EmitCpp_quoteNameAux);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "quoteName"), 1, l_Lean_IR_EmitCpp_quoteName);
l_Lean_IR_EmitCpp_emitDeclInit___closed__1 = _init_l_Lean_IR_EmitCpp_emitDeclInit___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitDeclInit___closed__1);
l_Lean_IR_EmitCpp_emitDeclInit___closed__2 = _init_l_Lean_IR_EmitCpp_emitDeclInit___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitDeclInit___closed__2);
l_Lean_IR_EmitCpp_emitDeclInit___closed__3 = _init_l_Lean_IR_EmitCpp_emitDeclInit___closed__3();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitDeclInit___closed__3);
l_Lean_IR_EmitCpp_emitDeclInit___closed__4 = _init_l_Lean_IR_EmitCpp_emitDeclInit___closed__4();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitDeclInit___closed__4);
l_Lean_IR_EmitCpp_emitDeclInit___closed__5 = _init_l_Lean_IR_EmitCpp_emitDeclInit___closed__5();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitDeclInit___closed__5);
l_Lean_IR_EmitCpp_emitDeclInit___closed__6 = _init_l_Lean_IR_EmitCpp_emitDeclInit___closed__6();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitDeclInit___closed__6);
l_Lean_IR_EmitCpp_emitDeclInit___closed__7 = _init_l_Lean_IR_EmitCpp_emitDeclInit___closed__7();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitDeclInit___closed__7);
l_Lean_IR_EmitCpp_emitDeclInit___closed__8 = _init_l_Lean_IR_EmitCpp_emitDeclInit___closed__8();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitDeclInit___closed__8);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitDeclInit"), 3, l_Lean_IR_EmitCpp_emitDeclInit___boxed);
l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__1 = _init_l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__1();
lean::mark_persistent(l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__1);
l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__2 = _init_l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__2();
lean::mark_persistent(l_Array_mforAux___main___at_Lean_IR_EmitCpp_emitInitFn___spec__1___closed__2);
l_Lean_IR_EmitCpp_emitInitFn___closed__1 = _init_l_Lean_IR_EmitCpp_emitInitFn___closed__1();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitInitFn___closed__1);
l_Lean_IR_EmitCpp_emitInitFn___closed__2 = _init_l_Lean_IR_EmitCpp_emitInitFn___closed__2();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitInitFn___closed__2);
l_Lean_IR_EmitCpp_emitInitFn___closed__3 = _init_l_Lean_IR_EmitCpp_emitInitFn___closed__3();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitInitFn___closed__3);
l_Lean_IR_EmitCpp_emitInitFn___closed__4 = _init_l_Lean_IR_EmitCpp_emitInitFn___closed__4();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitInitFn___closed__4);
l_Lean_IR_EmitCpp_emitInitFn___closed__5 = _init_l_Lean_IR_EmitCpp_emitInitFn___closed__5();
lean::mark_persistent(l_Lean_IR_EmitCpp_emitInitFn___closed__5);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "emitInitFn"), 2, l_Lean_IR_EmitCpp_emitInitFn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "EmitCpp"), "main"), 2, l_Lean_IR_EmitCpp_main);
l_Lean_IR_emitCpp___closed__1 = _init_l_Lean_IR_emitCpp___closed__1();
lean::mark_persistent(l_Lean_IR_emitCpp___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "IR"), "emitCpp"), 2, lean::ir::emit_cpp_core);
return w;
}
