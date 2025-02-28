// Lean compiler output
// Module: init.data.uint
// Imports: init.data.fin.basic init.platform
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
uint64 l_UInt64_div(uint64, uint64);
obj* l_UInt8_hasDecidableLt___boxed(obj*, obj*);
uint8 l_UInt8_Inhabited;
namespace lean {
obj* uint8_to_nat(uint8);
}
obj* l_UInt32_mul___boxed(obj*, obj*);
namespace lean {
uint16 uint16_modn(uint16, obj*);
}
uint8 l_UInt8_mul(uint8, uint8);
obj* l_UInt8_land___boxed(obj*, obj*);
obj* l_UInt64_HasMod;
usize l_USize_mul(usize, usize);
uint16 l_UInt16_land(uint16, uint16);
obj* l_UInt32_HasDiv;
uint8 l_UInt16_hasDecidableLe(uint16, uint16);
obj* l_UInt32_HasLessEq;
uint16 l_UInt16_HasZero;
obj* l_UInt64_HasSub;
obj* l_UInt16_DecidableEq;
uint64 l_UInt64_mod(uint64, uint64);
obj* l_UInt64_ofNat___boxed(obj*);
obj* l_USize_HasLess;
obj* l_UInt16_modn___boxed(obj*, obj*);
namespace lean {
uint8 uint8_modn(uint8, obj*);
}
usize l_USize_ofUInt64(uint64);
usize l_USize_div(usize, usize);
obj* l_UInt32_hasDecidableLt___boxed(obj*, obj*);
uint8 l_USize_decLt(usize, usize);
usize l_USize_shift__right(usize, usize);
obj* l_UInt8_decLe___boxed(obj*, obj*);
obj* l_UInt64_HasModn;
obj* l_UInt64_hasDecidableLe___boxed(obj*, obj*);
namespace lean {
uint8 uint8_of_nat(obj*);
}
uint8 l_UInt64_decEq(uint64, uint64);
obj* l_UInt64_div___boxed(obj*, obj*);
namespace lean {
uint16 uint16_of_nat(obj*);
}
obj* l_UInt32_HasAdd;
uint32 l_UInt32_land(uint32, uint32);
obj* l_USize_shift__left___boxed(obj*, obj*);
namespace lean {
obj* uint16_to_nat(uint16);
}
obj* l_UInt16_lor___boxed(obj*, obj*);
uint32 l_UInt32_sub(uint32, uint32);
uint64 l_UInt64_HasZero;
usize l_USize_sub(usize, usize);
obj* l_UInt8_HasSub;
obj* l_UInt8_decLt___boxed(obj*, obj*);
uint8 l_UInt8_add(uint8, uint8);
obj* l_UInt32_lor___boxed(obj*, obj*);
obj* l_USize_mul___boxed(obj*, obj*);
extern obj* l_System_platform_nbits;
obj* l_USize_decLe___boxed(obj*, obj*);
uint64 l_UInt64_add(uint64, uint64);
obj* l_USize_div___boxed(obj*, obj*);
obj* l_uint32Sz;
obj* l_UInt64_HasDiv;
obj* l_USize_HasDiv;
obj* l_uint64Sz;
usize l_USize_HasZero;
usize l_USize_mod(usize, usize);
obj* l_UInt64_HasMul;
uint32 l_UInt32_add(uint32, uint32);
obj* l_USize_HasLessEq;
uint32 l_UInt32_mul(uint32, uint32);
uint32 l_UInt32_div(uint32, uint32);
obj* l_UInt16_toNat___boxed(obj*);
obj* l_UInt32_decLt___boxed(obj*, obj*);
obj* l_UInt8_HasLessEq;
obj* l_UInt64_decLt___boxed(obj*, obj*);
obj* l_USize_shift__right___boxed(obj*, obj*);
obj* l_USize_hasDecidableLe___boxed(obj*, obj*);
obj* l_UInt32_div___boxed(obj*, obj*);
uint64 l_UInt64_Inhabited;
uint16 l_UInt16_div(uint16, uint16);
uint8 l_UInt8_hasDecidableLt(uint8, uint8);
obj* l_UInt16_land___boxed(obj*, obj*);
obj* l_USize_modn___boxed(obj*, obj*);
uint8 l_USize_decEq(usize, usize);
obj* l_UInt16_hasDecidableLe___boxed(obj*, obj*);
usize l_USize_lor(usize, usize);
obj* l_UInt8_modn___boxed(obj*, obj*);
obj* l_USize_sub___boxed(obj*, obj*);
obj* l_USize_ofUInt64___boxed(obj*);
namespace lean {
uint64 uint64_of_nat(obj*);
}
obj* l_USize_HasMod;
obj* l_UInt16_decLe___boxed(obj*, obj*);
obj* l_UInt64_add___boxed(obj*, obj*);
uint8 l_UInt32_decLe(uint32, uint32);
usize l_USize_HasOne;
usize l_USize_add(usize, usize);
uint8 l_UInt8_mod(uint8, uint8);
obj* l_UInt32_HasLess;
obj* l_UInt16_HasModn;
obj* l_UInt64_land___boxed(obj*, obj*);
obj* l_UInt32_decEq___boxed(obj*, obj*);
obj* l_USize_decLt___boxed(obj*, obj*);
namespace lean {
obj* uint64_to_nat(uint64);
}
obj* l_UInt8_HasAdd;
uint8 l_UInt8_HasZero;
obj* l_UInt8_hasDecidableLe___boxed(obj*, obj*);
obj* l_UInt16_div___boxed(obj*, obj*);
obj* l_UInt32_modn___boxed(obj*, obj*);
obj* l_USize_add___boxed(obj*, obj*);
obj* l_UInt32_add___boxed(obj*, obj*);
uint8 l_UInt32_hasDecidableLe(uint32, uint32);
uint64 l_UInt64_mul(uint64, uint64);
obj* l_USize_DecidableEq;
obj* l_UInt8_sub___boxed(obj*, obj*);
obj* l_UInt64_sub___boxed(obj*, obj*);
obj* l_UInt32_HasMul;
uint8 l_UInt64_hasDecidableLe(uint64, uint64);
obj* l_UInt32_HasMod;
obj* l_USize_HasMul;
obj* l_UInt16_add___boxed(obj*, obj*);
uint32 l_UInt32_HasZero;
uint8 l_UInt8_hasDecidableLe(uint8, uint8);
obj* l_UInt32_ofNat___boxed(obj*);
obj* l_UInt8_DecidableEq;
obj* l_UInt8_ofNat___boxed(obj*);
uint8 l_UInt32_decLt(uint32, uint32);
obj* l_UInt16_mul___boxed(obj*, obj*);
obj* l_uint8Sz;
obj* l_UInt64_decLe___boxed(obj*, obj*);
uint16 l_UInt16_mul(uint16, uint16);
uint64 l_UInt64_lor(uint64, uint64);
obj* l_USize_land___boxed(obj*, obj*);
uint16 l_UInt16_sub(uint16, uint16);
uint8 l_UInt8_lor(uint8, uint8);
obj* l_UInt16_hasDecidableLt___boxed(obj*, obj*);
obj* l_UInt32_sub___boxed(obj*, obj*);
obj* l_UInt8_add___boxed(obj*, obj*);
obj* l_USize_HasSub;
uint32 l_UInt32_lor(uint32, uint32);
obj* l_UInt8_toNat___boxed(obj*);
uint8 l_UInt32_decEq(uint32, uint32);
obj* l_USize_hasDecidableLt___boxed(obj*, obj*);
uint8 l_UInt32_hasDecidableLt(uint32, uint32);
obj* l_UInt64_HasAdd;
uint64 l_UInt64_sub(uint64, uint64);
obj* l_UInt8_HasLess;
uint8 l_UInt16_decLt(uint16, uint16);
obj* l_USize_ofUInt32___boxed(obj*);
obj* l_USize_lor___boxed(obj*, obj*);
uint64 l_UInt64_HasOne;
uint8 l_UInt16_hasDecidableLt(uint16, uint16);
uint8 l_UInt64_hasDecidableLt(uint64, uint64);
obj* l_UInt32_HasModn;
obj* l_UInt8_HasDiv;
uint32 l_UInt32_mod(uint32, uint32);
obj* l_UInt64_toNat___boxed(obj*);
uint8 l_UInt8_decLe(uint8, uint8);
obj* l_Nat_pow___main(obj*, obj*);
obj* l_UInt16_HasMod;
obj* l_UInt32_land___boxed(obj*, obj*);
obj* l_UInt16_HasMul;
obj* l_USize_decEq___boxed(obj*, obj*);
obj* l_UInt8_decEq___boxed(obj*, obj*);
obj* l_UInt64_hasDecidableLt___boxed(obj*, obj*);
obj* l_UInt64_HasLessEq;
obj* l_UInt16_HasAdd;
obj* l_USize_mod___boxed(obj*, obj*);
obj* l_UInt16_mod___boxed(obj*, obj*);
obj* l_UInt16_HasSub;
obj* l_USize_ofNat___boxed(obj*);
namespace lean {
usize usize_modn(usize, obj*);
}
uint8 l_UInt8_land(uint8, uint8);
obj* l_USize_HasAdd;
obj* l_USize_toNat___boxed(obj*);
uint8 l_UInt8_decEq(uint8, uint8);
uint16 l_UInt16_lor(uint16, uint16);
uint16 l_UInt16_mod(uint16, uint16);
uint16 l_UInt16_add(uint16, uint16);
obj* l_UInt32_DecidableEq;
obj* l_UInt8_mul___boxed(obj*, obj*);
obj* l_UInt32_decLe___boxed(obj*, obj*);
obj* l_UInt64_modn___boxed(obj*, obj*);
obj* l_UInt64_mul___boxed(obj*, obj*);
obj* l_USize_HasModn;
obj* l_UInt16_ofNat___boxed(obj*);
uint8 l_UInt8_decLt(uint8, uint8);
obj* l_UInt8_HasModn;
usize l_USize_ofUInt32(uint32);
obj* l_uint16Sz;
obj* l_UInt32_hasDecidableLe___boxed(obj*, obj*);
namespace lean {
uint32 uint32_of_nat(obj*);
}
obj* l_UInt32_HasSub;
uint16 l_UInt16_HasOne;
obj* l_UInt8_HasMod;
obj* l_usizeSz;
namespace lean {
usize usize_of_nat(obj*);
}
obj* l_UInt64_mod___boxed(obj*, obj*);
uint8 l_USize_decLe(usize, usize);
namespace lean {
obj* uint32_to_nat(uint32);
}
obj* l_UInt8_div___boxed(obj*, obj*);
usize l_USize_shift__left(usize, usize);
uint8 l_UInt16_decLe(uint16, uint16);
obj* l_UInt32_toNat___boxed(obj*);
obj* l_UInt16_HasLess;
obj* l_UInt16_HasLessEq;
obj* l_UInt64_decEq___boxed(obj*, obj*);
uint32 l_UInt32_Inhabited;
obj* l_UInt8_lor___boxed(obj*, obj*);
obj* l_UInt8_mod___boxed(obj*, obj*);
uint8 l_UInt8_sub(uint8, uint8);
uint8 l_UInt16_decEq(uint16, uint16);
usize l_USize_land(usize, usize);
obj* l_UInt8_HasMul;
uint8 l_USize_hasDecidableLt(usize, usize);
namespace lean {
obj* usize_to_nat(usize);
}
obj* l_UInt16_HasDiv;
usize l_USize_Inhabited;
obj* l_UInt16_decEq___boxed(obj*, obj*);
uint64 l_UInt64_land(uint64, uint64);
uint8 l_UInt64_decLe(uint64, uint64);
namespace lean {
uint64 uint64_modn(uint64, obj*);
}
obj* l_UInt16_decLt___boxed(obj*, obj*);
namespace lean {
uint32 uint32_modn(uint32, obj*);
}
uint8 l_UInt8_div(uint8, uint8);
uint16 l_UInt16_Inhabited;
obj* l_UInt64_HasLess;
obj* l_UInt64_DecidableEq;
obj* l_UInt64_lor___boxed(obj*, obj*);
obj* l_UInt16_sub___boxed(obj*, obj*);
uint8 l_UInt64_decLt(uint64, uint64);
uint8 l_USize_hasDecidableLe(usize, usize);
obj* l_UInt32_mod___boxed(obj*, obj*);
uint8 l_UInt8_HasOne;
uint32 l_UInt32_HasOne;
obj* _init_l_uint8Sz() {
_start:
{
obj* x_1; 
x_1 = lean::mk_nat_obj(256u);
return x_1;
}
}
obj* l_UInt8_ofNat___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::uint8_of_nat(x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l_UInt8_toNat___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
x_3 = lean::uint8_to_nat(x_2);
return x_3;
}
}
obj* l_UInt8_add___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 + x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt8_sub___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 - x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt8_mul___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 * x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt8_div___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_4 == 0 ? 0 : x_3 / x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt8_mod___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_4 == 0 ? 0 : x_3 % x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt8_modn___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; obj* x_5; 
x_3 = lean::unbox(x_1);
x_4 = lean::uint8_modn(x_3, x_2);
x_5 = lean::box(x_4);
return x_5;
}
}
obj* l_UInt8_land___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 & x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt8_lor___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 | x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 _init_l_UInt8_HasZero() {
_start:
{
uint8 x_1; 
x_1 = 0;
return x_1;
}
}
uint8 _init_l_UInt8_HasOne() {
_start:
{
uint8 x_1; 
x_1 = 1;
return x_1;
}
}
obj* _init_l_UInt8_HasAdd() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt8_add___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt8_HasSub() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt8_sub___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt8_HasMul() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt8_mul___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt8_HasMod() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt8_mod___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt8_HasModn() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt8_modn___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt8_HasDiv() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt8_div___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt8_HasLess() {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
}
obj* _init_l_UInt8_HasLessEq() {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
}
uint8 _init_l_UInt8_Inhabited() {
_start:
{
uint8 x_1; 
x_1 = 0;
return x_1;
}
}
obj* l_UInt8_decEq___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 == x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt8_decLt___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 < x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt8_decLe___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 <= x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* _init_l_UInt8_DecidableEq() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt8_decEq___boxed), 2, 0);
return x_1;
}
}
uint8 l_UInt8_hasDecidableLt(uint8 x_1, uint8 x_2) {
_start:
{
uint8 x_3; 
x_3 = x_1 < x_2;
return x_3;
}
}
obj* l_UInt8_hasDecidableLt___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_UInt8_hasDecidableLt(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 l_UInt8_hasDecidableLe(uint8 x_1, uint8 x_2) {
_start:
{
uint8 x_3; 
x_3 = x_1 <= x_2;
return x_3;
}
}
obj* l_UInt8_hasDecidableLe___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; uint8 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_UInt8_hasDecidableLe(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
obj* _init_l_uint16Sz() {
_start:
{
obj* x_1; 
x_1 = lean::mk_nat_obj(65536u);
return x_1;
}
}
obj* l_UInt16_ofNat___boxed(obj* x_1) {
_start:
{
uint16 x_2; obj* x_3; 
x_2 = lean::uint16_of_nat(x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l_UInt16_toNat___boxed(obj* x_1) {
_start:
{
uint16 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
x_3 = lean::uint16_to_nat(x_2);
return x_3;
}
}
obj* l_UInt16_add___boxed(obj* x_1, obj* x_2) {
_start:
{
uint16 x_3; uint16 x_4; uint16 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 + x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt16_sub___boxed(obj* x_1, obj* x_2) {
_start:
{
uint16 x_3; uint16 x_4; uint16 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 - x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt16_mul___boxed(obj* x_1, obj* x_2) {
_start:
{
uint16 x_3; uint16 x_4; uint16 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 * x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt16_div___boxed(obj* x_1, obj* x_2) {
_start:
{
uint16 x_3; uint16 x_4; uint16 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_4 == 0 ? 0 : x_3 / x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt16_mod___boxed(obj* x_1, obj* x_2) {
_start:
{
uint16 x_3; uint16 x_4; uint16 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_4 == 0 ? 0 : x_3 % x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt16_modn___boxed(obj* x_1, obj* x_2) {
_start:
{
uint16 x_3; uint16 x_4; obj* x_5; 
x_3 = lean::unbox(x_1);
x_4 = lean::uint16_modn(x_3, x_2);
x_5 = lean::box(x_4);
return x_5;
}
}
obj* l_UInt16_land___boxed(obj* x_1, obj* x_2) {
_start:
{
uint16 x_3; uint16 x_4; uint16 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 & x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt16_lor___boxed(obj* x_1, obj* x_2) {
_start:
{
uint16 x_3; uint16 x_4; uint16 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 | x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
uint16 _init_l_UInt16_HasZero() {
_start:
{
uint16 x_1; 
x_1 = 0;
return x_1;
}
}
uint16 _init_l_UInt16_HasOne() {
_start:
{
uint16 x_1; 
x_1 = 1;
return x_1;
}
}
obj* _init_l_UInt16_HasAdd() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt16_add___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt16_HasSub() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt16_sub___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt16_HasMul() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt16_mul___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt16_HasMod() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt16_mod___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt16_HasModn() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt16_modn___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt16_HasDiv() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt16_div___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt16_HasLess() {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
}
obj* _init_l_UInt16_HasLessEq() {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
}
uint16 _init_l_UInt16_Inhabited() {
_start:
{
uint16 x_1; 
x_1 = 0;
return x_1;
}
}
obj* l_UInt16_decEq___boxed(obj* x_1, obj* x_2) {
_start:
{
uint16 x_3; uint16 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 == x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt16_decLt___boxed(obj* x_1, obj* x_2) {
_start:
{
uint16 x_3; uint16 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 < x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt16_decLe___boxed(obj* x_1, obj* x_2) {
_start:
{
uint16 x_3; uint16 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
x_4 = lean::unbox(x_2);
x_5 = x_3 <= x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* _init_l_UInt16_DecidableEq() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt16_decEq___boxed), 2, 0);
return x_1;
}
}
uint8 l_UInt16_hasDecidableLt(uint16 x_1, uint16 x_2) {
_start:
{
uint8 x_3; 
x_3 = x_1 < x_2;
return x_3;
}
}
obj* l_UInt16_hasDecidableLt___boxed(obj* x_1, obj* x_2) {
_start:
{
uint16 x_3; uint16 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_UInt16_hasDecidableLt(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 l_UInt16_hasDecidableLe(uint16 x_1, uint16 x_2) {
_start:
{
uint8 x_3; 
x_3 = x_1 <= x_2;
return x_3;
}
}
obj* l_UInt16_hasDecidableLe___boxed(obj* x_1, obj* x_2) {
_start:
{
uint16 x_3; uint16 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = lean::unbox(x_2);
lean::dec(x_2);
x_5 = l_UInt16_hasDecidableLe(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
obj* _init_l_uint32Sz() {
_start:
{
obj* x_1; 
x_1 = lean::mk_nat_obj(lean::mpz("4294967296"));
return x_1;
}
}
obj* l_UInt32_ofNat___boxed(obj* x_1) {
_start:
{
uint32 x_2; obj* x_3; 
x_2 = lean::uint32_of_nat(x_1);
x_3 = lean::box_uint32(x_2);
return x_3;
}
}
obj* l_UInt32_toNat___boxed(obj* x_1) {
_start:
{
uint32 x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_1);
x_3 = lean::uint32_to_nat(x_2);
return x_3;
}
}
obj* l_UInt32_add___boxed(obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; uint32 x_4; uint32 x_5; obj* x_6; 
x_3 = lean::unbox_uint32(x_1);
x_4 = lean::unbox_uint32(x_2);
x_5 = x_3 + x_4;
x_6 = lean::box_uint32(x_5);
return x_6;
}
}
obj* l_UInt32_sub___boxed(obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; uint32 x_4; uint32 x_5; obj* x_6; 
x_3 = lean::unbox_uint32(x_1);
x_4 = lean::unbox_uint32(x_2);
x_5 = x_3 - x_4;
x_6 = lean::box_uint32(x_5);
return x_6;
}
}
obj* l_UInt32_mul___boxed(obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; uint32 x_4; uint32 x_5; obj* x_6; 
x_3 = lean::unbox_uint32(x_1);
x_4 = lean::unbox_uint32(x_2);
x_5 = x_3 * x_4;
x_6 = lean::box_uint32(x_5);
return x_6;
}
}
obj* l_UInt32_div___boxed(obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; uint32 x_4; uint32 x_5; obj* x_6; 
x_3 = lean::unbox_uint32(x_1);
x_4 = lean::unbox_uint32(x_2);
x_5 = x_4 == 0 ? 0 : x_3 / x_4;
x_6 = lean::box_uint32(x_5);
return x_6;
}
}
obj* l_UInt32_mod___boxed(obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; uint32 x_4; uint32 x_5; obj* x_6; 
x_3 = lean::unbox_uint32(x_1);
x_4 = lean::unbox_uint32(x_2);
x_5 = x_4 == 0 ? 0 : x_3 % x_4;
x_6 = lean::box_uint32(x_5);
return x_6;
}
}
obj* l_UInt32_modn___boxed(obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; uint32 x_4; obj* x_5; 
x_3 = lean::unbox_uint32(x_1);
x_4 = lean::uint32_modn(x_3, x_2);
x_5 = lean::box_uint32(x_4);
return x_5;
}
}
obj* l_UInt32_land___boxed(obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; uint32 x_4; uint32 x_5; obj* x_6; 
x_3 = lean::unbox_uint32(x_1);
x_4 = lean::unbox_uint32(x_2);
x_5 = x_3 & x_4;
x_6 = lean::box_uint32(x_5);
return x_6;
}
}
obj* l_UInt32_lor___boxed(obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; uint32 x_4; uint32 x_5; obj* x_6; 
x_3 = lean::unbox_uint32(x_1);
x_4 = lean::unbox_uint32(x_2);
x_5 = x_3 | x_4;
x_6 = lean::box_uint32(x_5);
return x_6;
}
}
uint32 _init_l_UInt32_HasZero() {
_start:
{
uint32 x_1; 
x_1 = 0;
return x_1;
}
}
uint32 _init_l_UInt32_HasOne() {
_start:
{
uint32 x_1; 
x_1 = 1;
return x_1;
}
}
obj* _init_l_UInt32_HasAdd() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt32_add___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt32_HasSub() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt32_sub___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt32_HasMul() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt32_mul___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt32_HasMod() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt32_mod___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt32_HasModn() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt32_modn___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt32_HasDiv() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt32_div___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt32_HasLess() {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
}
obj* _init_l_UInt32_HasLessEq() {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
}
uint32 _init_l_UInt32_Inhabited() {
_start:
{
uint32 x_1; 
x_1 = 0;
return x_1;
}
}
obj* l_UInt32_decEq___boxed(obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; uint32 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox_uint32(x_1);
x_4 = lean::unbox_uint32(x_2);
x_5 = x_3 == x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt32_decLt___boxed(obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; uint32 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox_uint32(x_1);
x_4 = lean::unbox_uint32(x_2);
x_5 = x_3 < x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt32_decLe___boxed(obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; uint32 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox_uint32(x_1);
x_4 = lean::unbox_uint32(x_2);
x_5 = x_3 <= x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* _init_l_UInt32_DecidableEq() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt32_decEq___boxed), 2, 0);
return x_1;
}
}
uint8 l_UInt32_hasDecidableLt(uint32 x_1, uint32 x_2) {
_start:
{
uint8 x_3; 
x_3 = x_1 < x_2;
return x_3;
}
}
obj* l_UInt32_hasDecidableLt___boxed(obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; uint32 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox_uint32(x_1);
lean::dec(x_1);
x_4 = lean::unbox_uint32(x_2);
lean::dec(x_2);
x_5 = l_UInt32_hasDecidableLt(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 l_UInt32_hasDecidableLe(uint32 x_1, uint32 x_2) {
_start:
{
uint8 x_3; 
x_3 = x_1 <= x_2;
return x_3;
}
}
obj* l_UInt32_hasDecidableLe___boxed(obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; uint32 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox_uint32(x_1);
lean::dec(x_1);
x_4 = lean::unbox_uint32(x_2);
lean::dec(x_2);
x_5 = l_UInt32_hasDecidableLe(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
obj* _init_l_uint64Sz() {
_start:
{
obj* x_1; 
x_1 = lean::mk_nat_obj(lean::mpz("18446744073709551616"));
return x_1;
}
}
obj* l_UInt64_ofNat___boxed(obj* x_1) {
_start:
{
uint64 x_2; obj* x_3; 
x_2 = lean::uint64_of_nat(x_1);
x_3 = lean::box_uint64(x_2);
return x_3;
}
}
obj* l_UInt64_toNat___boxed(obj* x_1) {
_start:
{
uint64 x_2; obj* x_3; 
x_2 = lean::unbox_uint64(x_1);
x_3 = lean::uint64_to_nat(x_2);
return x_3;
}
}
obj* l_UInt64_add___boxed(obj* x_1, obj* x_2) {
_start:
{
uint64 x_3; uint64 x_4; uint64 x_5; obj* x_6; 
x_3 = lean::unbox_uint64(x_1);
x_4 = lean::unbox_uint64(x_2);
x_5 = x_3 + x_4;
x_6 = lean::box_uint64(x_5);
return x_6;
}
}
obj* l_UInt64_sub___boxed(obj* x_1, obj* x_2) {
_start:
{
uint64 x_3; uint64 x_4; uint64 x_5; obj* x_6; 
x_3 = lean::unbox_uint64(x_1);
x_4 = lean::unbox_uint64(x_2);
x_5 = x_3 - x_4;
x_6 = lean::box_uint64(x_5);
return x_6;
}
}
obj* l_UInt64_mul___boxed(obj* x_1, obj* x_2) {
_start:
{
uint64 x_3; uint64 x_4; uint64 x_5; obj* x_6; 
x_3 = lean::unbox_uint64(x_1);
x_4 = lean::unbox_uint64(x_2);
x_5 = x_3 * x_4;
x_6 = lean::box_uint64(x_5);
return x_6;
}
}
obj* l_UInt64_div___boxed(obj* x_1, obj* x_2) {
_start:
{
uint64 x_3; uint64 x_4; uint64 x_5; obj* x_6; 
x_3 = lean::unbox_uint64(x_1);
x_4 = lean::unbox_uint64(x_2);
x_5 = x_4 == 0 ? 0 : x_3 / x_4;
x_6 = lean::box_uint64(x_5);
return x_6;
}
}
obj* l_UInt64_mod___boxed(obj* x_1, obj* x_2) {
_start:
{
uint64 x_3; uint64 x_4; uint64 x_5; obj* x_6; 
x_3 = lean::unbox_uint64(x_1);
x_4 = lean::unbox_uint64(x_2);
x_5 = x_4 == 0 ? 0 : x_3 % x_4;
x_6 = lean::box_uint64(x_5);
return x_6;
}
}
obj* l_UInt64_modn___boxed(obj* x_1, obj* x_2) {
_start:
{
uint64 x_3; uint64 x_4; obj* x_5; 
x_3 = lean::unbox_uint64(x_1);
x_4 = lean::uint64_modn(x_3, x_2);
x_5 = lean::box_uint64(x_4);
return x_5;
}
}
obj* l_UInt64_land___boxed(obj* x_1, obj* x_2) {
_start:
{
uint64 x_3; uint64 x_4; uint64 x_5; obj* x_6; 
x_3 = lean::unbox_uint64(x_1);
x_4 = lean::unbox_uint64(x_2);
x_5 = x_3 & x_4;
x_6 = lean::box_uint64(x_5);
return x_6;
}
}
obj* l_UInt64_lor___boxed(obj* x_1, obj* x_2) {
_start:
{
uint64 x_3; uint64 x_4; uint64 x_5; obj* x_6; 
x_3 = lean::unbox_uint64(x_1);
x_4 = lean::unbox_uint64(x_2);
x_5 = x_3 | x_4;
x_6 = lean::box_uint64(x_5);
return x_6;
}
}
uint64 _init_l_UInt64_HasZero() {
_start:
{
uint64 x_1; 
x_1 = 0;
return x_1;
}
}
uint64 _init_l_UInt64_HasOne() {
_start:
{
uint64 x_1; 
x_1 = 1;
return x_1;
}
}
obj* _init_l_UInt64_HasAdd() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt64_add___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt64_HasSub() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt64_sub___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt64_HasMul() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt64_mul___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt64_HasMod() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt64_mod___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt64_HasModn() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt64_modn___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt64_HasDiv() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt64_div___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_UInt64_HasLess() {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
}
obj* _init_l_UInt64_HasLessEq() {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
}
uint64 _init_l_UInt64_Inhabited() {
_start:
{
uint64 x_1; 
x_1 = 0;
return x_1;
}
}
obj* l_UInt64_decEq___boxed(obj* x_1, obj* x_2) {
_start:
{
uint64 x_3; uint64 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox_uint64(x_1);
x_4 = lean::unbox_uint64(x_2);
x_5 = x_3 == x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt64_decLt___boxed(obj* x_1, obj* x_2) {
_start:
{
uint64 x_3; uint64 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox_uint64(x_1);
x_4 = lean::unbox_uint64(x_2);
x_5 = x_3 < x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_UInt64_decLe___boxed(obj* x_1, obj* x_2) {
_start:
{
uint64 x_3; uint64 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox_uint64(x_1);
x_4 = lean::unbox_uint64(x_2);
x_5 = x_3 <= x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* _init_l_UInt64_DecidableEq() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_UInt64_decEq___boxed), 2, 0);
return x_1;
}
}
uint8 l_UInt64_hasDecidableLt(uint64 x_1, uint64 x_2) {
_start:
{
uint8 x_3; 
x_3 = x_1 < x_2;
return x_3;
}
}
obj* l_UInt64_hasDecidableLt___boxed(obj* x_1, obj* x_2) {
_start:
{
uint64 x_3; uint64 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox_uint64(x_1);
lean::dec(x_1);
x_4 = lean::unbox_uint64(x_2);
lean::dec(x_2);
x_5 = l_UInt64_hasDecidableLt(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 l_UInt64_hasDecidableLe(uint64 x_1, uint64 x_2) {
_start:
{
uint8 x_3; 
x_3 = x_1 <= x_2;
return x_3;
}
}
obj* l_UInt64_hasDecidableLe___boxed(obj* x_1, obj* x_2) {
_start:
{
uint64 x_3; uint64 x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox_uint64(x_1);
lean::dec(x_1);
x_4 = lean::unbox_uint64(x_2);
lean::dec(x_2);
x_5 = l_UInt64_hasDecidableLe(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
obj* _init_l_usizeSz() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::mk_nat_obj(2u);
x_2 = l_System_platform_nbits;
x_3 = l_Nat_pow___main(x_1, x_2);
return x_3;
}
}
obj* l_USize_ofNat___boxed(obj* x_1) {
_start:
{
usize x_2; obj* x_3; 
x_2 = lean::usize_of_nat(x_1);
x_3 = lean::box_size_t(x_2);
return x_3;
}
}
obj* l_USize_toNat___boxed(obj* x_1) {
_start:
{
usize x_2; obj* x_3; 
x_2 = lean::unbox_size_t(x_1);
x_3 = lean::usize_to_nat(x_2);
return x_3;
}
}
obj* l_USize_add___boxed(obj* x_1, obj* x_2) {
_start:
{
usize x_3; usize x_4; usize x_5; obj* x_6; 
x_3 = lean::unbox_size_t(x_1);
x_4 = lean::unbox_size_t(x_2);
x_5 = x_3 + x_4;
x_6 = lean::box_size_t(x_5);
return x_6;
}
}
obj* l_USize_sub___boxed(obj* x_1, obj* x_2) {
_start:
{
usize x_3; usize x_4; usize x_5; obj* x_6; 
x_3 = lean::unbox_size_t(x_1);
x_4 = lean::unbox_size_t(x_2);
x_5 = x_3 - x_4;
x_6 = lean::box_size_t(x_5);
return x_6;
}
}
obj* l_USize_mul___boxed(obj* x_1, obj* x_2) {
_start:
{
usize x_3; usize x_4; usize x_5; obj* x_6; 
x_3 = lean::unbox_size_t(x_1);
x_4 = lean::unbox_size_t(x_2);
x_5 = x_3 * x_4;
x_6 = lean::box_size_t(x_5);
return x_6;
}
}
obj* l_USize_div___boxed(obj* x_1, obj* x_2) {
_start:
{
usize x_3; usize x_4; usize x_5; obj* x_6; 
x_3 = lean::unbox_size_t(x_1);
x_4 = lean::unbox_size_t(x_2);
x_5 = x_4 == 0 ? 0 : x_3 / x_4;
x_6 = lean::box_size_t(x_5);
return x_6;
}
}
obj* l_USize_mod___boxed(obj* x_1, obj* x_2) {
_start:
{
usize x_3; usize x_4; usize x_5; obj* x_6; 
x_3 = lean::unbox_size_t(x_1);
x_4 = lean::unbox_size_t(x_2);
x_5 = x_4 == 0 ? 0 : x_3 % x_4;
x_6 = lean::box_size_t(x_5);
return x_6;
}
}
obj* l_USize_modn___boxed(obj* x_1, obj* x_2) {
_start:
{
usize x_3; usize x_4; obj* x_5; 
x_3 = lean::unbox_size_t(x_1);
x_4 = lean::usize_modn(x_3, x_2);
x_5 = lean::box_size_t(x_4);
return x_5;
}
}
obj* l_USize_land___boxed(obj* x_1, obj* x_2) {
_start:
{
usize x_3; usize x_4; usize x_5; obj* x_6; 
x_3 = lean::unbox_size_t(x_1);
x_4 = lean::unbox_size_t(x_2);
x_5 = x_3 & x_4;
x_6 = lean::box_size_t(x_5);
return x_6;
}
}
obj* l_USize_lor___boxed(obj* x_1, obj* x_2) {
_start:
{
usize x_3; usize x_4; usize x_5; obj* x_6; 
x_3 = lean::unbox_size_t(x_1);
x_4 = lean::unbox_size_t(x_2);
x_5 = x_3 | x_4;
x_6 = lean::box_size_t(x_5);
return x_6;
}
}
obj* l_USize_ofUInt32___boxed(obj* x_1) {
_start:
{
uint32 x_2; usize x_3; obj* x_4; 
x_2 = lean::unbox_uint32(x_1);
x_3 = x_2;
x_4 = lean::box_size_t(x_3);
return x_4;
}
}
obj* l_USize_ofUInt64___boxed(obj* x_1) {
_start:
{
uint64 x_2; usize x_3; obj* x_4; 
x_2 = lean::unbox_uint64(x_1);
x_3 = ((lean::usize)x_2);
x_4 = lean::box_size_t(x_3);
return x_4;
}
}
obj* l_USize_shift__left___boxed(obj* x_1, obj* x_2) {
_start:
{
usize x_3; usize x_4; usize x_5; obj* x_6; 
x_3 = lean::unbox_size_t(x_1);
x_4 = lean::unbox_size_t(x_2);
x_5 = x_3 << x_4;
x_6 = lean::box_size_t(x_5);
return x_6;
}
}
obj* l_USize_shift__right___boxed(obj* x_1, obj* x_2) {
_start:
{
usize x_3; usize x_4; usize x_5; obj* x_6; 
x_3 = lean::unbox_size_t(x_1);
x_4 = lean::unbox_size_t(x_2);
x_5 = x_3 >> x_4;
x_6 = lean::box_size_t(x_5);
return x_6;
}
}
usize _init_l_USize_HasZero() {
_start:
{
usize x_1; 
x_1 = 0;
return x_1;
}
}
usize _init_l_USize_HasOne() {
_start:
{
usize x_1; 
x_1 = 1;
return x_1;
}
}
obj* _init_l_USize_HasAdd() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_USize_add___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_USize_HasSub() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_USize_sub___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_USize_HasMul() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_USize_mul___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_USize_HasMod() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_USize_mod___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_USize_HasModn() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_USize_modn___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_USize_HasDiv() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_USize_div___boxed), 2, 0);
return x_1;
}
}
obj* _init_l_USize_HasLess() {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
}
obj* _init_l_USize_HasLessEq() {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
}
usize _init_l_USize_Inhabited() {
_start:
{
usize x_1; 
x_1 = 0;
return x_1;
}
}
obj* l_USize_decEq___boxed(obj* x_1, obj* x_2) {
_start:
{
usize x_3; usize x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox_size_t(x_1);
x_4 = lean::unbox_size_t(x_2);
x_5 = x_3 == x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_USize_decLt___boxed(obj* x_1, obj* x_2) {
_start:
{
usize x_3; usize x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox_size_t(x_1);
x_4 = lean::unbox_size_t(x_2);
x_5 = x_3 < x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* l_USize_decLe___boxed(obj* x_1, obj* x_2) {
_start:
{
usize x_3; usize x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox_size_t(x_1);
x_4 = lean::unbox_size_t(x_2);
x_5 = x_3 <= x_4;
x_6 = lean::box(x_5);
return x_6;
}
}
obj* _init_l_USize_DecidableEq() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_USize_decEq___boxed), 2, 0);
return x_1;
}
}
uint8 l_USize_hasDecidableLt(usize x_1, usize x_2) {
_start:
{
uint8 x_3; 
x_3 = x_1 < x_2;
return x_3;
}
}
obj* l_USize_hasDecidableLt___boxed(obj* x_1, obj* x_2) {
_start:
{
usize x_3; usize x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox_size_t(x_1);
lean::dec(x_1);
x_4 = lean::unbox_size_t(x_2);
lean::dec(x_2);
x_5 = l_USize_hasDecidableLt(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
uint8 l_USize_hasDecidableLe(usize x_1, usize x_2) {
_start:
{
uint8 x_3; 
x_3 = x_1 <= x_2;
return x_3;
}
}
obj* l_USize_hasDecidableLe___boxed(obj* x_1, obj* x_2) {
_start:
{
usize x_3; usize x_4; uint8 x_5; obj* x_6; 
x_3 = lean::unbox_size_t(x_1);
lean::dec(x_1);
x_4 = lean::unbox_size_t(x_2);
lean::dec(x_2);
x_5 = l_USize_hasDecidableLe(x_3, x_4);
x_6 = lean::box(x_5);
return x_6;
}
}
obj* initialize_init_data_fin_basic(obj*);
obj* initialize_init_platform(obj*);
static bool _G_initialized = false;
obj* initialize_init_data_uint(obj* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (io_result_is_error(w)) return w;
w = initialize_init_data_fin_basic(w);
if (io_result_is_error(w)) return w;
w = initialize_init_platform(w);
if (io_result_is_error(w)) return w;
l_uint8Sz = _init_l_uint8Sz();
lean::mark_persistent(l_uint8Sz);
lean::register_constant(lean::mk_const_name("uint8Sz"), l_uint8Sz);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt8"), "ofNat"), 1, l_UInt8_ofNat___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt8"), "toNat"), 1, l_UInt8_toNat___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt8"), "add"), 2, l_UInt8_add___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt8"), "sub"), 2, l_UInt8_sub___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt8"), "mul"), 2, l_UInt8_mul___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt8"), "div"), 2, l_UInt8_div___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt8"), "mod"), 2, l_UInt8_mod___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt8"), "modn"), 2, l_UInt8_modn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt8"), "land"), 2, l_UInt8_land___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt8"), "lor"), 2, l_UInt8_lor___boxed);
l_UInt8_HasZero = _init_l_UInt8_HasZero();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt8"), "HasZero"), lean::box(l_UInt8_HasZero));
l_UInt8_HasOne = _init_l_UInt8_HasOne();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt8"), "HasOne"), lean::box(l_UInt8_HasOne));
l_UInt8_HasAdd = _init_l_UInt8_HasAdd();
lean::mark_persistent(l_UInt8_HasAdd);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt8"), "HasAdd"), l_UInt8_HasAdd);
l_UInt8_HasSub = _init_l_UInt8_HasSub();
lean::mark_persistent(l_UInt8_HasSub);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt8"), "HasSub"), l_UInt8_HasSub);
l_UInt8_HasMul = _init_l_UInt8_HasMul();
lean::mark_persistent(l_UInt8_HasMul);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt8"), "HasMul"), l_UInt8_HasMul);
l_UInt8_HasMod = _init_l_UInt8_HasMod();
lean::mark_persistent(l_UInt8_HasMod);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt8"), "HasMod"), l_UInt8_HasMod);
l_UInt8_HasModn = _init_l_UInt8_HasModn();
lean::mark_persistent(l_UInt8_HasModn);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt8"), "HasModn"), l_UInt8_HasModn);
l_UInt8_HasDiv = _init_l_UInt8_HasDiv();
lean::mark_persistent(l_UInt8_HasDiv);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt8"), "HasDiv"), l_UInt8_HasDiv);
l_UInt8_HasLess = _init_l_UInt8_HasLess();
lean::mark_persistent(l_UInt8_HasLess);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt8"), "HasLess"), l_UInt8_HasLess);
l_UInt8_HasLessEq = _init_l_UInt8_HasLessEq();
lean::mark_persistent(l_UInt8_HasLessEq);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt8"), "HasLessEq"), l_UInt8_HasLessEq);
l_UInt8_Inhabited = _init_l_UInt8_Inhabited();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt8"), "Inhabited"), lean::box(l_UInt8_Inhabited));
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt8"), "decEq"), 2, l_UInt8_decEq___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt8"), "decLt"), 2, l_UInt8_decLt___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt8"), "decLe"), 2, l_UInt8_decLe___boxed);
l_UInt8_DecidableEq = _init_l_UInt8_DecidableEq();
lean::mark_persistent(l_UInt8_DecidableEq);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt8"), "DecidableEq"), l_UInt8_DecidableEq);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt8"), "hasDecidableLt"), 2, l_UInt8_hasDecidableLt___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt8"), "hasDecidableLe"), 2, l_UInt8_hasDecidableLe___boxed);
l_uint16Sz = _init_l_uint16Sz();
lean::mark_persistent(l_uint16Sz);
lean::register_constant(lean::mk_const_name("uint16Sz"), l_uint16Sz);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt16"), "ofNat"), 1, l_UInt16_ofNat___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt16"), "toNat"), 1, l_UInt16_toNat___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt16"), "add"), 2, l_UInt16_add___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt16"), "sub"), 2, l_UInt16_sub___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt16"), "mul"), 2, l_UInt16_mul___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt16"), "div"), 2, l_UInt16_div___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt16"), "mod"), 2, l_UInt16_mod___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt16"), "modn"), 2, l_UInt16_modn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt16"), "land"), 2, l_UInt16_land___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt16"), "lor"), 2, l_UInt16_lor___boxed);
l_UInt16_HasZero = _init_l_UInt16_HasZero();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt16"), "HasZero"), lean::box(l_UInt16_HasZero));
l_UInt16_HasOne = _init_l_UInt16_HasOne();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt16"), "HasOne"), lean::box(l_UInt16_HasOne));
l_UInt16_HasAdd = _init_l_UInt16_HasAdd();
lean::mark_persistent(l_UInt16_HasAdd);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt16"), "HasAdd"), l_UInt16_HasAdd);
l_UInt16_HasSub = _init_l_UInt16_HasSub();
lean::mark_persistent(l_UInt16_HasSub);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt16"), "HasSub"), l_UInt16_HasSub);
l_UInt16_HasMul = _init_l_UInt16_HasMul();
lean::mark_persistent(l_UInt16_HasMul);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt16"), "HasMul"), l_UInt16_HasMul);
l_UInt16_HasMod = _init_l_UInt16_HasMod();
lean::mark_persistent(l_UInt16_HasMod);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt16"), "HasMod"), l_UInt16_HasMod);
l_UInt16_HasModn = _init_l_UInt16_HasModn();
lean::mark_persistent(l_UInt16_HasModn);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt16"), "HasModn"), l_UInt16_HasModn);
l_UInt16_HasDiv = _init_l_UInt16_HasDiv();
lean::mark_persistent(l_UInt16_HasDiv);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt16"), "HasDiv"), l_UInt16_HasDiv);
l_UInt16_HasLess = _init_l_UInt16_HasLess();
lean::mark_persistent(l_UInt16_HasLess);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt16"), "HasLess"), l_UInt16_HasLess);
l_UInt16_HasLessEq = _init_l_UInt16_HasLessEq();
lean::mark_persistent(l_UInt16_HasLessEq);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt16"), "HasLessEq"), l_UInt16_HasLessEq);
l_UInt16_Inhabited = _init_l_UInt16_Inhabited();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt16"), "Inhabited"), lean::box(l_UInt16_Inhabited));
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt16"), "decEq"), 2, l_UInt16_decEq___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt16"), "decLt"), 2, l_UInt16_decLt___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt16"), "decLe"), 2, l_UInt16_decLe___boxed);
l_UInt16_DecidableEq = _init_l_UInt16_DecidableEq();
lean::mark_persistent(l_UInt16_DecidableEq);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt16"), "DecidableEq"), l_UInt16_DecidableEq);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt16"), "hasDecidableLt"), 2, l_UInt16_hasDecidableLt___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt16"), "hasDecidableLe"), 2, l_UInt16_hasDecidableLe___boxed);
l_uint32Sz = _init_l_uint32Sz();
lean::mark_persistent(l_uint32Sz);
lean::register_constant(lean::mk_const_name("uint32Sz"), l_uint32Sz);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt32"), "ofNat"), 1, l_UInt32_ofNat___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt32"), "toNat"), 1, l_UInt32_toNat___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt32"), "add"), 2, l_UInt32_add___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt32"), "sub"), 2, l_UInt32_sub___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt32"), "mul"), 2, l_UInt32_mul___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt32"), "div"), 2, l_UInt32_div___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt32"), "mod"), 2, l_UInt32_mod___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt32"), "modn"), 2, l_UInt32_modn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt32"), "land"), 2, l_UInt32_land___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt32"), "lor"), 2, l_UInt32_lor___boxed);
l_UInt32_HasZero = _init_l_UInt32_HasZero();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt32"), "HasZero"), lean::box_uint32(l_UInt32_HasZero));
l_UInt32_HasOne = _init_l_UInt32_HasOne();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt32"), "HasOne"), lean::box_uint32(l_UInt32_HasOne));
l_UInt32_HasAdd = _init_l_UInt32_HasAdd();
lean::mark_persistent(l_UInt32_HasAdd);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt32"), "HasAdd"), l_UInt32_HasAdd);
l_UInt32_HasSub = _init_l_UInt32_HasSub();
lean::mark_persistent(l_UInt32_HasSub);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt32"), "HasSub"), l_UInt32_HasSub);
l_UInt32_HasMul = _init_l_UInt32_HasMul();
lean::mark_persistent(l_UInt32_HasMul);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt32"), "HasMul"), l_UInt32_HasMul);
l_UInt32_HasMod = _init_l_UInt32_HasMod();
lean::mark_persistent(l_UInt32_HasMod);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt32"), "HasMod"), l_UInt32_HasMod);
l_UInt32_HasModn = _init_l_UInt32_HasModn();
lean::mark_persistent(l_UInt32_HasModn);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt32"), "HasModn"), l_UInt32_HasModn);
l_UInt32_HasDiv = _init_l_UInt32_HasDiv();
lean::mark_persistent(l_UInt32_HasDiv);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt32"), "HasDiv"), l_UInt32_HasDiv);
l_UInt32_HasLess = _init_l_UInt32_HasLess();
lean::mark_persistent(l_UInt32_HasLess);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt32"), "HasLess"), l_UInt32_HasLess);
l_UInt32_HasLessEq = _init_l_UInt32_HasLessEq();
lean::mark_persistent(l_UInt32_HasLessEq);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt32"), "HasLessEq"), l_UInt32_HasLessEq);
l_UInt32_Inhabited = _init_l_UInt32_Inhabited();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt32"), "Inhabited"), lean::box_uint32(l_UInt32_Inhabited));
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt32"), "decEq"), 2, l_UInt32_decEq___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt32"), "decLt"), 2, l_UInt32_decLt___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt32"), "decLe"), 2, l_UInt32_decLe___boxed);
l_UInt32_DecidableEq = _init_l_UInt32_DecidableEq();
lean::mark_persistent(l_UInt32_DecidableEq);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt32"), "DecidableEq"), l_UInt32_DecidableEq);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt32"), "hasDecidableLt"), 2, l_UInt32_hasDecidableLt___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt32"), "hasDecidableLe"), 2, l_UInt32_hasDecidableLe___boxed);
l_uint64Sz = _init_l_uint64Sz();
lean::mark_persistent(l_uint64Sz);
lean::register_constant(lean::mk_const_name("uint64Sz"), l_uint64Sz);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt64"), "ofNat"), 1, l_UInt64_ofNat___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt64"), "toNat"), 1, l_UInt64_toNat___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt64"), "add"), 2, l_UInt64_add___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt64"), "sub"), 2, l_UInt64_sub___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt64"), "mul"), 2, l_UInt64_mul___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt64"), "div"), 2, l_UInt64_div___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt64"), "mod"), 2, l_UInt64_mod___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt64"), "modn"), 2, l_UInt64_modn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt64"), "land"), 2, l_UInt64_land___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt64"), "lor"), 2, l_UInt64_lor___boxed);
l_UInt64_HasZero = _init_l_UInt64_HasZero();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt64"), "HasZero"), lean::box_uint64(l_UInt64_HasZero));
l_UInt64_HasOne = _init_l_UInt64_HasOne();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt64"), "HasOne"), lean::box_uint64(l_UInt64_HasOne));
l_UInt64_HasAdd = _init_l_UInt64_HasAdd();
lean::mark_persistent(l_UInt64_HasAdd);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt64"), "HasAdd"), l_UInt64_HasAdd);
l_UInt64_HasSub = _init_l_UInt64_HasSub();
lean::mark_persistent(l_UInt64_HasSub);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt64"), "HasSub"), l_UInt64_HasSub);
l_UInt64_HasMul = _init_l_UInt64_HasMul();
lean::mark_persistent(l_UInt64_HasMul);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt64"), "HasMul"), l_UInt64_HasMul);
l_UInt64_HasMod = _init_l_UInt64_HasMod();
lean::mark_persistent(l_UInt64_HasMod);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt64"), "HasMod"), l_UInt64_HasMod);
l_UInt64_HasModn = _init_l_UInt64_HasModn();
lean::mark_persistent(l_UInt64_HasModn);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt64"), "HasModn"), l_UInt64_HasModn);
l_UInt64_HasDiv = _init_l_UInt64_HasDiv();
lean::mark_persistent(l_UInt64_HasDiv);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt64"), "HasDiv"), l_UInt64_HasDiv);
l_UInt64_HasLess = _init_l_UInt64_HasLess();
lean::mark_persistent(l_UInt64_HasLess);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt64"), "HasLess"), l_UInt64_HasLess);
l_UInt64_HasLessEq = _init_l_UInt64_HasLessEq();
lean::mark_persistent(l_UInt64_HasLessEq);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt64"), "HasLessEq"), l_UInt64_HasLessEq);
l_UInt64_Inhabited = _init_l_UInt64_Inhabited();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt64"), "Inhabited"), lean::box_uint64(l_UInt64_Inhabited));
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt64"), "decEq"), 2, l_UInt64_decEq___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt64"), "decLt"), 2, l_UInt64_decLt___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt64"), "decLe"), 2, l_UInt64_decLe___boxed);
l_UInt64_DecidableEq = _init_l_UInt64_DecidableEq();
lean::mark_persistent(l_UInt64_DecidableEq);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("UInt64"), "DecidableEq"), l_UInt64_DecidableEq);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt64"), "hasDecidableLt"), 2, l_UInt64_hasDecidableLt___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("UInt64"), "hasDecidableLe"), 2, l_UInt64_hasDecidableLe___boxed);
l_usizeSz = _init_l_usizeSz();
lean::mark_persistent(l_usizeSz);
lean::register_constant(lean::mk_const_name("usizeSz"), l_usizeSz);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "ofNat"), 1, l_USize_ofNat___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "toNat"), 1, l_USize_toNat___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "add"), 2, l_USize_add___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "sub"), 2, l_USize_sub___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "mul"), 2, l_USize_mul___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "div"), 2, l_USize_div___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "mod"), 2, l_USize_mod___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "modn"), 2, l_USize_modn___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "land"), 2, l_USize_land___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "lor"), 2, l_USize_lor___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "ofUInt32"), 1, l_USize_ofUInt32___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "ofUInt64"), 1, l_USize_ofUInt64___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "shift_left"), 2, l_USize_shift__left___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "shift_right"), 2, l_USize_shift__right___boxed);
l_USize_HasZero = _init_l_USize_HasZero();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("USize"), "HasZero"), lean::box_size_t(l_USize_HasZero));
l_USize_HasOne = _init_l_USize_HasOne();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("USize"), "HasOne"), lean::box_size_t(l_USize_HasOne));
l_USize_HasAdd = _init_l_USize_HasAdd();
lean::mark_persistent(l_USize_HasAdd);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("USize"), "HasAdd"), l_USize_HasAdd);
l_USize_HasSub = _init_l_USize_HasSub();
lean::mark_persistent(l_USize_HasSub);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("USize"), "HasSub"), l_USize_HasSub);
l_USize_HasMul = _init_l_USize_HasMul();
lean::mark_persistent(l_USize_HasMul);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("USize"), "HasMul"), l_USize_HasMul);
l_USize_HasMod = _init_l_USize_HasMod();
lean::mark_persistent(l_USize_HasMod);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("USize"), "HasMod"), l_USize_HasMod);
l_USize_HasModn = _init_l_USize_HasModn();
lean::mark_persistent(l_USize_HasModn);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("USize"), "HasModn"), l_USize_HasModn);
l_USize_HasDiv = _init_l_USize_HasDiv();
lean::mark_persistent(l_USize_HasDiv);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("USize"), "HasDiv"), l_USize_HasDiv);
l_USize_HasLess = _init_l_USize_HasLess();
lean::mark_persistent(l_USize_HasLess);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("USize"), "HasLess"), l_USize_HasLess);
l_USize_HasLessEq = _init_l_USize_HasLessEq();
lean::mark_persistent(l_USize_HasLessEq);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("USize"), "HasLessEq"), l_USize_HasLessEq);
l_USize_Inhabited = _init_l_USize_Inhabited();
lean::register_constant(lean::mk_const_name(lean::mk_const_name("USize"), "Inhabited"), lean::box_size_t(l_USize_Inhabited));
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "decEq"), 2, l_USize_decEq___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "decLt"), 2, l_USize_decLt___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "decLe"), 2, l_USize_decLe___boxed);
l_USize_DecidableEq = _init_l_USize_DecidableEq();
lean::mark_persistent(l_USize_DecidableEq);
lean::register_constant(lean::mk_const_name(lean::mk_const_name("USize"), "DecidableEq"), l_USize_DecidableEq);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "hasDecidableLt"), 2, l_USize_hasDecidableLt___boxed);
REGISTER_LEAN_FUNCTION(lean::mk_const_name(lean::mk_const_name("USize"), "hasDecidableLe"), 2, l_USize_hasDecidableLe___boxed);
return w;
}
