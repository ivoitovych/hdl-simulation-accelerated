// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuniversal_shift_register.h for the primary calling header

#include "Vuniversal_shift_register__pch.h"
#include "Vuniversal_shift_register__Syms.h"
#include "Vuniversal_shift_register___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuniversal_shift_register___024root___dump_triggers__act(Vuniversal_shift_register___024root* vlSelf);
#endif  // VL_DEBUG

void Vuniversal_shift_register___024root___eval_triggers__act(Vuniversal_shift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root___eval_triggers__act\n"); );
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuniversal_shift_register___024root___dump_triggers__act(vlSelf);
    }
#endif
}
