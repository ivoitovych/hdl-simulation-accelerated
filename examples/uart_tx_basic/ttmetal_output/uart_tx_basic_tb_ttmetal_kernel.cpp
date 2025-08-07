// Auto-generated TT-Metal kernel from Verilator output
// Generated from: uart_tx_basic_tb
// Mode: Custom testbench (detected signals: clock=uart_tx_basic_tb__DOT__clk, reset=uart_tx_basic_tb__DOT__rst_n)

#include "tt_metal_verilator_adapter_advanced.h"

// Include Verilator generated headers
#include "Vuart_tx_basic_tb__Syms.h"
#include "Vuart_tx_basic_tb___024root.h"
#include "Vuart_tx_basic_tb.h"
#include "Vuart_tx_basic_tb__pch.h"

// Include Verilator generated implementations
#include "Vuart_tx_basic_tb___024root__Slow.cpp"
#include "Vuart_tx_basic_tb__TraceDecls__0__Slow.cpp"
#include "Vuart_tx_basic_tb___024root__DepSet_hb0e5a5cc__0.cpp"
#include "Vuart_tx_basic_tb__Trace__0.cpp"
#include "Vuart_tx_basic_tb__Syms.cpp"
#include "Vuart_tx_basic_tb___024root__DepSet_h9e13afea__0__Slow.cpp"
#include "Vuart_tx_basic_tb___024root__DepSet_hb0e5a5cc__0__Slow.cpp"
#include "Vuart_tx_basic_tb.cpp"
#include "Vuart_tx_basic_tb___024root__DepSet_h9e13afea__0.cpp"
#include "Vuart_tx_basic_tb__main.cpp"
#include "Vuart_tx_basic_tb__Trace__0__Slow.cpp"

// Custom testbench implementation
IMPLEMENT_TT_METAL_VERILATOR_KERNEL_CUSTOM(Vuart_tx_basic_tb, Vuart_tx_basic_tb___024root, {
    auto* root = runner.root();

    // Toggle clock every 5ns
    static bool clk_state = false;
    if (runner.time() % 10 < 5) {
        if (!clk_state) {
            clk_state = true;
            root->uart_tx_basic_tb__DOT__clk = 1;
        }
    } else {
        if (clk_state) {
            clk_state = false;
            root->uart_tx_basic_tb__DOT__clk = 0;
        }
    }

    // Reset for first 2 cycles
    if (cycle < 2) {
        root->uart_tx_basic_tb__DOT__rst_n = 1;
    } else {
        root->uart_tx_basic_tb__DOT__rst_n = 0;
    }

    return cycle < 1000; // Run for 1000 cycles
})
