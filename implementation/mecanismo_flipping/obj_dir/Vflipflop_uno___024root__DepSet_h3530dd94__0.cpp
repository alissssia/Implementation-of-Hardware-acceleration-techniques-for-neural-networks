// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vflipflop_uno.h for the primary calling header

#include "Vflipflop_uno__pch.h"
#include "Vflipflop_uno__Syms.h"
#include "Vflipflop_uno___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vflipflop_uno___024root___dump_triggers__act(Vflipflop_uno___024root* vlSelf);
#endif  // VL_DEBUG

void Vflipflop_uno___024root___eval_triggers__act(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->flipflop_vector__02Eclk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__flipflop_vector__02Eclk__0))) 
                                     | ((IData)(vlSelf->flipflop_vector__02Erst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__flipflop_vector__02Erst__0)))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->flipflop_bloque__02Eclk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__flipflop_bloque__02Eclk__0))) 
                                     | ((IData)(vlSelf->flipflop_bloque__02Erst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__flipflop_bloque__02Erst__0)))));
    vlSelf->__Vtrigprevexpr___TOP__flipflop_vector__02Eclk__0 
        = vlSelf->flipflop_vector__02Eclk;
    vlSelf->__Vtrigprevexpr___TOP__flipflop_vector__02Erst__0 
        = vlSelf->flipflop_vector__02Erst;
    vlSelf->__Vtrigprevexpr___TOP__flipflop_bloque__02Eclk__0 
        = vlSelf->flipflop_bloque__02Eclk;
    vlSelf->__Vtrigprevexpr___TOP__flipflop_bloque__02Erst__0 
        = vlSelf->flipflop_bloque__02Erst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vflipflop_uno___024root___dump_triggers__act(vlSelf);
    }
#endif
}
