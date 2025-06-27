// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFLIPFLOPS_TOP__SYMS_H_
#define VERILATED_VFLIPFLOPS_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vflipflops_top.h"

// INCLUDE MODULE CLASSES
#include "Vflipflops_top___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vflipflops_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vflipflops_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vflipflops_top___024root       TOP;

    // CONSTRUCTORS
    Vflipflops_top__Syms(VerilatedContext* contextp, const char* namep, Vflipflops_top* modelp);
    ~Vflipflops_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
