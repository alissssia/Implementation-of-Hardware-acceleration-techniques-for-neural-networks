// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_mechanisms_fpga_bueno.h for the primary calling header

#include "Vtest_mechanisms_fpga_bueno__pch.h"
#include "Vtest_mechanisms_fpga_bueno__Syms.h"
#include "Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno.h"

void Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno___ctor_var_reset(Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno* vlSelf);

Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno::Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno(Vtest_mechanisms_fpga_bueno__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno___ctor_var_reset(this);
}

void Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno::~Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno() {
}
