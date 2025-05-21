# Minimal Verilog Divider Simulation Example

This directory contains a **minimal, single-file Verilog simulation** that demonstrates a clocked divider chain (ripple counter) running on a 10 MHz clock. The purpose is to provide a clear proof-of-concept for running basic RTL simulation and hardware modeling, suitable for further experiments with tools like Verilator, and as a reference for porting similar designs to platforms like TT-Metal or Tenstorrent devices.

## Files

- `minimal_divider_sim.v` — The self-contained Verilog module and testbench.
- `Makefile` — Minimal makefile for building and running the simulation with Verilator.

## Description

The design includes:

- A 10 MHz clock generator (`clk`, 100ns period).
- A chain of four T flip-flop dividers (`div1`–`div4`), acting as a simple ripple counter.
- Cycle counter (`i`) to limit simulation to 50 clock cycles.
- Aligned output showing simulation time, cycle, and divider states at each rising edge of `clk`.
- No Verilator warnings (clean, hardware-synthesizable style).

## Running the Simulation

### **Prerequisites**
- [Verilator](https://www.verilator.org/) must be installed and available in your `PATH`.

### **Usage**

1. **Build and run the simulation:**

    ```sh
    make
    ```

    This will:
    - Use Verilator to compile the Verilog file,
    - Build the simulation binary,
    - Run the simulation and print output to the terminal.

2. **Output Example:**

    ```
    time=    50 ns  cycle= 0  div1=0  div2=0  div3=0  div4=0
    time=   150 ns  cycle= 0  div1=0  div2=0  div3=0  div4=0
    time=   250 ns  cycle= 1  div1=1  div2=0  div3=0  div4=0
    ...
    ```

### **Waveform Viewing (Optional)**

To enable waveform (VCD) output for viewing in GTKWave, add the following lines at the top of `minimal_divider_sim.v` (inside an `initial begin` block):

```verilog
$dumpfile("minimal_divider_sim.vcd");
$dumpvars(0, minimal_divider_sim);
````

Then use:

```sh
make trace
make view_wave
```

*You may need to install [GTKWave](http://gtkwave.sourceforge.net/) for waveform viewing.*

## Customization

* **Number of cycles:** Change the value in `if (i == 49) $finish;`
* **Divider chain length:** Add more divider registers and logic as needed.
* **Output formatting:** Modify the `$display` format string for different log styles.

## License

This example is provided as-is for educational, demonstration, and proof-of-concept purposes.

