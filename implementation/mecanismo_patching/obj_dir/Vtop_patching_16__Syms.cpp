// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop_patching_16__pch.h"
#include "Vtop_patching_16.h"
#include "Vtop_patching_16___024root.h"
#include "Vtop_patching_16_top_patching_16.h"
#include "Vtop_patching_16_cache_tfg.h"
#include "Vtop_patching_16_cache_way__Td_D10_S8.h"
#include "Vtop_patching_16_bram__D100_Wd.h"
#include "Vtop_patching_16_bram__D100_W10.h"

// FUNCTIONS
Vtop_patching_16__Syms::~Vtop_patching_16__Syms()
{
}

Vtop_patching_16__Syms::Vtop_patching_16__Syms(VerilatedContext* contextp, const char* namep, Vtop_patching_16* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__top_patching_16{this, Verilated::catName(namep, "top_patching_16")}
    , TOP__top_patching_16__patch_cache{this, Verilated::catName(namep, "top_patching_16.patch_cache")}
    , TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance{this, Verilated::catName(namep, "top_patching_16.patch_cache.ways[0].way_instance")}
    , TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram{this, Verilated::catName(namep, "top_patching_16.patch_cache.ways[0].way_instance.data_bram")}
    , TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram{this, Verilated::catName(namep, "top_patching_16.patch_cache.ways[0].way_instance.tag_bram")}
    , TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance{this, Verilated::catName(namep, "top_patching_16.patch_cache.ways[1].way_instance")}
    , TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram{this, Verilated::catName(namep, "top_patching_16.patch_cache.ways[1].way_instance.data_bram")}
    , TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram{this, Verilated::catName(namep, "top_patching_16.patch_cache.ways[1].way_instance.tag_bram")}
    , TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance{this, Verilated::catName(namep, "top_patching_16.patch_cache.ways[2].way_instance")}
    , TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram{this, Verilated::catName(namep, "top_patching_16.patch_cache.ways[2].way_instance.data_bram")}
    , TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram{this, Verilated::catName(namep, "top_patching_16.patch_cache.ways[2].way_instance.tag_bram")}
    , TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance{this, Verilated::catName(namep, "top_patching_16.patch_cache.ways[3].way_instance")}
    , TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram{this, Verilated::catName(namep, "top_patching_16.patch_cache.ways[3].way_instance.data_bram")}
    , TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram{this, Verilated::catName(namep, "top_patching_16.patch_cache.ways[3].way_instance.tag_bram")}
    , TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance{this, Verilated::catName(namep, "top_patching_16.patch_cache.ways[4].way_instance")}
    , TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram{this, Verilated::catName(namep, "top_patching_16.patch_cache.ways[4].way_instance.data_bram")}
    , TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram{this, Verilated::catName(namep, "top_patching_16.patch_cache.ways[4].way_instance.tag_bram")}
{
        // Check resources
        Verilated::stackCheck(115);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.top_patching_16 = &TOP__top_patching_16;
    TOP__top_patching_16.patch_cache = &TOP__top_patching_16__patch_cache;
    TOP__top_patching_16__patch_cache.ways__BRA__0__KET____DOT__way_instance = &TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance;
    TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance.data_bram = &TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram;
    TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance.tag_bram = &TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram;
    TOP__top_patching_16__patch_cache.ways__BRA__1__KET____DOT__way_instance = &TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance;
    TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance.data_bram = &TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram;
    TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance.tag_bram = &TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram;
    TOP__top_patching_16__patch_cache.ways__BRA__2__KET____DOT__way_instance = &TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance;
    TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance.data_bram = &TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram;
    TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance.tag_bram = &TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram;
    TOP__top_patching_16__patch_cache.ways__BRA__3__KET____DOT__way_instance = &TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance;
    TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance.data_bram = &TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram;
    TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance.tag_bram = &TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram;
    TOP__top_patching_16__patch_cache.ways__BRA__4__KET____DOT__way_instance = &TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance;
    TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance.data_bram = &TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram;
    TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance.tag_bram = &TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__top_patching_16.__Vconfigure(true);
    TOP__top_patching_16__patch_cache.__Vconfigure(true);
    TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance.__Vconfigure(true);
    TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram.__Vconfigure(true);
    TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram.__Vconfigure(true);
    TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance.__Vconfigure(false);
    TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram.__Vconfigure(false);
    TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram.__Vconfigure(false);
    TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance.__Vconfigure(false);
    TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram.__Vconfigure(false);
    TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram.__Vconfigure(false);
    TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance.__Vconfigure(false);
    TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram.__Vconfigure(false);
    TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram.__Vconfigure(false);
    TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance.__Vconfigure(false);
    TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram.__Vconfigure(false);
    TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram.__Vconfigure(false);
    // Setup scopes
    __Vscope_top_patching_16__patch_cache__ways__BRA__0__KET____way_instance__data_bram.configure(this, name(), "top_patching_16.patch_cache.ways[0].way_instance.data_bram", "data_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_patching_16__patch_cache__ways__BRA__0__KET____way_instance__tag_bram.configure(this, name(), "top_patching_16.patch_cache.ways[0].way_instance.tag_bram", "tag_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_patching_16__patch_cache__ways__BRA__1__KET____way_instance__data_bram.configure(this, name(), "top_patching_16.patch_cache.ways[1].way_instance.data_bram", "data_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_patching_16__patch_cache__ways__BRA__1__KET____way_instance__tag_bram.configure(this, name(), "top_patching_16.patch_cache.ways[1].way_instance.tag_bram", "tag_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_patching_16__patch_cache__ways__BRA__2__KET____way_instance__data_bram.configure(this, name(), "top_patching_16.patch_cache.ways[2].way_instance.data_bram", "data_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_patching_16__patch_cache__ways__BRA__2__KET____way_instance__tag_bram.configure(this, name(), "top_patching_16.patch_cache.ways[2].way_instance.tag_bram", "tag_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_patching_16__patch_cache__ways__BRA__3__KET____way_instance__data_bram.configure(this, name(), "top_patching_16.patch_cache.ways[3].way_instance.data_bram", "data_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_patching_16__patch_cache__ways__BRA__3__KET____way_instance__tag_bram.configure(this, name(), "top_patching_16.patch_cache.ways[3].way_instance.tag_bram", "tag_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_patching_16__patch_cache__ways__BRA__4__KET____way_instance__data_bram.configure(this, name(), "top_patching_16.patch_cache.ways[4].way_instance.data_bram", "data_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_patching_16__patch_cache__ways__BRA__4__KET____way_instance__tag_bram.configure(this, name(), "top_patching_16.patch_cache.ways[4].way_instance.tag_bram", "tag_bram", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_top_patching_16__patch_cache__ways__BRA__0__KET____way_instance__data_bram.varInsert(__Vfinal,"ram", &(TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,255);
        __Vscope_top_patching_16__patch_cache__ways__BRA__0__KET____way_instance__tag_bram.varInsert(__Vfinal,"ram", &(TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,12,0 ,0,255);
        __Vscope_top_patching_16__patch_cache__ways__BRA__1__KET____way_instance__data_bram.varInsert(__Vfinal,"ram", &(TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,255);
        __Vscope_top_patching_16__patch_cache__ways__BRA__1__KET____way_instance__tag_bram.varInsert(__Vfinal,"ram", &(TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,12,0 ,0,255);
        __Vscope_top_patching_16__patch_cache__ways__BRA__2__KET____way_instance__data_bram.varInsert(__Vfinal,"ram", &(TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,255);
        __Vscope_top_patching_16__patch_cache__ways__BRA__2__KET____way_instance__tag_bram.varInsert(__Vfinal,"ram", &(TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,12,0 ,0,255);
        __Vscope_top_patching_16__patch_cache__ways__BRA__3__KET____way_instance__data_bram.varInsert(__Vfinal,"ram", &(TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,255);
        __Vscope_top_patching_16__patch_cache__ways__BRA__3__KET____way_instance__tag_bram.varInsert(__Vfinal,"ram", &(TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,12,0 ,0,255);
        __Vscope_top_patching_16__patch_cache__ways__BRA__4__KET____way_instance__data_bram.varInsert(__Vfinal,"ram", &(TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,255);
        __Vscope_top_patching_16__patch_cache__ways__BRA__4__KET____way_instance__tag_bram.varInsert(__Vfinal,"ram", &(TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,12,0 ,0,255);
    }
}
