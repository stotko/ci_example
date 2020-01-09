#!/bin/sh
set -e

# Build project
cmake -E cmake_echo_color --blue ">>>>> Build ci_example project"
cmake --build build --config Debug --parallel 13
