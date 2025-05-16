# Universal Shift Register

This directory contains a configurable universal shift register implementation in Verilog, along with a comprehensive testbench. The design demonstrates a versatile shift register that can operate in multiple modes and with configurable width.

## Features

- **Configurable Width**: Set the bit width via parameter (default is 8 bits)
- **Multiple Operating Modes**:
  - Hold (maintain current value)
  - Shift Right (with serial input)
  - Shift Left (with serial input)
  - Parallel Load (load new value)
- **Complete Testbench**: Thoroughly verifies all functionality
- **Verilator Integration**: Ready for fast simulation

## Files

- `universal_shift_register.v` - The core shift register module
- `universal_shift_register_tb.v` - Comprehensive testbench
- `Makefile` - Build automation for the project

## Usage

### Using the Makefile

To run the simulation with default parameters:

```bash
# Build and run with default 8-bit width
make
```

To test with a non-power-of-2 width (good for edge case testing):

```bash
# Test with a 7-bit width register
make WIDTH=7
```

To enable waveform tracing for debugging:

```bash
# Run with waveform generation
make trace
```

To clean up generated files:

```bash
# Remove all build artifacts
make clean
```

### Running Manually (Without Makefile)

If you prefer to run the commands directly, you can use the following:

```bash
# Compile the design with Verilator (for 8-bit width)
verilator -Wall --trace --timing -Wno-fatal --binary -GWIDTH=8 universal_shift_register_tb.v universal_shift_register.v

# Run the compiled simulation
obj_dir/Vuniversal_shift_register_tb

# For waveform generation, add the +trace flag
obj_dir/Vuniversal_shift_register_tb +trace

# For different width (e.g., 7-bit), specify with -GWIDTH
verilator -Wall --trace --timing -Wno-fatal --binary -GWIDTH=7 universal_shift_register_tb.v universal_shift_register.v
```

After running with the `+trace` option, you can view the waveform with GTKWave:

```bash
gtkwave waveform.vcd
```

## How It Works

The shift register implements four operations controlled by a 2-bit mode signal:

| Mode | Operation     | Description                                     |
|------|---------------|-------------------------------------------------|
| 00   | Hold          | Maintains the current value                     |
| 01   | Shift Right   | Shifts all bits right, `serial_in_right` → MSB  |
| 10   | Shift Left    | Shifts all bits left, `serial_in_left` → LSB    |
| 11   | Parallel Load | Loads the entire `parallel_in` value            |

The enable signal allows the register to be disabled while maintaining its state.

## Test Methodology

The testbench (`universal_shift_register_tb.v`) implements a thorough verification approach:

1. **Basic functionality tests**:
   - Reset behavior
   - Enable/disable functionality
   - All four operation modes

2. **Edge case tests**:
   - Alternating bit patterns
   - Walking 1's test
   - Rapid mode changes

3. **Randomized testing**:
   - 100 randomized test cases
   - Pseudorandom input generation
   - Result validation

## Integration with Acceleration Framework

This shift register design serves as an excellent test case for accelerating HDL simulation on AI hardware. The simple yet configurable nature of this module makes it ideal for demonstrating parallel simulation techniques and exploring the performance benefits of hardware acceleration for digital design verification.

