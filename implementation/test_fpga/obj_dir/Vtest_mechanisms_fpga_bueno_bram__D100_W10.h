// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_mechanisms_fpga_bueno.h for the primary calling header

#ifndef VERILATED_VTEST_MECHANISMS_FPGA_BUENO_BRAM__D100_W10_H_
#define VERILATED_VTEST_MECHANISMS_FPGA_BUENO_BRAM__D100_W10_H_  // guard

#include "verilated.h"


class Vtest_mechanisms_fpga_bueno__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_mechanisms_fpga_bueno_bram__D100_W10 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__resetn,0,0);
    VL_IN8(__PVT__read_en,0,0);
    VL_IN8(__PVT__write_en,0,0);
    VL_IN8(__PVT__addr_read,7,0);
    VL_IN8(__PVT__addr_write,7,0);
    VL_IN16(__PVT__data_in,15,0);
    VL_OUT16(__PVT__data_out,15,0);
    VlUnpacked<SData/*15:0*/, 256> ram;

    // INTERNAL VARIABLES
    Vtest_mechanisms_fpga_bueno__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_mechanisms_fpga_bueno_bram__D100_W10(Vtest_mechanisms_fpga_bueno__Syms* symsp, const char* v__name);
    ~Vtest_mechanisms_fpga_bueno_bram__D100_W10();
    VL_UNCOPYABLE(Vtest_mechanisms_fpga_bueno_bram__D100_W10);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
