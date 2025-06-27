// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmecanismo_flipping_uno.h for the primary calling header

#include "Vmecanismo_flipping_uno__pch.h"
#include "Vmecanismo_flipping_uno__Syms.h"
#include "Vmecanismo_flipping_uno___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmecanismo_flipping_uno___024root___dump_triggers__ico(Vmecanismo_flipping_uno___024root* vlSelf);
#endif  // VL_DEBUG

void Vmecanismo_flipping_uno___024root___eval_triggers__ico(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmecanismo_flipping_uno___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmecanismo_flipping_uno___024root___dump_triggers__act(Vmecanismo_flipping_uno___024root* vlSelf);
#endif  // VL_DEBUG

void Vmecanismo_flipping_uno___024root___eval_triggers__act(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmecanismo_flipping_uno___024root___dump_triggers__act(vlSelf);
    }
#endif
}
