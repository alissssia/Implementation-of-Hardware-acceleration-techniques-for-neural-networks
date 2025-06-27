// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_mechanisms_fpga_bueno.h for the primary calling header

#include "Vtest_mechanisms_fpga_bueno__pch.h"
#include "Vtest_mechanisms_fpga_bueno_cache_way__Td_D10_S8.h"

VL_ATTR_COLD void Vtest_mechanisms_fpga_bueno_cache_way__Td_D10_S8___ctor_var_reset(Vtest_mechanisms_fpga_bueno_cache_way__Td_D10_S8* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_mechanisms_fpga_bueno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_mechanisms_fpga_bueno_cache_way__Td_D10_S8___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__resetn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enable_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_enable_tag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_enable_data = VL_RAND_RESET_I(1);
    vlSelf->__PVT__set_index = VL_RAND_RESET_I(8);
    vlSelf->__PVT__tag_in = VL_RAND_RESET_I(13);
    vlSelf->__PVT__data_in = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tag_out = VL_RAND_RESET_I(13);
    vlSelf->__PVT__data_out = VL_RAND_RESET_I(16);
}
