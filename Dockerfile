FROM ubuntu:24.04

# Prevent interactive prompts during package installation
ENV DEBIAN_FRONTEND=noninteractive

# Install dependencies and development tools
RUN apt-get update && apt-get install -y \
    git make autoconf g++ flex bison libfl-dev ccache \
    libgoogle-perftools-dev numactl perl python3 python3-pip \
    zlib1g zlib1g-dev \
    vim nano less file curl wget \
    build-essential gdb valgrind

# Create working directory and build Verilator
WORKDIR /workdir
RUN git clone https://github.com/verilator/verilator.git && \
    cd verilator && \
    autoconf && \
    ./configure && \
    make -j $(nproc)

# Set PATH to include Verilator binary
ENV PATH="/workdir/verilator/bin:${PATH}"

# Set default working directory
WORKDIR /workdir

# Command to verify Verilator is working
CMD ["verilator", "--version"]

