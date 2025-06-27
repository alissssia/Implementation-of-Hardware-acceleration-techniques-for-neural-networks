// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP_PATCHING_16__SYMS_H_
#define VERILATED_VTOP_PATCHING_16__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop_patching_16.h"

// INCLUDE MODULE CLASSES
#include "Vtop_patching_16___024root.h"
#include "Vtop_patching_16_top_patching_16.h"
#include "Vtop_patching_16_cache_tfg.h"
#include "Vtop_patching_16_cache_way__Td_D10_S8.h"
#include "Vtop_patching_16_bram__D100_Wd.h"
#include "Vtop_patching_16_bram__D100_W10.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop_patching_16__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop_patching_16* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop_patching_16___024root     TOP;
    Vtop_patching_16_top_patching_16 TOP__top_patching_16;
    Vtop_patching_16_cache_tfg     TOP__top_patching_16__patch_cache;
    Vtop_patching_16_cache_way__Td_D10_S8 TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance;
    Vtop_patching_16_bram__D100_W10 TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram;
    Vtop_patching_16_bram__D100_Wd TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram;
    Vtop_patching_16_cache_way__Td_D10_S8 TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance;
    Vtop_patching_16_bram__D100_W10 TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram;
    Vtop_patching_16_bram__D100_Wd TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram;
    Vtop_patching_16_cache_way__Td_D10_S8 TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance;
    Vtop_patching_16_bram__D100_W10 TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram;
    Vtop_patching_16_bram__D100_Wd TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram;
    Vtop_patching_16_cache_way__Td_D10_S8 TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance;
    Vtop_patching_16_bram__D100_W10 TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram;
    Vtop_patching_16_bram__D100_Wd TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram;
    Vtop_patching_16_cache_way__Td_D10_S8 TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance;
    Vtop_patching_16_bram__D100_W10 TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram;
    Vtop_patching_16_bram__D100_Wd TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram;

    // SCOPE NAMES
    VerilatedScope __Vscope_top_patching_16__patch_cache__ways__BRA__0__KET____way_instance__data_bram;
    VerilatedScope __Vscope_top_patching_16__patch_cache__ways__BRA__0__KET____way_instance__tag_bram;
    VerilatedScope __Vscope_top_patching_16__patch_cache__ways__BRA__1__KET____way_instance__data_bram;
    VerilatedScope __Vscope_top_patching_16__patch_cache__ways__BRA__1__KET____way_instance__tag_bram;
    VerilatedScope __Vscope_top_patching_16__patch_cache__ways__BRA__2__KET____way_instance__data_bram;
    VerilatedScope __Vscope_top_patching_16__patch_cache__ways__BRA__2__KET____way_instance__tag_bram;
    VerilatedScope __Vscope_top_patching_16__patch_cache__ways__BRA__3__KET____way_instance__data_bram;
    VerilatedScope __Vscope_top_patching_16__patch_cache__ways__BRA__3__KET____way_instance__tag_bram;
    VerilatedScope __Vscope_top_patching_16__patch_cache__ways__BRA__4__KET____way_instance__data_bram;
    VerilatedScope __Vscope_top_patching_16__patch_cache__ways__BRA__4__KET____way_instance__tag_bram;

    // CONSTRUCTORS
    Vtop_patching_16__Syms(VerilatedContext* contextp, const char* namep, Vtop_patching_16* modelp);
    ~Vtop_patching_16__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
