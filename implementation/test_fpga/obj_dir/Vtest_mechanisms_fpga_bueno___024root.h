// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_mechanisms_fpga_bueno.h for the primary calling header

#ifndef VERILATED_VTEST_MECHANISMS_FPGA_BUENO___024ROOT_H_
#define VERILATED_VTEST_MECHANISMS_FPGA_BUENO___024ROOT_H_  // guard

#include "verilated.h"
class Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno;


class Vtest_mechanisms_fpga_bueno__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_mechanisms_fpga_bueno___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno* test_mechanisms_fpga_bueno;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(f,0,0);
    VL_IN8(p,0,0);
    VL_IN8(request,0,0);
    VL_IN8(read_write,0,0);
    VL_OUT8(valid,0,0);
    VL_OUT8(error,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(activation_org,15,0);
    VL_IN16(activation_cache,15,0);
    VL_IN16(activation_in,15,0);
    VL_OUT16(flipped_out,15,0);
    VL_OUT16(patched_out,15,0);
    VL_OUT16(activation_final,15,0);
    VL_IN(address,20,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest_mechanisms_fpga_bueno__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_mechanisms_fpga_bueno___024root(Vtest_mechanisms_fpga_bueno__Syms* symsp, const char* v__name);
    ~Vtest_mechanisms_fpga_bueno___024root();
    VL_UNCOPYABLE(Vtest_mechanisms_fpga_bueno___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
