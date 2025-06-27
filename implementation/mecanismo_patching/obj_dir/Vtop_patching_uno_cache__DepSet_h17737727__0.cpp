// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_patching_uno.h for the primary calling header

#include "Vtop_patching_uno__pch.h"
#include "Vtop_patching_uno__Syms.h"
#include "Vtop_patching_uno_cache.h"

extern const VlUnpacked<CData/*2:0*/, 128> Vtop_patching_uno__ConstPool__TABLE_he4111221_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_patching_uno__ConstPool__TABLE_hb9d54fc4_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_patching_uno__ConstPool__TABLE_h599c0850_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_patching_uno__ConstPool__TABLE_h08e7034b_0;

VL_INLINE_OPT void Vtop_patching_uno_cache___ico_sequent__TOP__top_patching_uno__patch_cache__0(Vtop_patching_uno_cache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_patching_uno_cache___ico_sequent__TOP__top_patching_uno__patch_cache__0\n"); );
    // Init
    CData/*2:0*/ __PVT__way_to_write;
    __PVT__way_to_write = 0;
    CData/*0:0*/ __PVT__enable_write;
    __PVT__enable_write = 0;
    CData/*0:0*/ __PVT__enable_write_way_bit;
    __PVT__enable_write_way_bit = 0;
    CData/*4:0*/ __PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits;
    __PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits = 0;
    CData/*0:0*/ hit_logic_inst__DOT____Vlvbound_h725b0b14__0;
    hit_logic_inst__DOT____Vlvbound_h725b0b14__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__PVT__valid_bits_out = vlSelf->__PVT__valid_bits_array
        [(0xffU & vlSymsp->TOP.address)];
    vlSelf->__PVT__valid = (0U != (0x1fU & (~ vlSelf->__PVT__valid_bits_array
                                            [(0xffU 
                                              & vlSymsp->TOP.address)])));
    vlSelf->__PVT__valid_way = 7U;
    hit_logic_inst__DOT____Vlvbound_h725b0b14__0 = 
        ((IData)(vlSelf->__PVT__valid_bits_out) & (
                                                   vlSelf->__Vcellinp__hit_logic_inst__tags_outs
                                                   [0U] 
                                                   == 
                                                   (0x1fffU 
                                                    & (vlSymsp->TOP.address 
                                                       >> 8U))));
    vlSelf->__PVT__hit_mask = ((0x1eU & (IData)(vlSelf->__PVT__hit_mask)) 
                               | (IData)(hit_logic_inst__DOT____Vlvbound_h725b0b14__0));
    if ((1U & (IData)(vlSelf->__PVT__hit_mask))) {
        vlSelf->__PVT__valid_way = 0U;
    }
    hit_logic_inst__DOT____Vlvbound_h725b0b14__0 = 
        (((IData)(vlSelf->__PVT__valid_bits_out) >> 1U) 
         & (vlSelf->__Vcellinp__hit_logic_inst__tags_outs
            [1U] == (0x1fffU & (vlSymsp->TOP.address 
                                >> 8U))));
    vlSelf->__PVT__hit_mask = ((0x1dU & (IData)(vlSelf->__PVT__hit_mask)) 
                               | ((IData)(hit_logic_inst__DOT____Vlvbound_h725b0b14__0) 
                                  << 1U));
    if ((2U & (IData)(vlSelf->__PVT__hit_mask))) {
        vlSelf->__PVT__valid_way = 1U;
    }
    hit_logic_inst__DOT____Vlvbound_h725b0b14__0 = 
        (((IData)(vlSelf->__PVT__valid_bits_out) >> 2U) 
         & (vlSelf->__Vcellinp__hit_logic_inst__tags_outs
            [2U] == (0x1fffU & (vlSymsp->TOP.address 
                                >> 8U))));
    vlSelf->__PVT__hit_mask = ((0x1bU & (IData)(vlSelf->__PVT__hit_mask)) 
                               | ((IData)(hit_logic_inst__DOT____Vlvbound_h725b0b14__0) 
                                  << 2U));
    if ((4U & (IData)(vlSelf->__PVT__hit_mask))) {
        vlSelf->__PVT__valid_way = 2U;
    }
    hit_logic_inst__DOT____Vlvbound_h725b0b14__0 = 
        (((IData)(vlSelf->__PVT__valid_bits_out) >> 3U) 
         & (vlSelf->__Vcellinp__hit_logic_inst__tags_outs
            [3U] == (0x1fffU & (vlSymsp->TOP.address 
                                >> 8U))));
    vlSelf->__PVT__hit_mask = ((0x17U & (IData)(vlSelf->__PVT__hit_mask)) 
                               | ((IData)(hit_logic_inst__DOT____Vlvbound_h725b0b14__0) 
                                  << 3U));
    if ((8U & (IData)(vlSelf->__PVT__hit_mask))) {
        vlSelf->__PVT__valid_way = 3U;
    }
    hit_logic_inst__DOT____Vlvbound_h725b0b14__0 = 
        (((IData)(vlSelf->__PVT__valid_bits_out) >> 4U) 
         & (vlSelf->__Vcellinp__hit_logic_inst__tags_outs
            [4U] == (0x1fffU & (vlSymsp->TOP.address 
                                >> 8U))));
    vlSelf->__PVT__hit_mask = ((0xfU & (IData)(vlSelf->__PVT__hit_mask)) 
                               | ((IData)(hit_logic_inst__DOT____Vlvbound_h725b0b14__0) 
                                  << 4U));
    if ((0x10U & (IData)(vlSelf->__PVT__hit_mask))) {
        vlSelf->__PVT__valid_way = 4U;
    }
    __Vtableidx1 = (((IData)(vlSelf->__PVT__valid) 
                     << 6U) | (((IData)(vlSymsp->TOP.read_write) 
                                << 5U) | (((IData)(vlSymsp->TOP.request) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP.reset) 
                                            << 3U) 
                                           | (IData)(vlSelf->__PVT__state)))));
    vlSelf->__PVT__next_state = Vtop_patching_uno__ConstPool__TABLE_he4111221_0
        [__Vtableidx1];
    vlSelf->__PVT__enable_read = Vtop_patching_uno__ConstPool__TABLE_hb9d54fc4_0
        [__Vtableidx1];
    __PVT__enable_write = Vtop_patching_uno__ConstPool__TABLE_h599c0850_0
        [__Vtableidx1];
    vlSelf->__PVT__enable_write_valid = Vtop_patching_uno__ConstPool__TABLE_h599c0850_0
        [__Vtableidx1];
    vlSelf->__PVT__enable_ram_output = Vtop_patching_uno__ConstPool__TABLE_h08e7034b_0
        [__Vtableidx1];
    __PVT__enable_write_way_bit = Vtop_patching_uno__ConstPool__TABLE_h599c0850_0
        [__Vtableidx1];
    __PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits 
        = vlSelf->__PVT__valid_bits_out;
    __PVT__way_to_write = 0U;
    if (__PVT__enable_write_way_bit) {
        vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        {
            while ((5U > vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
                if ((1U & (~ ((4U >= (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) 
                              && (1U & ((IData)(vlSelf->__PVT__valid_bits_out) 
                                        >> (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))))))) {
                    __PVT__way_to_write = (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
                    vlSelf->write_way_selector_inst__DOT____Vlvbound_hcc6fd8b1__0 = 1U;
                    if (VL_LIKELY((4U >= (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)))) {
                        __PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits 
                            = (((~ ((IData)(1U) << 
                                    (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))) 
                                & (IData)(__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits)) 
                               | (0x1fU & ((IData)(vlSelf->write_way_selector_inst__DOT____Vlvbound_hcc6fd8b1__0) 
                                           << (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))));
                    }
                    goto __Vlabel1;
                }
                vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
            }
            __Vlabel1: ;
        }
    }
    vlSelf->__PVT__valid_bits_next = __PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits;
    vlSelf->__PVT__write_enable_data = 0U;
    vlSelf->__PVT__write_enable_tag = 0U;
    if (__PVT__enable_write) {
        vlSelf->write_enable_generator_inst__DOT____Vlvbound_h4ac1e79a__0 = 1U;
        vlSelf->write_enable_generator_inst__DOT____Vlvbound_hd1dcecc8__0 = 1U;
        if ((4U >= (IData)(__PVT__way_to_write))) {
            vlSelf->__PVT__write_enable_data = (((~ 
                                                  ((IData)(1U) 
                                                   << (IData)(__PVT__way_to_write))) 
                                                 & (IData)(vlSelf->__PVT__write_enable_data)) 
                                                | (0x1fU 
                                                   & ((IData)(vlSelf->write_enable_generator_inst__DOT____Vlvbound_h4ac1e79a__0) 
                                                      << (IData)(__PVT__way_to_write))));
            vlSelf->__PVT__write_enable_tag = (((~ 
                                                 ((IData)(1U) 
                                                  << (IData)(__PVT__way_to_write))) 
                                                & (IData)(vlSelf->__PVT__write_enable_tag)) 
                                               | (0x1fU 
                                                  & ((IData)(vlSelf->write_enable_generator_inst__DOT____Vlvbound_hd1dcecc8__0) 
                                                     << (IData)(__PVT__way_to_write))));
        }
    }
}

VL_INLINE_OPT void Vtop_patching_uno_cache___nba_sequent__TOP__top_patching_uno__patch_cache__0(Vtop_patching_uno_cache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_patching_uno_cache___nba_sequent__TOP__top_patching_uno__patch_cache__0\n"); );
    // Body
    vlSelf->__PVT__tag_out[0U] = vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram.__PVT__data_out;
    vlSelf->__PVT__tag_out[1U] = vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram.__PVT__data_out;
    vlSelf->__PVT__tag_out[2U] = vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram.__PVT__data_out;
    vlSelf->__PVT__tag_out[3U] = vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram.__PVT__data_out;
    vlSelf->__PVT__tag_out[4U] = vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram.__PVT__data_out;
    vlSelf->__Vcellinp__hit_logic_inst__tags_outs[4U] 
        = vlSelf->__PVT__tag_out[4U];
    vlSelf->__Vcellinp__hit_logic_inst__tags_outs[3U] 
        = vlSelf->__PVT__tag_out[3U];
    vlSelf->__Vcellinp__hit_logic_inst__tags_outs[2U] 
        = vlSelf->__PVT__tag_out[2U];
    vlSelf->__Vcellinp__hit_logic_inst__tags_outs[1U] 
        = vlSelf->__PVT__tag_out[1U];
    vlSelf->__Vcellinp__hit_logic_inst__tags_outs[0U] 
        = vlSelf->__PVT__tag_out[0U];
}

VL_INLINE_OPT void Vtop_patching_uno_cache___nba_sequent__TOP__top_patching_uno__patch_cache__1(Vtop_patching_uno_cache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_patching_uno_cache___nba_sequent__TOP__top_patching_uno__patch_cache__1\n"); );
    // Init
    CData/*2:0*/ __PVT__way_to_write;
    __PVT__way_to_write = 0;
    CData/*0:0*/ __PVT__enable_write;
    __PVT__enable_write = 0;
    CData/*0:0*/ __PVT__enable_write_way_bit;
    __PVT__enable_write_way_bit = 0;
    CData/*4:0*/ __PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits;
    __PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __VdlyDim0__valid_bits_array__v0;
    __VdlyDim0__valid_bits_array__v0 = 0;
    CData/*4:0*/ __VdlyVal__valid_bits_array__v1;
    __VdlyVal__valid_bits_array__v1 = 0;
    CData/*7:0*/ __VdlyDim0__valid_bits_array__v1;
    __VdlyDim0__valid_bits_array__v1 = 0;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelf->__PVT__unnamedblk1__DOT__i)) {
            __VdlyDim0__valid_bits_array__v0 = (0xffU 
                                                & vlSelf->__PVT__unnamedblk1__DOT__i);
            vlSelf->__VdlyCommitQueue__valid_bits_array__v0.enqueue(0U, (IData)(__VdlyDim0__valid_bits_array__v0));
            vlSelf->__PVT__unnamedblk1__DOT__i = ((IData)(1U) 
                                                  + vlSelf->__PVT__unnamedblk1__DOT__i);
        }
    } else if (vlSelf->__PVT__enable_write_valid) {
        __VdlyVal__valid_bits_array__v1 = vlSelf->__PVT__valid_bits_next;
        __VdlyDim0__valid_bits_array__v1 = (0xffU & vlSymsp->TOP.address);
        vlSelf->__VdlyCommitQueue__valid_bits_array__v0.enqueue(__VdlyVal__valid_bits_array__v1, (IData)(__VdlyDim0__valid_bits_array__v1));
    }
    vlSelf->__PVT__state = ((IData)(vlSymsp->TOP.reset)
                             ? 0U : (IData)(vlSelf->__PVT__next_state));
    vlSelf->__PVT__error_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                && (1U == (IData)(vlSelf->__PVT__next_state)));
    vlSelf->__VdlyCommitQueue__valid_bits_array__v0.commit(vlSelf->__PVT__valid_bits_array);
    vlSelf->__PVT__valid_bits_out = vlSelf->__PVT__valid_bits_array
        [(0xffU & vlSymsp->TOP.address)];
    vlSelf->__PVT__valid = (0U != (0x1fU & (~ vlSelf->__PVT__valid_bits_array
                                            [(0xffU 
                                              & vlSymsp->TOP.address)])));
    __Vtableidx1 = (((IData)(vlSelf->__PVT__valid) 
                     << 6U) | (((IData)(vlSymsp->TOP.read_write) 
                                << 5U) | (((IData)(vlSymsp->TOP.request) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP.reset) 
                                            << 3U) 
                                           | (IData)(vlSelf->__PVT__state)))));
    vlSelf->__PVT__next_state = Vtop_patching_uno__ConstPool__TABLE_he4111221_0
        [__Vtableidx1];
    vlSelf->__PVT__enable_read = Vtop_patching_uno__ConstPool__TABLE_hb9d54fc4_0
        [__Vtableidx1];
    __PVT__enable_write = Vtop_patching_uno__ConstPool__TABLE_h599c0850_0
        [__Vtableidx1];
    vlSelf->__PVT__enable_write_valid = Vtop_patching_uno__ConstPool__TABLE_h599c0850_0
        [__Vtableidx1];
    vlSelf->__PVT__enable_ram_output = Vtop_patching_uno__ConstPool__TABLE_h08e7034b_0
        [__Vtableidx1];
    __PVT__enable_write_way_bit = Vtop_patching_uno__ConstPool__TABLE_h599c0850_0
        [__Vtableidx1];
    __PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits 
        = vlSelf->__PVT__valid_bits_out;
    __PVT__way_to_write = 0U;
    if (__PVT__enable_write_way_bit) {
        vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        {
            while ((5U > vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
                if ((1U & (~ ((4U >= (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) 
                              && (1U & ((IData)(vlSelf->__PVT__valid_bits_out) 
                                        >> (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))))))) {
                    __PVT__way_to_write = (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
                    vlSelf->write_way_selector_inst__DOT____Vlvbound_hcc6fd8b1__0 = 1U;
                    if (VL_LIKELY((4U >= (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)))) {
                        __PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits 
                            = (((~ ((IData)(1U) << 
                                    (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))) 
                                & (IData)(__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits)) 
                               | (0x1fU & ((IData)(vlSelf->write_way_selector_inst__DOT____Vlvbound_hcc6fd8b1__0) 
                                           << (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))));
                    }
                    goto __Vlabel2;
                }
                vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
            }
            __Vlabel2: ;
        }
    }
    vlSelf->__PVT__valid_bits_next = __PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits;
    vlSelf->__PVT__write_enable_data = 0U;
    vlSelf->__PVT__write_enable_tag = 0U;
    if (__PVT__enable_write) {
        vlSelf->write_enable_generator_inst__DOT____Vlvbound_h4ac1e79a__0 = 1U;
        vlSelf->write_enable_generator_inst__DOT____Vlvbound_hd1dcecc8__0 = 1U;
        if ((4U >= (IData)(__PVT__way_to_write))) {
            vlSelf->__PVT__write_enable_data = (((~ 
                                                  ((IData)(1U) 
                                                   << (IData)(__PVT__way_to_write))) 
                                                 & (IData)(vlSelf->__PVT__write_enable_data)) 
                                                | (0x1fU 
                                                   & ((IData)(vlSelf->write_enable_generator_inst__DOT____Vlvbound_h4ac1e79a__0) 
                                                      << (IData)(__PVT__way_to_write))));
            vlSelf->__PVT__write_enable_tag = (((~ 
                                                 ((IData)(1U) 
                                                  << (IData)(__PVT__way_to_write))) 
                                                & (IData)(vlSelf->__PVT__write_enable_tag)) 
                                               | (0x1fU 
                                                  & ((IData)(vlSelf->write_enable_generator_inst__DOT____Vlvbound_hd1dcecc8__0) 
                                                     << (IData)(__PVT__way_to_write))));
        }
    }
}

VL_INLINE_OPT void Vtop_patching_uno_cache___nba_comb__TOP__top_patching_uno__patch_cache__0(Vtop_patching_uno_cache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_patching_uno_cache___nba_comb__TOP__top_patching_uno__patch_cache__0\n"); );
    // Init
    CData/*0:0*/ hit_logic_inst__DOT____Vlvbound_h725b0b14__0;
    hit_logic_inst__DOT____Vlvbound_h725b0b14__0 = 0;
    // Body
    vlSelf->__PVT__valid_way = 7U;
    hit_logic_inst__DOT____Vlvbound_h725b0b14__0 = 
        ((IData)(vlSelf->__PVT__valid_bits_out) & (
                                                   vlSelf->__Vcellinp__hit_logic_inst__tags_outs
                                                   [0U] 
                                                   == 
                                                   (0x1fffU 
                                                    & (vlSymsp->TOP.address 
                                                       >> 8U))));
    vlSelf->__PVT__hit_mask = ((0x1eU & (IData)(vlSelf->__PVT__hit_mask)) 
                               | (IData)(hit_logic_inst__DOT____Vlvbound_h725b0b14__0));
    if ((1U & (IData)(vlSelf->__PVT__hit_mask))) {
        vlSelf->__PVT__valid_way = 0U;
    }
    hit_logic_inst__DOT____Vlvbound_h725b0b14__0 = 
        (((IData)(vlSelf->__PVT__valid_bits_out) >> 1U) 
         & (vlSelf->__Vcellinp__hit_logic_inst__tags_outs
            [1U] == (0x1fffU & (vlSymsp->TOP.address 
                                >> 8U))));
    vlSelf->__PVT__hit_mask = ((0x1dU & (IData)(vlSelf->__PVT__hit_mask)) 
                               | ((IData)(hit_logic_inst__DOT____Vlvbound_h725b0b14__0) 
                                  << 1U));
    if ((2U & (IData)(vlSelf->__PVT__hit_mask))) {
        vlSelf->__PVT__valid_way = 1U;
    }
    hit_logic_inst__DOT____Vlvbound_h725b0b14__0 = 
        (((IData)(vlSelf->__PVT__valid_bits_out) >> 2U) 
         & (vlSelf->__Vcellinp__hit_logic_inst__tags_outs
            [2U] == (0x1fffU & (vlSymsp->TOP.address 
                                >> 8U))));
    vlSelf->__PVT__hit_mask = ((0x1bU & (IData)(vlSelf->__PVT__hit_mask)) 
                               | ((IData)(hit_logic_inst__DOT____Vlvbound_h725b0b14__0) 
                                  << 2U));
    if ((4U & (IData)(vlSelf->__PVT__hit_mask))) {
        vlSelf->__PVT__valid_way = 2U;
    }
    hit_logic_inst__DOT____Vlvbound_h725b0b14__0 = 
        (((IData)(vlSelf->__PVT__valid_bits_out) >> 3U) 
         & (vlSelf->__Vcellinp__hit_logic_inst__tags_outs
            [3U] == (0x1fffU & (vlSymsp->TOP.address 
                                >> 8U))));
    vlSelf->__PVT__hit_mask = ((0x17U & (IData)(vlSelf->__PVT__hit_mask)) 
                               | ((IData)(hit_logic_inst__DOT____Vlvbound_h725b0b14__0) 
                                  << 3U));
    if ((8U & (IData)(vlSelf->__PVT__hit_mask))) {
        vlSelf->__PVT__valid_way = 3U;
    }
    hit_logic_inst__DOT____Vlvbound_h725b0b14__0 = 
        (((IData)(vlSelf->__PVT__valid_bits_out) >> 4U) 
         & (vlSelf->__Vcellinp__hit_logic_inst__tags_outs
            [4U] == (0x1fffU & (vlSymsp->TOP.address 
                                >> 8U))));
    vlSelf->__PVT__hit_mask = ((0xfU & (IData)(vlSelf->__PVT__hit_mask)) 
                               | ((IData)(hit_logic_inst__DOT____Vlvbound_h725b0b14__0) 
                                  << 4U));
    if ((0x10U & (IData)(vlSelf->__PVT__hit_mask))) {
        vlSelf->__PVT__valid_way = 4U;
    }
}
