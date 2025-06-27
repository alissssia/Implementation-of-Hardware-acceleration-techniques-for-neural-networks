// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmecanismo_flipping_bloque.h for the primary calling header

#ifndef VERILATED_VMECANISMO_FLIPPING_BLOQUE_MECANISMO_FLIPPING_UNO_H_
#define VERILATED_VMECANISMO_FLIPPING_BLOQUE_MECANISMO_FLIPPING_UNO_H_  // guard

#include "verilated.h"


class Vmecanismo_flipping_bloque__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmecanismo_flipping_bloque_mecanismo_flipping_uno final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(f,0,0);
    VL_IN16(a,15,0);
    VL_OUT16(b,15,0);

    // INTERNAL VARIABLES
    Vmecanismo_flipping_bloque__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno(Vmecanismo_flipping_bloque__Syms* symsp, const char* v__name);
    ~Vmecanismo_flipping_bloque_mecanismo_flipping_uno();
    VL_UNCOPYABLE(Vmecanismo_flipping_bloque_mecanismo_flipping_uno);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
