// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VUNIVERSAL_SHIFT_REGISTER__SYMS_H_
#define VERILATED_VUNIVERSAL_SHIFT_REGISTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vuniversal_shift_register.h"

// INCLUDE MODULE CLASSES
#include "Vuniversal_shift_register___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vuniversal_shift_register__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vuniversal_shift_register* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vuniversal_shift_register___024root TOP;

    // CONSTRUCTORS
    Vuniversal_shift_register__Syms(VerilatedContext* contextp, const char* namep, Vuniversal_shift_register* modelp);
    ~Vuniversal_shift_register__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
