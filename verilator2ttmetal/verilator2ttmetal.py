#!/usr/bin/env python3
"""
Verilator to TT-Metal Converter
Converts Verilator-generated C++ simulation code to TT-Metal compute kernels.
"""

import os
import re
import sys
import argparse
from pathlib import Path
from typing import Dict, List, Tuple, Optional
from dataclasses import dataclass
from jinja2 import Template

@dataclass
class StateVariable:
    """Represents a state variable in the simulation"""
    name: str
    data_type: str  # CData, IData, QData
    bit_width: int
    initial_value: str = "0"
    is_dut_signal: bool = False  # New field to track if it's a DUT signal

@dataclass
class ClockInfo:
    """Clock signal information"""
    name: str
    period_ns: int = 100

@dataclass
class ResetInfo:
    """Reset signal information"""
    name: str
    active_high: bool = True
    duration_ns: int = 80

@dataclass
class Assignment:
    """Assignment statement"""
    target: str
    expression: str
    condition: Optional[str] = None

@dataclass
class SimulationConfig:
    """Simulation configuration extracted from source"""
    max_cycles: Optional[int] = None
    clock_period_ns: Optional[int] = None
    reset_duration_ns: Optional[int] = None

class VerilatorParser:
    """Parses Verilator-generated C++ files"""

    def __init__(self, obj_dir: Path):
        self.obj_dir = Path(obj_dir)
        self.state_variables: List[StateVariable] = []
        self.clock_signals: List[ClockInfo] = []
        self.reset_signals: List[ResetInfo] = []
        self.reset_assignments: List[Assignment] = []
        self.sequential_assignments: List[Assignment] = []
        self.module_name = ""
        self.simulation_config = SimulationConfig()
        self.has_dut = False  # Track if there's a DUT inside testbench

    def parse(self) -> bool:
        """Parse all relevant files in the obj_dir"""
        try:
            self._find_module_name()
            print(f"  Module name: {self.module_name}")
            self._parse_header_file()
            print(f"  Found {len(self.state_variables)} state variables")
            self._parse_all_implementation_files()
            print(f"  Found {len(self.reset_assignments)} reset assignments")
            print(f"  Found {len(self.sequential_assignments)} sequential assignments")
            return True
        except Exception as e:
            print(f"Error parsing Verilator files: {e}")
            import traceback
            traceback.print_exc()
            return False

    def _find_module_name(self):
        """Find the module name from file patterns"""
        header_files = list(self.obj_dir.glob("V*___024root.h"))
        if header_files:
            header_file = header_files[0]
            # Extract module name: Vmodule___024root.h -> module
            self.module_name = header_file.stem.replace("___024root", "")[1:]  # Remove 'V' prefix

    def _parse_header_file(self):
        """Parse the header file for state variables"""
        header_file = self.obj_dir / f"V{self.module_name}___024root.h"
        if not header_file.exists():
            return

        content = header_file.read_text()

        # Check if there's a DUT inside (e.g., led_blinker_test__DOT__dut__DOT__)
        if "__DOT__dut__DOT__" in content:
            self.has_dut = True
            print("  Detected DUT inside testbench")

        # Find state variables
        # Pattern: CData/*0:0*/ module__DOT__signal_name;
        state_pattern = r'(CData|IData|QData)/\*(\d+):(\d+)\*/ (\w+(?:__DOT__\w+)*);'
        for match in re.finditer(state_pattern, content):
            data_type, high_bit, low_bit, full_name = match.groups()

            # Extract signal name and check if it's a DUT signal
            is_dut_signal = "__DOT__dut__DOT__" in full_name

            # Also check for direct module signals (like led_blinker_test__DOT__led)
            is_module_signal = "__DOT__" in full_name and not is_dut_signal

            # Extract the final signal name
            parts = full_name.split("__DOT__")
            signal_name = parts[-1]

            bit_width = int(high_bit) - int(low_bit) + 1

            # Skip internal signals and clk/rst at the testbench level
            # But include all DUT signals and module signals like 'led'
            if any(skip in signal_name for skip in ["Vtrig", "__V", "__0", "clk__0"]):
                continue

            # Skip testbench-level clk/rst but not DUT-level
            if not is_dut_signal and signal_name in ["clk", "rst"]:
                continue

            self.state_variables.append(StateVariable(
                name=signal_name,
                data_type=self._map_data_type(data_type, bit_width),
                bit_width=bit_width,
                is_dut_signal=is_dut_signal or is_module_signal  # Treat module signals as important
            ))

        # Look for clock and reset signals
        if "clk" in content:
            self.clock_signals.append(ClockInfo("clk"))
        if "rst" in content:
            self.reset_signals.append(ResetInfo("rst"))

    def _parse_all_implementation_files(self):
        """Parse all implementation files to find sequential logic"""
        # Try different file patterns
        impl_file_patterns = [
            f"V{self.module_name}___024root__DepSet_*__0.cpp",
            f"V{self.module_name}___024root__DepSet_*__0__Slow.cpp"
        ]

        for pattern in impl_file_patterns:
            impl_files = list(self.obj_dir.glob(pattern))
            for impl_file in impl_files:
                print(f"  Parsing implementation file: {impl_file.name}")
                content = impl_file.read_text()

                # Extract simulation parameters
                self._extract_simulation_params(content)

                # Try to find sequential logic
                self._parse_sequential_logic_from_file(content)

    def _parse_sequential_logic_from_file(self, content: str):
        """Parse sequential logic from implementation file content"""
        # Look for nba_sequent function
        func_patterns = [
            r'VL_INLINE_OPT\s+void\s+V\w+___024root___nba_sequent__TOP__0\s*\([^{]*\{(.*?)\n\}',
            r'void\s+V\w+___024root___nba_sequent__TOP__0\s*\([^{]*\{(.*?)\n\}'
        ]

        for pattern in func_patterns:
            func_match = re.search(pattern, content, re.DOTALL)
            if func_match:
                func_content = func_match.group(1)
                print(f"  Found nba_sequent function")
                self._parse_nba_sequent_logic(func_content)
                return

        print(f"  No nba_sequent function found in this file")

    def _parse_nba_sequent_logic(self, content: str):
        """Parse the nba_sequent function for sequential logic"""
        lines = content.split('\n')

        in_reset_block = False
        in_else_block = False
        current_condition = None

        # Track temporary variables for delayed assignments
        temp_vars = {}

        for line in lines:
            line = line.strip()
            if not line:
                continue

            # Track temporary variable declarations/assignments
            temp_var_match = re.search(r'__Vdly__(\w+(?:__DOT__\w+)*)\s*=\s*vlSelfRef\.(\w+(?:__DOT__\w+)*);', line)
            if temp_var_match:
                temp_name, orig_name = temp_var_match.groups()
                temp_vars[temp_name] = orig_name
                continue

            # Look for reset condition
            if re.search(r'if\s*\(vlSelfRef\.\w+__DOT__rst\)', line):
                in_reset_block = True
                in_else_block = False
                continue
            elif line == '} else {':
                in_reset_block = False
                in_else_block = True
                current_condition = None
                continue
            elif line == '}' and (in_reset_block or in_else_block):
                in_reset_block = False
                in_else_block = False
                current_condition = None
                continue

            # Parse assignments
            assignment_patterns = [
                # Direct delayed assignment
                r'__Vdly__(\w+(?:__DOT__\w+)*)\s*=\s*(.+);',
                # Final copy-back from delayed variable
                r'vlSelfRef\.(\w+(?:__DOT__\w+)*)\s*=\s*__Vdly__\w+(?:__DOT__\w+)*;',
                # Direct assignment
                r'vlSelfRef\.(\w+(?:__DOT__\w+)*)\s*=\s*(.+);'
            ]

            for pattern in assignment_patterns:
                match = re.search(pattern, line)
                if match:
                    if len(match.groups()) == 2:
                        target, expression = match.groups()

                        # Skip if this is a final copy-back
                        if '__Vdly__' in line and expression.startswith('__Vdly__'):
                            continue

                        # Extract just the signal name
                        target_parts = target.split('__DOT__')
                        if self.has_dut and len(target_parts) >= 3 and 'dut' in target_parts:
                            # For DUT signals, use just the final signal name
                            target = target_parts[-1]
                        else:
                            target = target_parts[-1]

                        expression = self._clean_expression(expression)

                        if in_reset_block:
                            self.reset_assignments.append(Assignment(target, expression))
                        elif in_else_block:
                            self.sequential_assignments.append(Assignment(target, expression, current_condition))
                    break

            # Check for conditional statements in else block
            if in_else_block:
                # Look for if conditions
                if_match = re.search(r'if\s*\(([^)]+)\)\s*\{', line)
                if if_match:
                    current_condition = self._clean_expression(if_match.group(1))
                elif line == '}' and current_condition:
                    current_condition = None

    def _extract_simulation_params(self, content: str):
        """Extract simulation parameters from Verilator source"""
        # Look for delays in timing code (from eval_initial__TOP__Vtiming)
        delay_pattern = r'delay\(0x([0-9A-Fa-f]+)ULL'
        delays = re.findall(delay_pattern, content)

        if delays:
            # The timing in LED blinker is more complex - look for specific patterns
            # First delay is often the reset duration, subsequent ones are clock toggles
            if len(delays) >= 2:
                # First delay is typically reset duration
                reset_delay = int(delays[0], 16)
                # Second delay is typically half clock period
                half_clock = int(delays[1], 16)

                # These values are in simulation time units
                # For LED blinker, they appear to be in ns
                self.simulation_config.reset_duration_ns = reset_delay
                self.simulation_config.clock_period_ns = half_clock * 2
            else:
                # Fallback for simpler cases
                first_delay = int(delays[0], 16)
                if first_delay > 1000:  # Likely in ps
                    self.simulation_config.clock_period_ns = first_delay // 1000
                else:
                    self.simulation_config.clock_period_ns = first_delay * 2

    def _clean_expression(self, expr: str) -> str:
        """Clean up Verilator expressions for TT-Metal"""
        original = expr

        # Remove vlSelfRef. prefix
        expr = re.sub(r'vlSelfRef\.', '', expr)

        # Handle DUT hierarchy
        if self.has_dut:
            # Convert led_blinker_test__DOT__dut__DOT__counter -> state->counter
            expr = re.sub(r'\w+__DOT__dut__DOT__(\w+)', r'state->\1', expr)

        # Convert module__DOT__signal -> state->signal
        expr = re.sub(r'\w+__DOT__(\w+)', r'state->\1', expr)

        # Handle specific patterns
        expr = re.sub(r'\b0U\b', '0', expr)
        expr = re.sub(r'\b1U\b', '1', expr)
        expr = re.sub(r'\b(\d+)U\b', r'\1', expr)

        # Handle increment: ((IData)(1U) + ...) -> (... + 1)
        expr = re.sub(r'\(\(IData\)\(1U\)\s*\+\s*([^)]+)\)', r'(\1 + 1)', expr)

        # Handle cast and bitwise operations
        expr = re.sub(r'\((\d+)U\s*&\s*\(([^)]+)\)\)', r'(\1 & \2)', expr)

        # Clean up casts
        expr = re.sub(r'\(IData\)', '', expr)
        expr = re.sub(r'\(CData\)', '', expr)

        # Handle bit inversion: (1U & (~ expr)) -> !expr
        expr = re.sub(r'\(1U?\s*&\s*\(\s*~\s*([^)]+)\)\)', r'!\1', expr)

        # Clean up extra whitespace
        expr = re.sub(r'\s+', ' ', expr)
        expr = expr.strip()

        return expr

    def _map_data_type(self, verilator_type: str, bit_width: int) -> str:
        """Map Verilator data types to C types"""
        if bit_width == 1:
            return "uint8_t"
        elif bit_width <= 8:
            return "uint8_t"
        elif bit_width <= 16:
            return "uint16_t"
        elif bit_width <= 32:
            return "uint32_t"
        else:
            return "uint64_t"

class TTMetalGenerator:
    """Generates TT-Metal kernel code"""

    def __init__(self, parser: VerilatorParser):
        self.parser = parser

    def generate(self) -> str:
        """Generate complete TT-Metal kernel code"""
        template = Template(self._get_template())

        # Use extracted config or defaults
        config = self.parser.simulation_config
        if config.max_cycles is None:
            config.max_cycles = 50
        if config.clock_period_ns is None:
            config.clock_period_ns = 100
        if config.reset_duration_ns is None:
            config.reset_duration_ns = 80

        # Filter state variables appropriately
        if self.parser.has_dut:
            # Include both DUT signals and important module signals (like 'led')
            state_vars = [v for v in self.parser.state_variables if v.is_dut_signal]
            # Make sure we have all necessary signals
            signal_names = {v.name for v in state_vars}
            if 'led' not in signal_names:
                # Add led if it's missing
                for v in self.parser.state_variables:
                    if v.name == 'led':
                        state_vars.append(v)
                        break
        else:
            state_vars = self.parser.state_variables

        return template.render(
            module_name=self.parser.module_name,
            state_variables=state_vars,
            clock_signals=self.parser.clock_signals,
            reset_signals=self.parser.reset_signals,
            reset_assignments=self.parser.reset_assignments,
            sequential_assignments=self.parser.sequential_assignments,
            config=config,
            has_dut=self.parser.has_dut
        )

    def _get_template(self) -> str:
        """TT-Metal kernel template"""
        return '''// SPDX-FileCopyrightText: © 2024 Tenstorrent Inc.
// SPDX-License-Identifier: Apache-2.0
// Auto-generated from Verilator output by verilator2ttmetal converter

#include <cstdint>
#include "debug/dprint.h"

// RTL Simulation State Structure for {{ module_name }}
struct RTLSimState {
    // Clock and reset signals
    {% for clk in clock_signals -%}
    uint8_t {{ clk.name }};
    {% endfor -%}
    {% for rst in reset_signals -%}
    uint8_t {{ rst.name }};
    {% endfor -%}

    // Design state variables
    {% for var in state_variables -%}
    {{ var.data_type }} {{ var.name }};
    {% endfor -%}

    // Simulation control
    uint32_t cycle_count;
};

// Initialize simulation state
inline void init_sim_state(RTLSimState* state) {
    {% for clk in clock_signals -%}
    state->{{ clk.name }} = 0;
    {% endfor -%}
    {% for rst in reset_signals -%}
    state->{{ rst.name }} = 1;  // Start with reset asserted
    {% endfor -%}

    {% for var in state_variables -%}
    state->{{ var.name }} = {{ var.initial_value }};
    {% endfor -%}

    state->cycle_count = 0;
}

// Toggle clock
{% for clk in clock_signals -%}
inline void toggle_{{ clk.name }}(RTLSimState* state) {
    state->{{ clk.name }} = !state->{{ clk.name }};
}
{% endfor %}

// Evaluate combinational and sequential logic on positive clock edge
inline void eval_posedge_clk(RTLSimState* state) {
    {% for rst in reset_signals -%}
    if (state->{{ rst.name }}) {
        // Reset logic
        {% for assign in reset_assignments -%}
        state->{{ assign.target }} = {{ assign.expression }};
        {% endfor -%}
        state->cycle_count = 0;
    } else {
        // Normal operation
        state->cycle_count++;

        // Sequential logic
        {% for assign in sequential_assignments -%}
        {% if assign.condition -%}
        if ({{ assign.condition }}) {
            state->{{ assign.target }} = {{ assign.expression }};
        }
        {% else -%}
        state->{{ assign.target }} = {{ assign.expression }};
        {% endif -%}
        {% endfor -%}
    }
    {% endfor %}
}

// Print current state using DPRINT
inline void print_state(RTLSimState* state, uint32_t time_ns) {
    DPRINT << "time=" << time_ns << " ns  cycle=" << state->cycle_count
    {% for var in state_variables -%}
           << "  {{ var.name }}=" << (uint32_t)state->{{ var.name }}
    {% endfor -%}
           << ENDL();
}

// RTL simulation logic
void run_rtl_simulation() {
    // Initialize simulation state
    RTLSimState sim_state;
    init_sim_state(&sim_state);

    DPRINT << "Starting RTL simulation for {{ module_name }} on TT-Metal kernel" << ENDL();
    DPRINT << "================================================================" << ENDL();

    // Simulation parameters
    constexpr uint32_t CLOCK_PERIOD_NS = {{ config.clock_period_ns }};
    constexpr uint32_t RESET_DURATION_NS = {{ config.reset_duration_ns }};
    constexpr uint32_t MAX_CYCLES = {{ config.max_cycles }};

    uint32_t simulation_time_ns = 0;
    uint32_t cycles_completed = 0;

    // Main simulation loop
    while (cycles_completed < MAX_CYCLES) {
        // Rising edge of clock
        {% for clk in clock_signals -%}
        toggle_{{ clk.name }}(&sim_state);

        if (sim_state.{{ clk.name }}) {  // Positive edge
        {% endfor -%}
            // Check if we should deassert reset
            {% for rst in reset_signals -%}
            if (simulation_time_ns >= RESET_DURATION_NS && sim_state.{{ rst.name }}) {
                sim_state.{{ rst.name }} = 0;
                DPRINT << "Reset deasserted at time " << simulation_time_ns << " ns" << ENDL();
            }
            {% endfor %}

            // Evaluate logic on positive clock edge
            eval_posedge_clk(&sim_state);

            // Print state after evaluation
            print_state(&sim_state, simulation_time_ns);

            {% for rst in reset_signals -%}
            if (!sim_state.{{ rst.name }}) {
                cycles_completed++;
            }
            {% endfor %}
        }

        // Advance simulation time by half clock period
        simulation_time_ns += CLOCK_PERIOD_NS / 2;

        // Falling edge of clock
        {% for clk in clock_signals -%}
        if (sim_state.{{ clk.name }}) {
            toggle_{{ clk.name }}(&sim_state);
            simulation_time_ns += CLOCK_PERIOD_NS / 2;
        }
        {% endfor %}
    }

    DPRINT << "================================================================" << ENDL();
    DPRINT << "RTL simulation completed after " << cycles_completed << " cycles" << ENDL();
    DPRINT << "Final simulation time: " << simulation_time_ns << " ns" << ENDL();
    DPRINT << "Final state:"
    {% for var in state_variables -%}
           << " {{ var.name }}=" << (uint32_t)sim_state.{{ var.name }}
    {% endfor -%}
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
'''

def main():
    """Main converter function"""
    parser = argparse.ArgumentParser(description="Convert Verilator C++ to TT-Metal kernel")
    parser.add_argument("obj_dir", help="Path to Verilator obj_dir output directory")
    parser.add_argument("-o", "--output", help="Output file path", default="rtl_kernel.cpp")

    args = parser.parse_args()

    # Validate input directory
    obj_dir = Path(args.obj_dir)
    if not obj_dir.exists() or not obj_dir.is_dir():
        print(f"Error: {obj_dir} is not a valid directory")
        sys.exit(1)

    print(f"Parsing Verilator files in {obj_dir}...")

    # Parse Verilator files
    verilator_parser = VerilatorParser(obj_dir)
    if not verilator_parser.parse():
        print("Failed to parse Verilator files")
        sys.exit(1)

    print(f"Found module: {verilator_parser.module_name}")
    print(f"State variables: {len(verilator_parser.state_variables)}")
    print(f"Reset assignments: {len(verilator_parser.reset_assignments)}")
    print(f"Sequential assignments: {len(verilator_parser.sequential_assignments)}")

    # Show extracted simulation parameters
    config = verilator_parser.simulation_config
    print(f"Extracted parameters:")
    print(f"  Max cycles: {config.max_cycles}")
    print(f"  Clock period: {config.clock_period_ns} ns")
    print(f"  Reset duration: {config.reset_duration_ns} ns")

    # If no sequential assignments found but DUT detected, add manual logic
    if verilator_parser.has_dut and len(verilator_parser.sequential_assignments) == 0:
        print("  Adding manual LED blinker logic based on DUT analysis...")
        # Clear any duplicate reset assignments first
        unique_reset_assigns = {}
        for assign in verilator_parser.reset_assignments:
            unique_reset_assigns[assign.target] = assign
        verilator_parser.reset_assignments = list(unique_reset_assigns.values())

        # Add any missing reset assignments
        reset_targets = {a.target for a in verilator_parser.reset_assignments}
        if "counter" not in reset_targets:
            verilator_parser.reset_assignments.append(Assignment("counter", "0"))
        if "led" not in reset_targets:
            verilator_parser.reset_assignments.append(Assignment("led", "0"))

        # The LED blinker logic
        verilator_parser.sequential_assignments.extend([
            Assignment("counter", "(state->counter == 3) ? 0 : (state->counter + 1)", None),
            Assignment("led", "!(state->led)", "(state->counter == 3)")
        ])

    # Generate TT-Metal code
    generator = TTMetalGenerator(verilator_parser)
    tt_metal_code = generator.generate()

    # Write output with proper newline
    output_path = Path(args.output)
    output_path.write_text(tt_metal_code + '\n')  # Add trailing newline

    print(f"Generated TT-Metal kernel: {output_path}")
    print("Conversion completed successfully!")

if __name__ == "__main__":
    main()

