// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache_tfg.h for the primary calling header

#include "Vcache_tfg__pch.h"
#include "Vcache_tfg__Syms.h"
#include "Vcache_tfg_bram__D100_Wd.h"

void Vcache_tfg_bram__D100_Wd___ctor_var_reset(Vcache_tfg_bram__D100_Wd* vlSelf);

Vcache_tfg_bram__D100_Wd::Vcache_tfg_bram__D100_Wd(Vcache_tfg__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcache_tfg_bram__D100_Wd___ctor_var_reset(this);
}

void Vcache_tfg_bram__D100_Wd::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcache_tfg_bram__D100_Wd::~Vcache_tfg_bram__D100_Wd() {
}
