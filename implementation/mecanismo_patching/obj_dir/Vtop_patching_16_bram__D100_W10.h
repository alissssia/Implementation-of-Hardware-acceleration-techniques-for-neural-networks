// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_patching_16.h for the primary calling header

#ifndef VERILATED_VTOP_PATCHING_16_BRAM__D100_W10_H_
#define VERILATED_VTOP_PATCHING_16_BRAM__D100_W10_H_  // guard

#include "verilated.h"


class Vtop_patching_16__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_patching_16_bram__D100_W10 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__resetn,0,0);
    VL_IN8(__PVT__read_en,0,0);
    VL_IN8(__PVT__write_en,0,0);
    VL_IN8(__PVT__addr_read,7,0);
    VL_IN8(__PVT__addr_write,7,0);
    CData/*7:0*/ __VdlyDim0__ram__v0;
    CData/*0:0*/ __VdlySet__ram__v0;
    VL_IN16(__PVT__data_in,15,0);
    VL_OUT16(__PVT__data_out,15,0);
    SData/*15:0*/ __VdlyVal__ram__v0;
    VlUnpacked<SData/*15:0*/, 256> ram;

    // INTERNAL VARIABLES
    Vtop_patching_16__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_patching_16_bram__D100_W10(Vtop_patching_16__Syms* symsp, const char* v__name);
    ~Vtop_patching_16_bram__D100_W10();
    VL_UNCOPYABLE(Vtop_patching_16_bram__D100_W10);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
