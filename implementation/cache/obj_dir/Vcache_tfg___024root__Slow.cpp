// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache_tfg.h for the primary calling header

#include "Vcache_tfg__pch.h"
#include "Vcache_tfg__Syms.h"
#include "Vcache_tfg___024root.h"

void Vcache_tfg___024root___ctor_var_reset(Vcache_tfg___024root* vlSelf);

Vcache_tfg___024root::Vcache_tfg___024root(Vcache_tfg__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcache_tfg___024root___ctor_var_reset(this);
}

void Vcache_tfg___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcache_tfg___024root::~Vcache_tfg___024root() {
}
