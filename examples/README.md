# HDL Simulation Examples

This directory contains a collection of Verilog examples demonstrating various digital design patterns and testing methodologies. The examples progress from simple single-file designs to more complex multi-file projects suitable for acceleration on AI hardware.

## Example Categories

### Single-File Examples (TTMRTL-001)
Simple, self-contained Verilog designs with integrated testbenches in a single file.

| Example | Description | Key Concepts |
|---------|-------------|--------------|
| [`minimal_divider/`](minimal_divider/) | Ripple counter chain with clock dividers | Basic sequential logic, clock generation |
| [`led_blinker/`](led_blinker/) | Configurable LED blinker | Parameterized design, counter |
| [`edge_detector/`](edge_detector/) | Rising/falling edge detection | Combinational logic, state tracking |
| [`one_shot_pulse/`](one_shot_pulse/) | Single pulse generator after delay | State machines, timing control |
| [`8bit_counter/`](8bit_counter/) | 8-bit counter with overflow detection | Arithmetic operations, status flags |

### Multi-File Examples (TTMRTL-002)
Projects with separate module and testbench files, demonstrating proper HDL project structure.

| Example | Description | Files | Key Concepts |
|---------|-------------|-------|--------------|
| [`serial_crc32_generator/`](serial_crc32_generator/) | IEEE 802.3 CRC-32 generator | Module + TB | Serial processing, standards compliance |
| [`shift_register/`](shift_register/) | Universal shift register with TT-Metal acceleration | Module + TB + TT-Metal | Parameterized design, multiple modes, **host-device communication** |
| [`pwm_generator/`](pwm_generator/) | Pulse-width modulation generator | Module + TB | Clock division, duty cycle control |
| [`simple_alu/`](simple_alu/) | 8-bit ALU with 10 operations | Module + TB | Arithmetic/logic ops, status flags |
| [`uart_tx_basic/`](uart_tx_basic/) | UART transmitter | Module + TB | Serial communication, state machines |

### Advanced Examples (Hardware Acceleration)
Projects demonstrating hardware acceleration and host-device communication.

| Example | Description | Platform | Status |
|---------|-------------|----------|--------|
| [`arbitrary_struct_dataflow/`](arbitrary_struct_dataflow/) | Custom data structure processing | TT-Metal | ✅ Working |
| [`shift_register/sim_comm/`](shift_register/sim_comm/) | **RTL simulation with host-device communication** | TT-Metal | ✅ **Working (100% pass rate)** |

## Quick Start

Each example includes:
- Verilog source files (`.v`)
- Makefile for easy compilation and execution
- README.md with detailed documentation
- Testbench with automated verification

To run any example:

```bash
cd <example_directory>
make              # Build and run simulation
make trace        # Run with waveform generation
make view_wave    # View waveforms (requires GTKWave)
make clean        # Clean build artifacts
```

### Running TT-Metal Accelerated Examples

For examples with TT-Metal support:

```bash
# Navigate to TT-Metal directory
cd ~/setup/tt-metal

# Build with programming examples
./build_metal.sh --build-programming-examples

# Run specific example (e.g., shift register with communication)
./build_Release/programming_examples/hdl_simulation_accelerated/shift_register_sim_comm
```

## Example Complexity Progression

1. **Beginner**: Start with `led_blinker` or `edge_detector` for basic concepts
2. **Intermediate**: Try `shift_register` or `8bit_counter` for more complex logic
3. **Advanced**: Explore `serial_crc32_generator` or `simple_alu` for real-world designs
4. **Hardware Acceleration**: Study `shift_register/sim_comm/` for TT-Metal integration with communication

## Common Patterns Demonstrated

### Timing and Clocks
- Clock generation and division (`led_blinker`, `pwm_generator`)
- Edge detection and synchronization (`edge_detector`)
- Configurable delays (`one_shot_pulse`)

### State Machines
- Simple FSMs (`uart_tx_basic`)
- Counter-based state machines (`8bit_counter`)
- Mode-based operation (`shift_register`)

### Arithmetic and Logic
- Basic arithmetic with flags (`simple_alu`)
- Bit manipulation (`shift_register`)
- CRC calculation (`serial_crc32_generator`)

### Parameterization
- Configurable bit widths (`shift_register`, `simple_alu`)
- Clock frequency parameters (`uart_tx_basic`)
- Behavioral parameters (`led_blinker`, `pwm_generator`)

### Hardware Acceleration (NEW)
- Host-device communication (`shift_register/sim_comm/`)
- Structured data transfer with 16-byte alignment
- Batch processing of test vectors
- Cycle-accurate simulation on AI hardware

## Testing Strategies

### Self-Contained Tests
Single-file examples include testbenches that:
- Generate stimulus
- Check outputs
- Print results

### Comprehensive Testbenches
Multi-file examples feature separate testbenches with:
- Automated checking
- Multiple test cases
- Performance measurement
- Edge case coverage

### Hardware-Accelerated Testing (NEW)
TT-Metal examples demonstrate:
- Host-controlled test generation
- Device-based simulation execution
- Bidirectional data transfer
- Automatic result verification
- Performance metrics collection

## Integration with Docker Environment

All examples are designed to work within the provided Docker container:

```bash
# From project root
docker run -it -v $(pwd):/workdir/project verilator-dev /bin/bash

# Inside container
cd /workdir/project/examples/<example_name>
make
```

## Verilator Compatibility

All examples are tested with Verilator and follow best practices:
- Clean lint warnings (or use appropriate lint_off directives)
- Proper timing annotations
- Synthesizable RTL (except testbench code)
- Efficient simulation performance

## TT-Metal Acceleration Support

Several examples demonstrate TT-Metal hardware acceleration:

| Example | TT-Metal Feature | Status |
|---------|------------------|--------|
| `minimal_divider/` | C++ kernel implementation | ✅ Working |
| `led_blinker/` | C++ kernel (partial) | ⚠️ Integration needed |
| `uart_tx_basic/` | Python conversion script | 🔧 Prototype |
| `arbitrary_struct_dataflow/` | Full pipeline | ✅ Working |
| **`shift_register/sim_comm/`** | **Complete RTL simulation with communication** | ✅ **Working (64/64 tests pass)** |

## Future Examples (Planned)

### TTMRTL-003: Multi-Clock Domains
- `dual_clock_fifo/` - Asynchronous FIFO
- `reset_synchronizer/` - Clock domain crossing

### TTMRTL-004: Parallel Designs
- `parallel_counters/` - Multiple independent counters
- `multi_channel_pwm/` - Parallel PWM generators

### TTMRTL-005: Complex Designs
- `picorv32_core/` - RISC-V CPU implementation
- `aes_engine/` - Cryptographic accelerator

### TTMRTL-006: Advanced Acceleration
- Multi-core RTL simulation distribution
- Waveform generation from TT-Metal
- Coverage collection on accelerator

## Contributing New Examples

When adding new examples, please include:
1. Clear, well-commented Verilog code
2. Comprehensive testbench with pass/fail reporting
3. Makefile following the established pattern
4. README.md with:
   - Description and features
   - Module interface documentation
   - Usage examples
   - Expected output
   - Integration guidance
5. (Optional) TT-Metal acceleration support with:
   - Host application code
   - Device kernel implementation
   - Communication structures
   - Performance metrics

## License

All examples are provided for educational and demonstration purposes as part of the HDL Simulation Accelerated project.

