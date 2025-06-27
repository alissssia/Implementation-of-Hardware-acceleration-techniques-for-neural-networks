// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmecanismo_flipping_uno__pch.h"
#include "Vmecanismo_flipping_uno.h"
#include "Vmecanismo_flipping_uno___024root.h"

// FUNCTIONS
Vmecanismo_flipping_uno__Syms::~Vmecanismo_flipping_uno__Syms()
{
}

Vmecanismo_flipping_uno__Syms::Vmecanismo_flipping_uno__Syms(VerilatedContext* contextp, const char* namep, Vmecanismo_flipping_uno* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
