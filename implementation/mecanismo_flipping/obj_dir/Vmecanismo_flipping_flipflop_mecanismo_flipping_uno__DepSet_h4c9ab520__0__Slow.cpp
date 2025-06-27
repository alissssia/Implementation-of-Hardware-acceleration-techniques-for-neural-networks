// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmecanismo_flipping_flipflop.h for the primary calling header

#include "Vmecanismo_flipping_flipflop__pch.h"
#include "Vmecanismo_flipping_flipflop_mecanismo_flipping_uno.h"

VL_ATTR_COLD void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___ctor_var_reset(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(16);
    vlSelf->f = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(16);
}
