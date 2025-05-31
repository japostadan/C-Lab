# Use Ubuntu base image from Microsoft dev containers
FROM mcr.microsoft.com/devcontainers/base:ubuntu-24.04

COPY --from=jdxcode/mise /usr/local/bin/mise /usr/local/bin/

# make sure mise is activated in both zsh and bash. Might be overridden by a user's dotfiles.
RUN echo 'eval "$(mise activate bash)"' >> /home/vscode/.bashrc && \
    echo 'eval "$(mise activate zsh)"' >> /home/vscode/.zshrc

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
        vim \
    && apt-get clean && rm -rf /var/lib/apt/lists/*

