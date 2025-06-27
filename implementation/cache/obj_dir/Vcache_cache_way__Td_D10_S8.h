// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcache.h for the primary calling header

#ifndef VERILATED_VCACHE_CACHE_WAY__TD_D10_S8_H_
#define VERILATED_VCACHE_CACHE_WAY__TD_D10_S8_H_  // guard

#include "verilated.h"
class Vcache_bram__D100_W10;
class Vcache_bram__D100_Wd;


class Vcache__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcache_cache_way__Td_D10_S8 final : public VerilatedModule {
  public:
    // CELLS
    Vcache_bram__D100_Wd* tag_bram;
    Vcache_bram__D100_W10* data_bram;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__resetn,0,0);
    VL_IN8(__PVT__enable_read,0,0);
    VL_IN8(__PVT__write_enable_tag,0,0);
    VL_IN8(__PVT__write_enable_data,0,0);
    VL_IN8(__PVT__set_index,7,0);
    VL_IN16(__PVT__tag_in,12,0);
    VL_IN16(__PVT__data_in,15,0);
    VL_OUT16(__PVT__tag_out,12,0);
    VL_OUT16(__PVT__data_out,15,0);

    // INTERNAL VARIABLES
    Vcache__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcache_cache_way__Td_D10_S8(Vcache__Syms* symsp, const char* v__name);
    ~Vcache_cache_way__Td_D10_S8();
    VL_UNCOPYABLE(Vcache_cache_way__Td_D10_S8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
