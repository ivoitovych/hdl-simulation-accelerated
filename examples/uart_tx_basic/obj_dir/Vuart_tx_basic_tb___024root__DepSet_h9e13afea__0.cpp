// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tx_basic_tb.h for the primary calling header

#include "Vuart_tx_basic_tb__pch.h"
#include "Vuart_tx_basic_tb__Syms.h"
#include "Vuart_tx_basic_tb___024root.h"

VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_1__sync);
VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_1__sync);
VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_2__0(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_2__sync);
VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_2__1(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_2__sync);
VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_3__0(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_3__sync);
VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_3__1(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_3__sync);
VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_4__0(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_4__sync);
VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_4__1(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_4__sync);
VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_5__0(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_5__sync);
VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_5__1(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_5__sync);
VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_6__0(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_6__sync);
VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_6__1(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_6__sync);
VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_7__0(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_7__sync);
VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_7__1(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_7__sync);

VL_INLINE_OPT VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("UART TX Basic Testbench\n======================\nClock frequency:    50000000 Hz\nBaud rate:      115200\nBit period:        8680 ns\n",0);
    vlSelfRef.uart_tx_basic_tb__DOT__test_num = 0U;
    vlSelfRef.uart_tx_basic_tb__DOT__rst_n = 0U;
    vlSelfRef.uart_tx_basic_tb__DOT__data_in = 0U;
    vlSelfRef.uart_tx_basic_tb__DOT__start = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         111);
    vlSelfRef.uart_tx_basic_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         113);
    VL_WRITEF_NX("\nTest %0d: Sending 0x55\n",0,32,
                 vlSelfRef.uart_tx_basic_tb__DOT__test_num);
    VlForkSync __Vfork_1__sync;
    __Vfork_1__sync.init(2U, nullptr);
    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0(vlSelf, __Vfork_1__sync);
    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1(vlSelf, __Vfork_1__sync);
    co_await __Vfork_1__sync.join(nullptr, "uart_tx_basic_tb.v", 
                                  117);
    if ((0x55U == (IData)(vlSelfRef.uart_tx_basic_tb__DOT__received_data))) {
        VL_WRITEF_NX("PASS: Received 0x%02x\n",0,8,
                     vlSelfRef.uart_tx_basic_tb__DOT__received_data);
    } else {
        VL_WRITEF_NX("FAIL: Expected 0x55, received 0x%02x\n",0,
                     8,vlSelfRef.uart_tx_basic_tb__DOT__received_data);
    }
    vlSelfRef.uart_tx_basic_tb__DOT__test_num = ((IData)(1U) 
                                                 + vlSelfRef.uart_tx_basic_tb__DOT__test_num);
    VL_WRITEF_NX("\nTest %0d: Sending 0xAA\n",0,32,
                 vlSelfRef.uart_tx_basic_tb__DOT__test_num);
    VlForkSync __Vfork_2__sync;
    __Vfork_2__sync.init(2U, nullptr);
    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_2__0(vlSelf, __Vfork_2__sync);
    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_2__1(vlSelf, __Vfork_2__sync);
    co_await __Vfork_2__sync.join(nullptr, "uart_tx_basic_tb.v", 
                                  131);
    if ((0xaaU == (IData)(vlSelfRef.uart_tx_basic_tb__DOT__received_data))) {
        VL_WRITEF_NX("PASS: Received 0x%02x\n",0,8,
                     vlSelfRef.uart_tx_basic_tb__DOT__received_data);
    } else {
        VL_WRITEF_NX("FAIL: Expected 0xAA, received 0x%02x\n",0,
                     8,vlSelfRef.uart_tx_basic_tb__DOT__received_data);
    }
    vlSelfRef.uart_tx_basic_tb__DOT__test_num = ((IData)(1U) 
                                                 + vlSelfRef.uart_tx_basic_tb__DOT__test_num);
    VL_WRITEF_NX("\nTest %0d: Sending ASCII 'Hello'\n",0,
                 32,vlSelfRef.uart_tx_basic_tb__DOT__test_num);
    vlSelfRef.uart_tx_basic_tb__DOT__data_in = 0x48U;
    VlForkSync __Vfork_3__sync;
    __Vfork_3__sync.init(2U, nullptr);
    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_3__0(vlSelf, __Vfork_3__sync);
    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_3__1(vlSelf, __Vfork_3__sync);
    co_await __Vfork_3__sync.join(nullptr, "uart_tx_basic_tb.v", 
                                  154);
    VL_WRITEF_NX("  Sent: '%c' (0x%02x), Received: '%c' (0x%02x)\n",0,
                 8,vlSelfRef.uart_tx_basic_tb__DOT__data_in,
                 8,(IData)(vlSelfRef.uart_tx_basic_tb__DOT__data_in),
                 8,vlSelfRef.uart_tx_basic_tb__DOT__received_data,
                 8,(IData)(vlSelfRef.uart_tx_basic_tb__DOT__received_data));
    vlSelfRef.uart_tx_basic_tb__DOT__i = 1U;
    vlSelfRef.uart_tx_basic_tb__DOT__data_in = 0x65U;
    VlForkSync __Vfork_4__sync;
    __Vfork_4__sync.init(2U, nullptr);
    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_4__0(vlSelf, __Vfork_4__sync);
    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_4__1(vlSelf, __Vfork_4__sync);
    co_await __Vfork_4__sync.join(nullptr, "uart_tx_basic_tb.v", 
                                  154);
    VL_WRITEF_NX("  Sent: '%c' (0x%02x), Received: '%c' (0x%02x)\n",0,
                 8,vlSelfRef.uart_tx_basic_tb__DOT__data_in,
                 8,(IData)(vlSelfRef.uart_tx_basic_tb__DOT__data_in),
                 8,vlSelfRef.uart_tx_basic_tb__DOT__received_data,
                 8,(IData)(vlSelfRef.uart_tx_basic_tb__DOT__received_data));
    vlSelfRef.uart_tx_basic_tb__DOT__i = 2U;
    vlSelfRef.uart_tx_basic_tb__DOT__data_in = 0x6cU;
    VlForkSync __Vfork_5__sync;
    __Vfork_5__sync.init(2U, nullptr);
    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_5__0(vlSelf, __Vfork_5__sync);
    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_5__1(vlSelf, __Vfork_5__sync);
    co_await __Vfork_5__sync.join(nullptr, "uart_tx_basic_tb.v", 
                                  154);
    VL_WRITEF_NX("  Sent: '%c' (0x%02x), Received: '%c' (0x%02x)\n",0,
                 8,vlSelfRef.uart_tx_basic_tb__DOT__data_in,
                 8,(IData)(vlSelfRef.uart_tx_basic_tb__DOT__data_in),
                 8,vlSelfRef.uart_tx_basic_tb__DOT__received_data,
                 8,(IData)(vlSelfRef.uart_tx_basic_tb__DOT__received_data));
    vlSelfRef.uart_tx_basic_tb__DOT__i = 3U;
    vlSelfRef.uart_tx_basic_tb__DOT__data_in = 0x6cU;
    VlForkSync __Vfork_6__sync;
    __Vfork_6__sync.init(2U, nullptr);
    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_6__0(vlSelf, __Vfork_6__sync);
    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_6__1(vlSelf, __Vfork_6__sync);
    co_await __Vfork_6__sync.join(nullptr, "uart_tx_basic_tb.v", 
                                  154);
    VL_WRITEF_NX("  Sent: '%c' (0x%02x), Received: '%c' (0x%02x)\n",0,
                 8,vlSelfRef.uart_tx_basic_tb__DOT__data_in,
                 8,(IData)(vlSelfRef.uart_tx_basic_tb__DOT__data_in),
                 8,vlSelfRef.uart_tx_basic_tb__DOT__received_data,
                 8,(IData)(vlSelfRef.uart_tx_basic_tb__DOT__received_data));
    vlSelfRef.uart_tx_basic_tb__DOT__i = 4U;
    vlSelfRef.uart_tx_basic_tb__DOT__data_in = 0x6fU;
    VlForkSync __Vfork_7__sync;
    __Vfork_7__sync.init(2U, nullptr);
    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_7__0(vlSelf, __Vfork_7__sync);
    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_7__1(vlSelf, __Vfork_7__sync);
    co_await __Vfork_7__sync.join(nullptr, "uart_tx_basic_tb.v", 
                                  154);
    VL_WRITEF_NX("  Sent: '%c' (0x%02x), Received: '%c' (0x%02x)\n",0,
                 8,vlSelfRef.uart_tx_basic_tb__DOT__data_in,
                 8,(IData)(vlSelfRef.uart_tx_basic_tb__DOT__data_in),
                 8,vlSelfRef.uart_tx_basic_tb__DOT__received_data,
                 8,(IData)(vlSelfRef.uart_tx_basic_tb__DOT__received_data));
    vlSelfRef.uart_tx_basic_tb__DOT__i = 5U;
    vlSelfRef.uart_tx_basic_tb__DOT__test_num = ((IData)(1U) 
                                                 + vlSelfRef.uart_tx_basic_tb__DOT__test_num);
    VL_WRITEF_NX("\nTest %0d: Back-to-back bytes\n",0,
                 32,vlSelfRef.uart_tx_basic_tb__DOT__test_num);
    vlSelfRef.uart_tx_basic_tb__DOT__data_in = 0U;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         168);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         170);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 0U;
    co_await vlSelfRef.__VtrigSched_h23a82dfd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tx_basic_tb.busy)", 
                                                         "uart_tx_basic_tb.v", 
                                                         174);
    vlSelfRef.uart_tx_basic_tb__DOT__i = 1U;
    vlSelfRef.uart_tx_basic_tb__DOT__data_in = 1U;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         168);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         170);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 0U;
    co_await vlSelfRef.__VtrigSched_h23a82dfd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tx_basic_tb.busy)", 
                                                         "uart_tx_basic_tb.v", 
                                                         174);
    vlSelfRef.uart_tx_basic_tb__DOT__i = 2U;
    vlSelfRef.uart_tx_basic_tb__DOT__data_in = 2U;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         168);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         170);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 0U;
    co_await vlSelfRef.__VtrigSched_h23a82dfd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tx_basic_tb.busy)", 
                                                         "uart_tx_basic_tb.v", 
                                                         174);
    vlSelfRef.uart_tx_basic_tb__DOT__i = 3U;
    vlSelfRef.uart_tx_basic_tb__DOT__test_num = ((IData)(1U) 
                                                 + vlSelfRef.uart_tx_basic_tb__DOT__test_num);
    VL_WRITEF_NX("\nTest %0d: Checking idle state\n",0,
                 32,vlSelfRef.uart_tx_basic_tb__DOT__test_num);
    co_await vlSelfRef.__VdlySched.delay(0x108e480ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         180);
    if (vlSelfRef.uart_tx_basic_tb__DOT__tx) {
        VL_WRITEF_NX("PASS: TX is high in idle state\n",0);
    } else {
        VL_WRITEF_NX("FAIL: TX should be high when idle\n",0);
    }
    if (vlSelfRef.uart_tx_basic_tb__DOT__busy) {
        VL_WRITEF_NX("FAIL: Busy should be low when idle\n",0);
    } else {
        VL_WRITEF_NX("PASS: Busy is low in idle state\n",0);
    }
    vlSelfRef.uart_tx_basic_tb__DOT__test_num = ((IData)(1U) 
                                                 + vlSelfRef.uart_tx_basic_tb__DOT__test_num);
    VL_WRITEF_NX("\n======================\nTests completed: %0d\n======================\n\n",0,
                 32,vlSelfRef.uart_tx_basic_tb__DOT__test_num);
    VL_FINISH_MT("uart_tx_basic_tb.v", 197, "");
    co_return;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tx_basic_tb___024root___dump_triggers__act(Vuart_tx_basic_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vuart_tx_basic_tb___024root___eval_triggers__act(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_triggers__act\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.uart_tx_basic_tb__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.uart_tx_basic_tb__DOT__busy)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__busy__0)));
    vlSelfRef.__VactTriggered.setBit(4U, ((~ (IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__tx__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__clk__0 
        = vlSelfRef.uart_tx_basic_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__rst_n__0 
        = vlSelfRef.uart_tx_basic_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__busy__0 
        = vlSelfRef.uart_tx_basic_tb__DOT__busy;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__tx__0 
        = vlSelfRef.uart_tx_basic_tb__DOT__tx;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_tx_basic_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
