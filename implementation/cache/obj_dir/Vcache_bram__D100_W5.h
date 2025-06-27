// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcache.h for the primary calling header

#ifndef VERILATED_VCACHE_BRAM__D100_W5_H_
#define VERILATED_VCACHE_BRAM__D100_W5_H_  // guard

#include "verilated.h"


class Vcache__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcache_bram__D100_W5 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__resetn,0,0);
    VL_IN8(__PVT__read_en,0,0);
    VL_IN8(__PVT__write_en,0,0);
    VL_IN8(__PVT__addr_read,7,0);
    VL_IN8(__PVT__addr_write,7,0);
    VL_IN8(__PVT__data_in,4,0);
    VL_OUT8(__PVT__data_out,4,0);
    CData/*4:0*/ __VdlyVal__ram__v0;
    CData/*7:0*/ __VdlyDim0__ram__v0;
    CData/*0:0*/ __VdlySet__ram__v0;
    VlUnpacked<CData/*4:0*/, 256> ram;

    // INTERNAL VARIABLES
    Vcache__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcache_bram__D100_W5(Vcache__Syms* symsp, const char* v__name);
    ~Vcache_bram__D100_W5();
    VL_UNCOPYABLE(Vcache_bram__D100_W5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
