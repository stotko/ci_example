#!/bin/sh
set -e

# Create build directory
sh scripts/utils/create_empty_directory.sh build

# Configure project
sh scripts/utils/configure_debug.sh -DCI_EXAMPLE_BUILD_TEST_COVERAGE=ON
