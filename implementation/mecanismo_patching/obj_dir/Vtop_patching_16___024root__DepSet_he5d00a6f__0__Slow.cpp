// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_patching_16.h for the primary calling header

#include "Vtop_patching_16__pch.h"
#include "Vtop_patching_16__Syms.h"
#include "Vtop_patching_16___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_patching_16___024root___dump_triggers__stl(Vtop_patching_16___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_patching_16___024root___eval_triggers__stl(Vtop_patching_16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_16___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_patching_16___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop_patching_16___024root___stl_sequent__TOP__0(Vtop_patching_16___024root* vlSelf);
VL_ATTR_COLD void Vtop_patching_16_cache_tfg___stl_sequent__TOP__top_patching_16__patch_cache__0(Vtop_patching_16_cache_tfg* vlSelf);
void Vtop_patching_16_top_patching_16___ico_sequent__TOP__top_patching_16__0(Vtop_patching_16_top_patching_16* vlSelf);
VL_ATTR_COLD void Vtop_patching_16___024root___stl_sequent__TOP__1(Vtop_patching_16___024root* vlSelf);

VL_ATTR_COLD void Vtop_patching_16___024root___eval_stl(Vtop_patching_16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_16___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_patching_16___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_patching_16_cache_tfg___stl_sequent__TOP__top_patching_16__patch_cache__0((&vlSymsp->TOP__top_patching_16__patch_cache));
        Vtop_patching_16_top_patching_16___ico_sequent__TOP__top_patching_16__0((&vlSymsp->TOP__top_patching_16));
        Vtop_patching_16___024root___stl_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vtop_patching_16___024root___stl_sequent__TOP__0(Vtop_patching_16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_16___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->error = vlSymsp->TOP__top_patching_16__patch_cache.__PVT__error_reg;
    vlSymsp->TOP__top_patching_16.activation_org[0xfU] 
        = vlSelf->activation_org[0xfU];
    vlSymsp->TOP__top_patching_16.activation_org[0xeU] 
        = vlSelf->activation_org[0xeU];
    vlSymsp->TOP__top_patching_16.activation_org[0xdU] 
        = vlSelf->activation_org[0xdU];
    vlSymsp->TOP__top_patching_16.activation_org[0xcU] 
        = vlSelf->activation_org[0xcU];
    vlSymsp->TOP__top_patching_16.activation_org[0xbU] 
        = vlSelf->activation_org[0xbU];
    vlSymsp->TOP__top_patching_16.activation_org[0xaU] 
        = vlSelf->activation_org[0xaU];
    vlSymsp->TOP__top_patching_16.activation_org[9U] 
        = vlSelf->activation_org[9U];
    vlSymsp->TOP__top_patching_16.activation_org[8U] 
        = vlSelf->activation_org[8U];
    vlSymsp->TOP__top_patching_16.activation_org[7U] 
        = vlSelf->activation_org[7U];
    vlSymsp->TOP__top_patching_16.activation_org[6U] 
        = vlSelf->activation_org[6U];
    vlSymsp->TOP__top_patching_16.activation_org[5U] 
        = vlSelf->activation_org[5U];
    vlSymsp->TOP__top_patching_16.activation_org[4U] 
        = vlSelf->activation_org[4U];
    vlSymsp->TOP__top_patching_16.activation_org[3U] 
        = vlSelf->activation_org[3U];
    vlSymsp->TOP__top_patching_16.activation_org[2U] 
        = vlSelf->activation_org[2U];
    vlSymsp->TOP__top_patching_16.activation_org[1U] 
        = vlSelf->activation_org[1U];
    vlSymsp->TOP__top_patching_16.activation_org[0U] 
        = vlSelf->activation_org[0U];
    vlSymsp->TOP__top_patching_16.p[0xfU] = vlSelf->p
        [0xfU];
    vlSymsp->TOP__top_patching_16.p[0xeU] = vlSelf->p
        [0xeU];
    vlSymsp->TOP__top_patching_16.p[0xdU] = vlSelf->p
        [0xdU];
    vlSymsp->TOP__top_patching_16.p[0xcU] = vlSelf->p
        [0xcU];
    vlSymsp->TOP__top_patching_16.p[0xbU] = vlSelf->p
        [0xbU];
    vlSymsp->TOP__top_patching_16.p[0xaU] = vlSelf->p
        [0xaU];
    vlSymsp->TOP__top_patching_16.p[9U] = vlSelf->p
        [9U];
    vlSymsp->TOP__top_patching_16.p[8U] = vlSelf->p
        [8U];
    vlSymsp->TOP__top_patching_16.p[7U] = vlSelf->p
        [7U];
    vlSymsp->TOP__top_patching_16.p[6U] = vlSelf->p
        [6U];
    vlSymsp->TOP__top_patching_16.p[5U] = vlSelf->p
        [5U];
    vlSymsp->TOP__top_patching_16.p[4U] = vlSelf->p
        [4U];
    vlSymsp->TOP__top_patching_16.p[3U] = vlSelf->p
        [3U];
    vlSymsp->TOP__top_patching_16.p[2U] = vlSelf->p
        [2U];
    vlSymsp->TOP__top_patching_16.p[1U] = vlSelf->p
        [1U];
    vlSymsp->TOP__top_patching_16.p[0U] = vlSelf->p
        [0U];
}

VL_ATTR_COLD void Vtop_patching_16___024root___stl_sequent__TOP__1(Vtop_patching_16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_16___024root___stl_sequent__TOP__1\n"); );
    // Body
    vlSelf->valid = vlSymsp->TOP__top_patching_16__patch_cache.__PVT__valid;
    vlSelf->chosen_activation[0xfU] = vlSymsp->TOP__top_patching_16.chosen_activation
        [0xfU];
    vlSelf->chosen_activation[0xeU] = vlSymsp->TOP__top_patching_16.chosen_activation
        [0xeU];
    vlSelf->chosen_activation[0xdU] = vlSymsp->TOP__top_patching_16.chosen_activation
        [0xdU];
    vlSelf->chosen_activation[0xcU] = vlSymsp->TOP__top_patching_16.chosen_activation
        [0xcU];
    vlSelf->chosen_activation[0xbU] = vlSymsp->TOP__top_patching_16.chosen_activation
        [0xbU];
    vlSelf->chosen_activation[0xaU] = vlSymsp->TOP__top_patching_16.chosen_activation
        [0xaU];
    vlSelf->chosen_activation[9U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [9U];
    vlSelf->chosen_activation[8U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [8U];
    vlSelf->chosen_activation[7U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [7U];
    vlSelf->chosen_activation[6U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [6U];
    vlSelf->chosen_activation[5U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [5U];
    vlSelf->chosen_activation[4U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [4U];
    vlSelf->chosen_activation[3U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [3U];
    vlSelf->chosen_activation[2U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [2U];
    vlSelf->chosen_activation[1U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [1U];
    vlSelf->chosen_activation[0U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [0U];
}
