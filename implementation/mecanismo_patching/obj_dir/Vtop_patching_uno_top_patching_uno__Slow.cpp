// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_patching_uno.h for the primary calling header

#include "Vtop_patching_uno__pch.h"
#include "Vtop_patching_uno__Syms.h"
#include "Vtop_patching_uno_top_patching_uno.h"

void Vtop_patching_uno_top_patching_uno___ctor_var_reset(Vtop_patching_uno_top_patching_uno* vlSelf);

Vtop_patching_uno_top_patching_uno::Vtop_patching_uno_top_patching_uno(Vtop_patching_uno__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_patching_uno_top_patching_uno___ctor_var_reset(this);
}

void Vtop_patching_uno_top_patching_uno::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_patching_uno_top_patching_uno::~Vtop_patching_uno_top_patching_uno() {
}
