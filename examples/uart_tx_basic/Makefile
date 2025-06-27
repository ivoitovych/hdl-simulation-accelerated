# Makefile for UART TX Basic Verilator simulation

# Verilator flags
VERILATOR_FLAGS = -Wall --trace --timing -Wno-fatal

# Source files
SRC = uart_tx_basic.v
TB = uart_tx_basic_tb.v

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
	obj_dir/Vuart_tx_basic_tb

# Run with tracing enabled
trace: build
	obj_dir/Vuart_tx_basic_tb +trace

# View waveform (if trace was enabled)
view_wave: trace
	gtkwave waveform.vcd

# Clean up
clean:
	rm -rf obj_dir *.vcd

