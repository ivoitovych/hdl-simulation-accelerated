# Verilator to TT-Metal Converter

This tool converts Verilator-generated C++ simulation code into TT-Metal compute kernels, enabling HDL simulation acceleration on Tenstorrent hardware.

## Overview

The converter parses Verilator's C++ output files and generates equivalent TT-Metal kernel code that can run on Tenstorrent accelerators. It maintains the original simulation semantics while adapting the code for the TT-Metal compute model.

## Features

- Automatic extraction of state variables from Verilator output
- Clock and reset signal detection
- Sequential and combinational logic parsing
- Configurable simulation parameters (clock period, reset duration, cycle count)
- Template-based code generation using Jinja2

## Requirements

- Python 3.8+
- Jinja2 (`pip install jinja2`)

## Usage

### Basic Usage

```bash
python tools/verilator2ttmetal/verilator2ttmetal.py <verilator_obj_dir> -o <output_file>
```

### Example

```bash
# First, generate Verilator output
cd examples/minimal_divider
verilator --cc minimal_divider_sim.v

# Then convert to TT-Metal
python ../../tools/verilator2ttmetal/verilator2ttmetal.py obj_dir -o rtl_kernel.cpp
```

### Command Line Options

- `obj_dir`: Path to Verilator's obj_dir output directory
- `-o, --output`: Output file path (default: rtl_kernel.cpp)

## How It Works

1. **Parsing Phase**:
   - Scans Verilator header files for state variables
   - Identifies clock and reset signals
   - Extracts bit widths and data types

2. **Logic Extraction**:
   - Parses implementation files for sequential logic
   - Identifies reset conditions and assignments
   - Extracts combinational logic patterns

3. **Code Generation**:
   - Maps Verilator data types to C++ types
   - Generates TT-Metal kernel structure
   - Preserves simulation timing and behavior

## Supported Features

- Single clock domain designs
- Synchronous reset
- State variables up to 64 bits
- Basic combinational and sequential logic

## Limitations

- Currently supports single clock domain only
- Asynchronous resets not yet supported
- Complex Verilator constructs may require manual adjustment

## Output Structure

The generated TT-Metal kernel includes:
- RTL simulation state structure
- Initialization functions
- Clock toggle logic
- Combinational/sequential evaluation
- Debug output via DPRINT
- Standard TT-Metal kernel entry points (unpack/math/pack)

## Extending the Converter

To support new Verilator patterns:
1. Add pattern recognition in `_parse_sequential_logic()`
2. Update expression cleaning in `_clean_expression()`
3. Modify the Jinja2 template if needed

## Troubleshooting

If the converter fails to parse your design:
1. Check that Verilator compilation succeeded
2. Verify the design uses supported features
3. Enable debug output by adding print statements
4. Check for unsupported Verilator constructs in the generated C++

## Future Enhancements

- Multi-clock domain support
- Asynchronous reset handling
- Memory and array support
- Automatic testbench generation
- Performance profiling integration

