# Makefile for minimal Verilog testbench simulation using Verilator

# Verilator flags
VERILATOR_FLAGS = -Wall --trace --timing -Wno-fatal

# Verilog testbench (self-contained)
TB = minimal_divider_sim.v

# Build targets
.PHONY: all clean run trace

all: run

# Verilate the design (no extra sources)
verilate: $(TB)
	verilator $(VERILATOR_FLAGS) --binary $(TB)

# Build the design
build: verilate

# Run the simulation
run: build
	obj_dir/Vminimal_divider_sim

# Run with tracing enabled (if you add waveform output in Verilog)
trace: build
	obj_dir/Vminimal_divider_sim +trace

# View waveform (if trace was enabled and .vcd generated)
view_wave: trace
	gtkwave waveform.vcd

# Clean up
clean:
	rm -rf obj_dir *.vcd

