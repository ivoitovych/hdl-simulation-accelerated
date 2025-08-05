FROM ubuntu:24.04

# Prevent interactive prompts during package installation
ENV DEBIAN_FRONTEND=noninteractive

# Define Verilator version - change this to update the version
ARG VERILATOR_VERSION=49fe12963
ENV VERILATOR_VERSION=${VERILATOR_VERSION}

# Install dependencies and development tools
RUN apt-get update && apt-get install -y \
    git make autoconf g++ flex bison libfl-dev ccache \
    libgoogle-perftools-dev numactl perl python3 python3-pip \
    zlib1g zlib1g-dev help2man \
    vim nano less file curl wget \
    build-essential gdb valgrind

# Create working directory and build Verilator
WORKDIR /workdir
RUN git clone https://github.com/verilator/verilator.git && \
    cd verilator && \
    git checkout ${VERILATOR_VERSION} && \
    autoconf && \
    ./configure && \
    make -j $(nproc)

# Set PATH to include Verilator binary
ENV PATH="/workdir/verilator/bin:${PATH}"

# Set default working directory
WORKDIR /workdir

# Command to verify Verilator is working and show the locked version
CMD ["sh", "-c", "echo \"Verilator version locked to: $VERILATOR_VERSION\" && verilator --version"]
