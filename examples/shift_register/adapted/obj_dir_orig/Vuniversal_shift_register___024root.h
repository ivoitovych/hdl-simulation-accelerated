// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuniversal_shift_register.h for the primary calling header

#ifndef VERILATED_VUNIVERSAL_SHIFT_REGISTER___024ROOT_H_
#define VERILATED_VUNIVERSAL_SHIFT_REGISTER___024ROOT_H_  // guard

#include "verilated.h"


class Vuniversal_shift_register__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuniversal_shift_register___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(mode,1,0);
    VL_IN8(serial_in_right,0,0);
    VL_IN8(serial_in_left,0,0);
    VL_IN8(parallel_in,7,0);
    VL_OUT8(q,7,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vuniversal_shift_register__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuniversal_shift_register___024root(Vuniversal_shift_register__Syms* symsp, const char* v__name);
    ~Vuniversal_shift_register___024root();
    VL_UNCOPYABLE(Vuniversal_shift_register___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
