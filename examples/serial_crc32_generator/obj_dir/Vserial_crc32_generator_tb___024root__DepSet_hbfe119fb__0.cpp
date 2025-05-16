// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vserial_crc32_generator_tb.h for the primary calling header

#include "Vserial_crc32_generator_tb__pch.h"
#include "Vserial_crc32_generator_tb__Syms.h"
#include "Vserial_crc32_generator_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vserial_crc32_generator_tb___024root___dump_triggers__act(Vserial_crc32_generator_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vserial_crc32_generator_tb___024root___eval_triggers__act(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___eval_triggers__act\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.serial_crc32_generator_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__serial_crc32_generator_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.serial_crc32_generator_tb__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__serial_crc32_generator_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.serial_crc32_generator_tb__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__serial_crc32_generator_tb__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__serial_crc32_generator_tb__DOT__clk__0 
        = vlSelfRef.serial_crc32_generator_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__serial_crc32_generator_tb__DOT__rst_n__0 
        = vlSelfRef.serial_crc32_generator_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vserial_crc32_generator_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
