// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_mechanisms_fpga_bueno.h for the primary calling header

#include "Vtest_mechanisms_fpga_bueno__pch.h"
#include "Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno.h"

VL_ATTR_COLD void Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno___ctor_var_reset(Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_mechanisms_fpga_bueno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->activation_org = VL_RAND_RESET_I(16);
    vlSelf->activation_cache = VL_RAND_RESET_I(16);
    vlSelf->f = VL_RAND_RESET_I(1);
    vlSelf->p = VL_RAND_RESET_I(1);
    vlSelf->request = VL_RAND_RESET_I(1);
    vlSelf->read_write = VL_RAND_RESET_I(1);
    vlSelf->address = VL_RAND_RESET_I(21);
    vlSelf->activation_in = VL_RAND_RESET_I(16);
    vlSelf->flipped_out = VL_RAND_RESET_I(16);
    vlSelf->patched_out = VL_RAND_RESET_I(16);
    vlSelf->activation_final = VL_RAND_RESET_I(16);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar = VL_RAND_RESET_I(16);
}
