// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_mechanisms_fpga_bueno.h for the primary calling header

#include "Vtest_mechanisms_fpga_bueno__pch.h"
#include "Vtest_mechanisms_fpga_bueno_top_patching_uno.h"

VL_ATTR_COLD void Vtest_mechanisms_fpga_bueno_top_patching_uno___ctor_var_reset(Vtest_mechanisms_fpga_bueno_top_patching_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_mechanisms_fpga_bueno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_mechanisms_fpga_bueno_top_patching_uno___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__request = VL_RAND_RESET_I(1);
    vlSelf->__PVT__read_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__address = VL_RAND_RESET_I(21);
    vlSelf->__PVT__activation_in = VL_RAND_RESET_I(16);
    vlSelf->__PVT__p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__activation_org = VL_RAND_RESET_I(16);
    vlSelf->__PVT__chosen_activation = VL_RAND_RESET_I(16);
    vlSelf->__PVT__valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error = VL_RAND_RESET_I(1);
}
