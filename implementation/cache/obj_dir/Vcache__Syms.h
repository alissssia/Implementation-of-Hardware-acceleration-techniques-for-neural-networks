// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCACHE__SYMS_H_
#define VERILATED_VCACHE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcache.h"

// INCLUDE MODULE CLASSES
#include "Vcache___024root.h"
#include "Vcache_cache.h"
#include "Vcache_cache_way__Td_D10_S8.h"
#include "Vcache_bram__D100_Wd.h"
#include "Vcache_bram__D100_W10.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcache__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcache* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcache___024root               TOP;
    Vcache_cache                   TOP__cache;
    Vcache_cache_way__Td_D10_S8    TOP__cache__ways__BRA__0__KET____DOT__way_instance;
    Vcache_bram__D100_W10          TOP__cache__ways__BRA__0__KET____DOT__way_instance__data_bram;
    Vcache_bram__D100_Wd           TOP__cache__ways__BRA__0__KET____DOT__way_instance__tag_bram;
    Vcache_cache_way__Td_D10_S8    TOP__cache__ways__BRA__1__KET____DOT__way_instance;
    Vcache_bram__D100_W10          TOP__cache__ways__BRA__1__KET____DOT__way_instance__data_bram;
    Vcache_bram__D100_Wd           TOP__cache__ways__BRA__1__KET____DOT__way_instance__tag_bram;
    Vcache_cache_way__Td_D10_S8    TOP__cache__ways__BRA__2__KET____DOT__way_instance;
    Vcache_bram__D100_W10          TOP__cache__ways__BRA__2__KET____DOT__way_instance__data_bram;
    Vcache_bram__D100_Wd           TOP__cache__ways__BRA__2__KET____DOT__way_instance__tag_bram;
    Vcache_cache_way__Td_D10_S8    TOP__cache__ways__BRA__3__KET____DOT__way_instance;
    Vcache_bram__D100_W10          TOP__cache__ways__BRA__3__KET____DOT__way_instance__data_bram;
    Vcache_bram__D100_Wd           TOP__cache__ways__BRA__3__KET____DOT__way_instance__tag_bram;
    Vcache_cache_way__Td_D10_S8    TOP__cache__ways__BRA__4__KET____DOT__way_instance;
    Vcache_bram__D100_W10          TOP__cache__ways__BRA__4__KET____DOT__way_instance__data_bram;
    Vcache_bram__D100_Wd           TOP__cache__ways__BRA__4__KET____DOT__way_instance__tag_bram;

    // SCOPE NAMES
    VerilatedScope __Vscope_cache__ways__BRA__0__KET____way_instance__data_bram;
    VerilatedScope __Vscope_cache__ways__BRA__0__KET____way_instance__tag_bram;
    VerilatedScope __Vscope_cache__ways__BRA__1__KET____way_instance__data_bram;
    VerilatedScope __Vscope_cache__ways__BRA__1__KET____way_instance__tag_bram;
    VerilatedScope __Vscope_cache__ways__BRA__2__KET____way_instance__data_bram;
    VerilatedScope __Vscope_cache__ways__BRA__2__KET____way_instance__tag_bram;
    VerilatedScope __Vscope_cache__ways__BRA__3__KET____way_instance__data_bram;
    VerilatedScope __Vscope_cache__ways__BRA__3__KET____way_instance__tag_bram;
    VerilatedScope __Vscope_cache__ways__BRA__4__KET____way_instance__data_bram;
    VerilatedScope __Vscope_cache__ways__BRA__4__KET____way_instance__tag_bram;

    // CONSTRUCTORS
    Vcache__Syms(VerilatedContext* contextp, const char* namep, Vcache* modelp);
    ~Vcache__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
