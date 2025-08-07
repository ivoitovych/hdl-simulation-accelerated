# Universal Shift Register

This directory contains a configurable universal shift register implementation in Verilog, along with a comprehensive testbench and a modular C++ verification framework. The design demonstrates a versatile shift register that can operate in multiple modes and with configurable width.

## Features

- **Configurable Width**: Set the bit width via parameter (default is 8 bits)
- **Multiple Operating Modes**:
  - Hold (maintain current value)
  - Shift Right (with serial input)
  - Shift Left (with serial input)
  - Parallel Load (load new value)
- **Complete Testbench**: Thoroughly verifies all functionality
- **Verilator Integration**: Ready for fast simulation
- **Multiple Verification Approaches**: Three different testing methodologies

## Files

- `universal_shift_register.v` - The core shift register module
- `universal_shift_register_tb.v` - Comprehensive testbench
- `test_vector_generator.cpp` - C++ test vector generator
- `dut_harness.cpp` - C++ DUT harness for Verilator
- `output_validator.cpp` - C++ output validation tool
- `combined_testbench.cpp` - All-in-one C++ testbench
- `test_flow.sh` - Shell script for running the complete flow
- `Makefile` - Build automation for the project

## Usage

### Quick Start

To see all available make targets:
```bash
make help
```

### Traditional Verilog Testbench

To run the traditional simulation with default parameters:

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

### Modular Test Vector Verification Flow

The project includes a three-component verification system with file-based test vectors:

```bash
# Run complete test vector flow with default 8-bit width
make test_vectors

# Run test vector flow with custom width
make test_vectors WIDTH=7

# Run test vector flow with waveform generation
make test_vectors_trace WIDTH=8
```

#### How It Works

1. **Test Vector Generator** (`test_vector_generator.cpp`)
   - Generates comprehensive test vectors in a structured format
   - Includes reset sequences, basic operations, walking ones, and random tests
   - Outputs to `input_vectors.txt`

2. **DUT Harness** (`dut_harness.cpp`)
   - Reads input test vectors
   - Applies them to the Verilated DUT
   - Captures outputs and writes to `output_vectors.txt`
   - Supports waveform generation with `+trace` option

3. **Output Validator** (`output_validator.cpp`)
   - Validates output vectors against expected behavior
   - Uses internal reference model
   - Reports pass/fail status for each test

#### Test Vector Format

Input vectors (one per line):
```
rst_n enable mode serial_in_right serial_in_left parallel_in[hex]
```

Output vectors (input + output):
```
rst_n enable mode serial_in_right serial_in_left parallel_in[hex] q[hex]
```

### Combined All-in-One Testbench

For a streamlined approach without file I/O, use the combined testbench:

```bash
# Run combined testbench with default width
make combined_run

# Run with custom width
make combined_run WIDTH=16

# Run with waveform generation
make combined_trace WIDTH=8
```

The combined testbench (`combined_testbench.cpp`) integrates all three verification components into a single executable, passing test vectors through memory instead of files.

### Manual Execution

#### Running the Traditional Testbench Manually

```bash
# Compile the design with Verilator (for 8-bit width)
verilator -Wall --trace --timing -Wno-fatal --binary -GWIDTH=8 universal_shift_register_tb.v universal_shift_register.v

# Run the compiled simulation
obj_dir/Vuniversal_shift_register_tb

# For waveform generation, add the +trace flag
obj_dir/Vuniversal_shift_register_tb +trace
```

#### Running the Modular Test Flow Manually

```bash
# Build all components
g++ -o test_vector_generator test_vector_generator.cpp
g++ -o output_validator output_validator.cpp
verilator -Wall --trace --cc -GWIDTH=8 universal_shift_register.v --exe dut_harness.cpp
make -C obj_dir -f Vuniversal_shift_register.mk

# Run the flow
./test_vector_generator 8
obj_dir/Vuniversal_shift_register -WIDTH=8
./output_validator 8

# View generated vectors
cat input_vectors.txt
cat output_vectors.txt
```

#### Running the Combined Testbench Manually

```bash
# Build the combined testbench
verilator -Wall --trace --cc -GWIDTH=8 universal_shift_register.v --exe combined_testbench.cpp
make -C obj_dir -f Vuniversal_shift_register.mk

# Run it
obj_dir/Vuniversal_shift_register -WIDTH=8

# Run with trace
obj_dir/Vuniversal_shift_register -WIDTH=8 +trace
```

### Viewing Waveforms

After running with the `+trace` option, you can view the waveform with GTKWave:

```bash
gtkwave waveform.vcd
```

### Clean Up

To clean up generated files:

```bash
make clean
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

### Traditional Testbench

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

### C++ Verification Frameworks

The C++ verification options provide:

1. **Systematic test generation** with predictable patterns
2. **Separation of concerns** between test generation, execution, and validation
3. **Reusable components** for future development
4. **Easy debugging** with human-readable test vectors
5. **Memory-efficient option** (combined testbench) for large test suites

### Running in Docker Environment

This example can be run within the Docker container provided by the parent project. To run this example in the Docker environment:

```bash
# Navigate to the project root
cd /path/to/hdl-simulation-accelerated

# Run the Docker container
docker run -it -v $(pwd):/workdir/project verilator-dev /bin/bash

# Inside the container, navigate to this example
cd /workdir/project/examples/shift_register

# Run the example
make

# Or run the combined testbench
make combined_run
```

## Integration with Acceleration Framework

This shift register design serves as an excellent test case for accelerating HDL simulation on AI hardware. The simple yet configurable nature of this module makes it ideal for demonstrating parallel simulation techniques and exploring the performance benefits of hardware acceleration for digital design verification.

The modular C++ verification framework is designed to be easily adapted for hardware acceleration in future development stages. The combined testbench approach is particularly suitable for GPU/TPU acceleration as it eliminates file I/O overhead.
