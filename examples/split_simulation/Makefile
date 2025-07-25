# Makefile for Split Simulation Architecture Example
# Requires Verilator for compilation

# Compiler and flags
VERILATOR = verilator
VFLAGS = --binary -Wall --timing -Wno-fatal

# Source files
DUT_SRC = dff_re.v
TRADITIONAL_SRC = dff_re_tb_traditional.v $(DUT_SRC)
STIM_SRC = stim_gen.v
SIM_SRC = dut_sim.v $(DUT_SRC)
CHECK_SRC = checker.v

# Output directories
OBJ_DIR = obj_dir
RESULTS_DIR = results

# Executables
TRADITIONAL_EXE = $(OBJ_DIR)/Vdff_re_tb_traditional
STIM_EXE = $(OBJ_DIR)/Vstim_gen
SIM_EXE = $(OBJ_DIR)/Vdut_sim
CHECK_EXE = $(OBJ_DIR)/Vchecker

# Results files
TRADITIONAL_LOG = $(RESULTS_DIR)/traditional_output.log
SPLIT_LOG = $(RESULTS_DIR)/split_output.log
VECTORS_FILE = $(RESULTS_DIR)/vectors.csv
RESULTS_FILE = $(RESULTS_DIR)/results.csv

.PHONY: all clean traditional split compare demo help compile

# Default target
all: demo

# Help target
help:
	@echo "Split Simulation Architecture Example"
	@echo "====================================="
	@echo "Available targets:"
	@echo "  all        - Run complete demo (default)"
	@echo "  demo       - Run both traditional and split approaches"
	@echo "  traditional - Run traditional monolithic testbench"
	@echo "  split      - Run split simulation pipeline"
	@echo "  compare    - Compare traditional vs split results"
	@echo "  compile    - Compile all modules"
	@echo "  clean      - Remove generated files"
	@echo "  help       - Show this help"
	@echo ""
	@echo "Example workflow:"
	@echo "  make demo     # Run complete demonstration"
	@echo "  make compare  # Compare results from both approaches"

# Create results directory
$(RESULTS_DIR):
	mkdir -p $(RESULTS_DIR)

# Compile all modules
compile: $(TRADITIONAL_EXE) $(STIM_EXE) $(SIM_EXE) $(CHECK_EXE)

# Traditional testbench compilation
$(TRADITIONAL_EXE): $(TRADITIONAL_SRC)
	$(VERILATOR) $(VFLAGS) --top-module dff_re_tb_traditional $(TRADITIONAL_SRC)

# Split components compilation
$(STIM_EXE): $(STIM_SRC)
	$(VERILATOR) $(VFLAGS) --top-module stim_gen $(STIM_SRC)

$(SIM_EXE): $(SIM_SRC)
	$(VERILATOR) $(VFLAGS) --top-module dut_sim $(SIM_SRC)

$(CHECK_EXE): $(CHECK_SRC)
	$(VERILATOR) $(VFLAGS) --top-module checker $(CHECK_SRC)

# Run traditional approach
traditional: $(TRADITIONAL_EXE) $(RESULTS_DIR)
	@echo "=== Running Traditional Monolithic Testbench ==="
	$(TRADITIONAL_EXE) > $(TRADITIONAL_LOG)
	@echo "Traditional results saved to: $(TRADITIONAL_LOG)"
	@echo ""

# Run split approach
split: $(STIM_EXE) $(SIM_EXE) $(CHECK_EXE) $(RESULTS_DIR)
	@echo "=== Running Split Simulation Pipeline ==="
	@echo "Step 1: Generating stimulus vectors..."
	$(STIM_EXE) > $(VECTORS_FILE)
	@echo "Step 2: Running DUT simulation..."
	$(SIM_EXE) < $(VECTORS_FILE) > $(RESULTS_FILE)
	@echo "Step 3: Checking results..."
	$(CHECK_EXE) < $(RESULTS_FILE) > $(SPLIT_LOG)
	@echo "Split simulation complete!"
	@echo "Vectors: $(VECTORS_FILE)"
	@echo "Results: $(RESULTS_FILE)"
	@echo "Log:     $(SPLIT_LOG)"
	@echo ""

# Compare results
compare: $(RESULTS_DIR)
	@echo "=== Comparing Traditional vs Split Results ==="
	@if [ -f $(TRADITIONAL_LOG) ] && [ -f $(SPLIT_LOG) ]; then \
		echo "Traditional approach output:"; \
		echo "----------------------------"; \
		head -20 $(TRADITIONAL_LOG); \
		echo ""; \
		echo "Split approach output:"; \
		echo "---------------------"; \
		head -20 $(SPLIT_LOG); \
		echo ""; \
		echo "Checking for differences..."; \
		if grep -q "ERROR" $(SPLIT_LOG); then \
			echo "⚠️  ERRORS detected in split simulation!"; \
		elif grep -q "ALL TESTS PASSED" $(SPLIT_LOG); then \
			echo "✅ Split simulation PASSED all checks"; \
		else \
			echo "❓ Split simulation status unclear"; \
		fi; \
	else \
		echo "❌ Missing result files. Run 'make demo' first."; \
	fi

# Run complete demo
demo: traditional split
	@echo "=== Demo Complete ==="
	@echo "Both approaches have been executed."
	@echo "Run 'make compare' to see results comparison."
	@echo ""

# Performance test (basic timing)
perf: compile $(RESULTS_DIR)
	@echo "=== Performance Comparison ==="
	@echo "Traditional approach:"
	time $(TRADITIONAL_EXE) > $(RESULTS_DIR)/perf_traditional.log
	@echo ""
	@echo "Split approach:"
	time ($(STIM_EXE) | $(SIM_EXE) | $(CHECK_EXE)) > $(RESULTS_DIR)/perf_split.log
	@echo ""

# Show generated files
show-files: $(RESULTS_DIR)
	@echo "=== Generated Files ==="
	@echo "Vectors file:"
	@head -10 $(VECTORS_FILE) 2>/dev/null || echo "Not generated yet"
	@echo ""
	@echo "Results file:"
	@head -10 $(RESULTS_FILE) 2>/dev/null || echo "Not generated yet"
	@echo ""

# Clean generated files
clean:
	rm -rf $(OBJ_DIR) $(RESULTS_DIR)
	@echo "Cleaned generated files"

# Debug target - run components individually
debug-stim: $(STIM_EXE)
	@echo "=== Debug: Stimulus Generator ==="
	$(STIM_EXE)

debug-sim: $(SIM_EXE) $(RESULTS_DIR)
	@echo "=== Debug: DUT Simulator ==="
	@echo "5,1,0,0,0" | $(SIM_EXE)

debug-check: $(CHECK_EXE) $(RESULTS_DIR)
	@echo "=== Debug: Results Checker ==="
	@echo "5,1,0,0,0,0" | $(CHECK_EXE)

