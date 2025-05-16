# Serial CRC-32 Generator

This directory contains a bit-serial CRC-32 generator implementation in Verilog, along with a comprehensive testbench. The design efficiently calculates CRC-32 checksums by processing one bit at a time, making it suitable for resource-constrained or high-speed serial applications.

## Features

- **IEEE 802.3 Standard CRC-32 (LSB-first)**: Implements the industry-standard polynomial (0x04C11DB7), using the reflected bit order (0xEDB88320) for LSB-first processing.
- **Bit-Serial Processing**: Processes one bit per clock cycle for efficiency.
- **Configurable Operation**: Can calculate CRC for messages of any length.
- **Reset for New Messages**: Supports resetting the CRC calculation for new data streams.
- **Standard Initialization**: Uses the standard CRC-32 initial value (0xFFFFFFFF).
- **Comprehensive Testbench**: Validates against known test vectors.

## Files

- `serial_crc32_generator.v` — The core CRC-32 generator module.
- `serial_crc32_generator_tb.v` — Comprehensive testbench with standard test vectors.
- `Makefile` — Build automation for the project.

## Technical Details

### CRC-32 Polynomial

This implementation uses the standard IEEE 802.3 polynomial:
- x^32 + x^26 + x^23 + x^22 + x^16 + x^12 + x^11 + x^10 + x^8 + x^7 + x^5 + x^4 + x^2 + x + 1
- Represented as: 0x04C11DB7

**Note:** This implementation uses the standard CRC-32 polynomial in *reflected* (LSB-first) form: `0xEDB88320` (the bit-reversed version of `0x04C11DB7`).  
This is the standard for most software and serial hardware CRC-32 generators.

### Processing Method

The module processes data one bit at a time, suitable for serial communication applications. The algorithm:
1. Initializes the CRC register with 0xFFFFFFFF.
2. For each input bit:
   - Calculates feedback by XORing the LSB of the current CRC with the input bit.
   - Shifts the CRC register right by one bit (since it is LSB-first).
   - If feedback is 1, XORs the CRC register with the polynomial.
3. Returns the complemented value of the final CRC register.

**Bit Order:**  
Data bytes must be fed **least significant bit first (LSB-first)**. If your data source transmits data MSB-first (most common in Ethernet frames), you need to reverse the bits in each byte before sending them to this generator.

## Usage

### Using the Makefile

To build and run the simulation:

```bash
# Build and run
make

# Run with waveform tracing enabled
make trace

# View the waveform (if GTKWave is installed)
make view_wave

# Clean up generated files
make clean
````

### Running Manually

If you prefer to run the commands directly, you can use:

```bash
# Compile the design with Verilator
verilator -Wall --trace --timing -Wno-fatal --binary serial_crc32_generator_tb.v serial_crc32_generator.v

# Run the compiled simulation
obj_dir/Vserial_crc32_generator_tb

# For waveform generation, add the +trace flag
obj_dir/Vserial_crc32_generator_tb +trace
```

After running with the `+trace` option, you can view the waveform with GTKWave:

```bash
gtkwave waveform.vcd
```

## Test Methodology

The testbench (`serial_crc32_generator_tb.v`) verifies the CRC-32 implementation against standard test vectors:

1. **Standard Test Vector:** The ASCII string "123456789" (expected CRC: 0xCBF43926)
2. **All Zeros:** 32 bits of zeros (expected CRC: 0x190A55AD)
3. **All Ones:** 32 bits of ones (expected CRC: 0xFF79A4B7)
4. **Alternating 0/1 Pattern:** 0x55555555 (expected CRC: 0x33D5A242)
5. **Alternating 1/0 Pattern:** 0xAAAAAAAA (expected CRC: 0x3CC2218D)
6. **Walking Ones Pattern:** One bit set at a time (expected CRC: 0x35D9F5DA)

Each test case initializes the CRC calculation with a `new_message` signal, sends the test data bit by bit, and verifies the final output against the expected CRC value.

**Note:** All test vectors are applied with data sent least significant bit first (LSB-first), matching the internal operation of the CRC generator.

## Integration with Docker Environment

This example can be run within the Docker container provided by the parent project:

```bash
# Navigate to the project root
cd /path/to/hdl-simulation-accelerated

# Run the Docker container
docker run -it -v $(pwd):/workdir/project verilator-dev /bin/bash

# Inside the container, navigate to this example
cd /workdir/project/examples/serial_crc32_generator

# Run the example
make
```

## Applications

A serial CRC-32 generator is particularly useful in:

* Communication protocols that require error detection
* Hardware implementations with limited resources
* FPGA designs where serial processing fits well with available resources
* Systems where data naturally arrives in a bit-serial fashion

This module can serve as a building block for more complex data integrity verification systems or communication interfaces that require CRC-32 checksums.

