# Makefile for edge detector Verilator simulation

# Verilator flags
VERILATOR_FLAGS = -Wall --trace --timing -Wno-fatal

# Verilog testbench (self-contained)
TB = edge_detector.v

# Build targets
.PHONY: all clean run trace

all: run

# Verilate the design (no extra sources)
verilate: $(TB)
	verilator $(VERILATOR_FLAGS) --binary $(TB) --top-module edge_detector_test

# Build the design
build: verilate

# Run the simulation
run: build
	obj_dir/Vedge_detector_test

# Run with tracing enabled (if you add waveform output in Verilog)
trace: build
	obj_dir/Vedge_detector_test +trace

# View waveform (if trace was enabled and .vcd generated)
view_wave: trace
	gtkwave wave.vcd

# Clean up
clean:
	rm -rf obj_dir *.vcd

