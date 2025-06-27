// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vflipflop_uno.h for the primary calling header

#include "Vflipflop_uno__pch.h"
#include "Vflipflop_uno__Syms.h"
#include "Vflipflop_uno___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vflipflop_uno___024root___dump_triggers__stl(Vflipflop_uno___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vflipflop_uno___024root___eval_triggers__stl(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vflipflop_uno___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
