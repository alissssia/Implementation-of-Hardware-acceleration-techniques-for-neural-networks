// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_patching_16.h for the primary calling header

#ifndef VERILATED_VTOP_PATCHING_16_CACHE_TFG_H_
#define VERILATED_VTOP_PATCHING_16_CACHE_TFG_H_  // guard

#include "verilated.h"
class Vtop_patching_16_cache_way__Td_D10_S8;


class Vtop_patching_16__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_patching_16_cache_tfg final : public VerilatedModule {
  public:
    // CELLS
    Vtop_patching_16_cache_way__Td_D10_S8* ways__BRA__0__KET____DOT__way_instance;
    Vtop_patching_16_cache_way__Td_D10_S8* ways__BRA__1__KET____DOT__way_instance;
    Vtop_patching_16_cache_way__Td_D10_S8* ways__BRA__2__KET____DOT__way_instance;
    Vtop_patching_16_cache_way__Td_D10_S8* ways__BRA__3__KET____DOT__way_instance;
    Vtop_patching_16_cache_way__Td_D10_S8* ways__BRA__4__KET____DOT__way_instance;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__read_write,0,0);
    VL_IN8(__PVT__request,0,0);
    VL_OUT8(__PVT__valid,0,0);
    VL_OUT8(__PVT__error,0,0);
    CData/*0:0*/ __PVT__enable_read;
    CData/*4:0*/ __PVT__write_enable_tag;
    CData/*4:0*/ __PVT__write_enable_data;
    CData/*4:0*/ __PVT__valid_bits_out;
    CData/*4:0*/ __PVT__valid_bits_next;
    CData/*2:0*/ __PVT__valid_way;
    CData/*4:0*/ __PVT__hit_mask;
    CData/*2:0*/ __PVT__state;
    CData/*2:0*/ __PVT__next_state;
    CData/*0:0*/ __PVT__enable_write_valid;
    CData/*0:0*/ __PVT__enable_ram_output;
    CData/*0:0*/ __PVT__error_reg;
    CData/*0:0*/ write_way_selector_inst__DOT____Vlvbound_h797c410c__0;
    CData/*0:0*/ write_enable_generator_inst__DOT____Vlvbound_hd1dcecc8__0;
    CData/*0:0*/ write_enable_generator_inst__DOT____Vlvbound_h4ac1e79a__0;
    VL_IN16(__PVT__activation_in,15,0);
    VL_OUT16(__PVT__activation_out,15,0);
    VL_IN(__PVT__address,20,0);
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__i;
    VlUnpacked<SData/*12:0*/, 5> __PVT__tag_out;
    VlUnpacked<CData/*4:0*/, 256> __PVT__valid_bits_array;
    VlUnpacked<SData/*12:0*/, 5> __Vcellinp__hit_logic_inst__tags_outs;
    VlNBACommitQueue<VlUnpacked<CData/*4:0*/, 256>, false, CData/*4:0*/, 1> __VdlyCommitQueue__valid_bits_array__v0;

    // INTERNAL VARIABLES
    Vtop_patching_16__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_patching_16_cache_tfg(Vtop_patching_16__Syms* symsp, const char* v__name);
    ~Vtop_patching_16_cache_tfg();
    VL_UNCOPYABLE(Vtop_patching_16_cache_tfg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
