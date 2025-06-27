// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_patching_uno.h for the primary calling header

#include "Vtop_patching_uno__pch.h"
#include "Vtop_patching_uno_bram__D100_W10.h"

VL_ATTR_COLD void Vtop_patching_uno_bram__D100_W10___ctor_var_reset(Vtop_patching_uno_bram__D100_W10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_patching_uno_bram__D100_W10___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__resetn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_read = VL_RAND_RESET_I(8);
    vlSelf->__PVT__addr_write = VL_RAND_RESET_I(8);
    vlSelf->__PVT__data_in = VL_RAND_RESET_I(16);
    vlSelf->__PVT__data_out = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->ram[__Vi0] = VL_RAND_RESET_I(16);
    }
}
