// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_patching_16.h for the primary calling header

#ifndef VERILATED_VTOP_PATCHING_16_TOP_PATCHING_16_H_
#define VERILATED_VTOP_PATCHING_16_TOP_PATCHING_16_H_  // guard

#include "verilated.h"
class Vtop_patching_16_cache_tfg;


class Vtop_patching_16__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_patching_16_top_patching_16 final : public VerilatedModule {
  public:
    // CELLS
    Vtop_patching_16_cache_tfg* patch_cache;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(request,0,0);
    VL_IN8(read_write,0,0);
    VL_IN8(index,3,0);
    VL_IN8(store_enable,0,0);
    VL_OUT8(valid,0,0);
    VL_OUT8(error,0,0);
    VL_IN16(activation_in,15,0);
    VL_IN(address,20,0);
    VL_IN8(p[16],0,0);
    VL_IN16(activation_org[16],15,0);
    VL_OUT16(chosen_activation[16],15,0);
    VlUnpacked<SData/*15:0*/, 16> __PVT__activation_cache;

    // INTERNAL VARIABLES
    Vtop_patching_16__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_patching_16_top_patching_16(Vtop_patching_16__Syms* symsp, const char* v__name);
    ~Vtop_patching_16_top_patching_16();
    VL_UNCOPYABLE(Vtop_patching_16_top_patching_16);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
