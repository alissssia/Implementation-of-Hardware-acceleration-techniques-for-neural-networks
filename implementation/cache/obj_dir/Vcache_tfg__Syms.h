// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCACHE_TFG__SYMS_H_
#define VERILATED_VCACHE_TFG__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcache_tfg.h"

// INCLUDE MODULE CLASSES
#include "Vcache_tfg___024root.h"
#include "Vcache_tfg_cache_tfg.h"
#include "Vcache_tfg_cache_way__Td_D10_S8.h"
#include "Vcache_tfg_bram__D100_Wd.h"
#include "Vcache_tfg_bram__D100_W10.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcache_tfg__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcache_tfg* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcache_tfg___024root           TOP;
    Vcache_tfg_cache_tfg           TOP__cache_tfg;
    Vcache_tfg_cache_way__Td_D10_S8 TOP__cache_tfg__ways__BRA__0__KET____DOT__way_instance;
    Vcache_tfg_bram__D100_W10      TOP__cache_tfg__ways__BRA__0__KET____DOT__way_instance__data_bram;
    Vcache_tfg_bram__D100_Wd       TOP__cache_tfg__ways__BRA__0__KET____DOT__way_instance__tag_bram;
    Vcache_tfg_cache_way__Td_D10_S8 TOP__cache_tfg__ways__BRA__1__KET____DOT__way_instance;
    Vcache_tfg_bram__D100_W10      TOP__cache_tfg__ways__BRA__1__KET____DOT__way_instance__data_bram;
    Vcache_tfg_bram__D100_Wd       TOP__cache_tfg__ways__BRA__1__KET____DOT__way_instance__tag_bram;
    Vcache_tfg_cache_way__Td_D10_S8 TOP__cache_tfg__ways__BRA__2__KET____DOT__way_instance;
    Vcache_tfg_bram__D100_W10      TOP__cache_tfg__ways__BRA__2__KET____DOT__way_instance__data_bram;
    Vcache_tfg_bram__D100_Wd       TOP__cache_tfg__ways__BRA__2__KET____DOT__way_instance__tag_bram;
    Vcache_tfg_cache_way__Td_D10_S8 TOP__cache_tfg__ways__BRA__3__KET____DOT__way_instance;
    Vcache_tfg_bram__D100_W10      TOP__cache_tfg__ways__BRA__3__KET____DOT__way_instance__data_bram;
    Vcache_tfg_bram__D100_Wd       TOP__cache_tfg__ways__BRA__3__KET____DOT__way_instance__tag_bram;
    Vcache_tfg_cache_way__Td_D10_S8 TOP__cache_tfg__ways__BRA__4__KET____DOT__way_instance;
    Vcache_tfg_bram__D100_W10      TOP__cache_tfg__ways__BRA__4__KET____DOT__way_instance__data_bram;
    Vcache_tfg_bram__D100_Wd       TOP__cache_tfg__ways__BRA__4__KET____DOT__way_instance__tag_bram;

    // SCOPE NAMES
    VerilatedScope __Vscope_cache_tfg__ways__BRA__0__KET____way_instance__data_bram;
    VerilatedScope __Vscope_cache_tfg__ways__BRA__0__KET____way_instance__tag_bram;
    VerilatedScope __Vscope_cache_tfg__ways__BRA__1__KET____way_instance__data_bram;
    VerilatedScope __Vscope_cache_tfg__ways__BRA__1__KET____way_instance__tag_bram;
    VerilatedScope __Vscope_cache_tfg__ways__BRA__2__KET____way_instance__data_bram;
    VerilatedScope __Vscope_cache_tfg__ways__BRA__2__KET____way_instance__tag_bram;
    VerilatedScope __Vscope_cache_tfg__ways__BRA__3__KET____way_instance__data_bram;
    VerilatedScope __Vscope_cache_tfg__ways__BRA__3__KET____way_instance__tag_bram;
    VerilatedScope __Vscope_cache_tfg__ways__BRA__4__KET____way_instance__data_bram;
    VerilatedScope __Vscope_cache_tfg__ways__BRA__4__KET____way_instance__tag_bram;

    // CONSTRUCTORS
    Vcache_tfg__Syms(VerilatedContext* contextp, const char* namep, Vcache_tfg* modelp);
    ~Vcache_tfg__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
