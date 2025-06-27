# Simple ALU (Arithmetic Logic Unit)

A basic 8-bit ALU implementation with comprehensive operation support and status flags, split into separate module and testbench files.

## Description

This ALU demonstrates proper HDL design practices with:
- `simple_alu.v` - The ALU module implementation
- `simple_alu_tb.v` - Comprehensive testbench with automated verification

## Features

- **8-bit operations** (configurable width via parameter)
- **10 operations**: ADD, SUB, AND, OR, XOR, NOT, SHL, SHR, CMP, MUL
- **Status flags**: Zero, Negative, Carry, Overflow
- **Edge-triggered execution**: Operations execute on rising edge of execute signal
- **Single-cycle operation**: Result available after one clock cycle

## Files

- `simple_alu.v` - ALU module implementation
- `simple_alu_tb.v` - Testbench with comprehensive test cases
- `Makefile` - Build automation
- `README.md` - This file

## Module Interface

```verilog
module simple_alu #(
    parameter WIDTH = 8
)(
    input  wire clk,                // System clock
    input  wire rst_n,              // Active-low reset
    input  wire [WIDTH-1:0] a,      // Operand A
    input  wire [WIDTH-1:0] b,      // Operand B
    input  wire [3:0] opcode,       // Operation code
    input  wire execute,            // Execute operation
    output reg  [WIDTH-1:0] result, // Result
    output reg  [3:0] flags,        // Status flags
    output reg  done                // Operation complete
);
```

## Operation Codes

| Opcode | Operation | Description |
|--------|-----------|-------------|
| 0000   | ADD       | A + B |
| 0001   | SUB       | A - B |
| 0010   | AND       | A & B |
| 0011   | OR        | A \| B |
| 0100   | XOR       | A ^ B |
| 0101   | NOT       | ~A |
| 0110   | SHL       | A << 1 |
| 0111   | SHR       | A >> 1 |
| 1000   | CMP       | Compare A and B |
| 1001   | MUL       | A * B (lower bits) |

## Status Flags

| Bit | Flag     | Description |
|-----|----------|-------------|
| 3   | Zero     | Result is zero |
| 2   | Negative | Result is negative (MSB = 1) |
| 1   | Carry    | Carry/borrow occurred |
| 0   | Overflow | Signed overflow occurred |

## Usage

### Running the Simulation

```bash
# Build and run simulation
make

# Run with waveform generation
make trace

# View waveforms
make view_wave

# Clean build artifacts
make clean
```

### Example Test Output

```
Starting Simple ALU Testbench
=============================

Testing ADD operations:
PASS: ADD 5+3 - A=05, B=03, Result=08, Flags=0000
PASS: ADD FF+1 (carry) - A=ff, B=01, Result=00, Flags=1010
PASS: ADD 7F+1 (overflow) - A=7f, B=01, Result=80, Flags=0101

Testing SUB operations:
PASS: SUB 8-3 - A=08, B=03, Result=05, Flags=0000
PASS: SUB 3-8 (negative) - A=03, B=08, Result=fb, Flags=0110
...
```

## Operation Details

### Arithmetic Operations
- **ADD/SUB**: Full adder/subtractor with carry/borrow and overflow detection
- **MUL**: 8x8 multiply returning lower 8 bits, overflow flag if upper bits non-zero

### Logical Operations
- **AND/OR/XOR**: Bitwise operations, flags cleared except Zero and Negative
- **NOT**: Bitwise complement of A (B ignored)

### Shift Operations
- **SHL/SHR**: Single-bit left/right shift with carry flag capturing shifted-out bit

### Compare Operation
- **CMP**: Performs A-B but only updates flags, result unchanged
- Sets Zero flag if A==B, Negative if A<B

## Integration Example

```verilog
// Example: Using ALU in a simple processor
simple_alu #(.WIDTH(16)) cpu_alu (
    .clk(clk),
    .rst_n(rst_n),
    .a(reg_a),
    .b(reg_b),
    .opcode(instruction[3:0]),
    .execute(decode_state && alu_op),
    .result(alu_result),
    .flags(status_register),
    .done(alu_done)
);
```

## Docker Environment

To run in the Docker container:

```bash
# Navigate to project root
cd /path/to/hdl-simulation-accelerated

# Run Docker container
docker run -it -v $(pwd):/workdir/project verilator-dev /bin/bash

# Inside container
cd /workdir/project/examples/simple_alu
make
```

## Design Notes

- The ALU uses edge detection on the execute signal to trigger operations
- All operations complete in one clock cycle after the execute edge
- The done signal pulses high for one cycle when operation completes
- Compare operation doesn't modify the result register
- Overflow detection is implemented for signed arithmetic

