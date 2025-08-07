# adaptation_basis/Makefile
# Makefile for building the adapted simulation

CXX = g++
CXXFLAGS = -I. -I../obj_dir -O2 -Wno-attributes

# For accelerator targets, you would use their specific compiler
# ACCEL_CXX = accelerator-compiler
# ACCEL_FLAGS = -I. -I../obj_dir --accelerator-specific-flags

# Build for host (testing the adaptation)
host: simple_simulation_main.cpp
	$(CXX) $(CXXFLAGS) -o sim_host simple_simulation_main.cpp

# Placeholder for accelerator build
# accelerator: simple_simulation_main.cpp
#	$(ACCEL_CXX) $(ACCEL_FLAGS) -o sim_accel simple_simulation_main.cpp

run: host
	./sim_host

clean:
	rm -f sim_host sim_accel

.PHONY: host accelerator run clean
