// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache_tfg.h for the primary calling header

#include "Vcache_tfg__pch.h"
#include "Vcache_tfg_cache_tfg.h"

VL_ATTR_COLD void Vcache_tfg_cache_tfg___ctor_var_reset(Vcache_tfg_cache_tfg* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache_tfg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcache_tfg_cache_tfg___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->address = VL_RAND_RESET_I(21);
    vlSelf->read_write = VL_RAND_RESET_I(1);
    vlSelf->activation_in = VL_RAND_RESET_I(16);
    vlSelf->request = VL_RAND_RESET_I(1);
    vlSelf->activation_out = VL_RAND_RESET_I(16);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->error = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__tag_out[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->__PVT__write_enable_tag = VL_RAND_RESET_I(5);
    vlSelf->__PVT__write_enable_data = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__valid_bits_array[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__PVT__valid_bits_out = VL_RAND_RESET_I(5);
    vlSelf->__PVT__valid_bits_next = VL_RAND_RESET_I(5);
    vlSelf->__PVT__valid_way = VL_RAND_RESET_I(3);
    vlSelf->__PVT__hit_mask = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__hit_logic_inst__tags_outs[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->__PVT__state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__next_state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__enable_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enable_write_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enable_ram_output = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->write_way_selector_inst__DOT____Vlvbound_hcc6fd8b1__0 = VL_RAND_RESET_I(1);
    vlSelf->write_enable_generator_inst__DOT____Vlvbound_hd1dcecc8__0 = VL_RAND_RESET_I(1);
    vlSelf->write_enable_generator_inst__DOT____Vlvbound_h4ac1e79a__0 = VL_RAND_RESET_I(1);
}
