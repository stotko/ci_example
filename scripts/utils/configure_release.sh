#!/bin/sh
set -e

# Configure project
cmake -E cmake_echo_color --blue ">>>>> Configure ci_example project"
cmake -B build -S . -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=bin $*
