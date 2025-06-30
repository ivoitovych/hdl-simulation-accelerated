// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_alu_tb.h for the primary calling header

#include "Vsimple_alu_tb__pch.h"
#include "Vsimple_alu_tb___024root.h"

VL_ATTR_COLD void Vsimple_alu_tb___024root___eval_static(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___eval_static\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__simple_alu_tb__DOT__clk__0 
        = vlSelfRef.simple_alu_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__simple_alu_tb__DOT__rst_n__0 
        = vlSelfRef.simple_alu_tb__DOT__rst_n;
}

VL_ATTR_COLD void Vsimple_alu_tb___024root___eval_final(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___eval_final\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_alu_tb___024root___dump_triggers__stl(Vsimple_alu_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsimple_alu_tb___024root___eval_phase__stl(Vsimple_alu_tb___024root* vlSelf);

VL_ATTR_COLD void Vsimple_alu_tb___024root___eval_settle(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___eval_settle\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vsimple_alu_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("simple_alu_tb.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsimple_alu_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_alu_tb___024root___dump_triggers__stl(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___dump_triggers__stl\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vsimple_alu_tb___024root___act_sequent__TOP__0(Vsimple_alu_tb___024root* vlSelf);
VL_ATTR_COLD void Vsimple_alu_tb___024root____Vm_traceActivitySetAll(Vsimple_alu_tb___024root* vlSelf);

VL_ATTR_COLD void Vsimple_alu_tb___024root___eval_stl(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___eval_stl\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsimple_alu_tb___024root___act_sequent__TOP__0(vlSelf);
        Vsimple_alu_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vsimple_alu_tb___024root___eval_triggers__stl(Vsimple_alu_tb___024root* vlSelf);

VL_ATTR_COLD bool Vsimple_alu_tb___024root___eval_phase__stl(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___eval_phase__stl\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsimple_alu_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsimple_alu_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_alu_tb___024root___dump_triggers__act(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___dump_triggers__act\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge simple_alu_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge simple_alu_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_alu_tb___024root___dump_triggers__nba(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___dump_triggers__nba\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge simple_alu_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge simple_alu_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimple_alu_tb___024root____Vm_traceActivitySetAll(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root____Vm_traceActivitySetAll\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vsimple_alu_tb___024root___ctor_var_reset(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___ctor_var_reset\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->simple_alu_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14014459883588717101ull);
    vlSelf->simple_alu_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9802557034074322829ull);
    vlSelf->simple_alu_tb__DOT__a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2020221924755539211ull);
    vlSelf->simple_alu_tb__DOT__b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 469147443747842654ull);
    vlSelf->simple_alu_tb__DOT__opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16612340597704621292ull);
    vlSelf->simple_alu_tb__DOT__execute = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13425523278213004767ull);
    vlSelf->simple_alu_tb__DOT__result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1312013883212578419ull);
    vlSelf->simple_alu_tb__DOT__flags = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5978726170482077461ull);
    vlSelf->simple_alu_tb__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15942905574715379143ull);
    vlSelf->simple_alu_tb__DOT__test_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6815829361630296307ull);
    vlSelf->simple_alu_tb__DOT__error_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1254870795571699064ull);
    vlSelf->simple_alu_tb__DOT__expected_result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5278751670258860408ull);
    vlSelf->simple_alu_tb__DOT__expected_flags = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5020783869298610117ull);
    vlSelf->simple_alu_tb__DOT__execute_op__Vstatic__timeout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 478029340343656114ull);
    vlSelf->simple_alu_tb__DOT__dut__DOT__execute_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8824638873100124201ull);
    vlSelf->simple_alu_tb__DOT__dut__DOT__execute_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12109252086328333484ull);
    vlSelf->simple_alu_tb__DOT__dut__DOT__add_result = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5866140816101373749ull);
    vlSelf->simple_alu_tb__DOT__dut__DOT__sub_result = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1825247762885754797ull);
    vlSelf->simple_alu_tb__DOT__dut__DOT__and_result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8868745115018504381ull);
    vlSelf->simple_alu_tb__DOT__dut__DOT__or_result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 39985060176129820ull);
    vlSelf->simple_alu_tb__DOT__dut__DOT__xor_result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2441051092184142809ull);
    vlSelf->simple_alu_tb__DOT__dut__DOT__mul_result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12909135510024207348ull);
    vlSelf->__Vtrigprevexpr___TOP__simple_alu_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14745801291286067868ull);
    vlSelf->__Vtrigprevexpr___TOP__simple_alu_tb__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9047435812905979155ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
