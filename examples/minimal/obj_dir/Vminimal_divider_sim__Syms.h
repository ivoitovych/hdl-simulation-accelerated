// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMINIMAL_DIVIDER_SIM__SYMS_H_
#define VERILATED_VMINIMAL_DIVIDER_SIM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vminimal_divider_sim.h"

// INCLUDE MODULE CLASSES
#include "Vminimal_divider_sim___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vminimal_divider_sim__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vminimal_divider_sim* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vminimal_divider_sim___024root TOP;

    // CONSTRUCTORS
    Vminimal_divider_sim__Syms(VerilatedContext* contextp, const char* namep, Vminimal_divider_sim* modelp);
    ~Vminimal_divider_sim__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
