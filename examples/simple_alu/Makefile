# Makefile for Simple ALU Verilator simulation

# Verilator flags
VERILATOR_FLAGS = -Wall --trace --timing -Wno-fatal

# Source files
SRC = simple_alu.v
TB = simple_alu_tb.v

# Build targets
.PHONY: all clean run trace

all: run

# Verilate the design
verilate: $(SRC) $(TB)
	verilator $(VERILATOR_FLAGS) --binary $(TB) $(SRC)

# Build the design
build: verilate

# Run the simulation
run: build
	obj_dir/Vsimple_alu_tb

# Run with tracing enabled
trace: build
	obj_dir/Vsimple_alu_tb +trace

# View waveform (if trace was enabled)
view_wave: trace
	gtkwave waveform.vcd

# Clean up
clean:
	rm -rf obj_dir *.vcd

