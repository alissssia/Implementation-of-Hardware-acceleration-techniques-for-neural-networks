// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_patching_16.h for the primary calling header

#include "Vtop_patching_16__pch.h"
#include "Vtop_patching_16__Syms.h"
#include "Vtop_patching_16_bram__D100_W10.h"

void Vtop_patching_16_bram__D100_W10___ctor_var_reset(Vtop_patching_16_bram__D100_W10* vlSelf);

Vtop_patching_16_bram__D100_W10::Vtop_patching_16_bram__D100_W10(Vtop_patching_16__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_patching_16_bram__D100_W10___ctor_var_reset(this);
}

void Vtop_patching_16_bram__D100_W10::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_patching_16_bram__D100_W10::~Vtop_patching_16_bram__D100_W10() {
}
