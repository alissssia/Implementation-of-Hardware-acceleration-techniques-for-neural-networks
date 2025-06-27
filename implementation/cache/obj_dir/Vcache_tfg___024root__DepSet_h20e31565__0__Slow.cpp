// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache_tfg.h for the primary calling header

#include "Vcache_tfg__pch.h"
#include "Vcache_tfg__Syms.h"
#include "Vcache_tfg___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcache_tfg___024root___dump_triggers__stl(Vcache_tfg___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcache_tfg___024root___eval_triggers__stl(Vcache_tfg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache_tfg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tfg___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcache_tfg___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vcache_tfg___024root___stl_sequent__TOP__0(Vcache_tfg___024root* vlSelf);
VL_ATTR_COLD void Vcache_tfg_cache_tfg___stl_sequent__TOP__cache_tfg__0(Vcache_tfg_cache_tfg* vlSelf);
void Vcache_tfg___024root___ico_sequent__TOP__0(Vcache_tfg___024root* vlSelf);

VL_ATTR_COLD void Vcache_tfg___024root___eval_stl(Vcache_tfg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache_tfg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tfg___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcache_tfg___024root___stl_sequent__TOP__0(vlSelf);
        Vcache_tfg_cache_tfg___stl_sequent__TOP__cache_tfg__0((&vlSymsp->TOP__cache_tfg));
        Vcache_tfg___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcache_tfg___024root___stl_sequent__TOP__0(Vcache_tfg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache_tfg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tfg___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->error = vlSymsp->TOP__cache_tfg.__PVT__error_reg;
}
