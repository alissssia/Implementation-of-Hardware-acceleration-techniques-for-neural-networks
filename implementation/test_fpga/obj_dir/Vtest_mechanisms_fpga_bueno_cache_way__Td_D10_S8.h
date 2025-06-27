// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_mechanisms_fpga_bueno.h for the primary calling header

#ifndef VERILATED_VTEST_MECHANISMS_FPGA_BUENO_CACHE_WAY__TD_D10_S8_H_
#define VERILATED_VTEST_MECHANISMS_FPGA_BUENO_CACHE_WAY__TD_D10_S8_H_  // guard

#include "verilated.h"
class Vtest_mechanisms_fpga_bueno_bram__D100_W10;
class Vtest_mechanisms_fpga_bueno_bram__D100_Wd;


class Vtest_mechanisms_fpga_bueno__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_mechanisms_fpga_bueno_cache_way__Td_D10_S8 final : public VerilatedModule {
  public:
    // CELLS
    Vtest_mechanisms_fpga_bueno_bram__D100_Wd* tag_bram;
    Vtest_mechanisms_fpga_bueno_bram__D100_W10* data_bram;

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
    Vtest_mechanisms_fpga_bueno__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_mechanisms_fpga_bueno_cache_way__Td_D10_S8(Vtest_mechanisms_fpga_bueno__Syms* symsp, const char* v__name);
    ~Vtest_mechanisms_fpga_bueno_cache_way__Td_D10_S8();
    VL_UNCOPYABLE(Vtest_mechanisms_fpga_bueno_cache_way__Td_D10_S8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
