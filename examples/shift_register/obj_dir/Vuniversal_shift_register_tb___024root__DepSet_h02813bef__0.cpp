// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuniversal_shift_register_tb.h for the primary calling header

#include "Vuniversal_shift_register_tb__pch.h"
#include "Vuniversal_shift_register_tb__Syms.h"
#include "Vuniversal_shift_register_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuniversal_shift_register_tb___024root___dump_triggers__act(Vuniversal_shift_register_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vuniversal_shift_register_tb___024root___eval_triggers__act(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___eval_triggers__act\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.universal_shift_register_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__universal_shift_register_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.universal_shift_register_tb__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__universal_shift_register_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.universal_shift_register_tb__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__universal_shift_register_tb__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__universal_shift_register_tb__DOT__clk__0 
        = vlSelfRef.universal_shift_register_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__universal_shift_register_tb__DOT__rst_n__0 
        = vlSelfRef.universal_shift_register_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuniversal_shift_register_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
