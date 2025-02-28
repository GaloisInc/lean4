// Lean compiler output
// Module: init.core
// Imports:
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
uint8 l_xor(uint8, uint8);
obj* l_cast___rarg(obj*);
obj* l_Or_Decidable___rarg___boxed(obj*, obj*);
obj* l_Eq_ndrecOn___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Iff_Decidable(obj*, obj*);
obj* l_Prod_DecidableEq(obj*, obj*);
obj* l_Quot_recOnSubsingleton___boxed(obj*, obj*, obj*, obj*);
obj* l_Quotient_liftOn___rarg(obj*, obj*, obj*);
obj* l_Sigma_sizeof___main___rarg(obj*, obj*, obj*);
obj* l_Prod_sizeof___main(obj*, obj*);
obj* l_Function_onFun(obj*, obj*, obj*);
obj* l_Task_get(obj*, obj*);
obj* l_PSigma_sizeof___main___at_PSigma_HasSizeof___spec__2(obj*, obj*);
obj* l_idDelta___rarg___boxed(obj*);
obj* l_Task_map(obj*, obj*, obj*, obj*);
obj* l_Quotient_DecidableEq___rarg___lambda__1___boxed(obj*, obj*, obj*);
obj* l_Fun_Inhabited(obj*, obj*);
obj* l_inline___rarg(obj*);
obj* l_inferInstanceAs___rarg(obj*);
obj* l_Nat_Inhabited;
obj* l_strictAnd___boxed(obj*, obj*);
obj* l_Fun_Inhabited___rarg___boxed(obj*, obj*);
obj* l_Not_Decidable(obj*);
obj* l_Decidable_recOnTrue___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
uint8 l_or(uint8, uint8);
obj* l_prodHasDecidableLt(obj*, obj*, obj*, obj*);
obj* l_PSum_HasSizeof(obj*, obj*);
obj* l_Sum_sizeof___main___rarg(obj*, obj*, obj*);
obj* l_std_priority_max;
obj* l_Thunk_bind___boxed(obj*, obj*, obj*, obj*);
obj* l_Quot_liftOn___rarg(obj*, obj*, obj*);
uint8 l_Bool_DecidableEq(uint8, uint8);
obj* l_inline(obj*);
obj* l_Nat_HasSizeof;
uint8 l_bne___rarg(obj*, obj*, obj*);
obj* l_beqOfEq(obj*);
obj* l_PSum_HasSizeof___rarg(obj*, obj*);
obj* l_Sigma_sizeof___boxed(obj*, obj*);
obj* l_bit1___rarg(obj*, obj*, obj*);
obj* l_Thunk_pure___boxed(obj*, obj*);
obj* l_Prod_sizeof___rarg(obj*, obj*, obj*);
obj* l_cond___main___rarg___boxed(obj*, obj*, obj*);
obj* l_Quotient_recOn___rarg(obj*, obj*, obj*);
obj* l_Quotient_liftOn_u2082___rarg(obj*, obj*, obj*, obj*);
obj* l_Prod_HasLess___boxed(obj*, obj*, obj*, obj*);
obj* l_Quotient_recOnSubsingleton_u2082___rarg(obj*, obj*, obj*);
obj* l_flip___rarg(obj*, obj*, obj*);
obj* l_Quotient_mk(obj*, obj*);
obj* l_inline___rarg___boxed(obj*);
obj* l_Fun_Inhabited___rarg(obj*, obj*);
obj* l_Quotient_mk___boxed(obj*, obj*);
obj* l_Sum_sizeof(obj*, obj*);
obj* l_Thunk_pure(obj*, obj*);
obj* l_decidableOfDecidableOfIff(obj*, obj*);
obj* l_defaultHasSizeof(obj*);
obj* l_arbitrary___rarg___boxed(obj*);
obj* l_Sigma_sizeof___rarg(obj*, obj*, obj*);
obj* l_Sigma_sizeof___main(obj*, obj*);
obj* l_cast___rarg___boxed(obj*);
obj* l_Function_onFun___rarg(obj*, obj*, obj*, obj*);
obj* l_Thunk_map___boxed(obj*, obj*, obj*, obj*);
obj* l_Task_mk(obj*, obj*);
obj* l_Quotient_hrecOn___rarg(obj*, obj*, obj*);
obj* l_Function_comp___rarg(obj*, obj*, obj*);
obj* l_List_sizeof___main(obj*);
obj* l_Sum_inhabitedRight___rarg(obj*);
obj* l_Quot_liftOn___boxed(obj*, obj*, obj*);
obj* l_Decidable_recOnFalse(obj*);
obj* l_Decidable_recOnFalse___rarg(uint8, obj*, obj*, obj*, obj*);
obj* l_PSum_sizeof___main(obj*, obj*);
obj* l_prodHasDecidableLt___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Quotient_recOnSubsingleton___rarg(obj*, obj*);
obj* l_Prod_sizeof(obj*, obj*);
obj* l_Quot_hrecOn___rarg(obj*, obj*, obj*);
obj* l_singleton___rarg(obj*, obj*, obj*);
obj* l_decidableOfDecidableOfIff___rarg___boxed(obj*, obj*);
uint8 l_and(uint8, uint8);
obj* l_ite___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_or___main___boxed(obj*, obj*);
obj* l_Option_HasSizeof___rarg(obj*);
obj* l_Subtype_sizeof___main___rarg(obj*, obj*, obj*);
obj* l_bne(obj*);
obj* l_Not_Decidable___rarg___boxed(obj*);
obj* l_id___rarg___boxed(obj*);
obj* l_setoidHasEquiv(obj*, obj*);
obj* l_Nat_sizeof___main___boxed(obj*);
obj* l_Sigma_sizeof___at_Sigma_HasSizeof___spec__1___rarg(obj*, obj*, obj*);
obj* l_Task_get___boxed(obj*, obj*);
obj* l_Prop_Inhabited;
obj* l_Eq_ndrec___rarg(obj*, obj*, obj*);
obj* l_default_sizeof___boxed(obj*, obj*);
obj* l_decidableOfDecidableOfEq___rarg___boxed(obj*, obj*);
obj* l_dite_Decidable___rarg(uint8, obj*, obj*);
obj* l_PUnit_sizeof___main___boxed(obj*);
obj* l_typedExpr(obj*);
obj* l_dite_Decidable___boxed(obj*, obj*, obj*);
obj* l_Eq_mpr(obj*, obj*, obj*);
obj* l_Subtype_DecidableEq___boxed(obj*, obj*);
obj* l_Iff_Decidable___rarg___boxed(obj*, obj*);
obj* l_Quotient_DecidableEq(obj*);
obj* l_Eq_ndrec___boxed(obj*, obj*, obj*);
obj* l_idDelta___rarg(obj*);
obj* l_Sum_inhabitedRight(obj*, obj*);
obj* l_Sigma_sizeof___at_Sigma_HasSizeof___spec__1(obj*, obj*);
obj* l_Quotient_recOnSubsingleton_u2082___at_Quotient_DecidableEq___spec__1___boxed(obj*, obj*);
obj* l_default_sizeof___main(obj*, obj*);
obj* l_Sigma_HasSizeof___boxed(obj*, obj*);
obj* l_std_priority_default;
obj* l_Quotient_DecidableEq___rarg(obj*, obj*, obj*, obj*);
obj* l___private_init_core_20__funSetoid(obj*, obj*);
obj* l_arbitrary___rarg(obj*);
obj* l_Prod_HasSizeof(obj*, obj*);
obj* l_Subtype_sizeof___main(obj*);
obj* l_Quot_recOnSubsingleton(obj*, obj*, obj*, obj*);
obj* l_Quotient_liftOn___boxed(obj*, obj*, obj*);
obj* l_PSum_sizeof(obj*, obj*);
obj* l_Task_map___boxed(obj*, obj*, obj*, obj*);
obj* l_Prod_Inhabited___rarg(obj*, obj*);
obj* l_inferInstance___rarg(obj*);
obj* l_Option_sizeof___main(obj*);
uint8 l_Ne_Decidable___rarg(obj*, obj*, obj*);
obj* l_Quotient_mk___rarg(obj*);
obj* l_Quot_recOn___boxed(obj*, obj*, obj*);
obj* l_inferInstanceAs___rarg___boxed(obj*);
uint8 l_Not_Decidable___rarg(uint8);
obj* l_dite(obj*);
obj* l_Thunk_mk(obj*, obj*);
obj* l_Eq_ndrecOn___rarg___boxed(obj*);
obj* l_Task_bind(obj*, obj*, obj*, obj*);
obj* l___private_init_core_21__extfunApp___rarg(obj*, obj*);
obj* l_Thunk_map(obj*, obj*, obj*, obj*);
obj* l_dite___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_Quotient_lift_u2082___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Unit_unit;
obj* l_idDelta(obj*);
obj* l_PUnit_Inhabited;
obj* l_Xor_Decidable___rarg___boxed(obj*, obj*);
obj* l_Nat_HasOne;
obj* l_Subtype_DecidableEq(obj*, obj*);
obj* l_Decidable_recOnFalse___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Quot_rec(obj*, obj*, obj*);
obj* l_Quotient_recOn(obj*, obj*, obj*);
obj* l_Subtype_Inhabited___rarg___boxed(obj*, obj*);
obj* l_Quot_indep___rarg(obj*, obj*);
obj* l_not___boxed(obj*);
obj* l_bne___rarg___boxed(obj*, obj*, obj*);
obj* l_Nat_sizeof___main(obj*);
obj* l_xor___boxed(obj*, obj*);
obj* l_Prod_Inhabited(obj*, obj*);
obj* l_PSigma_HasSizeof(obj*, obj*);
obj* l_dite_Decidable___rarg___boxed(obj*, obj*, obj*);
obj* l_Quot_indep(obj*, obj*, obj*);
obj* l_Prod_map___main(obj*, obj*, obj*, obj*);
obj* l_List_HasSizeof___rarg(obj*);
obj* l_ite_Decidable___rarg___boxed(obj*, obj*, obj*);
obj* l_decidableOfDecidableEq___rarg(obj*, obj*, obj*);
obj* l_Subtype_sizeof___main___rarg___boxed(obj*, obj*, obj*);
obj* l_beqOfEq___rarg(obj*, obj*, obj*);
obj* l_default_sizeof___main___boxed(obj*, obj*);
obj* l_default___rarg(obj*);
obj* l_Thunk_mk___boxed(obj*, obj*);
obj* l_PSigma_sizeof___main___boxed(obj*, obj*);
obj* l_Subtype_HasSizeof___rarg(obj*, obj*);
obj* l_Bool_sizeof___boxed(obj*);
obj* l_bit1(obj*);
obj* l_Nat_sizeof(obj*);
obj* l_Quot_indep___boxed(obj*, obj*, obj*);
obj* l_List_HasSizeof(obj*);
obj* l_Prod_sizeof___main___rarg(obj*, obj*, obj*);
obj* l___private_init_core_20__funSetoid___boxed(obj*, obj*);
obj* l_Quotient_hrecOn(obj*, obj*, obj*);
obj* l_Option_sizeof___main___rarg(obj*, obj*);
obj* l_Quotient_liftOn_u2082(obj*, obj*, obj*, obj*, obj*);
obj* l_False_elim___boxed(obj*, obj*);
obj* l_Nat_HasZero;
obj* l_Thunk_get___boxed(obj*, obj*);
obj* l_Quotient_rec(obj*, obj*, obj*);
uint8 l_Prod_DecidableEq___rarg(obj*, obj*, obj*, obj*);
obj* l_Sum_sizeof___main(obj*, obj*);
obj* l_Forall_Inhabited___rarg(obj*, obj*);
obj* l_Eq_mpr___rarg(obj*);
obj* l_Eq_ndrecOn___rarg(obj*);
obj* l_Quot_rec___boxed(obj*, obj*, obj*);
obj* l_Prod_map___rarg(obj*, obj*, obj*);
obj* l_PSigma_sizeof___at_PSigma_HasSizeof___spec__1(obj*, obj*);
obj* l_Sum_HasSizeof___rarg(obj*, obj*);
obj* l_strictOr___boxed(obj*, obj*);
obj* l_std_prec_arrow;
obj* l_bit0___rarg(obj*, obj*);
obj* l_Nat_prio;
obj* l_bit0(obj*);
obj* l_Prod_DecidableEq___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_id(obj*);
obj* l_Task_bind___boxed(obj*, obj*, obj*, obj*);
obj* l_List_sizeof___rarg(obj*, obj*);
obj* l_Subtype_sizeof___rarg(obj*, obj*, obj*);
obj* l_Quotient_rec___boxed(obj*, obj*, obj*);
obj* l_PUnit_sizeof(obj*);
obj* l_False_elim(obj*, uint8);
namespace lean {
obj* nat_add(obj*, obj*);
}
uint8 l_strictOr(uint8, uint8);
obj* l_PSigma_sizeof___boxed(obj*, obj*);
uint8 l_not___main(uint8);
obj* l_PUnit_sizeof___main(obj*);
uint8 l_Or_Decidable___rarg(uint8, uint8);
obj* l_Bool_HasSizeof;
obj* l_Quotient_recOnSubsingleton_u2082___at_Quotient_DecidableEq___spec__1___rarg(obj*, obj*, obj*);
obj* l_default_sizeof(obj*, obj*);
obj* l_ite___rarg(uint8, obj*, obj*, obj*);
obj* l_Eq_ndrec___rarg___boxed(obj*, obj*, obj*);
obj* l_cast(obj*, obj*, obj*);
obj* l_Quotient_liftOn(obj*, obj*, obj*);
obj* l_Subtype_Inhabited(obj*, obj*);
obj* l_EqvGen_Setoid___boxed(obj*, obj*);
obj* l_typedExpr___rarg___boxed(obj*);
uint8 l_implies_Decidable___rarg(uint8, uint8);
obj* l_id___rarg(obj*);
obj* l_std_prec_maxPlus;
obj* l_Or_Decidable(obj*, obj*);
obj* l_Prod_map___main___rarg(obj*, obj*, obj*);
uint8 l_ite_Decidable___rarg(uint8, uint8, uint8);
obj* l_Quot_hrecOn___boxed(obj*, obj*, obj*);
uint8 l_Decidable_decide___rarg(uint8);
obj* l_Xor_Decidable(obj*, obj*);
obj* l_Nat_add___boxed(obj*, obj*);
obj* l_PSum_sizeof___rarg(obj*, obj*, obj*);
obj* l_And_Decidable(obj*, obj*);
obj* l_Quotient_lift___rarg(obj*, obj*, obj*);
obj* l_Eq_mp(obj*, obj*, obj*);
obj* l_Prod_HasLess(obj*, obj*, obj*, obj*);
obj* l_Sigma_sizeof(obj*, obj*);
obj* l_And_Decidable___rarg___boxed(obj*, obj*);
obj* l_Eq_mpr___rarg___boxed(obj*);
obj* l_List_sizeof(obj*);
obj* l_decidableOfDecidableEq(obj*);
uint8 l_and___main(uint8, uint8);
obj* l_Decidable_byCases___rarg(uint8, obj*, obj*);
uint8 l_Iff_Decidable___rarg(uint8, uint8);
obj* l_Ne_Decidable(obj*);
obj* l_PSigma_sizeof___at_PSigma_HasSizeof___spec__1___rarg(obj*, obj*, obj*);
obj* l_hugeFuel;
obj* l_Subtype_DecidableEq___rarg___boxed(obj*, obj*, obj*);
obj* l_Quotient_DecidableEq___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_Task_pure___boxed(obj*, obj*);
obj* l_Function_const___rarg___boxed(obj*, obj*);
obj* l_Subtype_HasSizeof(obj*);
obj* l_Sigma_sizeof___main___at_Sigma_HasSizeof___spec__2(obj*, obj*);
obj* l_Sum_DecidableEq(obj*, obj*);
obj* l_default___rarg___boxed(obj*);
obj* l_dite___rarg(uint8, obj*, obj*, obj*);
obj* l_Quot_recOnSubsingleton___rarg(obj*, obj*);
obj* l_dite_Decidable(obj*, obj*, obj*);
obj* l_Eq_ndrecOn(obj*, obj*, obj*, obj*, obj*);
obj* l_Quotient_lift(obj*, obj*, obj*);
obj* l_implies_Decidable___rarg___boxed(obj*, obj*);
obj* l_prodHasDecidableLt___boxed(obj*, obj*, obj*, obj*);
obj* l_NonScalar_Inhabited;
obj* l_EqvGen_Setoid(obj*, obj*);
obj* l_idRhs___rarg(obj*);
obj* l_Sigma_sizeof___main___at_Sigma_HasSizeof___spec__2___rarg(obj*, obj*, obj*);
obj* l_Prod_HasSizeof___rarg(obj*, obj*);
obj* l_singleton(obj*, obj*);
obj* l_PSigma_sizeof___main___at_PSigma_HasSizeof___spec__2___boxed(obj*, obj*);
uint8 l_PUnit_DecidableEq(obj*, obj*);
obj* l_Function_swap(obj*, obj*, obj*);
obj* l_Quotient_recOnSubsingleton(obj*, obj*, obj*, obj*);
obj* l_defaultHasSizeof___closed__1;
uint8 l_Xor_Decidable___rarg(uint8, uint8);
obj* l_cond___rarg(uint8, obj*, obj*);
obj* l_Bool_sizeof(uint8);
obj* l_Prod_map(obj*, obj*, obj*, obj*);
obj* l_decidableOfDecidableOfEq(obj*, obj*);
obj* l_Quot_recOn___rarg(obj*, obj*, obj*);
obj* l_Sigma_HasSizeof___rarg(obj*, obj*);
obj* l_Quotient_lift_u2082___rarg(obj*, obj*, obj*, obj*);
obj* l_Decidable_byCases___rarg___boxed(obj*, obj*, obj*);
obj* l_Quotient_lift_u2082(obj*, obj*, obj*, obj*, obj*);
obj* l_ite_Decidable(obj*, obj*, obj*);
obj* l_Option_sizeof___rarg(obj*, obj*);
obj* l_Sum_DecidableEq___rarg___boxed(obj*, obj*, obj*, obj*);
uint8 l_And_Decidable___rarg(uint8, uint8);
obj* l_flip(obj*, obj*, obj*);
obj* l_not___main___boxed(obj*);
obj* l_PSigma_sizeof___at_PSigma_HasSizeof___spec__1___boxed(obj*, obj*);
obj* l_std_prec_max;
obj* l_True_Inhabited;
obj* l_Bool_sizeof___main___boxed(obj*);
obj* l_Thunk_bind(obj*, obj*, obj*, obj*);
obj* l_cond___main(obj*);
obj* l_Function_swap___boxed(obj*, obj*, obj*);
obj* l_Function_combine___rarg(obj*, obj*, obj*, obj*, obj*);
uint8 l_not(uint8);
uint8 l_decidableOfDecidableOfEq___rarg(uint8, obj*);
uint8 l_False_Decidable;
obj* l_Quotient_rec___rarg(obj*, obj*, obj*);
obj* l_Bool_DecidableEq___boxed(obj*, obj*);
obj* l_cond___rarg___boxed(obj*, obj*, obj*);
obj* l_PUnit_sizeof___boxed(obj*);
obj* l_Subtype_HasSizeof___rarg___boxed(obj*, obj*);
obj* l_Sum_HasSizeof(obj*, obj*);
obj* l_Function_const___rarg(obj*, obj*);
obj* l_Eq_ndrec(obj*, obj*, obj*);
obj* l_Forall_Inhabited___boxed(obj*, obj*);
uint8 l_xor___main(uint8, uint8);
obj* l_Decidable_decide(obj*);
obj* l_idRhs___rarg___boxed(obj*);
obj* l_Quotient_recOnSubsingleton_u2082___at_Quotient_DecidableEq___spec__1(obj*, obj*);
obj* l_Subtype_sizeof___rarg___boxed(obj*, obj*, obj*);
obj* l_default(obj*);
obj* l_Quotient_recOn___boxed(obj*, obj*, obj*);
obj* l_Ne_Decidable___rarg___boxed(obj*, obj*, obj*);
obj* l_and___boxed(obj*, obj*);
obj* l_Subtype_sizeof(obj*);
uint8 l_Subtype_DecidableEq___rarg(obj*, obj*, obj*);
obj* l_Sum_inhabitedLeft___rarg(obj*);
obj* l_Sigma_HasSizeof(obj*, obj*);
uint8 l_True_Decidable;
obj* l_Quotient_lift___boxed(obj*, obj*, obj*);
obj* l_idRhs(obj*);
obj* l_Quot_hrecOn(obj*, obj*, obj*);
obj* l_and___main___boxed(obj*, obj*);
obj* l_List_sizeof___main___rarg(obj*, obj*);
obj* l___private_init_core_21__extfunApp___boxed(obj*, obj*);
obj* l_Quotient_mk___rarg___boxed(obj*);
obj* l_Quot_rec___rarg(obj*, obj*, obj*);
obj* l_PointedType_Inhabited;
uint8 l_Quotient_DecidableEq___rarg___lambda__1(obj*, obj*, obj*);
obj* l_inferInstanceAs(obj*);
obj* l_PSigma_HasSizeof___boxed(obj*, obj*);
obj* l_Decidable_decide___rarg___boxed(obj*);
obj* l_Function_comp(obj*, obj*, obj*);
uint8 l_prodHasDecidableLt___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Function_combine(obj*, obj*, obj*, obj*, obj*);
obj* l_Nat_sizeof___boxed(obj*);
obj* l_Quotient_recOnSubsingleton_u2082___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Decidable_recOnTrue(obj*);
obj* l___private_init_core_21__extfunApp(obj*, obj*);
obj* l_PSigma_sizeof___main___at_PSigma_HasSizeof___spec__2___rarg(obj*, obj*, obj*);
obj* l_Nat_HasAdd;
obj* l_Subtype_Inhabited___rarg(obj*, obj*);
obj* l_PUnit_DecidableEq___boxed(obj*, obj*);
obj* l_Sigma_sizeof___main___at_Sigma_HasSizeof___spec__2___boxed(obj*, obj*);
obj* l_PUnit_HasSizeof;
uint8 l_Sum_DecidableEq___rarg(obj*, obj*, obj*, obj*);
uint8 l_Bool_Inhabited;
obj* l_Task_mk___boxed(obj*, obj*);
obj* l_Quot_liftOn(obj*, obj*, obj*);
obj* l_Quotient_recOnSubsingleton_u2082(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_PSigma_HasSizeof___rarg(obj*, obj*);
obj* l_typedExpr___rarg(obj*);
obj* l_Option_HasSizeof(obj*);
obj* l_inferInstance___rarg___boxed(obj*);
obj* l_Decidable_recOnTrue___rarg(uint8, obj*, obj*, obj*, obj*);
obj* l_Eq_mp___rarg___boxed(obj*);
obj* l_PSigma_sizeof___main(obj*, obj*);
obj* l_inferInstance(obj*);
obj* l_absurd(obj*, obj*, obj*, obj*);
obj* l_xor___main___boxed(obj*, obj*);
uint8 l_decidableOfDecidableOfIff___rarg(uint8, obj*);
obj* l_PSigma_sizeof___rarg(obj*, obj*, obj*);
obj* l_Decidable_byCases(obj*, obj*);
obj* l_arbitrary(obj*);
obj* l_Sum_sizeof___rarg(obj*, obj*, obj*);
obj* l_Quotient_liftOn_u2082___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_cond___main___rarg(uint8, obj*, obj*);
obj* l_PSum_sizeof___main___rarg(obj*, obj*, obj*);
obj* l_PSigma_sizeof___main___rarg(obj*, obj*, obj*);
obj* l_Option_sizeof(obj*);
obj* l_Quotient_recOnSubsingleton___boxed(obj*, obj*, obj*, obj*);
obj* l_Sigma_sizeof___main___boxed(obj*, obj*);
obj* l_Sum_inhabitedLeft(obj*, obj*);
obj* l_Forall_Inhabited(obj*, obj*);
obj* l_Thunk_get(obj*, obj*);
obj* l_Function_swap___rarg(obj*, obj*, obj*);
obj* l_Task_pure(obj*, obj*);
obj* l_cond(obj*);
obj* l_or___boxed(obj*, obj*);
obj* l_PSigma_sizeof(obj*, obj*);
obj* l_Subtype_Inhabited___boxed(obj*, obj*);
obj* l_Bool_sizeof___main(uint8);
obj* l_ite(obj*);
obj* l_Function_const(obj*, obj*);
obj* l_Quot_recOn(obj*, obj*, obj*);
obj* l_implies_Decidable(obj*, obj*);
obj* l_setoidHasEquiv___boxed(obj*, obj*);
obj* l_Sigma_sizeof___at_Sigma_HasSizeof___spec__1___boxed(obj*, obj*);
uint8 l_or___main(uint8, uint8);
uint8 l_strictAnd(uint8, uint8);
obj* l_Eq_mp___rarg(obj*);
obj* l_Quotient_hrecOn___boxed(obj*, obj*, obj*);
obj* l_id___rarg(obj* x_1) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_id(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_id___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_id___rarg___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_id___rarg(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_inline___rarg(obj* x_1) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_inline(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_inline___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_inline___rarg___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_inline___rarg(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_flip___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_2(x_1, x_3, x_2);
return x_4;
}
}
obj* l_flip(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_flip___rarg), 3, 0);
return x_4;
}
}
obj* l_idDelta___rarg(obj* x_1) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_idDelta(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_idDelta___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_idDelta___rarg___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_idDelta___rarg(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_typedExpr___rarg(obj* x_1) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_typedExpr(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_typedExpr___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_typedExpr___rarg___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_typedExpr___rarg(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_idRhs___rarg(obj* x_1) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_idRhs(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_idRhs___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_idRhs___rarg___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_idRhs___rarg(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Unit_unit() {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
}
obj* l_Thunk_mk___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::mk_thunk(x_2);
return x_3;
}
}
obj* l_Thunk_pure___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::thunk_pure(x_2);
return x_3;
}
}
obj* l_Thunk_get___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::thunk_get_own(x_2);
return x_3;
}
}
obj* l_Thunk_map___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::thunk_map(x_3, x_4);
return x_5;
}
}
obj* l_Thunk_bind___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::thunk_bind(x_3, x_4);
return x_5;
}
}
obj* l_Task_mk___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::mk_task(x_2);
return x_3;
}
}
obj* l_Task_pure___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::task_pure(x_2);
return x_3;
}
}
obj* l_Task_get___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::task_get(x_2);
return x_3;
}
}
obj* l_Task_map___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::task_map(x_3, x_4);
return x_5;
}
}
obj* l_Task_bind___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::task_bind(x_3, x_4);
return x_5;
}
}
obj* l_Eq_ndrec___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_Eq_ndrec(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Eq_ndrec___rarg___boxed), 3, 0);
return x_4;
}
}
obj* l_Eq_ndrec___rarg___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Eq_ndrec___rarg(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* l_Eq_ndrec___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Eq_ndrec(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Eq_ndrecOn___rarg(obj* x_1) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_Eq_ndrecOn(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Eq_ndrecOn___rarg___boxed), 1, 0);
return x_6;
}
}
obj* l_Eq_ndrecOn___rarg___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Eq_ndrecOn___rarg(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Eq_ndrecOn___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Eq_ndrecOn(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
return x_6;
}
}
obj* l_decidableOfDecidableEq___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_2(x_3, x_1, x_2);
return x_4;
}
}
obj* l_decidableOfDecidableEq(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_decidableOfDecidableEq___rarg), 3, 0);
return x_2;
}
}
obj* l_bit0___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
lean::inc(x_2);
x_3 = lean::apply_2(x_1, x_2, x_2);
return x_3;
}
}
obj* l_bit0(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_bit0___rarg), 2, 0);
return x_2;
}
}
obj* l_bit1___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
lean::inc(x_2);
lean::inc(x_3);
x_4 = lean::apply_2(x_2, x_3, x_3);
x_5 = lean::apply_2(x_2, x_4, x_1);
return x_5;
}
}
obj* l_bit1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_bit1___rarg), 3, 0);
return x_2;
}
}
obj* l_singleton___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_2(x_2, x_3, x_1);
return x_4;
}
}
obj* l_singleton(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_singleton___rarg), 3, 0);
return x_3;
}
}
obj* l_Nat_add___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::nat_add(x_1, x_2);
return x_3;
}
}
obj* _init_l_Nat_HasZero() {
_start:
{
obj* x_1; 
x_1 = lean::mk_nat_obj(0u);
return x_1;
}
}
obj* _init_l_Nat_HasOne() {
_start:
{
obj* x_1; 
x_1 = lean::mk_nat_obj(1u);
return x_1;
}
}
obj* _init_l_Nat_HasAdd() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Nat_add___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_hugeFuel() {
_start:
{
obj* x_1; 
x_1 = lean::mk_nat_obj(10000u);
return x_1;
}
}
obj* _init_l_std_priority_default() {
_start:
{
obj* x_1; 
x_1 = lean::mk_nat_obj(1000u);
return x_1;
}
}
obj* _init_l_std_priority_max() {
_start:
{
obj* x_1; 
x_1 = lean::mk_nat_obj(4294967295u);
return x_1;
}
}
obj* _init_l_Nat_prio() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_std_priority_default;
x_2 = lean::mk_nat_obj(100u);
x_3 = lean::nat_add(x_1, x_2);
return x_3;
}
}
obj* _init_l_std_prec_max() {
_start:
{
obj* x_1; 
x_1 = lean::mk_nat_obj(1024u);
return x_1;
}
}
obj* _init_l_std_prec_arrow() {
_start:
{
obj* x_1; 
x_1 = lean::mk_nat_obj(25u);
return x_1;
}
}
obj* _init_l_std_prec_maxPlus() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_std_prec_max;
x_2 = lean::mk_nat_obj(10u);
x_3 = lean::nat_add(x_1, x_2);
return x_3;
}
}
obj* l_default_sizeof___main(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::mk_nat_obj(0u);
return x_3;
}
}
obj* l_default_sizeof___main___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_default_sizeof___main(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_default_sizeof(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::mk_nat_obj(0u);
return x_3;
}
}
obj* l_default_sizeof___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_default_sizeof(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* _init_l_defaultHasSizeof___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_default_sizeof___boxed), 2, 1);
lean::closure_set(x_1, 0, lean::box(0));
return x_1;
}
}
obj* l_defaultHasSizeof(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_defaultHasSizeof___closed__1;
return x_2;
}
}
obj* l_Nat_sizeof___main(obj* x_1) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_Nat_sizeof___main___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Nat_sizeof___main(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Nat_sizeof(obj* x_1) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_Nat_sizeof___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Nat_sizeof(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Nat_HasSizeof() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Nat_sizeof___boxed), 1, 0);
return x_1;
}
}
obj* l_Prod_sizeof___main___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
lean::dec(x_3);
x_6 = lean::apply_1(x_1, x_4);
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_add(x_7, x_6);
lean::dec(x_6);
x_9 = lean::apply_1(x_2, x_5);
x_10 = lean::nat_add(x_8, x_9);
lean::dec(x_9);
lean::dec(x_8);
return x_10;
}
}
obj* l_Prod_sizeof___main(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Prod_sizeof___main___rarg), 3, 0);
return x_3;
}
}
obj* l_Prod_sizeof___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Prod_sizeof___main___rarg(x_1, x_2, x_3);
return x_4;
}
}
obj* l_Prod_sizeof(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Prod_sizeof___rarg), 3, 0);
return x_3;
}
}
obj* l_Prod_HasSizeof___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Prod_sizeof___rarg), 3, 2);
lean::closure_set(x_3, 0, x_1);
lean::closure_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_Prod_HasSizeof(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Prod_HasSizeof___rarg), 2, 0);
return x_3;
}
}
obj* l_Sum_sizeof___main___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
x_5 = lean::apply_1(x_1, x_4);
x_6 = lean::mk_nat_obj(1u);
x_7 = lean::nat_add(x_6, x_5);
lean::dec(x_5);
return x_7;
}
else
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
lean::dec(x_3);
x_9 = lean::apply_1(x_2, x_8);
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_add(x_10, x_9);
lean::dec(x_9);
return x_11;
}
}
}
obj* l_Sum_sizeof___main(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Sum_sizeof___main___rarg), 3, 0);
return x_3;
}
}
obj* l_Sum_sizeof___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Sum_sizeof___main___rarg(x_1, x_2, x_3);
return x_4;
}
}
obj* l_Sum_sizeof(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Sum_sizeof___rarg), 3, 0);
return x_3;
}
}
obj* l_Sum_HasSizeof___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Sum_sizeof___rarg), 3, 2);
lean::closure_set(x_3, 0, x_1);
lean::closure_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_Sum_HasSizeof(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Sum_HasSizeof___rarg), 2, 0);
return x_3;
}
}
obj* l_PSum_sizeof___main___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_2);
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
x_5 = lean::apply_1(x_1, x_4);
x_6 = lean::mk_nat_obj(1u);
x_7 = lean::nat_add(x_6, x_5);
lean::dec(x_5);
return x_7;
}
else
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
lean::dec(x_3);
x_9 = lean::apply_1(x_2, x_8);
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_add(x_10, x_9);
lean::dec(x_9);
return x_11;
}
}
}
obj* l_PSum_sizeof___main(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_PSum_sizeof___main___rarg), 3, 0);
return x_3;
}
}
obj* l_PSum_sizeof___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_PSum_sizeof___main___rarg(x_1, x_2, x_3);
return x_4;
}
}
obj* l_PSum_sizeof(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_PSum_sizeof___rarg), 3, 0);
return x_3;
}
}
obj* l_PSum_HasSizeof___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_PSum_sizeof___rarg), 3, 2);
lean::closure_set(x_3, 0, x_1);
lean::closure_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_PSum_HasSizeof(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_PSum_HasSizeof___rarg), 2, 0);
return x_3;
}
}
obj* l_Sigma_sizeof___main___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
lean::dec(x_3);
lean::inc(x_4);
x_6 = lean::apply_1(x_1, x_4);
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_add(x_7, x_6);
lean::dec(x_6);
x_9 = lean::apply_2(x_2, x_4, x_5);
x_10 = lean::nat_add(x_8, x_9);
lean::dec(x_9);
lean::dec(x_8);
return x_10;
}
}
obj* l_Sigma_sizeof___main(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Sigma_sizeof___main___rarg), 3, 0);
return x_3;
}
}
obj* l_Sigma_sizeof___main___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Sigma_sizeof___main(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_Sigma_sizeof___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Sigma_sizeof___main___rarg(x_1, x_2, x_3);
return x_4;
}
}
obj* l_Sigma_sizeof(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Sigma_sizeof___rarg), 3, 0);
return x_3;
}
}
obj* l_Sigma_sizeof___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Sigma_sizeof(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_Sigma_sizeof___main___at_Sigma_HasSizeof___spec__2___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
lean::dec(x_3);
lean::inc(x_4);
x_6 = lean::apply_1(x_1, x_4);
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_add(x_7, x_6);
lean::dec(x_6);
x_9 = lean::apply_2(x_2, x_4, x_5);
x_10 = lean::nat_add(x_8, x_9);
lean::dec(x_9);
lean::dec(x_8);
return x_10;
}
}
obj* l_Sigma_sizeof___main___at_Sigma_HasSizeof___spec__2(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Sigma_sizeof___main___at_Sigma_HasSizeof___spec__2___rarg), 3, 0);
return x_3;
}
}
obj* l_Sigma_sizeof___at_Sigma_HasSizeof___spec__1___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Sigma_sizeof___main___at_Sigma_HasSizeof___spec__2___rarg(x_1, x_2, x_3);
return x_4;
}
}
obj* l_Sigma_sizeof___at_Sigma_HasSizeof___spec__1(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Sigma_sizeof___at_Sigma_HasSizeof___spec__1___rarg), 3, 0);
return x_3;
}
}
obj* l_Sigma_HasSizeof___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Sigma_sizeof___at_Sigma_HasSizeof___spec__1___rarg), 3, 2);
lean::closure_set(x_3, 0, x_1);
lean::closure_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_Sigma_HasSizeof(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Sigma_HasSizeof___rarg), 2, 0);
return x_3;
}
}
obj* l_Sigma_sizeof___main___at_Sigma_HasSizeof___spec__2___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Sigma_sizeof___main___at_Sigma_HasSizeof___spec__2(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_Sigma_sizeof___at_Sigma_HasSizeof___spec__1___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Sigma_sizeof___at_Sigma_HasSizeof___spec__1(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_Sigma_HasSizeof___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Sigma_HasSizeof(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_PSigma_sizeof___main___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
lean::dec(x_3);
lean::inc(x_4);
x_6 = lean::apply_1(x_1, x_4);
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_add(x_7, x_6);
lean::dec(x_6);
x_9 = lean::apply_2(x_2, x_4, x_5);
x_10 = lean::nat_add(x_8, x_9);
lean::dec(x_9);
lean::dec(x_8);
return x_10;
}
}
obj* l_PSigma_sizeof___main(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_PSigma_sizeof___main___rarg), 3, 0);
return x_3;
}
}
obj* l_PSigma_sizeof___main___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_PSigma_sizeof___main(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_PSigma_sizeof___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_PSigma_sizeof___main___rarg(x_1, x_2, x_3);
return x_4;
}
}
obj* l_PSigma_sizeof(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_PSigma_sizeof___rarg), 3, 0);
return x_3;
}
}
obj* l_PSigma_sizeof___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_PSigma_sizeof(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_PSigma_sizeof___main___at_PSigma_HasSizeof___spec__2___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
lean::dec(x_3);
lean::inc(x_4);
x_6 = lean::apply_1(x_1, x_4);
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_add(x_7, x_6);
lean::dec(x_6);
x_9 = lean::apply_2(x_2, x_4, x_5);
x_10 = lean::nat_add(x_8, x_9);
lean::dec(x_9);
lean::dec(x_8);
return x_10;
}
}
obj* l_PSigma_sizeof___main___at_PSigma_HasSizeof___spec__2(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_PSigma_sizeof___main___at_PSigma_HasSizeof___spec__2___rarg), 3, 0);
return x_3;
}
}
obj* l_PSigma_sizeof___at_PSigma_HasSizeof___spec__1___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_PSigma_sizeof___main___at_PSigma_HasSizeof___spec__2___rarg(x_1, x_2, x_3);
return x_4;
}
}
obj* l_PSigma_sizeof___at_PSigma_HasSizeof___spec__1(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_PSigma_sizeof___at_PSigma_HasSizeof___spec__1___rarg), 3, 0);
return x_3;
}
}
obj* l_PSigma_HasSizeof___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_PSigma_sizeof___at_PSigma_HasSizeof___spec__1___rarg), 3, 2);
lean::closure_set(x_3, 0, x_1);
lean::closure_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_PSigma_HasSizeof(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_PSigma_HasSizeof___rarg), 2, 0);
return x_3;
}
}
obj* l_PSigma_sizeof___main___at_PSigma_HasSizeof___spec__2___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_PSigma_sizeof___main___at_PSigma_HasSizeof___spec__2(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_PSigma_sizeof___at_PSigma_HasSizeof___spec__1___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_PSigma_sizeof___at_PSigma_HasSizeof___spec__1(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_PSigma_HasSizeof___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_PSigma_HasSizeof(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_PUnit_sizeof___main(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::mk_nat_obj(1u);
return x_2;
}
}
obj* l_PUnit_sizeof___main___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_PUnit_sizeof___main(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_PUnit_sizeof(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::mk_nat_obj(1u);
return x_2;
}
}
obj* l_PUnit_sizeof___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_PUnit_sizeof(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_PUnit_HasSizeof() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_PUnit_sizeof___boxed), 1, 0);
return x_1;
}
}
obj* l_Bool_sizeof___main(uint8 x_1) {
_start:
{
obj* x_2; 
x_2 = lean::mk_nat_obj(1u);
return x_2;
}
}
obj* l_Bool_sizeof___main___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Bool_sizeof___main(x_2);
return x_3;
}
}
obj* l_Bool_sizeof(uint8 x_1) {
_start:
{
obj* x_2; 
x_2 = lean::mk_nat_obj(1u);
return x_2;
}
}
obj* l_Bool_sizeof___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Bool_sizeof(x_2);
return x_3;
}
}
obj* _init_l_Bool_HasSizeof() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Bool_sizeof___boxed), 1, 0);
return x_1;
}
}
obj* l_Option_sizeof___main___rarg(obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
lean::dec(x_1);
x_3 = lean::mk_nat_obj(1u);
return x_3;
}
else
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
x_5 = lean::apply_1(x_1, x_4);
x_6 = lean::mk_nat_obj(1u);
x_7 = lean::nat_add(x_6, x_5);
lean::dec(x_5);
return x_7;
}
}
}
obj* l_Option_sizeof___main(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Option_sizeof___main___rarg), 2, 0);
return x_2;
}
}
obj* l_Option_sizeof___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Option_sizeof___main___rarg(x_1, x_2);
return x_3;
}
}
obj* l_Option_sizeof(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Option_sizeof___rarg), 2, 0);
return x_2;
}
}
obj* l_Option_HasSizeof___rarg(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Option_sizeof___rarg), 2, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_Option_HasSizeof(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Option_HasSizeof___rarg), 1, 0);
return x_2;
}
}
obj* l_List_sizeof___main___rarg(obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
lean::dec(x_1);
x_3 = lean::mk_nat_obj(1u);
return x_3;
}
else
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
lean::inc(x_1);
x_6 = lean::apply_1(x_1, x_4);
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_add(x_7, x_6);
lean::dec(x_6);
x_9 = l_List_sizeof___main___rarg(x_1, x_5);
x_10 = lean::nat_add(x_8, x_9);
lean::dec(x_9);
lean::dec(x_8);
return x_10;
}
}
}
obj* l_List_sizeof___main(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_List_sizeof___main___rarg), 2, 0);
return x_2;
}
}
obj* l_List_sizeof___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_List_sizeof___main___rarg(x_1, x_2);
return x_3;
}
}
obj* l_List_sizeof(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_List_sizeof___rarg), 2, 0);
return x_2;
}
}
obj* l_List_HasSizeof___rarg(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_List_sizeof___rarg), 2, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_List_HasSizeof(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_List_HasSizeof___rarg), 1, 0);
return x_2;
}
}
obj* l_Subtype_sizeof___main___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_1(x_1, x_3);
return x_4;
}
}
obj* l_Subtype_sizeof___main(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Subtype_sizeof___main___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l_Subtype_sizeof___main___rarg___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Subtype_sizeof___main___rarg(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Subtype_sizeof___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_1(x_1, x_3);
return x_4;
}
}
obj* l_Subtype_sizeof(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Subtype_sizeof___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l_Subtype_sizeof___rarg___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Subtype_sizeof___rarg(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Subtype_HasSizeof___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Subtype_sizeof___rarg___boxed), 3, 2);
lean::closure_set(x_3, 0, x_1);
lean::closure_set(x_3, 1, lean::box(0));
return x_3;
}
}
obj* l_Subtype_HasSizeof(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Subtype_HasSizeof___rarg___boxed), 2, 0);
return x_2;
}
}
obj* l_Subtype_HasSizeof___rarg___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Subtype_HasSizeof___rarg(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_inferInstance___rarg(obj* x_1) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_inferInstance(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_inferInstance___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_inferInstance___rarg___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_inferInstance___rarg(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_inferInstanceAs___rarg(obj* x_1) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_inferInstanceAs(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_inferInstanceAs___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_inferInstanceAs___rarg___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_inferInstanceAs___rarg(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_cond___main___rarg(uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
if (x_1 == 0)
{
lean::inc(x_3);
return x_3;
}
else
{
lean::inc(x_2);
return x_2;
}
}
}
obj* l_cond___main(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_cond___main___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l_cond___main___rarg___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_5 = l_cond___main___rarg(x_4, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
return x_5;
}
}
obj* l_cond___rarg(uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
if (x_1 == 0)
{
lean::inc(x_3);
return x_3;
}
else
{
lean::inc(x_2);
return x_2;
}
}
}
obj* l_cond(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_cond___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l_cond___rarg___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_5 = l_cond___rarg(x_4, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
return x_5;
}
}
uint8 l_or___main(uint8 x_1, uint8 x_2) {
_start:
{
if (x_1 == 0)
{
return x_2;
}
else
{
uint8 x_3; 
x_3 = 1;
return x_3;
}
}
}
obj* l_or___main___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_or___main(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 l_or(uint8 x_1, uint8 x_2) {
_start:
{
if (x_1 == 0)
{
return x_2;
}
else
{
uint8 x_3; 
x_3 = 1;
return x_3;
}
}
}
obj* l_or___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_or(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 l_and___main(uint8 x_1, uint8 x_2) {
_start:
{
if (x_1 == 0)
{
uint8 x_3; 
x_3 = 0;
return x_3;
}
else
{
return x_2;
}
}
}
obj* l_and___main___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_and___main(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 l_and(uint8 x_1, uint8 x_2) {
_start:
{
if (x_1 == 0)
{
uint8 x_3; 
x_3 = 0;
return x_3;
}
else
{
return x_2;
}
}
}
obj* l_and___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_and(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 l_not___main(uint8 x_1) {
_start:
{
if (x_1 == 0)
{
uint8 x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8 x_3; 
x_3 = 0;
return x_3;
}
}
}
obj* l_not___main___boxed(obj* x_1) {
_start:
{
uint8 x_2; uint8 x_3; obj* x_4; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_not___main(x_2);
x_4 = lean::box(x_3);
return x_4;
}
}
uint8 l_not(uint8 x_1) {
_start:
{
if (x_1 == 0)
{
uint8 x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8 x_3; 
x_3 = 0;
return x_3;
}
}
}
obj* l_not___boxed(obj* x_1) {
_start:
{
uint8 x_2; uint8 x_3; obj* x_4; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_not(x_2);
x_4 = lean::box(x_3);
return x_4;
}
}
uint8 l_xor___main(uint8 x_1, uint8 x_2) {
_start:
{
if (x_1 == 0)
{
return x_2;
}
else
{
if (x_2 == 0)
{
return x_1;
}
else
{
uint8 x_3; 
x_3 = 0;
return x_3;
}
}
}
}
obj* l_xor___main___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_xor___main(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 l_xor(uint8 x_1, uint8 x_2) {
_start:
{
if (x_1 == 0)
{
return x_2;
}
else
{
if (x_2 == 0)
{
return x_1;
}
else
{
uint8 x_3; 
x_3 = 0;
return x_3;
}
}
}
}
obj* l_xor___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_xor(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_strictOr___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 || x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_strictAnd___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 && x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 l_bne___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::apply_2(x_1, x_2, x_3);
x_5 = lean::unbox(x_4);
lean::dec(x_4);
if (x_5 == 0)
{
uint8 x_6; 
x_6 = 1;
return x_6;
}
else
{
uint8 x_7; 
x_7 = 0;
return x_7;
}
}
}
obj* l_bne(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_bne___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l_bne___rarg___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = l_bne___rarg(x_1, x_2, x_3);
x_5 = lean::box(x_4);
return x_5;
}
}
obj* l_False_elim(obj* x_1, uint8 x_2) {
_start:
{
lean_unreachable();
}
}
obj* l_False_elim___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = lean::unbox(x_2);
lean::dec(x_2);
x_4 = l_False_elim(x_1, x_3);
return x_4;
}
}
obj* l_absurd(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
lean_unreachable();
}
}
obj* l_Eq_mp___rarg(obj* x_1) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_Eq_mp(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Eq_mp___rarg___boxed), 1, 0);
return x_4;
}
}
obj* l_Eq_mp___rarg___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Eq_mp___rarg(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Eq_mpr___rarg(obj* x_1) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_Eq_mpr(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Eq_mpr___rarg___boxed), 1, 0);
return x_4;
}
}
obj* l_Eq_mpr___rarg___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Eq_mpr___rarg(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_cast___rarg(obj* x_1) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_cast(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_cast___rarg___boxed), 1, 0);
return x_4;
}
}
obj* l_cast___rarg___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_cast___rarg(x_1);
lean::dec(x_1);
return x_2;
}
}
uint8 l_Decidable_decide___rarg(uint8 x_1) {
_start:
{
if (x_1 == 0)
{
uint8 x_2; 
x_2 = 0;
return x_2;
}
else
{
uint8 x_3; 
x_3 = 1;
return x_3;
}
}
}
obj* l_Decidable_decide(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Decidable_decide___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_Decidable_decide___rarg___boxed(obj* x_1) {
_start:
{
uint8 x_2; uint8 x_3; obj* x_4; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Decidable_decide___rarg(x_2);
x_4 = lean::box(x_3);
return x_4;
}
}
obj* l_beqOfEq___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_2(x_1, x_2, x_3);
return x_4;
}
}
obj* l_beqOfEq(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_beqOfEq___rarg), 3, 0);
return x_2;
}
}
uint8 _init_l_True_Decidable() {
_start:
{
uint8 x_1; 
x_1 = 1;
return x_1;
}
}
uint8 _init_l_False_Decidable() {
_start:
{
uint8 x_1; 
x_1 = 0;
return x_1;
}
}
obj* l_dite___rarg(uint8 x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (x_1 == 0)
{
obj* x_5; 
lean::dec(x_3);
x_5 = lean::apply_1(x_4, lean::box(0));
return x_5;
}
else
{
obj* x_6; 
lean::dec(x_4);
x_6 = lean::apply_1(x_3, lean::box(0));
return x_6;
}
}
}
obj* l_dite(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_dite___rarg___boxed), 4, 0);
return x_2;
}
}
obj* l_dite___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_1);
lean::dec(x_1);
x_6 = l_dite___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
obj* l_ite___rarg(uint8 x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (x_1 == 0)
{
lean::inc(x_4);
return x_4;
}
else
{
lean::inc(x_3);
return x_3;
}
}
}
obj* l_ite(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_ite___rarg___boxed), 4, 0);
return x_2;
}
}
obj* l_ite___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_1);
lean::dec(x_1);
x_6 = l_ite___rarg(x_5, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_3);
return x_6;
}
}
obj* l_Decidable_recOnTrue___rarg(uint8 x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
lean::inc(x_5);
return x_5;
}
}
obj* l_Decidable_recOnTrue(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Decidable_recOnTrue___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_Decidable_recOnTrue___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_1);
lean::dec(x_1);
x_7 = l_Decidable_recOnTrue___rarg(x_6, x_2, x_3, x_4, x_5);
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_2);
return x_7;
}
}
obj* l_Decidable_recOnFalse___rarg(uint8 x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
lean::inc(x_5);
return x_5;
}
}
obj* l_Decidable_recOnFalse(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Decidable_recOnFalse___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_Decidable_recOnFalse___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_1);
lean::dec(x_1);
x_7 = l_Decidable_recOnFalse___rarg(x_6, x_2, x_3, x_4, x_5);
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_2);
return x_7;
}
}
obj* l_Decidable_byCases___rarg(uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
if (x_1 == 0)
{
obj* x_4; 
lean::dec(x_2);
x_4 = lean::apply_1(x_3, lean::box(0));
return x_4;
}
else
{
obj* x_5; 
lean::dec(x_3);
x_5 = lean::apply_1(x_2, lean::box(0));
return x_5;
}
}
}
obj* l_Decidable_byCases(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Decidable_byCases___rarg___boxed), 3, 0);
return x_3;
}
}
obj* l_Decidable_byCases___rarg___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_5 = l_Decidable_byCases___rarg(x_4, x_2, x_3);
return x_5;
}
}
uint8 l_decidableOfDecidableOfIff___rarg(uint8 x_1, obj* x_2) {
_start:
{
if (x_1 == 0)
{
uint8 x_3; 
x_3 = 0;
return x_3;
}
else
{
uint8 x_4; 
x_4 = 1;
return x_4;
}
}
}
obj* l_decidableOfDecidableOfIff(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_decidableOfDecidableOfIff___rarg___boxed), 2, 0);
return x_3;
}
}
obj* l_decidableOfDecidableOfIff___rarg___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; obj* x_5; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = l_decidableOfDecidableOfIff___rarg(x_3, x_2);
x_5 = lean::box(x_4);
return x_5;
}
}
uint8 l_decidableOfDecidableOfEq___rarg(uint8 x_1, obj* x_2) {
_start:
{
if (x_1 == 0)
{
uint8 x_3; 
x_3 = 0;
return x_3;
}
else
{
uint8 x_4; 
x_4 = 1;
return x_4;
}
}
}
obj* l_decidableOfDecidableOfEq(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_decidableOfDecidableOfEq___rarg___boxed), 2, 0);
return x_3;
}
}
obj* l_decidableOfDecidableOfEq___rarg___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; obj* x_5; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = l_decidableOfDecidableOfEq___rarg(x_3, x_2);
x_5 = lean::box(x_4);
return x_5;
}
}
uint8 l_And_Decidable___rarg(uint8 x_1, uint8 x_2) {
_start:
{
if (x_1 == 0)
{
uint8 x_3; 
x_3 = 0;
return x_3;
}
else
{
if (x_2 == 0)
{
uint8 x_4; 
x_4 = 0;
return x_4;
}
else
{
uint8 x_5; 
x_5 = 1;
return x_5;
}
}
}
}
obj* l_And_Decidable(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_And_Decidable___rarg___boxed), 2, 0);
return x_3;
}
}
obj* l_And_Decidable___rarg___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_And_Decidable___rarg(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 l_Or_Decidable___rarg(uint8 x_1, uint8 x_2) {
_start:
{
if (x_1 == 0)
{
if (x_2 == 0)
{
uint8 x_3; 
x_3 = 0;
return x_3;
}
else
{
uint8 x_4; 
x_4 = 1;
return x_4;
}
}
else
{
uint8 x_5; 
x_5 = 1;
return x_5;
}
}
}
obj* l_Or_Decidable(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Or_Decidable___rarg___boxed), 2, 0);
return x_3;
}
}
obj* l_Or_Decidable___rarg___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_Or_Decidable___rarg(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 l_Not_Decidable___rarg(uint8 x_1) {
_start:
{
if (x_1 == 0)
{
uint8 x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8 x_3; 
x_3 = 0;
return x_3;
}
}
}
obj* l_Not_Decidable(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Not_Decidable___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_Not_Decidable___rarg___boxed(obj* x_1) {
_start:
{
uint8 x_2; uint8 x_3; obj* x_4; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Not_Decidable___rarg(x_2);
x_4 = lean::box(x_3);
return x_4;
}
}
uint8 l_implies_Decidable___rarg(uint8 x_1, uint8 x_2) {
_start:
{
if (x_1 == 0)
{
uint8 x_3; 
x_3 = 1;
return x_3;
}
else
{
if (x_2 == 0)
{
uint8 x_4; 
x_4 = 0;
return x_4;
}
else
{
uint8 x_5; 
x_5 = 1;
return x_5;
}
}
}
}
obj* l_implies_Decidable(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_implies_Decidable___rarg___boxed), 2, 0);
return x_3;
}
}
obj* l_implies_Decidable___rarg___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_implies_Decidable___rarg(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 l_Iff_Decidable___rarg(uint8 x_1, uint8 x_2) {
_start:
{
if (x_1 == 0)
{
if (x_2 == 0)
{
uint8 x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8 x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (x_2 == 0)
{
uint8 x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8 x_6; 
x_6 = 1;
return x_6;
}
}
}
}
obj* l_Iff_Decidable(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Iff_Decidable___rarg___boxed), 2, 0);
return x_3;
}
}
obj* l_Iff_Decidable___rarg___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_Iff_Decidable___rarg(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 l_Xor_Decidable___rarg(uint8 x_1, uint8 x_2) {
_start:
{
if (x_1 == 0)
{
if (x_2 == 0)
{
uint8 x_3; 
x_3 = 0;
return x_3;
}
else
{
uint8 x_4; 
x_4 = 1;
return x_4;
}
}
else
{
if (x_2 == 0)
{
uint8 x_5; 
x_5 = 1;
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
}
obj* l_Xor_Decidable(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Xor_Decidable___rarg___boxed), 2, 0);
return x_3;
}
}
obj* l_Xor_Decidable___rarg___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_Xor_Decidable___rarg(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 l_Ne_Decidable___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::apply_2(x_1, x_2, x_3);
x_5 = lean::unbox(x_4);
lean::dec(x_4);
if (x_5 == 0)
{
uint8 x_6; 
x_6 = 1;
return x_6;
}
else
{
uint8 x_7; 
x_7 = 0;
return x_7;
}
}
}
obj* l_Ne_Decidable(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Ne_Decidable___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l_Ne_Decidable___rarg___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = l_Ne_Decidable___rarg(x_1, x_2, x_3);
x_5 = lean::box(x_4);
return x_5;
}
}
uint8 l_Bool_DecidableEq(uint8 x_1, uint8 x_2) {
_start:
{
if (x_1 == 0)
{
if (x_2 == 0)
{
uint8 x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8 x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (x_2 == 0)
{
uint8 x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8 x_6; 
x_6 = 1;
return x_6;
}
}
}
}
obj* l_Bool_DecidableEq___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_Bool_DecidableEq(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 l_ite_Decidable___rarg(uint8 x_1, uint8 x_2, uint8 x_3) {
_start:
{
if (x_1 == 0)
{
return x_3;
}
else
{
return x_2;
}
}
}
obj* l_ite_Decidable(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_ite_Decidable___rarg___boxed), 3, 0);
return x_4;
}
}
obj* l_ite_Decidable___rarg___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; uint8 x_5; uint8 x_6; uint8 x_7; obj* x_8; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_5 = lean::unbox(x_2);
lean::dec(x_2);
x_6 = lean::unbox(x_3);
lean::dec(x_3);
x_7 = l_ite_Decidable___rarg(x_4, x_5, x_6);
x_8 = lean::box(x_7);
return x_8;
}
}
obj* l_dite_Decidable___rarg(uint8 x_1, obj* x_2, obj* x_3) {
_start:
{
if (x_1 == 0)
{
obj* x_4; 
lean::dec(x_2);
x_4 = lean::apply_1(x_3, lean::box(0));
return x_4;
}
else
{
obj* x_5; 
lean::dec(x_3);
x_5 = lean::apply_1(x_2, lean::box(0));
return x_5;
}
}
}
obj* l_dite_Decidable(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_dite_Decidable___rarg___boxed), 3, 0);
return x_4;
}
}
obj* l_dite_Decidable___rarg___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
lean::dec(x_1);
x_5 = l_dite_Decidable___rarg(x_4, x_2, x_3);
return x_5;
}
}
obj* l_dite_Decidable___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_dite_Decidable(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_default___rarg(obj* x_1) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_default(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_default___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_default___rarg___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_default___rarg(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_arbitrary___rarg(obj* x_1) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_arbitrary(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_arbitrary___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_arbitrary___rarg___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_arbitrary___rarg(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Prop_Inhabited() {
_start:
{
return lean::box(0);
}
}
obj* l_Fun_Inhabited___rarg(obj* x_1, obj* x_2) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_Fun_Inhabited(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Fun_Inhabited___rarg___boxed), 2, 0);
return x_3;
}
}
obj* l_Fun_Inhabited___rarg___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Fun_Inhabited___rarg(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Forall_Inhabited___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::apply_1(x_1, x_2);
return x_3;
}
}
obj* l_Forall_Inhabited(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Forall_Inhabited___rarg), 2, 0);
return x_3;
}
}
obj* l_Forall_Inhabited___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Forall_Inhabited(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
uint8 _init_l_Bool_Inhabited() {
_start:
{
uint8 x_1; 
x_1 = 0;
return x_1;
}
}
obj* _init_l_True_Inhabited() {
_start:
{
return lean::box(0);
}
}
obj* _init_l_Nat_Inhabited() {
_start:
{
obj* x_1; 
x_1 = lean::mk_nat_obj(0u);
return x_1;
}
}
obj* _init_l_NonScalar_Inhabited() {
_start:
{
obj* x_1; 
x_1 = lean::mk_nat_obj(0u);
return x_1;
}
}
obj* _init_l_PointedType_Inhabited() {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
}
obj* l_Subtype_Inhabited___rarg(obj* x_1, obj* x_2) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_Subtype_Inhabited(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Subtype_Inhabited___rarg___boxed), 2, 0);
return x_3;
}
}
obj* l_Subtype_Inhabited___rarg___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Subtype_Inhabited___rarg(x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Subtype_Inhabited___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Subtype_Inhabited(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
uint8 l_Subtype_DecidableEq___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::apply_2(x_1, x_2, x_3);
x_5 = lean::unbox(x_4);
lean::dec(x_4);
if (x_5 == 0)
{
uint8 x_6; 
x_6 = 0;
return x_6;
}
else
{
uint8 x_7; 
x_7 = 1;
return x_7;
}
}
}
obj* l_Subtype_DecidableEq(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Subtype_DecidableEq___rarg___boxed), 3, 0);
return x_3;
}
}
obj* l_Subtype_DecidableEq___rarg___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = l_Subtype_DecidableEq___rarg(x_1, x_2, x_3);
x_5 = lean::box(x_4);
return x_5;
}
}
obj* l_Subtype_DecidableEq___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Subtype_DecidableEq(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_Sum_inhabitedLeft___rarg(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_Sum_inhabitedLeft(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Sum_inhabitedLeft___rarg), 1, 0);
return x_3;
}
}
obj* l_Sum_inhabitedRight___rarg(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_Sum_inhabitedRight(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Sum_inhabitedRight___rarg), 1, 0);
return x_3;
}
}
uint8 l_Sum_DecidableEq___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
lean::dec(x_2);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_5 = lean::cnstr_get(x_3, 0);
lean::inc(x_5);
lean::dec(x_3);
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_7 = lean::apply_2(x_1, x_5, x_6);
x_8 = lean::unbox(x_7);
lean::dec(x_7);
if (x_8 == 0)
{
uint8 x_9; 
x_9 = 0;
return x_9;
}
else
{
uint8 x_10; 
x_10 = 1;
return x_10;
}
}
else
{
uint8 x_11; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_1);
x_11 = 0;
return x_11;
}
}
else
{
lean::dec(x_1);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_12; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
x_12 = 0;
return x_12;
}
else
{
obj* x_13; obj* x_14; obj* x_15; uint8 x_16; 
x_13 = lean::cnstr_get(x_3, 0);
lean::inc(x_13);
lean::dec(x_3);
x_14 = lean::cnstr_get(x_4, 0);
lean::inc(x_14);
lean::dec(x_4);
x_15 = lean::apply_2(x_2, x_13, x_14);
x_16 = lean::unbox(x_15);
lean::dec(x_15);
if (x_16 == 0)
{
uint8 x_17; 
x_17 = 0;
return x_17;
}
else
{
uint8 x_18; 
x_18 = 1;
return x_18;
}
}
}
}
}
obj* l_Sum_DecidableEq(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Sum_DecidableEq___rarg___boxed), 4, 0);
return x_3;
}
}
obj* l_Sum_DecidableEq___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = l_Sum_DecidableEq___rarg(x_1, x_2, x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_Prod_Inhabited___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_Prod_Inhabited(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Prod_Inhabited___rarg), 2, 0);
return x_3;
}
}
uint8 l_Prod_DecidableEq___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; uint8 x_10; 
x_5 = lean::cnstr_get(x_3, 0);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
x_8 = lean::cnstr_get(x_4, 1);
lean::inc(x_8);
lean::dec(x_4);
x_9 = lean::apply_2(x_1, x_5, x_7);
x_10 = lean::unbox(x_9);
lean::dec(x_9);
if (x_10 == 0)
{
uint8 x_11; 
lean::dec(x_8);
lean::dec(x_6);
lean::dec(x_2);
x_11 = 0;
return x_11;
}
else
{
obj* x_12; uint8 x_13; 
x_12 = lean::apply_2(x_2, x_6, x_8);
x_13 = lean::unbox(x_12);
lean::dec(x_12);
if (x_13 == 0)
{
uint8 x_14; 
x_14 = 0;
return x_14;
}
else
{
uint8 x_15; 
x_15 = 1;
return x_15;
}
}
}
}
obj* l_Prod_DecidableEq(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Prod_DecidableEq___rarg___boxed), 4, 0);
return x_3;
}
}
obj* l_Prod_DecidableEq___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = l_Prod_DecidableEq___rarg(x_1, x_2, x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_Prod_HasLess(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::box(0);
return x_5;
}
}
obj* l_Prod_HasLess___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Prod_HasLess(x_1, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_3);
return x_5;
}
}
uint8 l_prodHasDecidableLt___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_8; obj* x_9; uint8 x_10; 
x_7 = lean::cnstr_get(x_5, 0);
lean::inc(x_7);
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
lean::inc(x_8);
lean::inc(x_7);
x_9 = lean::apply_2(x_3, x_7, x_8);
x_10 = lean::unbox(x_9);
lean::dec(x_9);
if (x_10 == 0)
{
obj* x_11; uint8 x_12; 
x_11 = lean::apply_2(x_1, x_7, x_8);
x_12 = lean::unbox(x_11);
lean::dec(x_11);
if (x_12 == 0)
{
uint8 x_13; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
x_13 = 0;
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_16; uint8 x_17; 
x_14 = lean::cnstr_get(x_5, 1);
lean::inc(x_14);
lean::dec(x_5);
x_15 = lean::cnstr_get(x_6, 1);
lean::inc(x_15);
lean::dec(x_6);
x_16 = lean::apply_2(x_4, x_14, x_15);
x_17 = lean::unbox(x_16);
lean::dec(x_16);
if (x_17 == 0)
{
uint8 x_18; 
x_18 = 0;
return x_18;
}
else
{
uint8 x_19; 
x_19 = 1;
return x_19;
}
}
}
else
{
uint8 x_20; 
lean::dec(x_8);
lean::dec(x_7);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_1);
x_20 = 1;
return x_20;
}
}
}
obj* l_prodHasDecidableLt(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_prodHasDecidableLt___rarg___boxed), 6, 0);
return x_5;
}
}
obj* l_prodHasDecidableLt___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
uint8 x_7; obj* x_8; 
x_7 = l_prodHasDecidableLt___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_2);
x_8 = lean::box(x_7);
return x_8;
}
}
obj* l_prodHasDecidableLt___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_prodHasDecidableLt(x_1, x_2, x_3, x_4);
lean::dec(x_4);
lean::dec(x_3);
return x_5;
}
}
obj* l_Prod_map___main___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = !lean::is_exclusive(x_3);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_5 = lean::cnstr_get(x_3, 0);
x_6 = lean::cnstr_get(x_3, 1);
x_7 = lean::apply_1(x_1, x_5);
x_8 = lean::apply_1(x_2, x_6);
lean::cnstr_set(x_3, 1, x_8);
lean::cnstr_set(x_3, 0, x_7);
return x_3;
}
else
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_9 = lean::cnstr_get(x_3, 0);
x_10 = lean::cnstr_get(x_3, 1);
lean::inc(x_10);
lean::inc(x_9);
lean::dec(x_3);
x_11 = lean::apply_1(x_1, x_9);
x_12 = lean::apply_1(x_2, x_10);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
}
obj* l_Prod_map___main(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Prod_map___main___rarg), 3, 0);
return x_5;
}
}
obj* l_Prod_map___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Prod_map___main___rarg(x_1, x_2, x_3);
return x_4;
}
}
obj* l_Prod_map(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Prod_map___rarg), 3, 0);
return x_5;
}
}
obj* _init_l_PUnit_Inhabited() {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
}
uint8 l_PUnit_DecidableEq(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = 1;
return x_3;
}
}
obj* l_PUnit_DecidableEq___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = l_PUnit_DecidableEq(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
x_4 = lean::box(x_3);
return x_4;
}
}
obj* l_setoidHasEquiv(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::box(0);
return x_3;
}
}
obj* l_setoidHasEquiv___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_setoidHasEquiv(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_Quot_liftOn___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_1(x_2, x_1);
return x_4;
}
}
obj* l_Quot_liftOn(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Quot_liftOn___rarg), 3, 0);
return x_4;
}
}
obj* l_Quot_liftOn___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Quot_liftOn(x_1, x_2, x_3);
lean::dec(x_3);
return x_4;
}
}
obj* l_Quot_indep___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
lean::inc(x_2);
x_3 = lean::apply_1(x_1, x_2);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
}
obj* l_Quot_indep(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Quot_indep___rarg), 2, 0);
return x_4;
}
}
obj* l_Quot_indep___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Quot_indep(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Quot_rec___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_1(x_1, x_3);
return x_4;
}
}
obj* l_Quot_rec(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Quot_rec___rarg), 3, 0);
return x_4;
}
}
obj* l_Quot_rec___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Quot_rec(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Quot_recOn___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_1(x_2, x_1);
return x_4;
}
}
obj* l_Quot_recOn(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Quot_recOn___rarg), 3, 0);
return x_4;
}
}
obj* l_Quot_recOn___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Quot_recOn(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Quot_recOnSubsingleton___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::apply_1(x_2, x_1);
return x_3;
}
}
obj* l_Quot_recOnSubsingleton(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Quot_recOnSubsingleton___rarg), 2, 0);
return x_5;
}
}
obj* l_Quot_recOnSubsingleton___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Quot_recOnSubsingleton(x_1, x_2, x_3, x_4);
lean::dec(x_3);
lean::dec(x_2);
return x_5;
}
}
obj* l_Quot_hrecOn___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_1(x_2, x_1);
return x_4;
}
}
obj* l_Quot_hrecOn(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Quot_hrecOn___rarg), 3, 0);
return x_4;
}
}
obj* l_Quot_hrecOn___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Quot_hrecOn(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Quotient_mk___rarg(obj* x_1) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_Quotient_mk(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Quotient_mk___rarg___boxed), 1, 0);
return x_3;
}
}
obj* l_Quotient_mk___rarg___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Quotient_mk___rarg(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Quotient_mk___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Quotient_mk(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_Quotient_lift___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_1(x_1, x_3);
return x_4;
}
}
obj* l_Quotient_lift(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Quotient_lift___rarg), 3, 0);
return x_4;
}
}
obj* l_Quotient_lift___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Quotient_lift(x_1, x_2, x_3);
lean::dec(x_3);
return x_4;
}
}
obj* l_Quotient_liftOn___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_1(x_2, x_1);
return x_4;
}
}
obj* l_Quotient_liftOn(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Quotient_liftOn___rarg), 3, 0);
return x_4;
}
}
obj* l_Quotient_liftOn___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Quotient_liftOn(x_1, x_2, x_3);
lean::dec(x_3);
return x_4;
}
}
obj* l_Quotient_rec___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_1(x_1, x_3);
return x_4;
}
}
obj* l_Quotient_rec(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Quotient_rec___rarg), 3, 0);
return x_4;
}
}
obj* l_Quotient_rec___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Quotient_rec(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Quotient_recOn___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_1(x_2, x_1);
return x_4;
}
}
obj* l_Quotient_recOn(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Quotient_recOn___rarg), 3, 0);
return x_4;
}
}
obj* l_Quotient_recOn___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Quotient_recOn(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Quotient_recOnSubsingleton___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::apply_1(x_2, x_1);
return x_3;
}
}
obj* l_Quotient_recOnSubsingleton(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_Quotient_recOnSubsingleton___rarg), 2, 0);
return x_5;
}
}
obj* l_Quotient_recOnSubsingleton___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Quotient_recOnSubsingleton(x_1, x_2, x_3, x_4);
lean::dec(x_3);
lean::dec(x_2);
return x_5;
}
}
obj* l_Quotient_hrecOn___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_1(x_2, x_1);
return x_4;
}
}
obj* l_Quotient_hrecOn(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Quotient_hrecOn___rarg), 3, 0);
return x_4;
}
}
obj* l_Quotient_hrecOn___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Quotient_hrecOn(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l_Quotient_lift_u2082___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::apply_2(x_1, x_3, x_4);
return x_5;
}
}
obj* l_Quotient_lift_u2082(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Quotient_lift_u2082___rarg), 4, 0);
return x_6;
}
}
obj* l_Quotient_lift_u2082___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Quotient_lift_u2082(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_5);
lean::dec(x_4);
return x_6;
}
}
obj* l_Quotient_liftOn_u2082___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::apply_2(x_3, x_1, x_2);
return x_5;
}
}
obj* l_Quotient_liftOn_u2082(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Quotient_liftOn_u2082___rarg), 4, 0);
return x_6;
}
}
obj* l_Quotient_liftOn_u2082___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_Quotient_liftOn_u2082(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_5);
lean::dec(x_4);
return x_6;
}
}
obj* l_Quotient_recOnSubsingleton_u2082___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_2(x_3, x_1, x_2);
return x_4;
}
}
obj* l_Quotient_recOnSubsingleton_u2082(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Quotient_recOnSubsingleton_u2082___rarg), 3, 0);
return x_7;
}
}
obj* l_Quotient_recOnSubsingleton_u2082___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_Quotient_recOnSubsingleton_u2082(x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
return x_7;
}
}
obj* l_EqvGen_Setoid(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::box(0);
return x_3;
}
}
obj* l_EqvGen_Setoid___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_EqvGen_Setoid(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_Quotient_recOnSubsingleton_u2082___at_Quotient_DecidableEq___spec__1___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_2(x_3, x_1, x_2);
return x_4;
}
}
obj* l_Quotient_recOnSubsingleton_u2082___at_Quotient_DecidableEq___spec__1(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Quotient_recOnSubsingleton_u2082___at_Quotient_DecidableEq___spec__1___rarg), 3, 0);
return x_3;
}
}
uint8 l_Quotient_DecidableEq___rarg___lambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::apply_2(x_1, x_2, x_3);
x_5 = lean::unbox(x_4);
lean::dec(x_4);
if (x_5 == 0)
{
uint8 x_6; 
x_6 = 0;
return x_6;
}
else
{
uint8 x_7; 
x_7 = 1;
return x_7;
}
}
}
obj* l_Quotient_DecidableEq___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = l_Quotient_DecidableEq___rarg___lambda__1(x_2, x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_Quotient_DecidableEq(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Quotient_DecidableEq___rarg___boxed), 4, 0);
return x_2;
}
}
obj* l_Quotient_recOnSubsingleton_u2082___at_Quotient_DecidableEq___spec__1___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Quotient_recOnSubsingleton_u2082___at_Quotient_DecidableEq___spec__1(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_Quotient_DecidableEq___rarg___lambda__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = l_Quotient_DecidableEq___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean::box(x_4);
return x_5;
}
}
obj* l_Quotient_DecidableEq___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Quotient_DecidableEq___rarg(x_1, x_2, x_3, x_4);
lean::dec(x_1);
return x_5;
}
}
obj* l___private_init_core_20__funSetoid(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::box(0);
return x_3;
}
}
obj* l___private_init_core_20__funSetoid___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l___private_init_core_20__funSetoid(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l___private_init_core_21__extfunApp___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::apply_1(x_1, x_2);
return x_3;
}
}
obj* l___private_init_core_21__extfunApp(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_core_21__extfunApp___rarg), 2, 0);
return x_3;
}
}
obj* l___private_init_core_21__extfunApp___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l___private_init_core_21__extfunApp(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_Function_comp___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = lean::apply_1(x_2, x_3);
x_5 = lean::apply_1(x_1, x_4);
return x_5;
}
}
obj* l_Function_comp(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Function_comp___rarg), 3, 0);
return x_4;
}
}
obj* l_Function_onFun___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; 
lean::inc(x_2);
x_5 = lean::apply_1(x_2, x_3);
x_6 = lean::apply_1(x_2, x_4);
x_7 = lean::apply_2(x_1, x_5, x_6);
return x_7;
}
}
obj* l_Function_onFun(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Function_onFun___rarg), 4, 0);
return x_4;
}
}
obj* l_Function_combine___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
lean::inc(x_5);
lean::inc(x_4);
x_6 = lean::apply_2(x_1, x_4, x_5);
x_7 = lean::apply_2(x_3, x_4, x_5);
x_8 = lean::apply_2(x_2, x_6, x_7);
return x_8;
}
}
obj* l_Function_combine(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Function_combine___rarg), 5, 0);
return x_6;
}
}
obj* l_Function_const___rarg(obj* x_1, obj* x_2) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_Function_const(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Function_const___rarg___boxed), 2, 0);
return x_3;
}
}
obj* l_Function_const___rarg___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Function_const___rarg(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Function_swap___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_2(x_1, x_3, x_2);
return x_4;
}
}
obj* l_Function_swap(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Function_swap___rarg), 3, 0);
return x_4;
}
}
obj* l_Function_swap___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Function_swap(x_1, x_2, x_3);
lean::dec(x_3);
return x_4;
}
}
static bool _G_initialized = false;
obj* initialize_init_core(obj* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (io_result_is_error(w)) return w;
REGISTER_LEAN_FUNCTION(lean::mk_const_name("id"), 1, l_id);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("inline"), 1, l_inline);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("flip"), 3, l_flip);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("idDelta"), 1, l_idDelta);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("typedExpr"), 1, l_typedExpr);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("idRhs"), 1, l_idRhs);
l_Unit_unit = _init_l_Unit_unit();
lean::mark_persistent(l_Unit_unit);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("Unit"), "unit"), l_Unit_unit);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Thunk"), "mk"), 2, l_Thunk_mk___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Thunk"), "pure"), 2, l_Thunk_pure___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Thunk"), "get"), 2, l_Thunk_get___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Thunk"), "map"), 4, l_Thunk_map___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Thunk"), "bind"), 4, l_Thunk_bind___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Task"), "mk"), 2, l_Task_mk___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Task"), "pure"), 2, l_Task_pure___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Task"), "get"), 2, l_Task_get___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Task"), "map"), 4, l_Task_map___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Task"), "bind"), 4, l_Task_bind___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Eq"), "ndrec"), 3, l_Eq_ndrec___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Eq"), "ndrecOn"), 5, l_Eq_ndrecOn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("decidableOfDecidableEq"), 1, l_decidableOfDecidableEq);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("bit0"), 1, l_bit0);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("bit1"), 1, l_bit1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("singleton"), 2, l_singleton);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Nat"), "add"), 2, l_Nat_add___boxed);
l_Nat_HasZero = _init_l_Nat_HasZero();
lean::mark_persistent(l_Nat_HasZero);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("Nat"), "HasZero"), l_Nat_HasZero);
l_Nat_HasOne = _init_l_Nat_HasOne();
lean::mark_persistent(l_Nat_HasOne);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("Nat"), "HasOne"), l_Nat_HasOne);
l_Nat_HasAdd = _init_l_Nat_HasAdd();
lean::mark_persistent(l_Nat_HasAdd);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("Nat"), "HasAdd"), l_Nat_HasAdd);
l_hugeFuel = _init_l_hugeFuel();
lean::mark_persistent(l_hugeFuel);
lean::register_constant(lean::mk_const_name("hugeFuel"), l_hugeFuel);
l_std_priority_default = _init_l_std_priority_default();
lean::mark_persistent(l_std_priority_default);
lean::register_constant(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("std"), "priority"), "default"), l_std_priority_default);
l_std_priority_max = _init_l_std_priority_max();
lean::mark_persistent(l_std_priority_max);
lean::register_constant(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("std"), "priority"), "max"), l_std_priority_max);
l_Nat_prio = _init_l_Nat_prio();
lean::mark_persistent(l_Nat_prio);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("Nat"), "prio"), l_Nat_prio);
l_std_prec_max = _init_l_std_prec_max();
lean::mark_persistent(l_std_prec_max);
lean::register_constant(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("std"), "prec"), "max"), l_std_prec_max);
l_std_prec_arrow = _init_l_std_prec_arrow();
lean::mark_persistent(l_std_prec_arrow);
lean::register_constant(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("std"), "prec"), "arrow"), l_std_prec_arrow);
l_std_prec_maxPlus = _init_l_std_prec_maxPlus();
lean::mark_persistent(l_std_prec_maxPlus);
lean::register_constant(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("std"), "prec"), "maxPlus"), l_std_prec_maxPlus);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("default"), "sizeof"), 2, l_default_sizeof___boxed);
l_defaultHasSizeof___closed__1 = _init_l_defaultHasSizeof___closed__1();
lean::mark_persistent(l_defaultHasSizeof___closed__1);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("defaultHasSizeof"), 1, l_defaultHasSizeof);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Nat"), "sizeof"), 1, l_Nat_sizeof___boxed);
l_Nat_HasSizeof = _init_l_Nat_HasSizeof();
lean::mark_persistent(l_Nat_HasSizeof);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("Nat"), "HasSizeof"), l_Nat_HasSizeof);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Prod"), "sizeof"), 2, l_Prod_sizeof);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Prod"), "HasSizeof"), 2, l_Prod_HasSizeof);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Sum"), "sizeof"), 2, l_Sum_sizeof);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Sum"), "HasSizeof"), 2, l_Sum_HasSizeof);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("PSum"), "sizeof"), 2, l_PSum_sizeof);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("PSum"), "HasSizeof"), 2, l_PSum_HasSizeof);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Sigma"), "sizeof"), 2, l_Sigma_sizeof___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Sigma"), "HasSizeof"), 2, l_Sigma_HasSizeof___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("PSigma"), "sizeof"), 2, l_PSigma_sizeof___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("PSigma"), "HasSizeof"), 2, l_PSigma_HasSizeof___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("PUnit"), "sizeof"), 1, l_PUnit_sizeof___boxed);
l_PUnit_HasSizeof = _init_l_PUnit_HasSizeof();
lean::mark_persistent(l_PUnit_HasSizeof);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("PUnit"), "HasSizeof"), l_PUnit_HasSizeof);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Bool"), "sizeof"), 1, l_Bool_sizeof___boxed);
l_Bool_HasSizeof = _init_l_Bool_HasSizeof();
lean::mark_persistent(l_Bool_HasSizeof);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("Bool"), "HasSizeof"), l_Bool_HasSizeof);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Option"), "sizeof"), 1, l_Option_sizeof);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Option"), "HasSizeof"), 1, l_Option_HasSizeof);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("List"), "sizeof"), 1, l_List_sizeof);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("List"), "HasSizeof"), 1, l_List_HasSizeof);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Subtype"), "sizeof"), 1, l_Subtype_sizeof);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Subtype"), "HasSizeof"), 1, l_Subtype_HasSizeof);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("inferInstance"), 1, l_inferInstance);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("inferInstanceAs"), 1, l_inferInstanceAs);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("cond"), 1, l_cond);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("or"), 2, l_or___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("and"), 2, l_and___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("not"), 1, l_not___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("xor"), 2, l_xor___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("strictOr"), 2, l_strictOr___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("strictAnd"), 2, l_strictAnd___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("bne"), 1, l_bne);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("False"), "elim"), 2, l_False_elim___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("absurd"), 4, l_absurd);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Eq"), "mp"), 3, l_Eq_mp);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Eq"), "mpr"), 3, l_Eq_mpr);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("cast"), 3, l_cast);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Decidable"), "decide"), 1, l_Decidable_decide);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("beqOfEq"), 1, l_beqOfEq);
l_True_Decidable = _init_l_True_Decidable();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("True"), "Decidable"), lean::box(l_True_Decidable));
l_False_Decidable = _init_l_False_Decidable();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("False"), "Decidable"), lean::box(l_False_Decidable));
REGISTER_LEAN_FUNCTION(lean::mk_const_name("dite"), 1, l_dite);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("ite"), 1, l_ite);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Decidable"), "recOnTrue"), 1, l_Decidable_recOnTrue);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Decidable"), "recOnFalse"), 1, l_Decidable_recOnFalse);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Decidable"), "byCases"), 2, l_Decidable_byCases);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("decidableOfDecidableOfIff"), 2, l_decidableOfDecidableOfIff);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("decidableOfDecidableOfEq"), 2, l_decidableOfDecidableOfEq);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("And"), "Decidable"), 2, l_And_Decidable);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Or"), "Decidable"), 2, l_Or_Decidable);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Not"), "Decidable"), 1, l_Not_Decidable);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("implies"), "Decidable"), 2, l_implies_Decidable);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Iff"), "Decidable"), 2, l_Iff_Decidable);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Xor"), "Decidable"), 2, l_Xor_Decidable);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Ne"), "Decidable"), 1, l_Ne_Decidable);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Bool"), "DecidableEq"), 2, l_Bool_DecidableEq___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("ite"), "Decidable"), 3, l_ite_Decidable);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("dite"), "Decidable"), 3, l_dite_Decidable___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("default"), 1, l_default);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("arbitrary"), 1, l_arbitrary);
l_Prop_Inhabited = _init_l_Prop_Inhabited();
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Fun"), "Inhabited"), 2, l_Fun_Inhabited);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Forall"), "Inhabited"), 2, l_Forall_Inhabited___boxed);
l_Bool_Inhabited = _init_l_Bool_Inhabited();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("Bool"), "Inhabited"), lean::box(l_Bool_Inhabited));
l_True_Inhabited = _init_l_True_Inhabited();
l_Nat_Inhabited = _init_l_Nat_Inhabited();
lean::mark_persistent(l_Nat_Inhabited);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("Nat"), "Inhabited"), l_Nat_Inhabited);
l_NonScalar_Inhabited = _init_l_NonScalar_Inhabited();
lean::mark_persistent(l_NonScalar_Inhabited);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("NonScalar"), "Inhabited"), l_NonScalar_Inhabited);
l_PointedType_Inhabited = _init_l_PointedType_Inhabited();
lean::mark_persistent(l_PointedType_Inhabited);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("PointedType"), "Inhabited"), l_PointedType_Inhabited);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Subtype"), "Inhabited"), 2, l_Subtype_Inhabited___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Subtype"), "DecidableEq"), 2, l_Subtype_DecidableEq___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Sum"), "inhabitedLeft"), 2, l_Sum_inhabitedLeft);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Sum"), "inhabitedRight"), 2, l_Sum_inhabitedRight);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Sum"), "DecidableEq"), 2, l_Sum_DecidableEq);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Prod"), "Inhabited"), 2, l_Prod_Inhabited);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Prod"), "DecidableEq"), 2, l_Prod_DecidableEq);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Prod"), "HasLess"), 4, l_Prod_HasLess___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("prodHasDecidableLt"), 4, l_prodHasDecidableLt___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Prod"), "map"), 4, l_Prod_map);
l_PUnit_Inhabited = _init_l_PUnit_Inhabited();
lean::mark_persistent(l_PUnit_Inhabited);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("PUnit"), "Inhabited"), l_PUnit_Inhabited);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("PUnit"), "DecidableEq"), 2, l_PUnit_DecidableEq___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name("setoidHasEquiv"), 2, l_setoidHasEquiv___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Quot"), "liftOn"), 3, l_Quot_liftOn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Quot"), "indep"), 3, l_Quot_indep___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Quot"), "rec"), 3, l_Quot_rec___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Quot"), "recOn"), 3, l_Quot_recOn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Quot"), "recOnSubsingleton"), 4, l_Quot_recOnSubsingleton___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Quot"), "hrecOn"), 3, l_Quot_hrecOn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Quotient"), "mk"), 2, l_Quotient_mk___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Quotient"), "lift"), 3, l_Quotient_lift___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Quotient"), "liftOn"), 3, l_Quotient_liftOn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Quotient"), "rec"), 3, l_Quotient_rec___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Quotient"), "recOn"), 3, l_Quotient_recOn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Quotient"), "recOnSubsingleton"), 4, l_Quotient_recOnSubsingleton___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Quotient"), "hrecOn"), 3, l_Quotient_hrecOn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Quotient"), "lift₂"), 5, l_Quotient_lift_u2082___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Quotient"), "liftOn₂"), 5, l_Quotient_liftOn_u2082___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Quotient"), "recOnSubsingleton₂"), 6, l_Quotient_recOnSubsingleton_u2082___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("EqvGen"), "Setoid"), 2, l_EqvGen_Setoid___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Quotient"), "DecidableEq"), 1, l_Quotient_DecidableEq);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Function"), "comp"), 3, l_Function_comp);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Function"), "onFun"), 3, l_Function_onFun);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Function"), "combine"), 5, l_Function_combine);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Function"), "const"), 2, l_Function_const);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Function"), "swap"), 3, l_Function_swap___boxed);
return w;
}
