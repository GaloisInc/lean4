/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "util/name_map.h"
#include "util/list.h"
#include "kernel/expr.h"
#include "library/compiler/util.h"

namespace lean {
struct builin_decl {
    expr              m_type;
    unsigned          m_arity;
    char const *      m_cname;
    void *            m_cfn_ptr;
    bool              m_borrowed_res;
    list<bool>        m_borrowed_args;
    builin_decl() {}
    builin_decl(expr const & type, unsigned arity, char const * cname, void * cfn_ptr, bool bres, list<bool> const & bargs):
        m_type(type), m_arity(arity), m_cname(cname), m_cfn_ptr(cfn_ptr), m_borrowed_res(bres), m_borrowed_args(bargs) {
    }
};

static name_map<builin_decl> * g_builtin_decls = nullptr;

void register_builtin(name const & n, expr const & type, unsigned arity, char const * cname, void * cfn_ptr, bool borrowed_res, list<bool> const & borrowed_arg) {
    lean_assert(!g_builtin_decls->contains(n));
    g_builtin_decls->insert(n, builin_decl(type, arity, cname, cfn_ptr, borrowed_res, borrowed_arg));
}

void register_builtin(name const & n, expr const & type, char const * cname, void * cfn_ptr, bool borrowed_res, list<bool> const & borrowed_arg) {
    unsigned arity = get_arity(type);
    return register_builtin(n, type, arity, cname, cfn_ptr, borrowed_res, borrowed_arg);
}

void register_builtin(name const & n, expr const & type, char const * cname, void * cfn_ptr, list<bool> const & borrowed_arg) {
    return register_builtin(n, type, cname, cfn_ptr, false, borrowed_arg);
}

void register_builtin(name const & n, expr const & type, unsigned arity, char const * cname, void * cfn_ptr) {
    buffer<bool> borrowed;
    borrowed.resize(arity, false);
    return register_builtin(n, type, arity, cname, cfn_ptr, false, to_list(borrowed));
}

void register_builtin(name const & n, expr const & type, char const * cname, void * cfn_ptr) {
    unsigned arity = get_arity(type);
    return register_builtin(n, type, arity, cname, cfn_ptr);
}

#define V(p) reinterpret_cast<void*>(p)

void initialize_builtin() {
    g_builtin_decls = new name_map<builin_decl>();

    expr o    = mk_enf_object_type();
    expr o_o  = mk_arrow(o, o);
    expr o2_o = mk_arrow(o, o_o);
    list<bool> b1{true};
    list<bool> b2{true, true};

    /* nat builtin functions */
    register_builtin(name({"nat", "add"}), o2_o, "nat_add", V(nat_add), b2);
    register_builtin(name({"nat", "sub"}), o2_o, "nat_sub", V(nat_sub), b2);
    register_builtin(name({"nat", "mul"}), o2_o, "nat_mul", V(nat_mul), b2);
    register_builtin(name({"nat", "div"}), o2_o, "nat_div", V(nat_div), b2);
    register_builtin(name({"nat", "mod"}), o2_o, "nat_mod", V(nat_mod), b2);
    register_builtin(name({"nat", "dec_eq"}), o2_o, "nat_dec_eq", V(nat_dec_eq), b2);
    register_builtin(name({"nat", "dec_lt"}), o2_o, "nat_dec_lt", V(nat_dec_lt), b2);
    register_builtin(name({"nat", "dec_le"}), o2_o, "nat_dec_le", V(nat_dec_le), b2);

    /* int builtin functions */
    register_builtin(name({"int", "of_nat"}), o_o, "nat2int", V(nat2int), b1);
    register_builtin(name({"int", "neg_succ_of_nat"}), o_o, "int_neg_succ_of_nat", V(int_neg_succ_of_nat), b1);
    register_builtin(name({"int", "nat_abs"}), o_o, "nat_abs", V(nat_abs), b1);
    register_builtin(name({"int", "neg"}), o_o, "int_neg", V(int_neg), b1);
    register_builtin(name({"int", "add"}), o2_o, "int_add", V(int_add), b2);
    register_builtin(name({"int", "sub"}), o2_o, "int_sub", V(int_sub), b2);
    register_builtin(name({"int", "mul"}), o2_o, "int_mul", V(int_mul), b2);
    register_builtin(name({"int", "quot"}), o2_o, "int_div", V(int_div), b2);
    register_builtin(name({"int", "rem"}), o2_o, "int_rem", V(int_rem), b2);
    register_builtin(name({"int", "dec_eq"}), o2_o, "int_dec_eq", V(int_dec_eq), b2);
    register_builtin(name({"int", "dec_lt"}), o2_o, "int_dec_lt", V(int_dec_lt), b2);
    register_builtin(name({"int", "dec_le"}), o2_o, "int_dec_le", V(int_dec_le), b2);
}

void finalize_builtin() {
    delete g_builtin_decls;
}
}