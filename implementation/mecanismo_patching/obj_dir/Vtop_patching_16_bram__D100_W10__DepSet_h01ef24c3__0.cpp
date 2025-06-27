// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_patching_16.h for the primary calling header

#include "Vtop_patching_16__pch.h"
#include "Vtop_patching_16__Syms.h"
#include "Vtop_patching_16_bram__D100_W10.h"

VL_INLINE_OPT void Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0(Vtop_patching_16_bram__D100_W10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0\n"); );
    // Body
    vlSelf->__VdlySet__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((1U & (IData)(vlSymsp->TOP__top_patching_16__patch_cache.__PVT__write_enable_data))) {
            vlSelf->__VdlyVal__ram__v0 = vlSymsp->TOP.activation_in;
            vlSelf->__VdlyDim0__ram__v0 = (0xffU & vlSymsp->TOP.address);
            vlSelf->__VdlySet__ram__v0 = 1U;
        }
    }
}

VL_INLINE_OPT void Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__1(Vtop_patching_16_bram__D100_W10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__data_out = 0U;
    } else if (vlSymsp->TOP__top_patching_16__patch_cache.__PVT__enable_read) {
        vlSelf->__PVT__data_out = vlSelf->ram[(0xffU 
                                               & vlSymsp->TOP.address)];
    }
    if (vlSelf->__VdlySet__ram__v0) {
        vlSelf->ram[vlSelf->__VdlyDim0__ram__v0] = vlSelf->__VdlyVal__ram__v0;
    }
}

VL_INLINE_OPT void Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0(Vtop_patching_16_bram__D100_W10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0\n"); );
    // Body
    vlSelf->__VdlySet__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((2U & (IData)(vlSymsp->TOP__top_patching_16__patch_cache.__PVT__write_enable_data))) {
            vlSelf->__VdlyVal__ram__v0 = vlSymsp->TOP.activation_in;
            vlSelf->__VdlyDim0__ram__v0 = (0xffU & vlSymsp->TOP.address);
            vlSelf->__VdlySet__ram__v0 = 1U;
        }
    }
}

VL_INLINE_OPT void Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0(Vtop_patching_16_bram__D100_W10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0\n"); );
    // Body
    vlSelf->__VdlySet__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((4U & (IData)(vlSymsp->TOP__top_patching_16__patch_cache.__PVT__write_enable_data))) {
            vlSelf->__VdlyVal__ram__v0 = vlSymsp->TOP.activation_in;
            vlSelf->__VdlyDim0__ram__v0 = (0xffU & vlSymsp->TOP.address);
            vlSelf->__VdlySet__ram__v0 = 1U;
        }
    }
}

VL_INLINE_OPT void Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0(Vtop_patching_16_bram__D100_W10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0\n"); );
    // Body
    vlSelf->__VdlySet__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((8U & (IData)(vlSymsp->TOP__top_patching_16__patch_cache.__PVT__write_enable_data))) {
            vlSelf->__VdlyVal__ram__v0 = vlSymsp->TOP.activation_in;
            vlSelf->__VdlyDim0__ram__v0 = (0xffU & vlSymsp->TOP.address);
            vlSelf->__VdlySet__ram__v0 = 1U;
        }
    }
}

VL_INLINE_OPT void Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0(Vtop_patching_16_bram__D100_W10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0\n"); );
    // Body
    vlSelf->__VdlySet__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((0x10U & (IData)(vlSymsp->TOP__top_patching_16__patch_cache.__PVT__write_enable_data))) {
            vlSelf->__VdlyVal__ram__v0 = vlSymsp->TOP.activation_in;
            vlSelf->__VdlyDim0__ram__v0 = (0xffU & vlSymsp->TOP.address);
            vlSelf->__VdlySet__ram__v0 = 1U;
        }
    }
}
