// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_mechanisms_fpga_bueno.h for the primary calling header

#ifndef VERILATED_VTEST_MECHANISMS_FPGA_BUENO_TOP_PATCHING_UNO_H_
#define VERILATED_VTEST_MECHANISMS_FPGA_BUENO_TOP_PATCHING_UNO_H_  // guard

#include "verilated.h"
class Vtest_mechanisms_fpga_bueno_cache_tfg;


class Vtest_mechanisms_fpga_bueno__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_mechanisms_fpga_bueno_top_patching_uno final : public VerilatedModule {
  public:
    // CELLS
    Vtest_mechanisms_fpga_bueno_cache_tfg* patch_cache;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__request,0,0);
    VL_IN8(__PVT__read_write,0,0);
    VL_IN8(__PVT__p,0,0);
    VL_OUT8(__PVT__valid,0,0);
    VL_OUT8(__PVT__error,0,0);
    VL_IN16(__PVT__activation_in,15,0);
    VL_IN16(__PVT__activation_org,15,0);
    VL_OUT16(__PVT__chosen_activation,15,0);
    VL_IN(__PVT__address,20,0);

    // INTERNAL VARIABLES
    Vtest_mechanisms_fpga_bueno__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_mechanisms_fpga_bueno_top_patching_uno(Vtest_mechanisms_fpga_bueno__Syms* symsp, const char* v__name);
    ~Vtest_mechanisms_fpga_bueno_top_patching_uno();
    VL_UNCOPYABLE(Vtest_mechanisms_fpga_bueno_top_patching_uno);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
