// SPDX-FileCopyrightText: © 2024 Tenstorrent Inc.
// SPDX-License-Identifier: Apache-2.0
// Auto-generated from Verilator output by verilator2ttmetal converter

#include <cstdint>
#include "debug/dprint.h"

// RTL Simulation State Structure for led_blinker_test
struct RTLSimState {
    // Clock and reset signals
    uint8_t clk;
    uint8_t rst;
    // Design state variables
    uint8_t led;
    uint8_t counter;
    // Simulation control
    uint32_t cycle_count;
};

// Initialize simulation state
inline void init_sim_state(RTLSimState* state) {
    state->clk = 0;
    state->rst = 1;  // Start with reset asserted
    state->led = 0;
    state->counter = 0;
    state->cycle_count = 0;
}

// Toggle clock
inline void toggle_clk(RTLSimState* state) {
    state->clk = !state->clk;
}


// Evaluate combinational and sequential logic on positive clock edge
inline void eval_posedge_clk(RTLSimState* state) {
    if (state->rst) {
        // Reset logic
        state->counter = 0;
        state->led = 0;
        state->cycle_count = 0;
    } else {
        // Normal operation
        state->cycle_count++;

        // Sequential logic
        state->counter = (state->counter == 3) ? 0 : (state->counter + 1);
        if ((state->counter == 3)) {
            state->led = !(state->led);
        }
        }

}

// Print current state using DPRINT
inline void print_state(RTLSimState* state, uint32_t time_ns) {
    DPRINT << "time=" << time_ns << " ns  cycle=" << state->cycle_count
    << "  led=" << (uint32_t)state->led
    << "  counter=" << (uint32_t)state->counter
    << ENDL();
}

// RTL simulation logic
void run_rtl_simulation() {
    // Initialize simulation state
    RTLSimState sim_state;
    init_sim_state(&sim_state);

    DPRINT << "Starting RTL simulation for led_blinker_test on TT-Metal kernel" << ENDL();
    DPRINT << "================================================================" << ENDL();

    // Simulation parameters
    constexpr uint32_t CLOCK_PERIOD_NS = 10000;
    constexpr uint32_t RESET_DURATION_NS = 10000;
    constexpr uint32_t MAX_CYCLES = 50;

    uint32_t simulation_time_ns = 0;
    uint32_t cycles_completed = 0;

    // Main simulation loop
    while (cycles_completed < MAX_CYCLES) {
        // Rising edge of clock
        toggle_clk(&sim_state);

        if (sim_state.clk) {  // Positive edge
        // Check if we should deassert reset
            if (simulation_time_ns >= RESET_DURATION_NS && sim_state.rst) {
                sim_state.rst = 0;
                DPRINT << "Reset deasserted at time " << simulation_time_ns << " ns" << ENDL();
            }


            // Evaluate logic on positive clock edge
            eval_posedge_clk(&sim_state);

            // Print state after evaluation
            print_state(&sim_state, simulation_time_ns);

            if (!sim_state.rst) {
                cycles_completed++;
            }

        }

        // Advance simulation time by half clock period
        simulation_time_ns += CLOCK_PERIOD_NS / 2;

        // Falling edge of clock
        if (sim_state.clk) {
            toggle_clk(&sim_state);
            simulation_time_ns += CLOCK_PERIOD_NS / 2;
        }

    }

    DPRINT << "================================================================" << ENDL();
    DPRINT << "RTL simulation completed after " << cycles_completed << " cycles" << ENDL();
    DPRINT << "Final simulation time: " << simulation_time_ns << " ns" << ENDL();
    DPRINT << "Final state:"
    << " led=" << (uint32_t)sim_state.led
    << " counter=" << (uint32_t)sim_state.counter
    << ENDL();
}

// Required TT-Metal compute kernel functions
namespace NAMESPACE {

void unpack_main() {
    // Empty unpack function - no data movement needed for this simulation
}

void math_main() {
    // Run the RTL simulation in the math stage
    run_rtl_simulation();
}

void pack_main() {
    // Empty pack function - no data movement needed for this simulation
}

}  // namespace NAMESPACE
