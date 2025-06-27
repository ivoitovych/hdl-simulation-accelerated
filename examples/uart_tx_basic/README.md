# UART TX Basic

A simple UART transmitter implementation with configurable baud rate, demonstrating multi-file Verilog project structure.

## Description

This project implements a basic UART transmitter with:
- `uart_tx_basic.v` - The UART transmitter module
- `uart_tx_basic_tb.v` - Testbench with UART receiver for verification

## Features

- **Configurable baud rate**: Set via parameters
- **8-N-1 format**: 8 data bits, no parity, 1 stop bit
- **Start bit detection**: Proper UART framing
- **Busy indicator**: Shows when transmission is active
- **Parameterized clock frequency**: Adaptable to different systems

## Files

- `uart_tx_basic.v` - UART transmitter module
- `uart_tx_basic_tb.v` - Self-checking testbench with UART receiver
- `Makefile` - Build automation
- `README.md` - This file

## Module Interface

```verilog
module uart_tx_basic #(
    parameter CLK_FREQ = 50000000,  // Clock frequency in Hz
    parameter BAUD_RATE = 115200    // Baud rate
)(
    input  wire clk,                // System clock
    input  wire rst_n,              // Active-low reset
    input  wire [7:0] data_in,      // Data to transmit
    input  wire start,              // Start transmission
    output reg  tx,                 // UART TX line
    output reg  busy                // Transmission in progress
);
```

## UART Frame Format

```
   ___     _______________     ___
      |   | D0| D1|...|D7 |   |
      |___|               |___|
     Start  Data (8 bits)  Stop
      (0)   (LSB first)    (1)
```

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
UART TX Basic Testbench
======================
Clock frequency: 50000000 Hz
Baud rate: 115200
Bit period: 8680 ns

Test 0: Sending 0x55
PASS: Received 0x55

Test 1: Sending 0xAA
PASS: Received 0xAA

Test 2: Sending ASCII 'Hello'
  Sent: 'H' (0x48), Received: 'H' (0x48)
  Sent: 'e' (0x65), Received: 'e' (0x65)
  Sent: 'l' (0x6C), Received: 'l' (0x6C)
  Sent: 'l' (0x6C), Received: 'l' (0x6C)
  Sent: 'o' (0x6F), Received: 'o' (0x6F)
...
```

## Timing Calculations

The baud rate generator divides the system clock to achieve the desired bit rate:

```
Clocks per bit = Clock Frequency / Baud Rate

Example:
50 MHz / 115200 = 434 clocks per bit
Bit period = 434 × 20ns = 8.68 μs
```

## State Machine

The transmitter uses a 4-state FSM:

1. **IDLE**: Waiting for start signal, TX line high
2. **START_BIT**: Transmit start bit (0)
3. **DATA_BITS**: Transmit 8 data bits, LSB first
4. **STOP_BIT**: Transmit stop bit (1)

## Testbench Features

The testbench includes:
- A behavioral UART receiver for verification
- Multiple test patterns (0x55, 0xAA, ASCII text)
- Back-to-back transmission testing
- Idle state verification
- Automatic checking of received data

## Integration Example

```verilog
// Example: Connect to a microcontroller UART
uart_tx_basic #(
    .CLK_FREQ(100_000_000),  // 100 MHz system clock
    .BAUD_RATE(9600)         // 9600 baud for compatibility
) uart_tx_inst (
    .clk(sys_clk),
    .rst_n(sys_rst_n),
    .data_in(tx_data),
    .start(tx_valid && !busy),
    .tx(uart_tx_pin),
    .busy(tx_busy)
);
```

## Common Baud Rates

| Baud Rate | Use Case |
|-----------|----------|
| 9600      | Legacy devices, long cables |
| 19200     | Industrial equipment |
| 38400     | Embedded systems |
| 57600     | High-speed embedded |
| 115200    | Standard PC serial |
| 230400    | High-speed data transfer |

## Docker Environment

To run in the Docker container:

```bash
# Navigate to project root
cd /path/to/hdl-simulation-accelerated

# Run Docker container
docker run -it -v $(pwd):/workdir/project verilator-dev /bin/bash

# Inside container
cd /workdir/project/examples/uart_tx_basic
make
```

## Future Enhancements

- Add parity bit support
- Implement FIFO buffer
- Add flow control (RTS/CTS)
- Support different data widths (5-9 bits)
- Add break detection

