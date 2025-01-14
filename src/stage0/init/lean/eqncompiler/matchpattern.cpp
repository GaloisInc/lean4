// Lean compiler output
// Module: init.lean.eqncompiler.matchpattern
// Imports: init.lean.attributes
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
namespace lean {
uint8 has_match_pattern_attribute_core(obj*, obj*);
}
obj* l_Lean_AttributeImpl_inhabited___lambda__4___boxed(obj*, obj*, obj*);
obj* l_Lean_EqnCompiler_matchPatternAttr;
obj* l_Lean_EqnCompiler_mkMatchPatternAttr___closed__3;
obj* l_Lean_AttributeImpl_inhabited___lambda__3___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_EqnCompiler_mkMatchPatternAttr(obj*);
obj* l_Lean_PersistentEnvExtension_inhabited___rarg___lambda__1___boxed(obj*);
obj* l_Lean_EqnCompiler_mkMatchPatternAttr___lambda__1___closed__1;
obj* l_Lean_EqnCompiler_mkMatchPatternAttr___lambda__1___boxed(obj*, obj*);
obj* l_Array_mkEmpty(obj*, obj*);
obj* l_Lean_registerTagAttribute(obj*, obj*, obj*, obj*);
obj* l_Lean_AttributeImpl_inhabited___lambda__5(obj*, obj*);
obj* l_Lean_EqnCompiler_hasMatchPatternAttribute___boxed(obj*, obj*);
obj* l_Lean_AttributeImpl_inhabited___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*);
extern "C" obj* lean_name_mk_string(obj*, obj*);
obj* l_ExceptT_Monad___rarg___lambda__8___boxed(obj*, obj*);
uint8 l_Lean_TagAttribute_hasTag(obj*, obj*, obj*);
obj* l_Lean_PersistentEnvExtension_inhabited___rarg___lambda__2___boxed(obj*);
obj* l_Lean_AttributeImpl_inhabited___lambda__2___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_EqnCompiler_mkMatchPatternAttr___closed__1;
obj* l_Lean_EqnCompiler_mkMatchPatternAttr___lambda__1(obj*, obj*);
obj* l_Lean_EqnCompiler_mkMatchPatternAttr___closed__2;
obj* _init_l_Lean_EqnCompiler_mkMatchPatternAttr___lambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_Lean_EqnCompiler_mkMatchPatternAttr___lambda__1(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_EqnCompiler_mkMatchPatternAttr___lambda__1___closed__1;
return x_3;
}
}
obj* _init_l_Lean_EqnCompiler_mkMatchPatternAttr___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = lean::mk_string("matchPattern");
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_EqnCompiler_mkMatchPatternAttr___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("mark that a definition can be used in a pattern (remark: the dependent pattern matching compiler will unfold the definition)");
return x_1;
}
}
obj* _init_l_Lean_EqnCompiler_mkMatchPatternAttr___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_EqnCompiler_mkMatchPatternAttr___lambda__1___boxed), 2, 0);
return x_1;
}
}
obj* l_Lean_EqnCompiler_mkMatchPatternAttr(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_EqnCompiler_mkMatchPatternAttr___closed__1;
x_3 = l_Lean_EqnCompiler_mkMatchPatternAttr___closed__2;
x_4 = l_Lean_EqnCompiler_mkMatchPatternAttr___closed__3;
x_5 = l_Lean_registerTagAttribute(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* l_Lean_EqnCompiler_mkMatchPatternAttr___lambda__1___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_EqnCompiler_mkMatchPatternAttr___lambda__1(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
namespace lean {
uint8 has_match_pattern_attribute_core(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = l_Lean_EqnCompiler_matchPatternAttr;
x_4 = l_Lean_TagAttribute_hasTag(x_3, x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
}
obj* l_Lean_EqnCompiler_hasMatchPatternAttribute___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = lean::has_match_pattern_attribute_core(x_1, x_2);
x_4 = lean::box(x_3);
return x_4;
}
}
obj* initialize_init_lean_attributes(obj*);
static bool _G_initialized = false;
obj* initialize_init_lean_eqncompiler_matchpattern(obj* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (io_result_is_error(w)) return w;
w = initialize_init_lean_attributes(w);
if (io_result_is_error(w)) return w;
l_Lean_EqnCompiler_mkMatchPatternAttr___lambda__1___closed__1 = _init_l_Lean_EqnCompiler_mkMatchPatternAttr___lambda__1___closed__1();
lean::mark_persistent(l_Lean_EqnCompiler_mkMatchPatternAttr___lambda__1___closed__1);
l_Lean_EqnCompiler_mkMatchPatternAttr___closed__1 = _init_l_Lean_EqnCompiler_mkMatchPatternAttr___closed__1();
lean::mark_persistent(l_Lean_EqnCompiler_mkMatchPatternAttr___closed__1);
l_Lean_EqnCompiler_mkMatchPatternAttr___closed__2 = _init_l_Lean_EqnCompiler_mkMatchPatternAttr___closed__2();
lean::mark_persistent(l_Lean_EqnCompiler_mkMatchPatternAttr___closed__2);
l_Lean_EqnCompiler_mkMatchPatternAttr___closed__3 = _init_l_Lean_EqnCompiler_mkMatchPatternAttr___closed__3();
lean::mark_persistent(l_Lean_EqnCompiler_mkMatchPatternAttr___closed__3);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "EqnCompiler"), "mkMatchPatternAttr"), 1, l_Lean_EqnCompiler_mkMatchPatternAttr);
w = l_Lean_EqnCompiler_mkMatchPatternAttr(w);
if (io_result_is_error(w)) return w;
l_Lean_EqnCompiler_matchPatternAttr = io_result_get_value(w);
lean::mark_persistent(l_Lean_EqnCompiler_matchPatternAttr);
lean::register_constant(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "EqnCompiler"), "matchPatternAttr"), l_Lean_EqnCompiler_matchPatternAttr);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name(lean::mk_const_name("Lean"), "EqnCompiler"), "hasMatchPatternAttribute"), 2, l_Lean_EqnCompiler_hasMatchPatternAttribute___boxed);
return w;
}
