#!/usr/bin/env python3
"""
verilator_to_ttmetal.py - Build script to convert Verilator output to TT-Metal kernel
"""

import os
import sys
import argparse
import re
from pathlib import Path

KERNEL_TEMPLATE_SIMPLE = """// Auto-generated TT-Metal kernel from Verilator output
// Generated from: {verilog_file}
// Mode: Simple (using Verilator's built-in initial block)

#include "tt_metal_verilator_adapter.h"

// Include Verilator generated headers
{includes}

// Include Verilator generated implementations
{implementations}

// Implement the TT-Metal kernel
IMPLEMENT_TT_METAL_VERILATOR_KERNEL({model_class})
"""

KERNEL_TEMPLATE_AUTO = """// Auto-generated TT-Metal kernel from Verilator output
// Generated from: {verilog_file}
// Mode: Automatic (detected signals: {detected_signals})

#include "tt_metal_verilator_adapter_advanced.h"

// Include Verilator generated headers
{includes}

// Include Verilator generated implementations
{implementations}

// Implement the TT-Metal kernel with automatic runner
IMPLEMENT_TT_METAL_VERILATOR_KERNEL_AUTO({model_class}, {root_class})
"""

KERNEL_TEMPLATE_CUSTOM = """// Auto-generated TT-Metal kernel from Verilator output
// Generated from: {verilog_file}
// Mode: Custom testbench (detected signals: {detected_signals})

#include "tt_metal_verilator_adapter_advanced.h"

// Include Verilator generated headers
{includes}

// Include Verilator generated implementations
{implementations}

// Custom testbench implementation
IMPLEMENT_TT_METAL_VERILATOR_KERNEL_CUSTOM({model_class}, {root_class}, {{
    auto* root = runner.root();

{testbench_code}
}})
"""

class VerilatorToTTMetal:
    def __init__(self, verilator_dir, output_dir, model_name):
        self.verilator_dir = Path(verilator_dir)
        self.output_dir = Path(output_dir)
        self.model_name = model_name
        self.model_class = f"V{model_name}"
        self.root_class = f"V{model_name}___024root"

    def find_verilator_files(self):
        """Find all relevant Verilator generated files"""
        headers = []
        implementations = []

        for file in self.verilator_dir.glob("*.h"):
            if file.name.startswith(self.model_class):
                headers.append(file.name)

        for file in self.verilator_dir.glob("*.cpp"):
            if file.name.startswith(self.model_class):
                # Skip the ALL.cpp file as it includes others
                if not file.name.endswith("__ALL.cpp"):
                    implementations.append(file.name)

        return headers, implementations

    def detect_testbench_type(self):
        """Detect if this needs a custom testbench or can use automatic mode"""
        # Check if there's a timing coroutine (initial block)
        timing_file = self.verilator_dir / f"{self.root_class}__DepSet_h772c3d96__0.cpp"
        if timing_file.exists():
            content = timing_file.read_text()
            if "eval_initial__TOP__Vtiming__0" in content:
                # Has timing/initial block - can use simple mode
                return "simple", None, None

        # Otherwise check for clock/reset signals
        return self.analyze_root_signals()

    def analyze_root_signals(self):
        """Analyze the root header file to find clock and reset signals"""
        root_header = self.verilator_dir / f"{self.root_class}.h"
        if not root_header.exists():
            return "auto", None, None

        content = root_header.read_text()

        # Common patterns for clock and reset signals
        clock_patterns = ['clk', 'clock', 'CLK', 'CLOCK']
        reset_patterns = ['rst', 'reset', 'RST', 'RESET', 'rstn', 'resetn']

        clock_signal = None
        reset_signal = None

        # Look for CData (1-bit) signals that match our patterns
        signal_pattern = r'CData/\*.*?\*/\s+(\w+);'

        for match in re.finditer(signal_pattern, content):
            signal_name = match.group(1)

            # Skip internal signals
            if signal_name.startswith('__'):
                continue

            # Check if this is a clock signal
            if not clock_signal:
                for clk_pat in clock_patterns:
                    if clk_pat in signal_name:
                        clock_signal = signal_name
                        break

            # Check if this is a reset signal
            if not reset_signal:
                for rst_pat in reset_patterns:
                    if rst_pat in signal_name:
                        reset_signal = signal_name
                        break

        if clock_signal or reset_signal:
            return "custom", clock_signal, reset_signal
        else:
            return "auto", None, None

    def generate_kernel(self):
        """Generate the TT-Metal kernel file"""
        headers, implementations = self.find_verilator_files()

        # Generate include statements
        include_stmts = '\n'.join([f'#include "{h}"' for h in headers])
        impl_stmts = '\n'.join([f'#include "{impl}"' for impl in implementations])

        # Detect testbench type
        tb_type, clk_signal, rst_signal = self.detect_testbench_type()

        print(f"Detected testbench type: {tb_type}")
        if clk_signal:
            print(f"  Clock signal: {clk_signal}")
        if rst_signal:
            print(f"  Reset signal: {rst_signal}")

        detected_signals = []
        if clk_signal:
            detected_signals.append(f"clock={clk_signal}")
        if rst_signal:
            detected_signals.append(f"reset={rst_signal}")
        detected_str = ", ".join(detected_signals) if detected_signals else "none"

        # Choose template based on detection
        if tb_type == "simple":
            kernel_code = KERNEL_TEMPLATE_SIMPLE.format(
                verilog_file=self.model_name,
                includes=include_stmts,
                implementations=impl_stmts,
                model_class=self.model_class
            )
        elif tb_type == "auto":
            kernel_code = KERNEL_TEMPLATE_AUTO.format(
                verilog_file=self.model_name,
                includes=include_stmts,
                implementations=impl_stmts,
                model_class=self.model_class,
                root_class=self.root_class,
                detected_signals=detected_str
            )
        else:  # custom
            testbench_code = self.generate_testbench_code(clk_signal, rst_signal)
            kernel_code = KERNEL_TEMPLATE_CUSTOM.format(
                verilog_file=self.model_name,
                includes=include_stmts,
                implementations=impl_stmts,
                model_class=self.model_class,
                root_class=self.root_class,
                detected_signals=detected_str,
                testbench_code=testbench_code
            )

        # Write kernel file
        kernel_file = self.output_dir / f"{self.model_name}_ttmetal_kernel.cpp"
        kernel_file.write_text(kernel_code)

        print(f"Generated TT-Metal kernel: {kernel_file}")

    def generate_testbench_code(self, clk_signal, rst_signal):
        """Generate testbench code based on found signals"""
        code_lines = []

        if clk_signal:
            # Clock toggle logic
            code_lines.append(f"    // Toggle clock every 5ns")
            code_lines.append(f"    static bool clk_state = false;")
            code_lines.append(f"    if (runner.time() % 10 < 5) {{")
            code_lines.append(f"        if (!clk_state) {{")
            code_lines.append(f"            clk_state = true;")
            code_lines.append(f"            root->{clk_signal} = 1;")
            code_lines.append(f"        }}")
            code_lines.append(f"    }} else {{")
            code_lines.append(f"        if (clk_state) {{")
            code_lines.append(f"            clk_state = false;")
            code_lines.append(f"            root->{clk_signal} = 0;")
            code_lines.append(f"        }}")
            code_lines.append(f"    }}")

        if rst_signal:
            # Reset logic
            code_lines.append(f"    ")
            code_lines.append(f"    // Reset for first 2 cycles")
            code_lines.append(f"    if (cycle < 2) {{")
            code_lines.append(f"        root->{rst_signal} = 1;")
            code_lines.append(f"    }} else {{")
            code_lines.append(f"        root->{rst_signal} = 0;")
            code_lines.append(f"    }}")

        if not code_lines:
            code_lines.append("    // No clock or reset signals found - running as-is")

        code_lines.append("    ")
        code_lines.append("    return cycle < 1000; // Run for 1000 cycles")

        return '\n'.join(code_lines)

    def copy_adapter_headers(self):
        """Copy the adapter headers to output directory"""
        # In a real implementation, these would be installed somewhere
        # For now, just note that they need to be available
        print("Note: Ensure tt_metal_verilator_adapter.h is in your include path")

    def generate_build_script(self):
        """Generate a simple build script"""
        build_script = f"""#!/bin/bash
# Build script for {self.model_name} TT-Metal kernel

# Add Verilator output directory to include path
VERILATOR_INCLUDE="-I{self.verilator_dir}"

# Add TT-Metal adapter to include path
ADAPTER_INCLUDE="-I."  # Assumes adapter headers are in current directory

# Compile the kernel
# Note: Actual TT-Metal compilation command would go here
echo "Building {self.model_name}_ttmetal_kernel.cpp..."
echo "Include paths: $VERILATOR_INCLUDE $ADAPTER_INCLUDE"

# Placeholder for actual TT-Metal build command
# tt_metal_build_kernel ...
"""

        script_file = self.output_dir / f"build_{self.model_name}.sh"
        script_file.write_text(build_script)
        script_file.chmod(0o755)

        print(f"Generated build script: {script_file}")

def main():
    parser = argparse.ArgumentParser(description="Convert Verilator output to TT-Metal kernel")
    parser.add_argument("verilator_dir", help="Directory containing Verilator output (obj_dir)")
    parser.add_argument("model_name", help="Name of the top module (without V prefix)")
    parser.add_argument("-o", "--output", default=".", help="Output directory for TT-Metal kernel")

    args = parser.parse_args()

    # Create output directory
    output_dir = Path(args.output)
    output_dir.mkdir(exist_ok=True)

    # Create converter
    converter = VerilatorToTTMetal(args.verilator_dir, output_dir, args.model_name)

    # Generate kernel (automatically detects the best mode)
    converter.generate_kernel()

    # Copy adapter headers (in real implementation)
    converter.copy_adapter_headers()

    # Generate build script
    converter.generate_build_script()

    print(f"\nConversion complete!")
    print(f"Next steps:")
    print(f"1. Ensure adapter headers are in your include path")
    print(f"2. Review the generated kernel if needed")
    print(f"3. Run the build script to compile for TT-Metal")

if __name__ == "__main__":
    main()

