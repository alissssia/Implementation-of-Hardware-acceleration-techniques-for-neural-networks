// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_patching_16.h for the primary calling header

#include "Vtop_patching_16__pch.h"
#include "Vtop_patching_16_top_patching_16.h"

VL_INLINE_OPT void Vtop_patching_16_top_patching_16___ico_sequent__TOP__top_patching_16__0(Vtop_patching_16_top_patching_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_patching_16_top_patching_16___ico_sequent__TOP__top_patching_16__0\n"); );
    // Body
    vlSelf->chosen_activation[0U] = (vlSelf->p[0U] ? 
                                     vlSelf->__PVT__activation_cache
                                     [0U] : vlSelf->activation_org
                                     [0U]);
    vlSelf->chosen_activation[1U] = (vlSelf->p[1U] ? 
                                     vlSelf->__PVT__activation_cache
                                     [1U] : vlSelf->activation_org
                                     [1U]);
    vlSelf->chosen_activation[2U] = (vlSelf->p[2U] ? 
                                     vlSelf->__PVT__activation_cache
                                     [2U] : vlSelf->activation_org
                                     [2U]);
    vlSelf->chosen_activation[3U] = (vlSelf->p[3U] ? 
                                     vlSelf->__PVT__activation_cache
                                     [3U] : vlSelf->activation_org
                                     [3U]);
    vlSelf->chosen_activation[4U] = (vlSelf->p[4U] ? 
                                     vlSelf->__PVT__activation_cache
                                     [4U] : vlSelf->activation_org
                                     [4U]);
    vlSelf->chosen_activation[5U] = (vlSelf->p[5U] ? 
                                     vlSelf->__PVT__activation_cache
                                     [5U] : vlSelf->activation_org
                                     [5U]);
    vlSelf->chosen_activation[6U] = (vlSelf->p[6U] ? 
                                     vlSelf->__PVT__activation_cache
                                     [6U] : vlSelf->activation_org
                                     [6U]);
    vlSelf->chosen_activation[7U] = (vlSelf->p[7U] ? 
                                     vlSelf->__PVT__activation_cache
                                     [7U] : vlSelf->activation_org
                                     [7U]);
    vlSelf->chosen_activation[8U] = (vlSelf->p[8U] ? 
                                     vlSelf->__PVT__activation_cache
                                     [8U] : vlSelf->activation_org
                                     [8U]);
    vlSelf->chosen_activation[9U] = (vlSelf->p[9U] ? 
                                     vlSelf->__PVT__activation_cache
                                     [9U] : vlSelf->activation_org
                                     [9U]);
    vlSelf->chosen_activation[0xaU] = (vlSelf->p[0xaU]
                                        ? vlSelf->__PVT__activation_cache
                                       [0xaU] : vlSelf->activation_org
                                       [0xaU]);
    vlSelf->chosen_activation[0xbU] = (vlSelf->p[0xbU]
                                        ? vlSelf->__PVT__activation_cache
                                       [0xbU] : vlSelf->activation_org
                                       [0xbU]);
    vlSelf->chosen_activation[0xcU] = (vlSelf->p[0xcU]
                                        ? vlSelf->__PVT__activation_cache
                                       [0xcU] : vlSelf->activation_org
                                       [0xcU]);
    vlSelf->chosen_activation[0xdU] = (vlSelf->p[0xdU]
                                        ? vlSelf->__PVT__activation_cache
                                       [0xdU] : vlSelf->activation_org
                                       [0xdU]);
    vlSelf->chosen_activation[0xeU] = (vlSelf->p[0xeU]
                                        ? vlSelf->__PVT__activation_cache
                                       [0xeU] : vlSelf->activation_org
                                       [0xeU]);
    vlSelf->chosen_activation[0xfU] = (vlSelf->p[0xfU]
                                        ? vlSelf->__PVT__activation_cache
                                       [0xfU] : vlSelf->activation_org
                                       [0xfU]);
}
