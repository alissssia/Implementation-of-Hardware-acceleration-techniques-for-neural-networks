// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_patching_uno.h for the primary calling header

#include "Vtop_patching_uno__pch.h"
#include "Vtop_patching_uno__Syms.h"
#include "Vtop_patching_uno___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_patching_uno___024root___dump_triggers__stl(Vtop_patching_uno___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_patching_uno___024root___eval_triggers__stl(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_patching_uno___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop_patching_uno___024root___stl_sequent__TOP__0(Vtop_patching_uno___024root* vlSelf);
VL_ATTR_COLD void Vtop_patching_uno_cache_tfg___stl_sequent__TOP__top_patching_uno__patch_cache__0(Vtop_patching_uno_cache_tfg* vlSelf);
void Vtop_patching_uno___024root___ico_sequent__TOP__0(Vtop_patching_uno___024root* vlSelf);

VL_ATTR_COLD void Vtop_patching_uno___024root___eval_stl(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_patching_uno___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_patching_uno_cache_tfg___stl_sequent__TOP__top_patching_uno__patch_cache__0((&vlSymsp->TOP__top_patching_uno__patch_cache));
        Vtop_patching_uno___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop_patching_uno___024root___stl_sequent__TOP__0(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->error = vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__error_reg;
}
