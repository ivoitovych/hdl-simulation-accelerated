# PWM Generator

A configurable Pulse Width Modulation (PWM) generator with adjustable duty cycle, period, and clock division.

## Description

This module generates a PWM signal with configurable parameters. It's split into two files demonstrating proper HDL project structure:
- `pwm_generator.v` - The PWM generator module
- `pwm_generator_tb.v` - Comprehensive testbench with duty cycle measurement

## Features

- **Configurable bit width**: Set PWM resolution via WIDTH parameter
- **Adjustable period**: Control PWM frequency
- **Variable duty cycle**: 0 to 100% duty cycle control
- **Clock divider**: Optional clock division for lower PWM frequencies
- **Enable control**: Start/stop PWM generation
- **Synchronous design**: All operations on clock edge

## Files

- `pwm_generator.v` - PWM generator module implementation
- `pwm_generator_tb.v` - Testbench with automated duty cycle verification
- `Makefile` - Build automation
- `README.md` - This file

## Module Interface

```verilog
module pwm_generator #(
    parameter WIDTH = 8,              // Resolution of PWM counter
    parameter CLK_DIV = 1            // Clock divider for PWM frequency
)(
    input  wire clk,                 // System clock
    input  wire rst_n,               // Active-low reset
    input  wire enable,              // Enable PWM output
    input  wire [WIDTH-1:0] duty,    // Duty cycle (0 to 2^WIDTH-1)
    input  wire [WIDTH-1:0] period,  // PWM period (max count value)
    output reg  pwm_out              // PWM output signal
);
```

## Parameters

- `WIDTH`: Bit width of the PWM counter (default: 8)
  - Determines PWM resolution: 2^WIDTH levels
- `CLK_DIV`: Clock divider value (default: 1)
  - PWM frequency = System Clock / (CLK_DIV × (period + 1))

## Usage

### Duty Cycle Calculation

The duty cycle percentage is calculated as:
```
Duty Cycle % = (duty / (period + 1)) × 100
```

For example, with period=99:
- duty=0 → 0% duty cycle (always low)
- duty=50 → 50% duty cycle
- duty=100 → 100% duty cycle (always high)

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

## Testbench Features

The testbench (`pwm_generator_tb.v`) includes:

1. **Reset Test**: Verifies proper reset behavior
2. **Duty Cycle Tests**: Tests various duty cycles (0%, 25%, 50%, 75%, 100%)
3. **Measurement Function**: Automatically measures actual duty cycle
4. **Dynamic Tests**: Tests duty cycle ramping
5. **Enable/Disable Tests**: Verifies enable functionality

### Test Output Example

```
Starting PWM Generator Testbench
=================================

Test 0: Reset behavior
PASS: PWM output correctly reset to 0

Test 1: 50% duty cycle
Expected: 50.0%, Measured: 50.0%
PASS: Duty cycle within tolerance

Test 2: Various duty cycles
  Testing 0% duty cycle...
  Expected: 0.0%, Measured: 0.0%
  PASS

  Testing 25% duty cycle...
  Expected: 25.0%, Measured: 25.0%
  PASS
...
```

## Waveform Viewing

After running `make trace`, you can view the generated waveforms:

1. The PWM output toggles based on the duty cycle setting
2. The period determines the PWM frequency
3. The duty cycle can be changed dynamically

## Applications

- LED brightness control
- Motor speed control
- Servo motor positioning
- Power regulation
- Audio tone generation
- Digital-to-analog conversion (with filtering)

## Integration Example

```verilog
// Example: LED dimmer with 1kHz PWM from 100MHz clock
pwm_generator #(
    .WIDTH(8),
    .CLK_DIV(1000)  // Divide 100MHz by 1000
) led_pwm (
    .clk(clk_100mhz),
    .rst_n(rst_n),
    .enable(1'b1),
    .duty(brightness),    // 0-255 brightness levels
    .period(8'd99),       // 100 count period
    .pwm_out(led)
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
cd /workdir/project/examples/pwm_generator
make
```

