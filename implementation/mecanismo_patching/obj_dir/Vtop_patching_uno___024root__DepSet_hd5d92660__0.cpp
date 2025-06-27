// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_patching_uno.h for the primary calling header

#include "Vtop_patching_uno__pch.h"
#include "Vtop_patching_uno___024root.h"

void Vtop_patching_uno___024root___eval_triggers__ico(Vtop_patching_uno___024root* vlSelf);
void Vtop_patching_uno___024root___eval_ico(Vtop_patching_uno___024root* vlSelf);

bool Vtop_patching_uno___024root___eval_phase__ico(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop_patching_uno___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop_patching_uno___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop_patching_uno___024root___eval_act(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___eval_act\n"); );
}

void Vtop_patching_uno___024root___eval_triggers__act(Vtop_patching_uno___024root* vlSelf);

bool Vtop_patching_uno___024root___eval_phase__act(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_patching_uno___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop_patching_uno___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtop_patching_uno___024root___eval_nba(Vtop_patching_uno___024root* vlSelf);

bool Vtop_patching_uno___024root___eval_phase__nba(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop_patching_uno___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_patching_uno___024root___dump_triggers__ico(Vtop_patching_uno___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_patching_uno___024root___dump_triggers__nba(Vtop_patching_uno___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_patching_uno___024root___dump_triggers__act(Vtop_patching_uno___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_patching_uno___024root___eval(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___eval\n"); );
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
            Vtop_patching_uno___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top_patching_uno.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop_patching_uno___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop_patching_uno___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top_patching_uno.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop_patching_uno___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top_patching_uno.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop_patching_uno___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop_patching_uno___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop_patching_uno___024root___eval_debug_assertions(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->request & 0xfeU))) {
        Verilated::overWidthError("request");}
    if (VL_UNLIKELY((vlSelf->read_write & 0xfeU))) {
        Verilated::overWidthError("read_write");}
    if (VL_UNLIKELY((vlSelf->address & 0xffe00000U))) {
        Verilated::overWidthError("address");}
    if (VL_UNLIKELY((vlSelf->p & 0xfeU))) {
        Verilated::overWidthError("p");}
}
#endif  // VL_DEBUG
