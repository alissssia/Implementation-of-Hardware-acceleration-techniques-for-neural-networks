// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMECANISMO_FLIPPING_BLOQUE__SYMS_H_
#define VERILATED_VMECANISMO_FLIPPING_BLOQUE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmecanismo_flipping_bloque.h"

// INCLUDE MODULE CLASSES
#include "Vmecanismo_flipping_bloque___024root.h"
#include "Vmecanismo_flipping_bloque_mecanismo_flipping_uno.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vmecanismo_flipping_bloque__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmecanismo_flipping_bloque* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmecanismo_flipping_bloque___024root TOP;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno TOP__mecanismo_flipping_bloque__DOT__genblk1__BRA__0__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno TOP__mecanismo_flipping_bloque__DOT__genblk1__BRA__10__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno TOP__mecanismo_flipping_bloque__DOT__genblk1__BRA__11__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno TOP__mecanismo_flipping_bloque__DOT__genblk1__BRA__12__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno TOP__mecanismo_flipping_bloque__DOT__genblk1__BRA__13__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno TOP__mecanismo_flipping_bloque__DOT__genblk1__BRA__14__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno TOP__mecanismo_flipping_bloque__DOT__genblk1__BRA__15__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno TOP__mecanismo_flipping_bloque__DOT__genblk1__BRA__1__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno TOP__mecanismo_flipping_bloque__DOT__genblk1__BRA__2__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno TOP__mecanismo_flipping_bloque__DOT__genblk1__BRA__3__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno TOP__mecanismo_flipping_bloque__DOT__genblk1__BRA__4__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno TOP__mecanismo_flipping_bloque__DOT__genblk1__BRA__5__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno TOP__mecanismo_flipping_bloque__DOT__genblk1__BRA__6__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno TOP__mecanismo_flipping_bloque__DOT__genblk1__BRA__7__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno TOP__mecanismo_flipping_bloque__DOT__genblk1__BRA__8__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno TOP__mecanismo_flipping_bloque__DOT__genblk1__BRA__9__KET____DOT__u0;

    // CONSTRUCTORS
    Vmecanismo_flipping_bloque__Syms(VerilatedContext* contextp, const char* namep, Vmecanismo_flipping_bloque* modelp);
    ~Vmecanismo_flipping_bloque__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
