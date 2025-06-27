// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMECANISMO_FLIPPING_UNO__SYMS_H_
#define VERILATED_VMECANISMO_FLIPPING_UNO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmecanismo_flipping_uno.h"

// INCLUDE MODULE CLASSES
#include "Vmecanismo_flipping_uno___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vmecanismo_flipping_uno__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmecanismo_flipping_uno* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmecanismo_flipping_uno___024root TOP;

    // CONSTRUCTORS
    Vmecanismo_flipping_uno__Syms(VerilatedContext* contextp, const char* namep, Vmecanismo_flipping_uno* modelp);
    ~Vmecanismo_flipping_uno__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
