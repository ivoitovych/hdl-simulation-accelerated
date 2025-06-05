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
        
    def parse(self) -> bool:
        """Parse all relevant files in the obj_dir"""
        try:
            self._find_module_name()
            print(f"  Module name: {self.module_name}")
            self._parse_header_file()
            print(f"  Found {len(self.state_variables)} state variables")
            self._parse_implementation_file()
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
        
        # Find state variables
        # Pattern: CData/*0:0*/ module__DOT__signal_name;
        state_pattern = r'(CData|IData|QData)/\*(\d+):(\d+)\*/ (\w+__DOT__\w+);'
        for match in re.finditer(state_pattern, content):
            data_type, high_bit, low_bit, full_name = match.groups()
            
            # Extract signal name from full_name (remove module prefix and __DOT__)
            if "__DOT__" in full_name:
                signal_name = full_name.split("__DOT__")[-1]
            else:
                signal_name = full_name
            
            bit_width = int(high_bit) - int(low_bit) + 1
            
            # Skip internal signals, focus on design signals
            if any(skip in signal_name for skip in ["Vtrig", "__V", "clk", "rst"]):
                continue
                
            self.state_variables.append(StateVariable(
                name=signal_name,
                data_type=self._map_data_type(data_type, bit_width),
                bit_width=bit_width
            ))
        
        # Look for clock and reset signals
        if "clk" in content:
            self.clock_signals.append(ClockInfo("clk"))
        if "rst" in content:
            self.reset_signals.append(ResetInfo("rst"))
    
    def _parse_implementation_file(self):
        """Parse the main implementation file for logic"""
        impl_files = list(self.obj_dir.glob(f"V{self.module_name}___024root__DepSet_*__0.cpp"))
        if not impl_files:
            return
            
        content = impl_files[0].read_text()
        
        # Extract simulation parameters from source
        self._extract_simulation_params(content)
        
        # Find the main sequential block (nba_sequent function)
        nba_pattern = r'void V\w+___024root___nba_sequent__TOP__0\([^}]+\{(.*?)\n\}'
        nba_match = re.search(nba_pattern, content, re.DOTALL)
        
        if nba_match:
            nba_content = nba_match.group(1)
            self._parse_sequential_logic(nba_content)
    
    def _extract_simulation_params(self, content: str):
        """Extract simulation parameters from Verilator source"""
        # Look for delay values (clock period) - find first delay pattern
        delay_match = re.search(r'delay\(0x([0-9A-Fa-f]+)ULL', content)
        if delay_match:
            # Convert hex to decimal and assume it's half clock period
            delay_value = int(delay_match.group(1), 16)
            self.simulation_config.clock_period_ns = delay_value * 2
        
        # Look for reset duration - find delay followed by rst = 0U
        reset_delay_match = re.search(r'delay\(0x([0-9A-Fa-f]+)ULL[^}]*rst.*=.*0U', content, re.DOTALL)
        if reset_delay_match:
            self.simulation_config.reset_duration_ns = int(reset_delay_match.group(1), 16)
        
        # Look for maximum cycles (VL_FINISH condition)
        finish_match = re.search(r'\(0x([0-9A-Fa-f]+)U.*==.*\)', content)
        if finish_match:
            self.simulation_config.max_cycles = int(finish_match.group(1), 16)
    
    def _parse_sequential_logic(self, content: str):
        """Parse sequential logic from the nba_sequent function"""
        lines = content.split('\n')
        
        in_reset_block = False
        in_else_block = False
        current_condition = None
        brace_depth = 0
        
        for line in lines:
            line = line.strip()
            if not line:
                continue
            
            # Track brace depth
            brace_depth += line.count('{') - line.count('}')
            
            # Check for reset condition - look for rst in if condition
            if re.search(r'if\s*\([^)]*rst[^)]*\)\s*\{', line):
                in_reset_block = True
                continue
            elif re.search(r'\}\s*else\s*\{', line):
                in_reset_block = False
                in_else_block = True
                continue
            elif line.startswith('}') and brace_depth <= 0:
                in_reset_block = False
                in_else_block = False
                current_condition = None
                brace_depth = 0
                continue
            
            # Parse assignments - look for both __Vdly__ and direct assignments
            assignment_patterns = [
                r'__Vdly__[^=]*__DOT__(\w+)\s*=\s*(.+);',
                r'vlSelfRef\.[^=]*__DOT__(\w+)\s*=\s*(.+);',
                r'state->(\w+)\s*=\s*(.+);'  # In case there are direct state assignments
            ]
            
            assignment_match = None
            for pattern in assignment_patterns:
                assignment_match = re.search(pattern, line)
                if assignment_match:
                    break
            
            if assignment_match:
                target, expression = assignment_match.groups()
                expression = self._clean_expression(expression)
                
                if in_reset_block:
                    self.reset_assignments.append(Assignment(target, expression))
                elif in_else_block:
                    self.sequential_assignments.append(Assignment(target, expression, current_condition))
            
            # Check for conditional statements in else block
            if_match = re.search(r'if\s*\(([^)]+)\)\s*\{', line)
            if if_match and in_else_block:
                current_condition = self._clean_expression(if_match.group(1))
    
    def _clean_expression(self, expr: str) -> str:
        """Clean up Verilator expressions for TT-Metal"""
        # Remove Verilator-specific prefixes
        expr = re.sub(r'vlSelfRef\.[^.]*__DOT__', 'state->', expr)
        expr = re.sub(r'__Vdly__[^.]*__DOT__', '', expr)
        expr = re.sub(r'\(IData\)', '', expr)
        
        # Handle toggle patterns: (1U & (~ (IData)(signal))) -> !(signal)
        expr = re.sub(r'\(1U\s*&\s*\(\s*~\s*\(IData\)\s*\(([^)]+)\)\s*\)\)', r'!(\1)', expr)
        
        # Handle AND patterns: ((IData)(a) & (IData)(b)) -> (a && b)
        expr = re.sub(r'\(\(IData\)\s*\(([^)]+)\)\s*&\s*\(IData\)\s*\(([^)]+)\)\)', r'(\1 && \2)', expr)
        
        # Replace state references
        expr = re.sub(r'vlSelfRef\.minimal_divider_sim__DOT__(\w+)', r'state->\1', expr)
        
        # Replace increment pattern: ((IData)(1U) + signal) -> (signal + 1)
        expr = re.sub(r'\(\(IData\)\(1U\)\s*\+\s*([^)]+)\)', r'(\1 + 1)', expr)
        
        # Replace common patterns
        expr = expr.replace('1U', '1')
        expr = expr.replace('0U', '0')
        expr = expr.replace('(IData)', '')
        
        return expr.strip()
    
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
        
        return template.render(
            module_name=self.parser.module_name,
            state_variables=self.parser.state_variables,
            clock_signals=self.parser.clock_signals,
            reset_signals=self.parser.reset_signals,
            reset_assignments=self.parser.reset_assignments,
            sequential_assignments=self.parser.sequential_assignments,
            config=config
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

