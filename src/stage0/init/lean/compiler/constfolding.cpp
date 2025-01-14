// Lean compiler output
// Module: init.lean.compiler.constfolding
// Imports: init.lean.expr init.platform init.lean.compiler.util
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
obj* l_Lean_Compiler_natFoldFns;
obj* l_Lean_Compiler_foldNatMod___rarg___boxed(obj*, obj*);
obj* l_Lean_Compiler_toDecidableExpr___closed__1;
obj* l_Nat_decLe___boxed(obj*, obj*);
extern "C" uint8 lean_name_dec_eq(obj*, obj*);
obj* l_Lean_mkBinApp(obj*, obj*, obj*);
obj* l_Lean_Compiler_foldNatDecLt___closed__1;
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_Lean_Compiler_foldNatDiv(uint8);
obj* l_Lean_Compiler_foldUIntMod___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Compiler_getBoolLit___main___boxed(obj*);
uint8 l_Lean_Compiler_isOfNat(obj*);
obj* l_Lean_Compiler_foldUIntMod(uint8, obj*, obj*);
obj* l_Lean_Compiler_foldNatMul___boxed(obj*);
obj* l_List_foldr___main___at_Lean_Compiler_isToNat___spec__1___boxed(obj*, obj*, obj*);
obj* l_Lean_Compiler_foldNatDiv___boxed(obj*);
obj* l_Lean_Compiler_getInfoFromFn___main(obj*, obj*);
obj* l_Nat_div___boxed(obj*, obj*);
obj* l_Lean_Compiler_getNumLit___main(obj*);
obj* l_Lean_Compiler_getInfoFromFn___main___boxed(obj*, obj*);
obj* l_Lean_Compiler_getInfoFromVal(obj*);
obj* l_Lean_Compiler_foldNatPow___boxed(obj*);
obj* l_Lean_Compiler_foldStrictOr(uint8);
obj* l_Lean_Compiler_foldUIntSub___lambda__1(obj*, uint8, obj*, obj*);
extern "C" obj* lean_expr_mk_app(obj*, obj*);
uint8 l_Lean_Compiler_isToNat(obj*);
obj* l_Lean_Compiler_foldNatDecLe___closed__2;
obj* l_Lean_Compiler_foldBinUInt(obj*, uint8, obj*, obj*);
obj* l_Lean_Compiler_getBoolLit___main___closed__4;
obj* l_Lean_Compiler_foldStrictOr___boxed(obj*);
obj* l_List_lookup___main___at_Lean_Compiler_findBinFoldFn___spec__1___boxed(obj*, obj*);
obj* l_Lean_Compiler_getInfoFromVal___main(obj*);
obj* l_Lean_Compiler_foldNatMod___boxed(obj*);
obj* l_Lean_Compiler_getInfoFromFn(obj*, obj*);
obj* l_Lean_Compiler_mkNatLt(obj*, obj*);
obj* l_Lean_Compiler_foldNatMod___rarg(obj*, obj*);
obj* l_Lean_Compiler_getBoolLit___main___closed__2;
obj* l_Lean_Compiler_foldNatSucc(uint8);
obj* l_Lean_Compiler_boolFoldFns;
extern obj* l_System_platform_nbits;
obj* l_Lean_Compiler_foldUIntAdd___boxed(obj*, obj*, obj*);
obj* l_List_foldl___main___at_Lean_Compiler_uintBinFoldFns___spec__2(obj*, obj*);
obj* l_Nat_decEq___boxed(obj*, obj*);
obj* l_Lean_Compiler_unFoldFns;
obj* l_Lean_Compiler_foldNatDecEq___closed__2;
obj* l_Lean_Compiler_foldToNat___rarg(obj*);
obj* l_Lean_Compiler_foldUIntMod___lambda__1(obj*, uint8, obj*, obj*);
obj* l_Lean_Compiler_foldStrictAnd(uint8);
obj* l_Lean_Compiler_foldStrictOr___rarg(obj*, obj*);
obj* l_List_map___main___at_Lean_Compiler_uintBinFoldFns___spec__1___boxed(obj*, obj*);
obj* l_Lean_Compiler_findUnFoldFn___boxed(obj*);
obj* l_Lean_Compiler_mkLcProof(obj*);
obj* l_Lean_Compiler_isToNat___boxed(obj*);
uint8 l_List_foldr___main___at_Lean_Compiler_isToNat___spec__1(obj*, uint8, obj*);
obj* l_Nat_repr(obj*);
obj* l_Lean_Compiler_mkNatEq___closed__1;
obj* l_Lean_Compiler_getBoolLit___main___closed__1;
obj* l_Lean_Compiler_findBinFoldFn___boxed(obj*);
obj* l_Lean_Compiler_foldUIntDiv___lambda__1(obj*, uint8, obj*, obj*);
obj* l_Lean_Compiler_foldBinOp___boxed(obj*, obj*, obj*, obj*);
extern "C" obj* lean_expr_mk_const(obj*, obj*);
extern obj* l_Lean_Level_one;
obj* l_List_foldr___main___at_Lean_Compiler_isOfNat___spec__1___boxed(obj*, obj*, obj*);
obj* l_Lean_Compiler_getBoolLit___main(obj*);
obj* l_Lean_Compiler_foldNatDecEq___boxed(obj*, obj*, obj*);
obj* l_Lean_Compiler_isOfNat___boxed(obj*);
obj* l_Lean_Compiler_foldCharOfNat___closed__1;
obj* l_Lean_Compiler_findUnFoldFn(obj*);
obj* l_Lean_Compiler_foldNatAdd___rarg(obj*, obj*);
namespace lean {
obj* string_append(obj*, obj*);
}
obj* l_Lean_Compiler_foldCharOfNat(uint8, obj*);
obj* l_List_map___main___at_Lean_Compiler_uintBinFoldFns___spec__1(obj*, obj*);
obj* l_Lean_Compiler_foldNatBinPred(obj*, obj*, uint8, obj*, obj*);
obj* l_Lean_Compiler_mkNatLe___closed__1;
obj* l_Lean_Compiler_foldUIntMul(uint8, obj*, obj*);
obj* l_Lean_Compiler_mkNatLt___closed__1;
obj* l_Lean_Compiler_foldNatMod___rarg___closed__1;
obj* l_Lean_Compiler_foldStrictAnd___rarg(obj*, obj*);
obj* l_Lean_Compiler_foldNatPow___rarg(obj*, obj*);
obj* l_Lean_Compiler_foldNatAdd(uint8);
obj* l_Nat_mul___boxed(obj*, obj*);
obj* l_Lean_Compiler_getBoolLit(obj*);
obj* l_Lean_Compiler_mkUInt32Lit___boxed(obj*);
obj* l_Lean_Compiler_foldNatBinOp___boxed(obj*, obj*, obj*);
obj* l_Lean_Compiler_foldUIntAdd___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Compiler_foldNatMul___rarg___closed__1;
obj* l_Lean_Compiler_foldUIntMul___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Compiler_foldNatAdd___rarg___boxed(obj*, obj*);
namespace lean {
obj* nat_mod(obj*, obj*);
}
obj* l_Lean_Compiler_mkUIntLit___boxed(obj*, obj*);
obj* l_List_foldl___main___at_Lean_Compiler_uintBinFoldFns___spec__2___boxed(obj*, obj*);
obj* l_Lean_Compiler_mkUIntTypeName(obj*);
obj* l_Lean_Compiler_foldNatDiv___rarg___closed__1;
obj* l_Lean_mkDecIsFalse(obj*, obj*);
obj* l_Lean_Compiler_foldNatSucc___boxed(obj*);
obj* l_Lean_Compiler_foldUIntMod___closed__1;
uint8 l_List_foldr___main___at_Lean_Compiler_isOfNat___spec__1(obj*, uint8, obj*);
obj* l_Lean_Compiler_mkUInt32Lit(obj*);
obj* l_Lean_Compiler_foldNatDecLe(uint8, obj*, obj*);
obj* l_Lean_Compiler_mkUInt32Lit___closed__1;
obj* l_List_append___rarg(obj*, obj*);
extern "C" obj* lean_name_mk_string(obj*, obj*);
obj* l_Lean_Compiler_foldNatPow(uint8);
obj* l_Lean_Compiler_foldUnOp___boxed(obj*, obj*, obj*);
namespace lean {
obj* nat_add(obj*, obj*);
}
obj* l_Lean_Compiler_getBoolLit___boxed(obj*);
obj* l_Lean_Compiler_foldUIntMul___boxed(obj*, obj*, obj*);
obj* l_Lean_Compiler_foldToNat(uint8);
uint8 l_UInt32_decLt(uint32, uint32);
obj* l_Lean_Compiler_foldUIntDiv___boxed(obj*, obj*, obj*);
obj* l_Lean_Compiler_foldNatDecLe___closed__1;
obj* l_Nat_add___boxed(obj*, obj*);
obj* l_Lean_Compiler_toDecidableExpr(uint8, obj*, uint8);
obj* l_Lean_Compiler_foldNatDecLe___boxed(obj*, obj*, obj*);
obj* l_Lean_Compiler_foldUIntMul___closed__1;
obj* l_Lean_Compiler_getBoolLit___main___closed__3;
obj* l_Lean_Compiler_foldNatDecEq___closed__1;
obj* l_List_foldl___main___at_Lean_Compiler_uintFoldToNatFns___spec__1___closed__1;
obj* l_Lean_Compiler_foldCharOfNat___boxed(obj*, obj*);
obj* l_Lean_Compiler_numScalarTypes;
obj* l_Lean_Compiler_foldNatBinPred___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Compiler_foldNatDecLt___closed__2;
obj* l_Lean_Compiler_findBinFoldFn(obj*);
obj* l_Lean_Compiler_foldUIntAdd(uint8, obj*, obj*);
obj* l_Lean_Compiler_foldNatSucc___rarg(obj*);
obj* l_Lean_Compiler_getInfoFromFn___boxed(obj*, obj*);
obj* l_List_lookup___main___at_Lean_Compiler_findUnFoldFn___spec__1___boxed(obj*, obj*);
obj* l_Lean_Compiler_mkUIntLit(obj*, obj*);
namespace lean {
obj* fold_bin_op_core(uint8, obj*, obj*, obj*);
}
obj* l_List_lookup___main___at_Lean_Compiler_findBinFoldFn___spec__1(obj*, obj*);
obj* l_Nat_pow___main(obj*, obj*);
obj* l_Lean_Compiler_toDecidableExpr___closed__2;
obj* l_Lean_Compiler_foldNatDiv___rarg(obj*, obj*);
obj* l_Lean_Compiler_foldBinUInt___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Compiler_foldUIntSub___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Nat_decLt___boxed(obj*, obj*);
namespace lean {
obj* fold_un_op_core(uint8, obj*, obj*);
}
obj* l_Lean_Compiler_foldUIntAdd___closed__1;
obj* l_Lean_Compiler_foldNatPow___rarg___boxed(obj*, obj*);
obj* l_Lean_Compiler_foldUIntSub___closed__1;
obj* l_Lean_Compiler_foldToNat___rarg___boxed(obj*);
obj* l_Lean_Compiler_foldNatDecEq(uint8, obj*, obj*);
obj* l_Lean_Compiler_foldUIntDiv___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Compiler_foldNatDiv___rarg___boxed(obj*, obj*);
obj* l_Lean_Compiler_mkUIntTypeName___closed__1;
obj* l_Lean_Compiler_uintBinFoldFns;
obj* l_Lean_Compiler_foldNatMul___rarg(obj*, obj*);
obj* l_Lean_Compiler_foldUIntSub___boxed(obj*, obj*, obj*);
obj* l_Nat_pow___boxed(obj*, obj*);
obj* l_Lean_mkDecIsTrue(obj*, obj*);
obj* l_Lean_Compiler_foldUIntAdd___lambda__1(obj*, uint8, obj*, obj*);
obj* l_Lean_Compiler_foldToNat___boxed(obj*);
obj* l_Lean_Compiler_foldUIntMul___lambda__1(obj*, uint8, obj*, obj*);
obj* l_Lean_Compiler_foldUIntDiv(uint8, obj*, obj*);
obj* l_Lean_Compiler_binFoldFns;
namespace lean {
uint32 uint32_of_nat(obj*);
}
obj* l_Lean_Compiler_foldUIntDiv___closed__1;
obj* l_Lean_Compiler_foldStrictAnd___boxed(obj*);
obj* l_Lean_Compiler_foldNatDecLt(uint8, obj*, obj*);
obj* l_Lean_Compiler_getNumLit___main___boxed(obj*);
namespace lean {
obj* nat_div(obj*, obj*);
}
obj* l_Lean_Compiler_foldNatAdd___rarg___closed__1;
obj* l_Lean_Compiler_getInfoFromVal___boxed(obj*);
obj* l_Lean_Compiler_foldNatSucc___rarg___boxed(obj*);
obj* l_Lean_Compiler_getInfoFromVal___main___boxed(obj*);
obj* l_Lean_Compiler_uintFoldToNatFns;
obj* l_List_lookup___main___at_Lean_Compiler_findUnFoldFn___spec__1(obj*, obj*);
namespace lean {
obj* get_num_lit_core(obj*);
}
obj* l_Lean_Compiler_toDecidableExpr___boxed(obj*, obj*, obj*);
extern obj* l_Lean_Compiler_neutralExpr;
obj* l_Lean_Compiler_foldNatPow___rarg___closed__1;
obj* l_Lean_Compiler_foldNatMod(uint8);
obj* l_Lean_Compiler_foldNatAdd___boxed(obj*);
obj* l_Lean_Compiler_foldNatMul(uint8);
obj* l_Lean_Name_append___main(obj*, obj*);
namespace lean {
obj* nat_mul(obj*, obj*);
}
obj* l_Lean_Compiler_foldNatMul___rarg___boxed(obj*, obj*);
obj* l_Nat_mod___boxed(obj*, obj*);
obj* l_Lean_Compiler_foldUIntSub(uint8, obj*, obj*);
obj* l_Lean_Compiler_foldNatBinOp(obj*, obj*, obj*);
obj* l_Lean_Compiler_foldUIntMod___boxed(obj*, obj*, obj*);
extern "C" obj* lean_expr_mk_lit(obj*);
obj* l_List_foldl___main___at_Lean_Compiler_uintFoldToNatFns___spec__1(obj*, obj*);
obj* l_Lean_Compiler_mkNatEq(obj*, obj*);
obj* l_Lean_Compiler_preUIntBinFoldFns;
obj* l_Lean_Compiler_foldNatDecLt___boxed(obj*, obj*, obj*);
obj* l_Lean_Compiler_mkNatLe(obj*, obj*);
obj* _init_l_Lean_Compiler_mkUIntTypeName___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("UInt");
return x_1;
}
}
obj* l_Lean_Compiler_mkUIntTypeName(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_Nat_repr(x_1);
x_3 = l_Lean_Compiler_mkUIntTypeName___closed__1;
x_4 = lean::string_append(x_3, x_2);
lean::dec(x_2);
x_5 = lean::box(0);
x_6 = lean_name_mk_string(x_5, x_4);
return x_6;
}
}
obj* _init_l_Lean_Compiler_numScalarTypes() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
x_1 = lean::mk_nat_obj(8u);
x_2 = l_Lean_Compiler_mkUIntTypeName(x_1);
x_3 = lean::mk_string("ofNat");
lean::inc(x_3);
lean::inc(x_2);
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("toNat");
lean::inc(x_5);
lean::inc(x_2);
x_6 = lean_name_mk_string(x_2, x_5);
x_7 = lean::mk_nat_obj(256u);
x_8 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_8, 0, x_1);
lean::cnstr_set(x_8, 1, x_2);
lean::cnstr_set(x_8, 2, x_4);
lean::cnstr_set(x_8, 3, x_6);
lean::cnstr_set(x_8, 4, x_7);
x_9 = lean::mk_nat_obj(16u);
x_10 = l_Lean_Compiler_mkUIntTypeName(x_9);
lean::inc(x_3);
lean::inc(x_10);
x_11 = lean_name_mk_string(x_10, x_3);
lean::inc(x_5);
lean::inc(x_10);
x_12 = lean_name_mk_string(x_10, x_5);
x_13 = lean::mk_nat_obj(65536u);
x_14 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_14, 0, x_9);
lean::cnstr_set(x_14, 1, x_10);
lean::cnstr_set(x_14, 2, x_11);
lean::cnstr_set(x_14, 3, x_12);
lean::cnstr_set(x_14, 4, x_13);
x_15 = lean::mk_nat_obj(32u);
x_16 = l_Lean_Compiler_mkUIntTypeName(x_15);
lean::inc(x_3);
lean::inc(x_16);
x_17 = lean_name_mk_string(x_16, x_3);
lean::inc(x_5);
lean::inc(x_16);
x_18 = lean_name_mk_string(x_16, x_5);
x_19 = lean::mk_nat_obj(lean::mpz("4294967296"));
x_20 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_20, 0, x_15);
lean::cnstr_set(x_20, 1, x_16);
lean::cnstr_set(x_20, 2, x_17);
lean::cnstr_set(x_20, 3, x_18);
lean::cnstr_set(x_20, 4, x_19);
x_21 = lean::mk_nat_obj(64u);
x_22 = l_Lean_Compiler_mkUIntTypeName(x_21);
lean::inc(x_3);
lean::inc(x_22);
x_23 = lean_name_mk_string(x_22, x_3);
lean::inc(x_5);
lean::inc(x_22);
x_24 = lean_name_mk_string(x_22, x_5);
x_25 = lean::mk_nat_obj(lean::mpz("18446744073709551616"));
x_26 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_26, 0, x_21);
lean::cnstr_set(x_26, 1, x_22);
lean::cnstr_set(x_26, 2, x_23);
lean::cnstr_set(x_26, 3, x_24);
lean::cnstr_set(x_26, 4, x_25);
x_27 = lean::box(0);
x_28 = lean::mk_string("USize");
x_29 = lean_name_mk_string(x_27, x_28);
lean::inc(x_29);
x_30 = lean_name_mk_string(x_29, x_3);
lean::inc(x_29);
x_31 = lean_name_mk_string(x_29, x_5);
x_32 = lean::mk_nat_obj(2u);
x_33 = l_System_platform_nbits;
x_34 = l_Nat_pow___main(x_32, x_33);
x_35 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_35, 0, x_33);
lean::cnstr_set(x_35, 1, x_29);
lean::cnstr_set(x_35, 2, x_30);
lean::cnstr_set(x_35, 3, x_31);
lean::cnstr_set(x_35, 4, x_34);
x_36 = lean::box(0);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_35);
lean::cnstr_set(x_37, 1, x_36);
x_38 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_38, 0, x_26);
lean::cnstr_set(x_38, 1, x_37);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_20);
lean::cnstr_set(x_39, 1, x_38);
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_14);
lean::cnstr_set(x_40, 1, x_39);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_8);
lean::cnstr_set(x_41, 1, x_40);
return x_41;
}
}
uint8 l_List_foldr___main___at_Lean_Compiler_isOfNat___spec__1(obj* x_1, uint8 x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
return x_2;
}
else
{
obj* x_4; obj* x_5; uint8 x_6; obj* x_7; uint8 x_8; 
x_4 = lean::cnstr_get(x_3, 0);
x_5 = lean::cnstr_get(x_3, 1);
x_6 = l_List_foldr___main___at_Lean_Compiler_isOfNat___spec__1(x_1, x_2, x_5);
x_7 = lean::cnstr_get(x_4, 2);
x_8 = lean_name_dec_eq(x_7, x_1);
if (x_8 == 0)
{
return x_6;
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
uint8 l_Lean_Compiler_isOfNat(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; uint8 x_4; 
x_2 = 0;
x_3 = l_Lean_Compiler_numScalarTypes;
x_4 = l_List_foldr___main___at_Lean_Compiler_isOfNat___spec__1(x_1, x_2, x_3);
return x_4;
}
}
obj* l_List_foldr___main___at_Lean_Compiler_isOfNat___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; uint8 x_5; obj* x_6; 
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_List_foldr___main___at_Lean_Compiler_isOfNat___spec__1(x_1, x_4, x_3);
lean::dec(x_3);
lean::dec(x_1);
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_Lean_Compiler_isOfNat___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_Lean_Compiler_isOfNat(x_1);
lean::dec(x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
uint8 l_List_foldr___main___at_Lean_Compiler_isToNat___spec__1(obj* x_1, uint8 x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
return x_2;
}
else
{
obj* x_4; obj* x_5; uint8 x_6; obj* x_7; uint8 x_8; 
x_4 = lean::cnstr_get(x_3, 0);
x_5 = lean::cnstr_get(x_3, 1);
x_6 = l_List_foldr___main___at_Lean_Compiler_isToNat___spec__1(x_1, x_2, x_5);
x_7 = lean::cnstr_get(x_4, 3);
x_8 = lean_name_dec_eq(x_7, x_1);
if (x_8 == 0)
{
return x_6;
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
uint8 l_Lean_Compiler_isToNat(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; uint8 x_4; 
x_2 = 0;
x_3 = l_Lean_Compiler_numScalarTypes;
x_4 = l_List_foldr___main___at_Lean_Compiler_isToNat___spec__1(x_1, x_2, x_3);
return x_4;
}
}
obj* l_List_foldr___main___at_Lean_Compiler_isToNat___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; uint8 x_5; obj* x_6; 
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_List_foldr___main___at_Lean_Compiler_isToNat___spec__1(x_1, x_4, x_3);
lean::dec(x_3);
lean::dec(x_1);
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_Lean_Compiler_isToNat___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_Lean_Compiler_isToNat(x_1);
lean::dec(x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l_Lean_Compiler_getInfoFromFn___main(obj* x_1, obj* x_2) {
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
x_6 = lean::cnstr_get(x_4, 2);
x_7 = lean_name_dec_eq(x_6, x_1);
if (x_7 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
obj* x_9; 
lean::inc(x_4);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_4);
return x_9;
}
}
}
}
obj* l_Lean_Compiler_getInfoFromFn___main___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Compiler_getInfoFromFn___main(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_Compiler_getInfoFromFn(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Compiler_getInfoFromFn___main(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Compiler_getInfoFromFn___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Compiler_getInfoFromFn(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_Compiler_getInfoFromVal___main(obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 5)
{
obj* x_2; 
x_2 = lean::cnstr_get(x_1, 0);
if (lean::obj_tag(x_2) == 4)
{
obj* x_3; obj* x_4; obj* x_5; 
x_3 = lean::cnstr_get(x_2, 0);
x_4 = l_Lean_Compiler_numScalarTypes;
x_5 = l_Lean_Compiler_getInfoFromFn___main(x_3, x_4);
return x_5;
}
else
{
obj* x_6; 
x_6 = lean::box(0);
return x_6;
}
}
else
{
obj* x_7; 
x_7 = lean::box(0);
return x_7;
}
}
}
obj* l_Lean_Compiler_getInfoFromVal___main___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Compiler_getInfoFromVal___main(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Compiler_getInfoFromVal(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Compiler_getInfoFromVal___main(x_1);
return x_2;
}
}
obj* l_Lean_Compiler_getInfoFromVal___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Compiler_getInfoFromVal(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Compiler_getNumLit___main(obj* x_1) {
_start:
{
switch (lean::obj_tag(x_1)) {
case 5:
{
obj* x_2; 
x_2 = lean::cnstr_get(x_1, 0);
if (lean::obj_tag(x_2) == 4)
{
obj* x_3; obj* x_4; uint8 x_5; obj* x_6; uint8 x_7; 
x_3 = lean::cnstr_get(x_1, 1);
x_4 = lean::cnstr_get(x_2, 0);
x_5 = 0;
x_6 = l_Lean_Compiler_numScalarTypes;
x_7 = l_List_foldr___main___at_Lean_Compiler_isOfNat___spec__1(x_4, x_5, x_6);
if (x_7 == 0)
{
obj* x_8; 
x_8 = lean::box(0);
return x_8;
}
else
{
x_1 = x_3;
goto _start;
}
}
else
{
obj* x_10; 
x_10 = lean::box(0);
return x_10;
}
}
case 9:
{
obj* x_11; 
x_11 = lean::cnstr_get(x_1, 0);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; 
x_12 = lean::cnstr_get(x_11, 0);
lean::inc(x_12);
x_13 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_13, 0, x_12);
return x_13;
}
else
{
obj* x_14; 
x_14 = lean::box(0);
return x_14;
}
}
default: 
{
obj* x_15; 
x_15 = lean::box(0);
return x_15;
}
}
}
}
obj* l_Lean_Compiler_getNumLit___main___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Compiler_getNumLit___main(x_1);
lean::dec(x_1);
return x_2;
}
}
namespace lean {
obj* get_num_lit_core(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Compiler_getNumLit___main(x_1);
lean::dec(x_1);
return x_2;
}
}
}
obj* l_Lean_Compiler_mkUIntLit(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_1, 2);
lean::inc(x_3);
x_4 = lean::box(0);
x_5 = lean_expr_mk_const(x_3, x_4);
x_6 = lean::cnstr_get(x_1, 4);
lean::inc(x_6);
lean::dec(x_1);
x_7 = lean::nat_mod(x_2, x_6);
lean::dec(x_6);
x_8 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
x_9 = lean_expr_mk_lit(x_8);
x_10 = lean_expr_mk_app(x_5, x_9);
return x_10;
}
}
obj* l_Lean_Compiler_mkUIntLit___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Compiler_mkUIntLit(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* _init_l_Lean_Compiler_mkUInt32Lit___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_1 = lean::mk_nat_obj(32u);
x_2 = l_Lean_Compiler_mkUIntTypeName(x_1);
x_3 = lean::mk_string("ofNat");
lean::inc(x_2);
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("toNat");
lean::inc(x_2);
x_6 = lean_name_mk_string(x_2, x_5);
x_7 = lean::mk_nat_obj(lean::mpz("4294967296"));
x_8 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_8, 0, x_1);
lean::cnstr_set(x_8, 1, x_2);
lean::cnstr_set(x_8, 2, x_4);
lean::cnstr_set(x_8, 3, x_6);
lean::cnstr_set(x_8, 4, x_7);
return x_8;
}
}
obj* l_Lean_Compiler_mkUInt32Lit(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = l_Lean_Compiler_mkUInt32Lit___closed__1;
x_3 = l_Lean_Compiler_mkUIntLit(x_2, x_1);
return x_3;
}
}
obj* l_Lean_Compiler_mkUInt32Lit___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Compiler_mkUInt32Lit(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Compiler_foldBinUInt(obj* x_1, uint8 x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_Compiler_getNumLit___main(x_3);
if (lean::obj_tag(x_5) == 0)
{
obj* x_6; 
lean::dec(x_1);
x_6 = lean::box(0);
return x_6;
}
else
{
obj* x_7; obj* x_8; 
x_7 = lean::cnstr_get(x_5, 0);
lean::inc(x_7);
lean::dec(x_5);
x_8 = l_Lean_Compiler_getNumLit___main(x_4);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; 
lean::dec(x_7);
lean::dec(x_1);
x_9 = lean::box(0);
return x_9;
}
else
{
obj* x_10; obj* x_11; 
x_10 = lean::cnstr_get(x_8, 0);
lean::inc(x_10);
lean::dec(x_8);
x_11 = l_Lean_Compiler_getInfoFromVal___main(x_3);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; 
lean::dec(x_10);
lean::dec(x_7);
lean::dec(x_1);
x_12 = lean::box(0);
return x_12;
}
else
{
uint8 x_13; 
x_13 = !lean::is_exclusive(x_11);
if (x_13 == 0)
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_14 = lean::cnstr_get(x_11, 0);
x_15 = lean::box(x_2);
lean::inc(x_14);
x_16 = lean::apply_4(x_1, x_14, x_15, x_7, x_10);
x_17 = l_Lean_Compiler_mkUIntLit(x_14, x_16);
lean::dec(x_16);
lean::cnstr_set(x_11, 0, x_17);
return x_11;
}
else
{
obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_18 = lean::cnstr_get(x_11, 0);
lean::inc(x_18);
lean::dec(x_11);
x_19 = lean::box(x_2);
lean::inc(x_18);
x_20 = lean::apply_4(x_1, x_18, x_19, x_7, x_10);
x_21 = l_Lean_Compiler_mkUIntLit(x_18, x_20);
lean::dec(x_20);
x_22 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_22, 0, x_21);
return x_22;
}
}
}
}
}
}
obj* l_Lean_Compiler_foldBinUInt___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_2);
lean::dec(x_2);
x_6 = l_Lean_Compiler_foldBinUInt(x_1, x_5, x_3, x_4);
lean::dec(x_4);
lean::dec(x_3);
return x_6;
}
}
obj* l_Lean_Compiler_foldUIntAdd___lambda__1(obj* x_1, uint8 x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::nat_add(x_3, x_4);
return x_5;
}
}
obj* _init_l_Lean_Compiler_foldUIntAdd___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldUIntAdd___lambda__1___boxed), 4, 0);
return x_1;
}
}
obj* l_Lean_Compiler_foldUIntAdd(uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = l_Lean_Compiler_foldUIntAdd___closed__1;
x_5 = l_Lean_Compiler_foldBinUInt(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_Lean_Compiler_foldUIntAdd___lambda__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_2);
lean::dec(x_2);
x_6 = l_Lean_Compiler_foldUIntAdd___lambda__1(x_1, x_5, x_3, x_4);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_1);
return x_6;
}
}
obj* l_Lean_Compiler_foldUIntAdd___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_5 = l_Lean_Compiler_foldUIntAdd(x_4, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
return x_5;
}
}
obj* l_Lean_Compiler_foldUIntMul___lambda__1(obj* x_1, uint8 x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::nat_mul(x_3, x_4);
return x_5;
}
}
obj* _init_l_Lean_Compiler_foldUIntMul___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldUIntMul___lambda__1___boxed), 4, 0);
return x_1;
}
}
obj* l_Lean_Compiler_foldUIntMul(uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = l_Lean_Compiler_foldUIntMul___closed__1;
x_5 = l_Lean_Compiler_foldBinUInt(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_Lean_Compiler_foldUIntMul___lambda__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_2);
lean::dec(x_2);
x_6 = l_Lean_Compiler_foldUIntMul___lambda__1(x_1, x_5, x_3, x_4);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_1);
return x_6;
}
}
obj* l_Lean_Compiler_foldUIntMul___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_5 = l_Lean_Compiler_foldUIntMul(x_4, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
return x_5;
}
}
obj* l_Lean_Compiler_foldUIntDiv___lambda__1(obj* x_1, uint8 x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::nat_div(x_3, x_4);
return x_5;
}
}
obj* _init_l_Lean_Compiler_foldUIntDiv___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldUIntDiv___lambda__1___boxed), 4, 0);
return x_1;
}
}
obj* l_Lean_Compiler_foldUIntDiv(uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = l_Lean_Compiler_foldUIntDiv___closed__1;
x_5 = l_Lean_Compiler_foldBinUInt(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_Lean_Compiler_foldUIntDiv___lambda__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_2);
lean::dec(x_2);
x_6 = l_Lean_Compiler_foldUIntDiv___lambda__1(x_1, x_5, x_3, x_4);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_1);
return x_6;
}
}
obj* l_Lean_Compiler_foldUIntDiv___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_5 = l_Lean_Compiler_foldUIntDiv(x_4, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
return x_5;
}
}
obj* l_Lean_Compiler_foldUIntMod___lambda__1(obj* x_1, uint8 x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::nat_mod(x_3, x_4);
return x_5;
}
}
obj* _init_l_Lean_Compiler_foldUIntMod___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldUIntMod___lambda__1___boxed), 4, 0);
return x_1;
}
}
obj* l_Lean_Compiler_foldUIntMod(uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = l_Lean_Compiler_foldUIntMod___closed__1;
x_5 = l_Lean_Compiler_foldBinUInt(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_Lean_Compiler_foldUIntMod___lambda__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_2);
lean::dec(x_2);
x_6 = l_Lean_Compiler_foldUIntMod___lambda__1(x_1, x_5, x_3, x_4);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_1);
return x_6;
}
}
obj* l_Lean_Compiler_foldUIntMod___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_5 = l_Lean_Compiler_foldUIntMod(x_4, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
return x_5;
}
}
obj* l_Lean_Compiler_foldUIntSub___lambda__1(obj* x_1, uint8 x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = lean::cnstr_get(x_1, 4);
x_6 = lean::nat_sub(x_5, x_4);
x_7 = lean::nat_add(x_3, x_6);
lean::dec(x_6);
return x_7;
}
}
obj* _init_l_Lean_Compiler_foldUIntSub___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldUIntSub___lambda__1___boxed), 4, 0);
return x_1;
}
}
obj* l_Lean_Compiler_foldUIntSub(uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = l_Lean_Compiler_foldUIntSub___closed__1;
x_5 = l_Lean_Compiler_foldBinUInt(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_Lean_Compiler_foldUIntSub___lambda__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_2);
lean::dec(x_2);
x_6 = l_Lean_Compiler_foldUIntSub___lambda__1(x_1, x_5, x_3, x_4);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_1);
return x_6;
}
}
obj* l_Lean_Compiler_foldUIntSub___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_5 = l_Lean_Compiler_foldUIntSub(x_4, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
return x_5;
}
}
obj* _init_l_Lean_Compiler_preUIntBinFoldFns() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_1 = lean::box(0);
x_2 = lean::mk_string("add");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldUIntAdd___boxed), 3, 0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_4);
x_6 = lean::mk_string("mul");
x_7 = lean_name_mk_string(x_1, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldUIntMul___boxed), 3, 0);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
x_10 = lean::mk_string("div");
x_11 = lean_name_mk_string(x_1, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldUIntDiv___boxed), 3, 0);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_12);
x_14 = lean::mk_string("mod");
x_15 = lean_name_mk_string(x_1, x_14);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldUIntMod___boxed), 3, 0);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
x_18 = lean::mk_string("sub");
x_19 = lean_name_mk_string(x_1, x_18);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldUIntSub___boxed), 3, 0);
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_19);
lean::cnstr_set(x_21, 1, x_20);
x_22 = lean::box(0);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_22);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_17);
lean::cnstr_set(x_24, 1, x_23);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_13);
lean::cnstr_set(x_25, 1, x_24);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_9);
lean::cnstr_set(x_26, 1, x_25);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_5);
lean::cnstr_set(x_27, 1, x_26);
return x_27;
}
}
obj* l_List_map___main___at_Lean_Compiler_uintBinFoldFns___spec__1(obj* x_1, obj* x_2) {
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
uint8 x_4; 
x_4 = !lean::is_exclusive(x_2);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_5 = lean::cnstr_get(x_2, 0);
x_6 = lean::cnstr_get(x_2, 1);
x_7 = l_List_map___main___at_Lean_Compiler_uintBinFoldFns___spec__1(x_1, x_6);
x_8 = !lean::is_exclusive(x_5);
if (x_8 == 0)
{
obj* x_9; obj* x_10; obj* x_11; 
x_9 = lean::cnstr_get(x_5, 0);
x_10 = lean::cnstr_get(x_1, 1);
x_11 = l_Lean_Name_append___main(x_10, x_9);
lean::cnstr_set(x_5, 0, x_11);
lean::cnstr_set(x_2, 1, x_7);
return x_2;
}
else
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_12 = lean::cnstr_get(x_5, 0);
x_13 = lean::cnstr_get(x_5, 1);
lean::inc(x_13);
lean::inc(x_12);
lean::dec(x_5);
x_14 = lean::cnstr_get(x_1, 1);
x_15 = l_Lean_Name_append___main(x_14, x_12);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_13);
lean::cnstr_set(x_2, 1, x_7);
lean::cnstr_set(x_2, 0, x_16);
return x_2;
}
}
else
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_17 = lean::cnstr_get(x_2, 0);
x_18 = lean::cnstr_get(x_2, 1);
lean::inc(x_18);
lean::inc(x_17);
lean::dec(x_2);
x_19 = l_List_map___main___at_Lean_Compiler_uintBinFoldFns___spec__1(x_1, x_18);
x_20 = lean::cnstr_get(x_17, 0);
lean::inc(x_20);
x_21 = lean::cnstr_get(x_17, 1);
lean::inc(x_21);
if (lean::is_exclusive(x_17)) {
 lean::cnstr_release(x_17, 0);
 lean::cnstr_release(x_17, 1);
 x_22 = x_17;
} else {
 lean::dec_ref(x_17);
 x_22 = lean::box(0);
}
x_23 = lean::cnstr_get(x_1, 1);
x_24 = l_Lean_Name_append___main(x_23, x_20);
if (lean::is_scalar(x_22)) {
 x_25 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_25 = x_22;
}
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_21);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_19);
return x_26;
}
}
}
}
obj* l_List_foldl___main___at_Lean_Compiler_uintBinFoldFns___spec__2(obj* x_1, obj* x_2) {
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
x_5 = l_Lean_Compiler_preUIntBinFoldFns;
x_6 = l_List_map___main___at_Lean_Compiler_uintBinFoldFns___spec__1(x_3, x_5);
x_7 = l_List_append___rarg(x_1, x_6);
x_1 = x_7;
x_2 = x_4;
goto _start;
}
}
}
obj* _init_l_Lean_Compiler_uintBinFoldFns() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Compiler_numScalarTypes;
x_3 = l_List_foldl___main___at_Lean_Compiler_uintBinFoldFns___spec__2(x_1, x_2);
return x_3;
}
}
obj* l_List_map___main___at_Lean_Compiler_uintBinFoldFns___spec__1___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_List_map___main___at_Lean_Compiler_uintBinFoldFns___spec__1(x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_List_foldl___main___at_Lean_Compiler_uintBinFoldFns___spec__2___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_List_foldl___main___at_Lean_Compiler_uintBinFoldFns___spec__2(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_Lean_Compiler_foldNatBinOp(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Compiler_getNumLit___main(x_2);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
lean::dec(x_1);
x_5 = lean::box(0);
return x_5;
}
else
{
obj* x_6; obj* x_7; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_7 = l_Lean_Compiler_getNumLit___main(x_3);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; 
lean::dec(x_6);
lean::dec(x_1);
x_8 = lean::box(0);
return x_8;
}
else
{
uint8 x_9; 
x_9 = !lean::is_exclusive(x_7);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_10 = lean::cnstr_get(x_7, 0);
x_11 = lean::apply_2(x_1, x_6, x_10);
x_12 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_12, 0, x_11);
x_13 = lean_expr_mk_lit(x_12);
lean::cnstr_set(x_7, 0, x_13);
return x_7;
}
else
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_14 = lean::cnstr_get(x_7, 0);
lean::inc(x_14);
lean::dec(x_7);
x_15 = lean::apply_2(x_1, x_6, x_14);
x_16 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_16, 0, x_15);
x_17 = lean_expr_mk_lit(x_16);
x_18 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_18, 0, x_17);
return x_18;
}
}
}
}
}
obj* l_Lean_Compiler_foldNatBinOp___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Compiler_foldNatBinOp(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
return x_4;
}
}
obj* _init_l_Lean_Compiler_foldNatAdd___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Nat_add___boxed), 2, 0);
return x_1;
}
}
obj* l_Lean_Compiler_foldNatAdd___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Compiler_foldNatAdd___rarg___closed__1;
x_4 = l_Lean_Compiler_foldNatBinOp(x_3, x_1, x_2);
return x_4;
}
}
obj* l_Lean_Compiler_foldNatAdd(uint8 x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldNatAdd___rarg___boxed), 2, 0);
return x_2;
}
}
obj* l_Lean_Compiler_foldNatAdd___rarg___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Compiler_foldNatAdd___rarg(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_Compiler_foldNatAdd___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Lean_Compiler_foldNatAdd(x_2);
return x_3;
}
}
obj* _init_l_Lean_Compiler_foldNatMul___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Nat_mul___boxed), 2, 0);
return x_1;
}
}
obj* l_Lean_Compiler_foldNatMul___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Compiler_foldNatMul___rarg___closed__1;
x_4 = l_Lean_Compiler_foldNatBinOp(x_3, x_1, x_2);
return x_4;
}
}
obj* l_Lean_Compiler_foldNatMul(uint8 x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldNatMul___rarg___boxed), 2, 0);
return x_2;
}
}
obj* l_Lean_Compiler_foldNatMul___rarg___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Compiler_foldNatMul___rarg(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_Compiler_foldNatMul___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Lean_Compiler_foldNatMul(x_2);
return x_3;
}
}
obj* _init_l_Lean_Compiler_foldNatDiv___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Nat_div___boxed), 2, 0);
return x_1;
}
}
obj* l_Lean_Compiler_foldNatDiv___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Compiler_foldNatDiv___rarg___closed__1;
x_4 = l_Lean_Compiler_foldNatBinOp(x_3, x_1, x_2);
return x_4;
}
}
obj* l_Lean_Compiler_foldNatDiv(uint8 x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldNatDiv___rarg___boxed), 2, 0);
return x_2;
}
}
obj* l_Lean_Compiler_foldNatDiv___rarg___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Compiler_foldNatDiv___rarg(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_Compiler_foldNatDiv___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Lean_Compiler_foldNatDiv(x_2);
return x_3;
}
}
obj* _init_l_Lean_Compiler_foldNatMod___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Nat_mod___boxed), 2, 0);
return x_1;
}
}
obj* l_Lean_Compiler_foldNatMod___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Compiler_foldNatMod___rarg___closed__1;
x_4 = l_Lean_Compiler_foldNatBinOp(x_3, x_1, x_2);
return x_4;
}
}
obj* l_Lean_Compiler_foldNatMod(uint8 x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldNatMod___rarg___boxed), 2, 0);
return x_2;
}
}
obj* l_Lean_Compiler_foldNatMod___rarg___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Compiler_foldNatMod___rarg(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_Compiler_foldNatMod___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Lean_Compiler_foldNatMod(x_2);
return x_3;
}
}
obj* _init_l_Lean_Compiler_foldNatPow___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Nat_pow___boxed), 2, 0);
return x_1;
}
}
obj* l_Lean_Compiler_foldNatPow___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Compiler_foldNatPow___rarg___closed__1;
x_4 = l_Lean_Compiler_foldNatBinOp(x_3, x_1, x_2);
return x_4;
}
}
obj* l_Lean_Compiler_foldNatPow(uint8 x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldNatPow___rarg___boxed), 2, 0);
return x_2;
}
}
obj* l_Lean_Compiler_foldNatPow___rarg___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Compiler_foldNatPow___rarg(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_Compiler_foldNatPow___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Lean_Compiler_foldNatPow(x_2);
return x_3;
}
}
obj* _init_l_Lean_Compiler_mkNatEq___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Eq");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::box(0);
x_5 = l_Lean_Level_one;
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_4);
x_7 = lean_expr_mk_const(x_3, x_6);
x_8 = lean::mk_string("Nat");
x_9 = lean_name_mk_string(x_1, x_8);
x_10 = lean_expr_mk_const(x_9, x_4);
x_11 = lean_expr_mk_app(x_7, x_10);
return x_11;
}
}
obj* l_Lean_Compiler_mkNatEq(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Compiler_mkNatEq___closed__1;
x_4 = l_Lean_mkBinApp(x_3, x_1, x_2);
return x_4;
}
}
obj* _init_l_Lean_Compiler_mkNatLt___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_1 = lean::box(0);
x_2 = lean::mk_string("HasLt");
lean::inc(x_2);
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("lt");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::box(0);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean_expr_mk_const(x_5, x_8);
x_10 = lean::mk_string("Nat");
x_11 = lean_name_mk_string(x_1, x_10);
lean::inc(x_11);
x_12 = lean_expr_mk_const(x_11, x_6);
x_13 = lean_name_mk_string(x_11, x_2);
x_14 = lean_expr_mk_const(x_13, x_6);
x_15 = l_Lean_mkBinApp(x_9, x_12, x_14);
return x_15;
}
}
obj* l_Lean_Compiler_mkNatLt(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Compiler_mkNatLt___closed__1;
x_4 = l_Lean_mkBinApp(x_3, x_1, x_2);
return x_4;
}
}
obj* _init_l_Lean_Compiler_mkNatLe___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_1 = lean::box(0);
x_2 = lean::mk_string("HasLt");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("le");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::box(0);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean_expr_mk_const(x_5, x_8);
x_10 = lean::mk_string("Nat");
x_11 = lean_name_mk_string(x_1, x_10);
lean::inc(x_11);
x_12 = lean_expr_mk_const(x_11, x_6);
x_13 = lean::mk_string("HasLe");
x_14 = lean_name_mk_string(x_11, x_13);
x_15 = lean_expr_mk_const(x_14, x_6);
x_16 = l_Lean_mkBinApp(x_9, x_12, x_15);
return x_16;
}
}
obj* l_Lean_Compiler_mkNatLe(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_Compiler_mkNatLe___closed__1;
x_4 = l_Lean_mkBinApp(x_3, x_1, x_2);
return x_4;
}
}
obj* _init_l_Lean_Compiler_toDecidableExpr___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Compiler_neutralExpr;
x_2 = l_Lean_mkDecIsFalse(x_1, x_1);
return x_2;
}
}
obj* _init_l_Lean_Compiler_toDecidableExpr___closed__2() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Compiler_neutralExpr;
x_2 = l_Lean_mkDecIsTrue(x_1, x_1);
return x_2;
}
}
obj* l_Lean_Compiler_toDecidableExpr(uint8 x_1, obj* x_2, uint8 x_3) {
_start:
{
if (x_1 == 0)
{
lean::dec(x_2);
if (x_3 == 0)
{
obj* x_4; 
x_4 = l_Lean_Compiler_toDecidableExpr___closed__1;
return x_4;
}
else
{
obj* x_5; 
x_5 = l_Lean_Compiler_toDecidableExpr___closed__2;
return x_5;
}
}
else
{
if (x_3 == 0)
{
obj* x_6; obj* x_7; 
lean::inc(x_2);
x_6 = l_Lean_Compiler_mkLcProof(x_2);
x_7 = l_Lean_mkDecIsFalse(x_2, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_9; 
lean::inc(x_2);
x_8 = l_Lean_Compiler_mkLcProof(x_2);
x_9 = l_Lean_mkDecIsTrue(x_2, x_8);
return x_9;
}
}
}
}
obj* l_Lean_Compiler_toDecidableExpr___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; uint8 x_5; obj* x_6; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_5 = lean::unbox(x_3);
lean::dec(x_3);
x_6 = l_Lean_Compiler_toDecidableExpr(x_4, x_2, x_5);
return x_6;
}
}
obj* l_Lean_Compiler_foldNatBinPred(obj* x_1, obj* x_2, uint8 x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Lean_Compiler_getNumLit___main(x_4);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
x_7 = lean::box(0);
return x_7;
}
else
{
obj* x_8; obj* x_9; 
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
lean::dec(x_6);
x_9 = l_Lean_Compiler_getNumLit___main(x_5);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; 
lean::dec(x_8);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_2);
lean::dec(x_1);
x_10 = lean::box(0);
return x_10;
}
else
{
uint8 x_11; 
x_11 = !lean::is_exclusive(x_9);
if (x_11 == 0)
{
obj* x_12; obj* x_13; obj* x_14; uint8 x_15; obj* x_16; 
x_12 = lean::cnstr_get(x_9, 0);
x_13 = lean::apply_2(x_1, x_4, x_5);
x_14 = lean::apply_2(x_2, x_8, x_12);
x_15 = lean::unbox(x_14);
lean::dec(x_14);
x_16 = l_Lean_Compiler_toDecidableExpr(x_3, x_13, x_15);
lean::cnstr_set(x_9, 0, x_16);
return x_9;
}
else
{
obj* x_17; obj* x_18; obj* x_19; uint8 x_20; obj* x_21; obj* x_22; 
x_17 = lean::cnstr_get(x_9, 0);
lean::inc(x_17);
lean::dec(x_9);
x_18 = lean::apply_2(x_1, x_4, x_5);
x_19 = lean::apply_2(x_2, x_8, x_17);
x_20 = lean::unbox(x_19);
lean::dec(x_19);
x_21 = l_Lean_Compiler_toDecidableExpr(x_3, x_18, x_20);
x_22 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_22, 0, x_21);
return x_22;
}
}
}
}
}
obj* l_Lean_Compiler_foldNatBinPred___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_3);
lean::dec(x_3);
x_7 = l_Lean_Compiler_foldNatBinPred(x_1, x_2, x_6, x_4, x_5);
return x_7;
}
}
obj* _init_l_Lean_Compiler_foldNatDecEq___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_mkNatEq), 2, 0);
return x_1;
}
}
obj* _init_l_Lean_Compiler_foldNatDecEq___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Nat_decEq___boxed), 2, 0);
return x_1;
}
}
obj* l_Lean_Compiler_foldNatDecEq(uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Compiler_foldNatDecEq___closed__1;
x_5 = l_Lean_Compiler_foldNatDecEq___closed__2;
x_6 = l_Lean_Compiler_foldNatBinPred(x_4, x_5, x_1, x_2, x_3);
return x_6;
}
}
obj* l_Lean_Compiler_foldNatDecEq___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_5 = l_Lean_Compiler_foldNatDecEq(x_4, x_2, x_3);
return x_5;
}
}
obj* _init_l_Lean_Compiler_foldNatDecLt___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_mkNatLt), 2, 0);
return x_1;
}
}
obj* _init_l_Lean_Compiler_foldNatDecLt___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Nat_decLt___boxed), 2, 0);
return x_1;
}
}
obj* l_Lean_Compiler_foldNatDecLt(uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Compiler_foldNatDecLt___closed__1;
x_5 = l_Lean_Compiler_foldNatDecLt___closed__2;
x_6 = l_Lean_Compiler_foldNatBinPred(x_4, x_5, x_1, x_2, x_3);
return x_6;
}
}
obj* l_Lean_Compiler_foldNatDecLt___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_5 = l_Lean_Compiler_foldNatDecLt(x_4, x_2, x_3);
return x_5;
}
}
obj* _init_l_Lean_Compiler_foldNatDecLe___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_mkNatLe), 2, 0);
return x_1;
}
}
obj* _init_l_Lean_Compiler_foldNatDecLe___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Nat_decLe___boxed), 2, 0);
return x_1;
}
}
obj* l_Lean_Compiler_foldNatDecLe(uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_Lean_Compiler_foldNatDecLe___closed__1;
x_5 = l_Lean_Compiler_foldNatDecLe___closed__2;
x_6 = l_Lean_Compiler_foldNatBinPred(x_4, x_5, x_1, x_2, x_3);
return x_6;
}
}
obj* l_Lean_Compiler_foldNatDecLe___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_5 = l_Lean_Compiler_foldNatDecLe(x_4, x_2, x_3);
return x_5;
}
}
obj* _init_l_Lean_Compiler_natFoldFns() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Nat");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("add");
lean::inc(x_3);
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldNatAdd___boxed), 1, 0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_6);
x_8 = lean::mk_string("mul");
lean::inc(x_3);
x_9 = lean_name_mk_string(x_3, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldNatMul___boxed), 1, 0);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
x_12 = lean::mk_string("div");
lean::inc(x_3);
x_13 = lean_name_mk_string(x_3, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldNatDiv___boxed), 1, 0);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::mk_string("mod");
lean::inc(x_3);
x_17 = lean_name_mk_string(x_3, x_16);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldNatMod___boxed), 1, 0);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_17);
lean::cnstr_set(x_19, 1, x_18);
x_20 = lean::mk_string("pow");
lean::inc(x_3);
x_21 = lean_name_mk_string(x_3, x_20);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldNatPow___boxed), 1, 0);
lean::inc(x_22);
lean::inc(x_21);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_22);
x_24 = lean::mk_string("_main");
x_25 = lean_name_mk_string(x_21, x_24);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_22);
x_27 = lean::mk_string("decEq");
lean::inc(x_3);
x_28 = lean_name_mk_string(x_3, x_27);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldNatDecEq___boxed), 3, 0);
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_28);
lean::cnstr_set(x_30, 1, x_29);
x_31 = lean::mk_string("decLt");
lean::inc(x_3);
x_32 = lean_name_mk_string(x_3, x_31);
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldNatDecLt___boxed), 3, 0);
x_34 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_34, 0, x_32);
lean::cnstr_set(x_34, 1, x_33);
x_35 = lean::mk_string("decLe");
x_36 = lean_name_mk_string(x_3, x_35);
x_37 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldNatDecLe___boxed), 3, 0);
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_36);
lean::cnstr_set(x_38, 1, x_37);
x_39 = lean::box(0);
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_38);
lean::cnstr_set(x_40, 1, x_39);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_34);
lean::cnstr_set(x_41, 1, x_40);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_30);
lean::cnstr_set(x_42, 1, x_41);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_26);
lean::cnstr_set(x_43, 1, x_42);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_23);
lean::cnstr_set(x_44, 1, x_43);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_19);
lean::cnstr_set(x_45, 1, x_44);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_15);
lean::cnstr_set(x_46, 1, x_45);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_11);
lean::cnstr_set(x_47, 1, x_46);
x_48 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_48, 0, x_7);
lean::cnstr_set(x_48, 1, x_47);
return x_48;
}
}
obj* _init_l_Lean_Compiler_getBoolLit___main___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Bool");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("true");
x_5 = lean_name_mk_string(x_3, x_4);
return x_5;
}
}
obj* _init_l_Lean_Compiler_getBoolLit___main___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Bool");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("false");
x_5 = lean_name_mk_string(x_3, x_4);
return x_5;
}
}
obj* _init_l_Lean_Compiler_getBoolLit___main___closed__3() {
_start:
{
uint8 x_1; obj* x_2; obj* x_3; 
x_1 = 0;
x_2 = lean::box(x_1);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
}
obj* _init_l_Lean_Compiler_getBoolLit___main___closed__4() {
_start:
{
uint8 x_1; obj* x_2; obj* x_3; 
x_1 = 1;
x_2 = lean::box(x_1);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
}
obj* l_Lean_Compiler_getBoolLit___main(obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 4)
{
obj* x_2; obj* x_3; uint8 x_4; 
x_2 = lean::cnstr_get(x_1, 0);
x_3 = l_Lean_Compiler_getBoolLit___main___closed__1;
x_4 = lean_name_dec_eq(x_2, x_3);
if (x_4 == 0)
{
obj* x_5; uint8 x_6; 
x_5 = l_Lean_Compiler_getBoolLit___main___closed__2;
x_6 = lean_name_dec_eq(x_2, x_5);
if (x_6 == 0)
{
obj* x_7; 
x_7 = lean::box(0);
return x_7;
}
else
{
obj* x_8; 
x_8 = l_Lean_Compiler_getBoolLit___main___closed__3;
return x_8;
}
}
else
{
obj* x_9; 
x_9 = l_Lean_Compiler_getBoolLit___main___closed__4;
return x_9;
}
}
else
{
obj* x_10; 
x_10 = lean::box(0);
return x_10;
}
}
}
obj* l_Lean_Compiler_getBoolLit___main___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Compiler_getBoolLit___main(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Compiler_getBoolLit(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Compiler_getBoolLit___main(x_1);
return x_2;
}
}
obj* l_Lean_Compiler_getBoolLit___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Compiler_getBoolLit(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Compiler_foldStrictAnd___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Compiler_getBoolLit___main(x_1);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; 
x_4 = l_Lean_Compiler_getBoolLit___main(x_2);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
lean::dec(x_2);
lean::dec(x_1);
x_5 = lean::box(0);
return x_5;
}
else
{
uint8 x_6; 
x_6 = !lean::is_exclusive(x_4);
if (x_6 == 0)
{
obj* x_7; uint8 x_8; 
x_7 = lean::cnstr_get(x_4, 0);
x_8 = lean::unbox(x_7);
lean::dec(x_7);
if (x_8 == 0)
{
lean::dec(x_1);
lean::cnstr_set(x_4, 0, x_2);
return x_4;
}
else
{
lean::dec(x_2);
lean::cnstr_set(x_4, 0, x_1);
return x_4;
}
}
else
{
obj* x_9; uint8 x_10; 
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
lean::dec(x_4);
x_10 = lean::unbox(x_9);
lean::dec(x_9);
if (x_10 == 0)
{
obj* x_11; 
lean::dec(x_1);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_2);
return x_11;
}
else
{
obj* x_12; 
lean::dec(x_2);
x_12 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_12, 0, x_1);
return x_12;
}
}
}
}
else
{
uint8 x_13; 
x_13 = !lean::is_exclusive(x_3);
if (x_13 == 0)
{
obj* x_14; uint8 x_15; 
x_14 = lean::cnstr_get(x_3, 0);
x_15 = lean::unbox(x_14);
lean::dec(x_14);
if (x_15 == 0)
{
lean::dec(x_2);
lean::cnstr_set(x_3, 0, x_1);
return x_3;
}
else
{
lean::dec(x_1);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
}
else
{
obj* x_16; uint8 x_17; 
x_16 = lean::cnstr_get(x_3, 0);
lean::inc(x_16);
lean::dec(x_3);
x_17 = lean::unbox(x_16);
lean::dec(x_16);
if (x_17 == 0)
{
obj* x_18; 
lean::dec(x_2);
x_18 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_18, 0, x_1);
return x_18;
}
else
{
obj* x_19; 
lean::dec(x_1);
x_19 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_19, 0, x_2);
return x_19;
}
}
}
}
}
obj* l_Lean_Compiler_foldStrictAnd(uint8 x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldStrictAnd___rarg), 2, 0);
return x_2;
}
}
obj* l_Lean_Compiler_foldStrictAnd___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Lean_Compiler_foldStrictAnd(x_2);
return x_3;
}
}
obj* l_Lean_Compiler_foldStrictOr___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Compiler_getBoolLit___main(x_1);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; 
x_4 = l_Lean_Compiler_getBoolLit___main(x_2);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
lean::dec(x_2);
lean::dec(x_1);
x_5 = lean::box(0);
return x_5;
}
else
{
uint8 x_6; 
x_6 = !lean::is_exclusive(x_4);
if (x_6 == 0)
{
obj* x_7; uint8 x_8; 
x_7 = lean::cnstr_get(x_4, 0);
x_8 = lean::unbox(x_7);
lean::dec(x_7);
if (x_8 == 0)
{
lean::dec(x_2);
lean::cnstr_set(x_4, 0, x_1);
return x_4;
}
else
{
lean::dec(x_1);
lean::cnstr_set(x_4, 0, x_2);
return x_4;
}
}
else
{
obj* x_9; uint8 x_10; 
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
lean::dec(x_4);
x_10 = lean::unbox(x_9);
lean::dec(x_9);
if (x_10 == 0)
{
obj* x_11; 
lean::dec(x_2);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_1);
return x_11;
}
else
{
obj* x_12; 
lean::dec(x_1);
x_12 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_12, 0, x_2);
return x_12;
}
}
}
}
else
{
uint8 x_13; 
x_13 = !lean::is_exclusive(x_3);
if (x_13 == 0)
{
obj* x_14; uint8 x_15; 
x_14 = lean::cnstr_get(x_3, 0);
x_15 = lean::unbox(x_14);
lean::dec(x_14);
if (x_15 == 0)
{
lean::dec(x_1);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
else
{
lean::dec(x_2);
lean::cnstr_set(x_3, 0, x_1);
return x_3;
}
}
else
{
obj* x_16; uint8 x_17; 
x_16 = lean::cnstr_get(x_3, 0);
lean::inc(x_16);
lean::dec(x_3);
x_17 = lean::unbox(x_16);
lean::dec(x_16);
if (x_17 == 0)
{
obj* x_18; 
lean::dec(x_1);
x_18 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_18, 0, x_2);
return x_18;
}
else
{
obj* x_19; 
lean::dec(x_2);
x_19 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_19, 0, x_1);
return x_19;
}
}
}
}
}
obj* l_Lean_Compiler_foldStrictOr(uint8 x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldStrictOr___rarg), 2, 0);
return x_2;
}
}
obj* l_Lean_Compiler_foldStrictOr___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Lean_Compiler_foldStrictOr(x_2);
return x_3;
}
}
obj* _init_l_Lean_Compiler_boolFoldFns() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_1 = lean::box(0);
x_2 = lean::mk_string("strictOr");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldStrictOr___boxed), 1, 0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_4);
x_6 = lean::mk_string("strictAnd");
x_7 = lean_name_mk_string(x_1, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldStrictAnd___boxed), 1, 0);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_5);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
obj* _init_l_Lean_Compiler_binFoldFns() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Compiler_boolFoldFns;
x_2 = l_Lean_Compiler_uintBinFoldFns;
x_3 = l_List_append___rarg(x_1, x_2);
x_4 = l_Lean_Compiler_natFoldFns;
x_5 = l_List_append___rarg(x_3, x_4);
return x_5;
}
}
obj* l_Lean_Compiler_foldNatSucc___rarg(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Compiler_getNumLit___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = lean::box(0);
return x_3;
}
else
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_2);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_5 = lean::cnstr_get(x_2, 0);
x_6 = lean::mk_nat_obj(1u);
x_7 = lean::nat_add(x_5, x_6);
lean::dec(x_5);
x_8 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
x_9 = lean_expr_mk_lit(x_8);
lean::cnstr_set(x_2, 0, x_9);
return x_2;
}
else
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_2, 0);
lean::inc(x_10);
lean::dec(x_2);
x_11 = lean::mk_nat_obj(1u);
x_12 = lean::nat_add(x_10, x_11);
lean::dec(x_10);
x_13 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_13, 0, x_12);
x_14 = lean_expr_mk_lit(x_13);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_14);
return x_15;
}
}
}
}
obj* l_Lean_Compiler_foldNatSucc(uint8 x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldNatSucc___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_Lean_Compiler_foldNatSucc___rarg___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Compiler_foldNatSucc___rarg(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Compiler_foldNatSucc___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Lean_Compiler_foldNatSucc(x_2);
return x_3;
}
}
obj* _init_l_Lean_Compiler_foldCharOfNat___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::mk_nat_obj(0u);
x_2 = l_Lean_Compiler_mkUInt32Lit(x_1);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
}
obj* l_Lean_Compiler_foldCharOfNat(uint8 x_1, obj* x_2) {
_start:
{
if (x_1 == 0)
{
obj* x_3; 
x_3 = l_Lean_Compiler_getNumLit___main(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; 
x_4 = lean::box(0);
return x_4;
}
else
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_3);
if (x_5 == 0)
{
obj* x_6; uint32 x_7; uint32 x_8; uint8 x_9; 
x_6 = lean::cnstr_get(x_3, 0);
x_7 = lean::uint32_of_nat(x_6);
x_8 = 55296;
x_9 = x_7 < x_8;
if (x_9 == 0)
{
uint32 x_10; uint8 x_11; 
x_10 = 57343;
x_11 = x_10 < x_7;
if (x_11 == 0)
{
obj* x_12; 
lean::free_heap_obj(x_3);
lean::dec(x_6);
x_12 = l_Lean_Compiler_foldCharOfNat___closed__1;
return x_12;
}
else
{
uint32 x_13; uint8 x_14; 
x_13 = 1114112;
x_14 = x_7 < x_13;
if (x_14 == 0)
{
obj* x_15; 
lean::free_heap_obj(x_3);
lean::dec(x_6);
x_15 = l_Lean_Compiler_foldCharOfNat___closed__1;
return x_15;
}
else
{
obj* x_16; 
x_16 = l_Lean_Compiler_mkUInt32Lit(x_6);
lean::dec(x_6);
lean::cnstr_set(x_3, 0, x_16);
return x_3;
}
}
}
else
{
obj* x_17; 
x_17 = l_Lean_Compiler_mkUInt32Lit(x_6);
lean::dec(x_6);
lean::cnstr_set(x_3, 0, x_17);
return x_3;
}
}
else
{
obj* x_18; uint32 x_19; uint32 x_20; uint8 x_21; 
x_18 = lean::cnstr_get(x_3, 0);
lean::inc(x_18);
lean::dec(x_3);
x_19 = lean::uint32_of_nat(x_18);
x_20 = 55296;
x_21 = x_19 < x_20;
if (x_21 == 0)
{
uint32 x_22; uint8 x_23; 
x_22 = 57343;
x_23 = x_22 < x_19;
if (x_23 == 0)
{
obj* x_24; 
lean::dec(x_18);
x_24 = l_Lean_Compiler_foldCharOfNat___closed__1;
return x_24;
}
else
{
uint32 x_25; uint8 x_26; 
x_25 = 1114112;
x_26 = x_19 < x_25;
if (x_26 == 0)
{
obj* x_27; 
lean::dec(x_18);
x_27 = l_Lean_Compiler_foldCharOfNat___closed__1;
return x_27;
}
else
{
obj* x_28; obj* x_29; 
x_28 = l_Lean_Compiler_mkUInt32Lit(x_18);
lean::dec(x_18);
x_29 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_29, 0, x_28);
return x_29;
}
}
}
else
{
obj* x_30; obj* x_31; 
x_30 = l_Lean_Compiler_mkUInt32Lit(x_18);
lean::dec(x_18);
x_31 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_31, 0, x_30);
return x_31;
}
}
}
}
else
{
obj* x_32; 
x_32 = lean::box(0);
return x_32;
}
}
}
obj* l_Lean_Compiler_foldCharOfNat___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = l_Lean_Compiler_foldCharOfNat(x_3, x_2);
lean::dec(x_2);
return x_4;
}
}
obj* l_Lean_Compiler_foldToNat___rarg(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Compiler_getNumLit___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = lean::box(0);
return x_3;
}
else
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_2);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = lean::cnstr_get(x_2, 0);
x_6 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
x_7 = lean_expr_mk_lit(x_6);
lean::cnstr_set(x_2, 0, x_7);
return x_2;
}
else
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_8 = lean::cnstr_get(x_2, 0);
lean::inc(x_8);
lean::dec(x_2);
x_9 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
x_10 = lean_expr_mk_lit(x_9);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
return x_11;
}
}
}
}
obj* l_Lean_Compiler_foldToNat(uint8 x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldToNat___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_Lean_Compiler_foldToNat___rarg___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Compiler_foldToNat___rarg(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Compiler_foldToNat___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Lean_Compiler_foldToNat(x_2);
return x_3;
}
}
obj* _init_l_List_foldl___main___at_Lean_Compiler_uintFoldToNatFns___spec__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldToNat___boxed), 1, 0);
return x_1;
}
}
obj* l_List_foldl___main___at_Lean_Compiler_uintFoldToNatFns___spec__1(obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8 x_3; 
x_3 = !lean::is_exclusive(x_2);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_4 = lean::cnstr_get(x_2, 0);
x_5 = lean::cnstr_get(x_2, 1);
x_6 = lean::cnstr_get(x_4, 3);
lean::inc(x_6);
lean::dec(x_4);
x_7 = l_List_foldl___main___at_Lean_Compiler_uintFoldToNatFns___spec__1___closed__1;
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
lean::cnstr_set(x_2, 1, x_1);
lean::cnstr_set(x_2, 0, x_8);
x_1 = x_2;
x_2 = x_5;
goto _start;
}
else
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_2, 0);
x_11 = lean::cnstr_get(x_2, 1);
lean::inc(x_11);
lean::inc(x_10);
lean::dec(x_2);
x_12 = lean::cnstr_get(x_10, 3);
lean::inc(x_12);
lean::dec(x_10);
x_13 = l_List_foldl___main___at_Lean_Compiler_uintFoldToNatFns___spec__1___closed__1;
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_1);
x_1 = x_15;
x_2 = x_11;
goto _start;
}
}
}
}
obj* _init_l_Lean_Compiler_uintFoldToNatFns() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Compiler_numScalarTypes;
x_3 = l_List_foldl___main___at_Lean_Compiler_uintFoldToNatFns___spec__1(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Compiler_unFoldFns() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_1 = lean::box(0);
x_2 = lean::mk_string("Nat");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("succ");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldNatSucc___boxed), 1, 0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set(x_7, 1, x_6);
x_8 = lean::mk_string("Char");
x_9 = lean_name_mk_string(x_1, x_8);
x_10 = lean::mk_string("ofNat");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Compiler_foldCharOfNat___boxed), 2, 0);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_12);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_7);
lean::cnstr_set(x_16, 1, x_15);
x_17 = l_Lean_Compiler_uintFoldToNatFns;
x_18 = l_List_append___rarg(x_16, x_17);
return x_18;
}
}
obj* l_List_lookup___main___at_Lean_Compiler_findBinFoldFn___spec__1(obj* x_1, obj* x_2) {
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
obj* x_4; obj* x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_4 = lean::cnstr_get(x_2, 0);
x_5 = lean::cnstr_get(x_2, 1);
x_6 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
x_8 = lean_name_dec_eq(x_1, x_6);
if (x_8 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
obj* x_10; 
lean::inc(x_7);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_7);
return x_10;
}
}
}
}
obj* l_Lean_Compiler_findBinFoldFn(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = l_Lean_Compiler_binFoldFns;
x_3 = l_List_lookup___main___at_Lean_Compiler_findBinFoldFn___spec__1(x_1, x_2);
return x_3;
}
}
obj* l_List_lookup___main___at_Lean_Compiler_findBinFoldFn___spec__1___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_List_lookup___main___at_Lean_Compiler_findBinFoldFn___spec__1(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_Compiler_findBinFoldFn___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Compiler_findBinFoldFn(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_List_lookup___main___at_Lean_Compiler_findUnFoldFn___spec__1(obj* x_1, obj* x_2) {
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
obj* x_4; obj* x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_4 = lean::cnstr_get(x_2, 0);
x_5 = lean::cnstr_get(x_2, 1);
x_6 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
x_8 = lean_name_dec_eq(x_1, x_6);
if (x_8 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
obj* x_10; 
lean::inc(x_7);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_7);
return x_10;
}
}
}
}
obj* l_Lean_Compiler_findUnFoldFn(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = l_Lean_Compiler_unFoldFns;
x_3 = l_List_lookup___main___at_Lean_Compiler_findUnFoldFn___spec__1(x_1, x_2);
return x_3;
}
}
obj* l_List_lookup___main___at_Lean_Compiler_findUnFoldFn___spec__1___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_List_lookup___main___at_Lean_Compiler_findUnFoldFn___spec__1(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_Compiler_findUnFoldFn___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Compiler_findUnFoldFn(x_1);
lean::dec(x_1);
return x_2;
}
}
namespace lean {
obj* fold_bin_op_core(uint8 x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_2) == 4)
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
lean::dec(x_2);
x_6 = l_Lean_Compiler_binFoldFns;
x_7 = l_List_lookup___main___at_Lean_Compiler_findBinFoldFn___spec__1(x_5, x_6);
lean::dec(x_5);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; 
lean::dec(x_4);
lean::dec(x_3);
x_8 = lean::box(0);
return x_8;
}
else
{
obj* x_9; obj* x_10; obj* x_11; 
x_9 = lean::cnstr_get(x_7, 0);
lean::inc(x_9);
lean::dec(x_7);
x_10 = lean::box(x_1);
x_11 = lean::apply_3(x_9, x_10, x_3, x_4);
return x_11;
}
}
else
{
obj* x_12; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
x_12 = lean::box(0);
return x_12;
}
}
}
}
obj* l_Lean_Compiler_foldBinOp___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_1);
lean::dec(x_1);
x_6 = lean::fold_bin_op_core(x_5, x_2, x_3, x_4);
return x_6;
}
}
namespace lean {
obj* fold_un_op_core(uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_2) == 4)
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
x_5 = l_Lean_Compiler_unFoldFns;
x_6 = l_List_lookup___main___at_Lean_Compiler_findUnFoldFn___spec__1(x_4, x_5);
lean::dec(x_4);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; 
lean::dec(x_3);
x_7 = lean::box(0);
return x_7;
}
else
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
lean::dec(x_6);
x_9 = lean::box(x_1);
x_10 = lean::apply_2(x_8, x_9, x_3);
return x_10;
}
}
else
{
obj* x_11; 
lean::dec(x_3);
lean::dec(x_2);
x_11 = lean::box(0);
return x_11;
}
}
}
}
obj* l_Lean_Compiler_foldUnOp___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_5 = lean::fold_un_op_core(x_4, x_2, x_3);
return x_5;
}
}
obj* initialize_init_lean_expr(obj*);
obj* initialize_init_platform(obj*);
obj* initialize_init_lean_compiler_util(obj*);
static bool _G_initialized = false;
obj* initialize_init_lean_compiler_constfolding(obj* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (io_result_is_error(w)) return w;
w = initialize_init_lean_expr(w);
if (io_result_is_error(w)) return w;
w = initialize_init_platform(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_compiler_util(w);
if (io_result_is_error(w)) return w;
l_Lean_Compiler_mkUIntTypeName___closed__1 = _init_l_Lean_Compiler_mkUIntTypeName___closed__1();
lean::mark_persistent(l_Lean_Compiler_mkUIntTypeName___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "mkUIntTypeName"), 1, l_Lean_Compiler_mkUIntTypeName);
l_Lean_Compiler_numScalarTypes = _init_l_Lean_Compiler_numScalarTypes();
lean::mark_persistent(l_Lean_Compiler_numScalarTypes);
lean::register_constant(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "numScalarTypes"), l_Lean_Compiler_numScalarTypes);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "isOfNat"), 1, l_Lean_Compiler_isOfNat___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "isToNat"), 1, l_Lean_Compiler_isToNat___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "getInfoFromFn"), 2, l_Lean_Compiler_getInfoFromFn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "getInfoFromVal"), 1, l_Lean_Compiler_getInfoFromVal___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "getNumLit"), 1, lean::get_num_lit_core);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "mkUIntLit"), 2, l_Lean_Compiler_mkUIntLit___boxed);
l_Lean_Compiler_mkUInt32Lit___closed__1 = _init_l_Lean_Compiler_mkUInt32Lit___closed__1();
lean::mark_persistent(l_Lean_Compiler_mkUInt32Lit___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "mkUInt32Lit"), 1, l_Lean_Compiler_mkUInt32Lit___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldBinUInt"), 4, l_Lean_Compiler_foldBinUInt___boxed);
l_Lean_Compiler_foldUIntAdd___closed__1 = _init_l_Lean_Compiler_foldUIntAdd___closed__1();
lean::mark_persistent(l_Lean_Compiler_foldUIntAdd___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldUIntAdd"), 3, l_Lean_Compiler_foldUIntAdd___boxed);
l_Lean_Compiler_foldUIntMul___closed__1 = _init_l_Lean_Compiler_foldUIntMul___closed__1();
lean::mark_persistent(l_Lean_Compiler_foldUIntMul___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldUIntMul"), 3, l_Lean_Compiler_foldUIntMul___boxed);
l_Lean_Compiler_foldUIntDiv___closed__1 = _init_l_Lean_Compiler_foldUIntDiv___closed__1();
lean::mark_persistent(l_Lean_Compiler_foldUIntDiv___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldUIntDiv"), 3, l_Lean_Compiler_foldUIntDiv___boxed);
l_Lean_Compiler_foldUIntMod___closed__1 = _init_l_Lean_Compiler_foldUIntMod___closed__1();
lean::mark_persistent(l_Lean_Compiler_foldUIntMod___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldUIntMod"), 3, l_Lean_Compiler_foldUIntMod___boxed);
l_Lean_Compiler_foldUIntSub___closed__1 = _init_l_Lean_Compiler_foldUIntSub___closed__1();
lean::mark_persistent(l_Lean_Compiler_foldUIntSub___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldUIntSub"), 3, l_Lean_Compiler_foldUIntSub___boxed);
l_Lean_Compiler_preUIntBinFoldFns = _init_l_Lean_Compiler_preUIntBinFoldFns();
lean::mark_persistent(l_Lean_Compiler_preUIntBinFoldFns);
lean::register_constant(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "preUIntBinFoldFns"), l_Lean_Compiler_preUIntBinFoldFns);
l_Lean_Compiler_uintBinFoldFns = _init_l_Lean_Compiler_uintBinFoldFns();
lean::mark_persistent(l_Lean_Compiler_uintBinFoldFns);
lean::register_constant(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "uintBinFoldFns"), l_Lean_Compiler_uintBinFoldFns);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldNatBinOp"), 3, l_Lean_Compiler_foldNatBinOp___boxed);
l_Lean_Compiler_foldNatAdd___rarg___closed__1 = _init_l_Lean_Compiler_foldNatAdd___rarg___closed__1();
lean::mark_persistent(l_Lean_Compiler_foldNatAdd___rarg___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldNatAdd"), 1, l_Lean_Compiler_foldNatAdd___boxed);
l_Lean_Compiler_foldNatMul___rarg___closed__1 = _init_l_Lean_Compiler_foldNatMul___rarg___closed__1();
lean::mark_persistent(l_Lean_Compiler_foldNatMul___rarg___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldNatMul"), 1, l_Lean_Compiler_foldNatMul___boxed);
l_Lean_Compiler_foldNatDiv___rarg___closed__1 = _init_l_Lean_Compiler_foldNatDiv___rarg___closed__1();
lean::mark_persistent(l_Lean_Compiler_foldNatDiv___rarg___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldNatDiv"), 1, l_Lean_Compiler_foldNatDiv___boxed);
l_Lean_Compiler_foldNatMod___rarg___closed__1 = _init_l_Lean_Compiler_foldNatMod___rarg___closed__1();
lean::mark_persistent(l_Lean_Compiler_foldNatMod___rarg___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldNatMod"), 1, l_Lean_Compiler_foldNatMod___boxed);
l_Lean_Compiler_foldNatPow___rarg___closed__1 = _init_l_Lean_Compiler_foldNatPow___rarg___closed__1();
lean::mark_persistent(l_Lean_Compiler_foldNatPow___rarg___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldNatPow"), 1, l_Lean_Compiler_foldNatPow___boxed);
l_Lean_Compiler_mkNatEq___closed__1 = _init_l_Lean_Compiler_mkNatEq___closed__1();
lean::mark_persistent(l_Lean_Compiler_mkNatEq___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "mkNatEq"), 2, l_Lean_Compiler_mkNatEq);
l_Lean_Compiler_mkNatLt___closed__1 = _init_l_Lean_Compiler_mkNatLt___closed__1();
lean::mark_persistent(l_Lean_Compiler_mkNatLt___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "mkNatLt"), 2, l_Lean_Compiler_mkNatLt);
l_Lean_Compiler_mkNatLe___closed__1 = _init_l_Lean_Compiler_mkNatLe___closed__1();
lean::mark_persistent(l_Lean_Compiler_mkNatLe___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "mkNatLe"), 2, l_Lean_Compiler_mkNatLe);
l_Lean_Compiler_toDecidableExpr___closed__1 = _init_l_Lean_Compiler_toDecidableExpr___closed__1();
lean::mark_persistent(l_Lean_Compiler_toDecidableExpr___closed__1);
l_Lean_Compiler_toDecidableExpr___closed__2 = _init_l_Lean_Compiler_toDecidableExpr___closed__2();
lean::mark_persistent(l_Lean_Compiler_toDecidableExpr___closed__2);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "toDecidableExpr"), 3, l_Lean_Compiler_toDecidableExpr___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldNatBinPred"), 5, l_Lean_Compiler_foldNatBinPred___boxed);
l_Lean_Compiler_foldNatDecEq___closed__1 = _init_l_Lean_Compiler_foldNatDecEq___closed__1();
lean::mark_persistent(l_Lean_Compiler_foldNatDecEq___closed__1);
l_Lean_Compiler_foldNatDecEq___closed__2 = _init_l_Lean_Compiler_foldNatDecEq___closed__2();
lean::mark_persistent(l_Lean_Compiler_foldNatDecEq___closed__2);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldNatDecEq"), 3, l_Lean_Compiler_foldNatDecEq___boxed);
l_Lean_Compiler_foldNatDecLt___closed__1 = _init_l_Lean_Compiler_foldNatDecLt___closed__1();
lean::mark_persistent(l_Lean_Compiler_foldNatDecLt___closed__1);
l_Lean_Compiler_foldNatDecLt___closed__2 = _init_l_Lean_Compiler_foldNatDecLt___closed__2();
lean::mark_persistent(l_Lean_Compiler_foldNatDecLt___closed__2);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldNatDecLt"), 3, l_Lean_Compiler_foldNatDecLt___boxed);
l_Lean_Compiler_foldNatDecLe___closed__1 = _init_l_Lean_Compiler_foldNatDecLe___closed__1();
lean::mark_persistent(l_Lean_Compiler_foldNatDecLe___closed__1);
l_Lean_Compiler_foldNatDecLe___closed__2 = _init_l_Lean_Compiler_foldNatDecLe___closed__2();
lean::mark_persistent(l_Lean_Compiler_foldNatDecLe___closed__2);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldNatDecLe"), 3, l_Lean_Compiler_foldNatDecLe___boxed);
l_Lean_Compiler_natFoldFns = _init_l_Lean_Compiler_natFoldFns();
lean::mark_persistent(l_Lean_Compiler_natFoldFns);
lean::register_constant(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "natFoldFns"), l_Lean_Compiler_natFoldFns);
l_Lean_Compiler_getBoolLit___main___closed__1 = _init_l_Lean_Compiler_getBoolLit___main___closed__1();
lean::mark_persistent(l_Lean_Compiler_getBoolLit___main___closed__1);
l_Lean_Compiler_getBoolLit___main___closed__2 = _init_l_Lean_Compiler_getBoolLit___main___closed__2();
lean::mark_persistent(l_Lean_Compiler_getBoolLit___main___closed__2);
l_Lean_Compiler_getBoolLit___main___closed__3 = _init_l_Lean_Compiler_getBoolLit___main___closed__3();
lean::mark_persistent(l_Lean_Compiler_getBoolLit___main___closed__3);
l_Lean_Compiler_getBoolLit___main___closed__4 = _init_l_Lean_Compiler_getBoolLit___main___closed__4();
lean::mark_persistent(l_Lean_Compiler_getBoolLit___main___closed__4);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "getBoolLit"), 1, l_Lean_Compiler_getBoolLit___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldStrictAnd"), 1, l_Lean_Compiler_foldStrictAnd___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldStrictOr"), 1, l_Lean_Compiler_foldStrictOr___boxed);
l_Lean_Compiler_boolFoldFns = _init_l_Lean_Compiler_boolFoldFns();
lean::mark_persistent(l_Lean_Compiler_boolFoldFns);
lean::register_constant(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "boolFoldFns"), l_Lean_Compiler_boolFoldFns);
l_Lean_Compiler_binFoldFns = _init_l_Lean_Compiler_binFoldFns();
lean::mark_persistent(l_Lean_Compiler_binFoldFns);
lean::register_constant(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "binFoldFns"), l_Lean_Compiler_binFoldFns);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldNatSucc"), 1, l_Lean_Compiler_foldNatSucc___boxed);
l_Lean_Compiler_foldCharOfNat___closed__1 = _init_l_Lean_Compiler_foldCharOfNat___closed__1();
lean::mark_persistent(l_Lean_Compiler_foldCharOfNat___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldCharOfNat"), 2, l_Lean_Compiler_foldCharOfNat___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldToNat"), 1, l_Lean_Compiler_foldToNat___boxed);
l_List_foldl___main___at_Lean_Compiler_uintFoldToNatFns___spec__1___closed__1 = _init_l_List_foldl___main___at_Lean_Compiler_uintFoldToNatFns___spec__1___closed__1();
lean::mark_persistent(l_List_foldl___main___at_Lean_Compiler_uintFoldToNatFns___spec__1___closed__1);
l_Lean_Compiler_uintFoldToNatFns = _init_l_Lean_Compiler_uintFoldToNatFns();
lean::mark_persistent(l_Lean_Compiler_uintFoldToNatFns);
lean::register_constant(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "uintFoldToNatFns"), l_Lean_Compiler_uintFoldToNatFns);
l_Lean_Compiler_unFoldFns = _init_l_Lean_Compiler_unFoldFns();
lean::mark_persistent(l_Lean_Compiler_unFoldFns);
lean::register_constant(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "unFoldFns"), l_Lean_Compiler_unFoldFns);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "findBinFoldFn"), 1, l_Lean_Compiler_findBinFoldFn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "findUnFoldFn"), 1, l_Lean_Compiler_findUnFoldFn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldBinOp"), 4, l_Lean_Compiler_foldBinOp___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "Compiler"), "foldUnOp"), 3, l_Lean_Compiler_foldUnOp___boxed);
return w;
}
