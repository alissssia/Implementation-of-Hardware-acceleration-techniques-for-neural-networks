// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmecanismo_flipping_uno.h for the primary calling header

#include "Vmecanismo_flipping_uno__pch.h"
#include "Vmecanismo_flipping_uno___024root.h"

void Vmecanismo_flipping_uno___024root___ico_sequent__TOP__0(Vmecanismo_flipping_uno___024root* vlSelf);

void Vmecanismo_flipping_uno___024root___eval_ico(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmecanismo_flipping_uno___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmecanismo_flipping_uno___024root___ico_sequent__TOP__0(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->b = ((0x8000U & (((IData)(vlSelf->f) ? (IData)(vlSelf->a)
                               : ((IData)(vlSelf->a) 
                                  >> 0xfU)) << 0xfU)) 
                 | ((0x4000U & (((IData)(vlSelf->f)
                                  ? ((IData)(vlSelf->a) 
                                     >> 1U) : ((IData)(vlSelf->a) 
                                               >> 0xeU)) 
                                << 0xeU)) | ((0x2000U 
                                              & (((IData)(vlSelf->f)
                                                   ? 
                                                  ((IData)(vlSelf->a) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSelf->a) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((IData)(vlSelf->f)
                                                      ? 
                                                     ((IData)(vlSelf->a) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSelf->a) 
                                                      >> 0xcU)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((IData)(vlSelf->f)
                                                         ? 
                                                        ((IData)(vlSelf->a) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSelf->a) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((IData)(vlSelf->f)
                                                            ? 
                                                           ((IData)(vlSelf->a) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSelf->a) 
                                                            >> 0xaU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((IData)(vlSelf->f)
                                                               ? 
                                                              ((IData)(vlSelf->a) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSelf->a) 
                                                               >> 9U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((IData)(vlSelf->f)
                                                                  ? 
                                                                 ((IData)(vlSelf->a) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSelf->a) 
                                                                  >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((IData)(vlSelf->f)
                                                                     ? 
                                                                    ((IData)(vlSelf->a) 
                                                                     >> 8U)
                                                                     : 
                                                                    ((IData)(vlSelf->a) 
                                                                     >> 7U)) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((IData)(vlSelf->f)
                                                                        ? 
                                                                       ((IData)(vlSelf->a) 
                                                                        >> 9U)
                                                                        : 
                                                                       ((IData)(vlSelf->a) 
                                                                        >> 6U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSelf->f)
                                                                           ? 
                                                                          ((IData)(vlSelf->a) 
                                                                           >> 0xaU)
                                                                           : 
                                                                          ((IData)(vlSelf->a) 
                                                                           >> 5U)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((IData)(vlSelf->f)
                                                                              ? 
                                                                             ((IData)(vlSelf->a) 
                                                                              >> 0xbU)
                                                                              : 
                                                                             ((IData)(vlSelf->a) 
                                                                              >> 4U)) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSelf->f)
                                                                                 ? 
                                                                                ((IData)(vlSelf->a) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSelf->a) 
                                                                                >> 3U)) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSelf->f)
                                                                                 ? 
                                                                                ((IData)(vlSelf->a) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSelf->a) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSelf->f)
                                                                                 ? 
                                                                                ((IData)(vlSelf->a) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSelf->a) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->f)
                                                                                 ? 
                                                                                ((IData)(vlSelf->a) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSelf->a))))))))))))))))));
}

void Vmecanismo_flipping_uno___024root___eval_triggers__ico(Vmecanismo_flipping_uno___024root* vlSelf);

bool Vmecanismo_flipping_uno___024root___eval_phase__ico(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmecanismo_flipping_uno___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vmecanismo_flipping_uno___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmecanismo_flipping_uno___024root___eval_act(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___eval_act\n"); );
}

void Vmecanismo_flipping_uno___024root___eval_nba(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___eval_nba\n"); );
}

void Vmecanismo_flipping_uno___024root___eval_triggers__act(Vmecanismo_flipping_uno___024root* vlSelf);

bool Vmecanismo_flipping_uno___024root___eval_phase__act(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmecanismo_flipping_uno___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vmecanismo_flipping_uno___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmecanismo_flipping_uno___024root___eval_phase__nba(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmecanismo_flipping_uno___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmecanismo_flipping_uno___024root___dump_triggers__ico(Vmecanismo_flipping_uno___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmecanismo_flipping_uno___024root___dump_triggers__nba(Vmecanismo_flipping_uno___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmecanismo_flipping_uno___024root___dump_triggers__act(Vmecanismo_flipping_uno___024root* vlSelf);
#endif  // VL_DEBUG

void Vmecanismo_flipping_uno___024root___eval(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vmecanismo_flipping_uno___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("mecanismo_flipping_uno.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmecanismo_flipping_uno___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmecanismo_flipping_uno___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("mecanismo_flipping_uno.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vmecanismo_flipping_uno___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("mecanismo_flipping_uno.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vmecanismo_flipping_uno___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vmecanismo_flipping_uno___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmecanismo_flipping_uno___024root___eval_debug_assertions(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->f & 0xfeU))) {
        Verilated::overWidthError("f");}
}
#endif  // VL_DEBUG
