// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache.h for the primary calling header

#include "Vcache__pch.h"
#include "Vcache__Syms.h"
#include "Vcache_bram__D100_W10.h"

VL_INLINE_OPT void Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0(Vcache_bram__D100_W10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0\n"); );
    // Init
    SData/*15:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((1U & (IData)(vlSymsp->TOP__cache.__PVT__write_enable_data))) {
            __VdlyVal__ram__v0 = vlSymsp->TOP.activation_in;
            __VdlyDim0__ram__v0 = (0xffU & vlSymsp->TOP.address);
            __VdlySet__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__data_out = 0U;
    } else if (vlSymsp->TOP__cache.__PVT__enable_read) {
        vlSelf->__PVT__data_out = vlSelf->ram[(0xffU 
                                               & vlSymsp->TOP.address)];
    }
    if (__VdlySet__ram__v0) {
        vlSelf->ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}

VL_INLINE_OPT void Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0(Vcache_bram__D100_W10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0\n"); );
    // Init
    SData/*15:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((2U & (IData)(vlSymsp->TOP__cache.__PVT__write_enable_data))) {
            __VdlyVal__ram__v0 = vlSymsp->TOP.activation_in;
            __VdlyDim0__ram__v0 = (0xffU & vlSymsp->TOP.address);
            __VdlySet__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__data_out = 0U;
    } else if (vlSymsp->TOP__cache.__PVT__enable_read) {
        vlSelf->__PVT__data_out = vlSelf->ram[(0xffU 
                                               & vlSymsp->TOP.address)];
    }
    if (__VdlySet__ram__v0) {
        vlSelf->ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}

VL_INLINE_OPT void Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0(Vcache_bram__D100_W10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0\n"); );
    // Init
    SData/*15:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((4U & (IData)(vlSymsp->TOP__cache.__PVT__write_enable_data))) {
            __VdlyVal__ram__v0 = vlSymsp->TOP.activation_in;
            __VdlyDim0__ram__v0 = (0xffU & vlSymsp->TOP.address);
            __VdlySet__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__data_out = 0U;
    } else if (vlSymsp->TOP__cache.__PVT__enable_read) {
        vlSelf->__PVT__data_out = vlSelf->ram[(0xffU 
                                               & vlSymsp->TOP.address)];
    }
    if (__VdlySet__ram__v0) {
        vlSelf->ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}

VL_INLINE_OPT void Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0(Vcache_bram__D100_W10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0\n"); );
    // Init
    SData/*15:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((8U & (IData)(vlSymsp->TOP__cache.__PVT__write_enable_data))) {
            __VdlyVal__ram__v0 = vlSymsp->TOP.activation_in;
            __VdlyDim0__ram__v0 = (0xffU & vlSymsp->TOP.address);
            __VdlySet__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__data_out = 0U;
    } else if (vlSymsp->TOP__cache.__PVT__enable_read) {
        vlSelf->__PVT__data_out = vlSelf->ram[(0xffU 
                                               & vlSymsp->TOP.address)];
    }
    if (__VdlySet__ram__v0) {
        vlSelf->ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}

VL_INLINE_OPT void Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0(Vcache_bram__D100_W10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0\n"); );
    // Init
    SData/*15:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((0x10U & (IData)(vlSymsp->TOP__cache.__PVT__write_enable_data))) {
            __VdlyVal__ram__v0 = vlSymsp->TOP.activation_in;
            __VdlyDim0__ram__v0 = (0xffU & vlSymsp->TOP.address);
            __VdlySet__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__data_out = 0U;
    } else if (vlSymsp->TOP__cache.__PVT__enable_read) {
        vlSelf->__PVT__data_out = vlSelf->ram[(0xffU 
                                               & vlSymsp->TOP.address)];
    }
    if (__VdlySet__ram__v0) {
        vlSelf->ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}
