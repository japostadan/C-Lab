# Use Ubuntu base image from Microsoft dev containers
FROM mcr.microsoft.com/devcontainers/base:ubuntu

# Install common C development tools
RUN apt-get update && \
    apt-get install -y \
        build-essential \
        gdb \
        valgrind \
        cmake \
        git \
        curl \
        unzip \
    && apt-get clean && rm -rf /var/lib/apt/lists/*

