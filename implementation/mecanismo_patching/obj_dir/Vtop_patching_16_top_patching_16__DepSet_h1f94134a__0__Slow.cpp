// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_patching_16.h for the primary calling header

#include "Vtop_patching_16__pch.h"
#include "Vtop_patching_16_top_patching_16.h"

VL_ATTR_COLD void Vtop_patching_16_top_patching_16___ctor_var_reset(Vtop_patching_16_top_patching_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_patching_16_top_patching_16___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->request = VL_RAND_RESET_I(1);
    vlSelf->read_write = VL_RAND_RESET_I(1);
    vlSelf->address = VL_RAND_RESET_I(21);
    vlSelf->activation_in = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->p[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->activation_org[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->index = VL_RAND_RESET_I(4);
    vlSelf->store_enable = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->chosen_activation[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->error = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__activation_cache[__Vi0] = VL_RAND_RESET_I(16);
    }
}
