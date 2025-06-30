// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tx_basic_tb.h for the primary calling header

#include "Vuart_tx_basic_tb__pch.h"
#include "Vuart_tx_basic_tb___024root.h"

VL_ATTR_COLD void Vuart_tx_basic_tb___024root___eval_static(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_static\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__clk__0 
        = vlSelfRef.uart_tx_basic_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__rst_n__0 
        = vlSelfRef.uart_tx_basic_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__busy__0 
        = vlSelfRef.uart_tx_basic_tb__DOT__busy;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__tx__0 
        = vlSelfRef.uart_tx_basic_tb__DOT__tx;
}

VL_ATTR_COLD void Vuart_tx_basic_tb___024root___eval_final(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_final\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tx_basic_tb___024root___dump_triggers__stl(Vuart_tx_basic_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vuart_tx_basic_tb___024root___eval_phase__stl(Vuart_tx_basic_tb___024root* vlSelf);

VL_ATTR_COLD void Vuart_tx_basic_tb___024root___eval_settle(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_settle\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vuart_tx_basic_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("uart_tx_basic_tb.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vuart_tx_basic_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tx_basic_tb___024root___dump_triggers__stl(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___dump_triggers__stl\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuart_tx_basic_tb___024root___stl_sequent__TOP__0(Vuart_tx_basic_tb___024root* vlSelf);

VL_ATTR_COLD void Vuart_tx_basic_tb___024root___eval_stl(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_stl\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vuart_tx_basic_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vuart_tx_basic_tb___024root___stl_sequent__TOP__0(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___stl_sequent__TOP__0\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__baud_clk_en 
        = (0x1b1U == (IData)(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__clk_counter));
}

VL_ATTR_COLD void Vuart_tx_basic_tb___024root___eval_triggers__stl(Vuart_tx_basic_tb___024root* vlSelf);

VL_ATTR_COLD bool Vuart_tx_basic_tb___024root___eval_phase__stl(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_phase__stl\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vuart_tx_basic_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vuart_tx_basic_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tx_basic_tb___024root___dump_triggers__act(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___dump_triggers__act\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge uart_tx_basic_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge uart_tx_basic_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge uart_tx_basic_tb.busy)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge uart_tx_basic_tb.tx)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tx_basic_tb___024root___dump_triggers__nba(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___dump_triggers__nba\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge uart_tx_basic_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge uart_tx_basic_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge uart_tx_basic_tb.busy)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge uart_tx_basic_tb.tx)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuart_tx_basic_tb___024root___ctor_var_reset(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___ctor_var_reset\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->uart_tx_basic_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18027259334622394978ull);
    vlSelf->uart_tx_basic_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1107529964377210303ull);
    vlSelf->uart_tx_basic_tb__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2382675144752969301ull);
    vlSelf->uart_tx_basic_tb__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8983288942601675282ull);
    vlSelf->uart_tx_basic_tb__DOT__tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15329143370598060261ull);
    vlSelf->uart_tx_basic_tb__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1410271831180200730ull);
    vlSelf->uart_tx_basic_tb__DOT__test_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6022121598233935049ull);
    vlSelf->uart_tx_basic_tb__DOT__received_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15417881754459694555ull);
    vlSelf->uart_tx_basic_tb__DOT__bit_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3546961177348676371ull);
    vlSelf->uart_tx_basic_tb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8436000906297695073ull);
    vlSelf->uart_tx_basic_tb__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17417134718844374326ull);
    vlSelf->uart_tx_basic_tb__DOT__dut__DOT__clk_counter = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10655158319717098751ull);
    vlSelf->uart_tx_basic_tb__DOT__dut__DOT__bit_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18129436147107023343ull);
    vlSelf->uart_tx_basic_tb__DOT__dut__DOT__data_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15547233182031010842ull);
    vlSelf->uart_tx_basic_tb__DOT__dut__DOT__baud_clk_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13396092155279324233ull);
    vlSelf->__Vtask_uart_tx_basic_tb__DOT__send_byte__4__byte_to_send = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 79046390656794287ull);
    vlSelf->__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7062231947288521192ull);
    vlSelf->__Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17016925437733842883ull);
    vlSelf->__Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9612552883753250598ull);
    vlSelf->__Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__busy__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9480722689735363355ull);
    vlSelf->__Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__tx__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17308774482557716677ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
