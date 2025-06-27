// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache.h for the primary calling header

#include "Vcache__pch.h"
#include "Vcache__Syms.h"
#include "Vcache_cache.h"

void Vcache_cache___ctor_var_reset(Vcache_cache* vlSelf);

Vcache_cache::Vcache_cache(Vcache__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcache_cache___ctor_var_reset(this);
}

void Vcache_cache::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcache_cache::~Vcache_cache() {
}
