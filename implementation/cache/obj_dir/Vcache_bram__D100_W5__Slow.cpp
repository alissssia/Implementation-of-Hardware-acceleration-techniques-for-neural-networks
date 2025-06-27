// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache.h for the primary calling header

#include "Vcache__pch.h"
#include "Vcache__Syms.h"
#include "Vcache_bram__D100_W5.h"

void Vcache_bram__D100_W5___ctor_var_reset(Vcache_bram__D100_W5* vlSelf);

Vcache_bram__D100_W5::Vcache_bram__D100_W5(Vcache__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcache_bram__D100_W5___ctor_var_reset(this);
}

void Vcache_bram__D100_W5::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcache_bram__D100_W5::~Vcache_bram__D100_W5() {
}
