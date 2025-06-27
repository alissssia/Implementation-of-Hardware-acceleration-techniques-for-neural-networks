// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcache.h for the primary calling header

#ifndef VERILATED_VCACHE_CACHE_H_
#define VERILATED_VCACHE_CACHE_H_  // guard

#include "verilated.h"
class Vcache_cache_way__Td_D10_S8;


class Vcache__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcache_cache final : public VerilatedModule {
  public:
    // CELLS
    Vcache_cache_way__Td_D10_S8* ways__BRA__0__KET____DOT__way_instance;
    Vcache_cache_way__Td_D10_S8* ways__BRA__1__KET____DOT__way_instance;
    Vcache_cache_way__Td_D10_S8* ways__BRA__2__KET____DOT__way_instance;
    Vcache_cache_way__Td_D10_S8* ways__BRA__3__KET____DOT__way_instance;
    Vcache_cache_way__Td_D10_S8* ways__BRA__4__KET____DOT__way_instance;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(read_write,0,0);
    VL_IN8(request,0,0);
    VL_OUT8(valid,0,0);
    VL_OUT8(error,0,0);
    CData/*4:0*/ __PVT__write_enable_tag;
    CData/*4:0*/ __PVT__write_enable_data;
    CData/*4:0*/ __PVT__valid_bits_out;
    CData/*4:0*/ __PVT__valid_bits_next;
    CData/*2:0*/ __PVT__valid_way;
    CData/*4:0*/ __PVT__hit_mask;
    CData/*2:0*/ __PVT__state;
    CData/*2:0*/ __PVT__next_state;
    CData/*0:0*/ __PVT__enable_read;
    CData/*0:0*/ __PVT__enable_write_valid;
    CData/*0:0*/ __PVT__enable_ram_output;
    CData/*0:0*/ __PVT__error_reg;
    CData/*0:0*/ write_way_selector_inst__DOT____Vlvbound_hcc6fd8b1__0;
    CData/*0:0*/ write_enable_generator_inst__DOT____Vlvbound_hd1dcecc8__0;
    CData/*0:0*/ write_enable_generator_inst__DOT____Vlvbound_h4ac1e79a__0;
    VL_IN16(activation_in,15,0);
    VL_OUT16(activation_out,15,0);
    VL_IN(address,20,0);
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
    VlUnpacked<SData/*12:0*/, 5> __PVT__tag_out;
    VlUnpacked<CData/*4:0*/, 256> __PVT__valid_bits_array;
    VlUnpacked<SData/*12:0*/, 5> __Vcellinp__hit_logic_inst__tags_outs;
    VlNBACommitQueue<VlUnpacked<CData/*4:0*/, 256>, false, CData/*4:0*/, 1> __VdlyCommitQueue__valid_bits_array__v0;

    // INTERNAL VARIABLES
    Vcache__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcache_cache(Vcache__Syms* symsp, const char* v__name);
    ~Vcache_cache();
    VL_UNCOPYABLE(Vcache_cache);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
