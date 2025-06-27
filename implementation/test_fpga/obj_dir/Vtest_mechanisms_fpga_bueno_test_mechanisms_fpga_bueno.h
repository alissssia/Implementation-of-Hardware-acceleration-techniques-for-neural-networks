// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_mechanisms_fpga_bueno.h for the primary calling header

#ifndef VERILATED_VTEST_MECHANISMS_FPGA_BUENO_TEST_MECHANISMS_FPGA_BUENO_H_
#define VERILATED_VTEST_MECHANISMS_FPGA_BUENO_TEST_MECHANISMS_FPGA_BUENO_H_  // guard

#include "verilated.h"
class Vtest_mechanisms_fpga_bueno_top_patching_uno;


class Vtest_mechanisms_fpga_bueno__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno final : public VerilatedModule {
  public:
    // CELLS
    Vtest_mechanisms_fpga_bueno_top_patching_uno* patch_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(f,0,0);
    VL_IN8(p,0,0);
    VL_IN8(request,0,0);
    VL_IN8(read_write,0,0);
    VL_OUT8(valid,0,0);
    VL_OUT8(error,0,0);
    CData/*0:0*/ __PVT__flip_inst__DOT__salida_flip_flop_con_bit_f;
    VL_IN16(activation_org,15,0);
    VL_IN16(activation_cache,15,0);
    VL_IN16(activation_in,15,0);
    VL_OUT16(flipped_out,15,0);
    VL_OUT16(patched_out,15,0);
    VL_OUT16(activation_final,15,0);
    SData/*15:0*/ __PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar;
    VL_IN(address,20,0);

    // INTERNAL VARIABLES
    Vtest_mechanisms_fpga_bueno__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno(Vtest_mechanisms_fpga_bueno__Syms* symsp, const char* v__name);
    ~Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno();
    VL_UNCOPYABLE(Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
