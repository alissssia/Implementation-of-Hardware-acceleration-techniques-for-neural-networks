// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_patching_uno.h for the primary calling header

#include "Vtop_patching_uno__pch.h"
#include "Vtop_patching_uno_top_patching_uno.h"

VL_ATTR_COLD void Vtop_patching_uno_top_patching_uno___ctor_var_reset(Vtop_patching_uno_top_patching_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_patching_uno_top_patching_uno___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->request = VL_RAND_RESET_I(1);
    vlSelf->read_write = VL_RAND_RESET_I(1);
    vlSelf->address = VL_RAND_RESET_I(21);
    vlSelf->activation_in = VL_RAND_RESET_I(16);
    vlSelf->p = VL_RAND_RESET_I(1);
    vlSelf->activation_org = VL_RAND_RESET_I(16);
    vlSelf->chosen_activation = VL_RAND_RESET_I(16);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->error = VL_RAND_RESET_I(1);
}
