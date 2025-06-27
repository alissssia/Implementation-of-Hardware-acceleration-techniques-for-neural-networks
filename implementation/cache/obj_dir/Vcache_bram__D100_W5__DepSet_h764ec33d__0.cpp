// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache.h for the primary calling header

#include "Vcache__pch.h"
#include "Vcache__Syms.h"
#include "Vcache_bram__D100_W5.h"

VL_INLINE_OPT void Vcache_bram__D100_W5___nba_sequent__TOP__cache__valid_bram__0(Vcache_bram__D100_W5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcache_bram__D100_W5___nba_sequent__TOP__cache__valid_bram__0\n"); );
    // Body
    vlSelf->__VdlySet__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->TOP__cache.__PVT__enable_write_valid) {
            vlSelf->__VdlyVal__ram__v0 = vlSymsp->TOP__cache.__PVT__valid_bits_next;
            vlSelf->__VdlyDim0__ram__v0 = (0xffU & vlSymsp->TOP.address);
            vlSelf->__VdlySet__ram__v0 = 1U;
        }
    }
}

VL_INLINE_OPT void Vcache_bram__D100_W5___nba_sequent__TOP__cache__valid_bram__1(Vcache_bram__D100_W5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcache_bram__D100_W5___nba_sequent__TOP__cache__valid_bram__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__data_out = 0U;
    } else if (vlSymsp->TOP__cache.__PVT__enable_read_valid) {
        vlSelf->__PVT__data_out = vlSelf->ram[(0xffU 
                                               & vlSymsp->TOP.address)];
    }
    if (vlSelf->__VdlySet__ram__v0) {
        vlSelf->ram[vlSelf->__VdlyDim0__ram__v0] = vlSelf->__VdlyVal__ram__v0;
    }
}
