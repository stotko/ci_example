#!/bin/sh
set -e

# Run tests
cmake -E cmake_echo_color --blue ">>>>> Run code coverage"
cmake --build build --target ci_example_coverage
