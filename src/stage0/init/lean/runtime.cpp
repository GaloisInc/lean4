// Lean compiler output
// Module: init.lean.runtime
// Imports: init.core
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
obj* l_Lean_maxSmallNatFn___boxed(obj*);
extern "C" obj* lean_closure_max_args(obj*);
extern "C" obj* lean_max_small_nat(obj*);
obj* l_Lean_closureMaxArgs;
obj* l_Lean_maxSmallNat;
obj* l_Lean_closureMaxArgsFn___boxed(obj*);
obj* l_Lean_closureMaxArgsFn___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean_closure_max_args(x_1);
return x_2;
}
}
obj* l_Lean_maxSmallNatFn___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean_max_small_nat(x_1);
return x_2;
}
}
obj* _init_l_Lean_closureMaxArgs() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(0);
x_2 = lean_closure_max_args(x_1);
return x_2;
}
}
obj* _init_l_Lean_maxSmallNat() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(0);
x_2 = lean_max_small_nat(x_1);
return x_2;
}
}
obj* initialize_init_core(obj*);
static bool _G_initialized = false;
obj* initialize_init_lean_runtime(obj* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (io_result_is_error(w)) return w;
w = initialize_init_core(w);
if (io_result_is_error(w)) return w;
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Lean"), "closureMaxArgsFn"), 1, l_Lean_closureMaxArgsFn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("Lean"), "maxSmallNatFn"), 1, l_Lean_maxSmallNatFn___boxed);
l_Lean_closureMaxArgs = _init_l_Lean_closureMaxArgs();
lean::mark_persistent(l_Lean_closureMaxArgs);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("Lean"), "closureMaxArgs"), l_Lean_closureMaxArgs);
l_Lean_maxSmallNat = _init_l_Lean_maxSmallNat();
lean::mark_persistent(l_Lean_maxSmallNat);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("Lean"), "maxSmallNat"), l_Lean_maxSmallNat);
return w;
}
