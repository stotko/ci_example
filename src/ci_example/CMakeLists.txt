
add_library(ci_example INTERFACE)

set(CI_EXAMPLE_INCLUDE_LOCAL_DIR "${CMAKE_CURRENT_LIST_DIR}/..")

target_include_directories(ci_example INTERFACE $<BUILD_INTERFACE:${CI_EXAMPLE_INCLUDE_LOCAL_DIR}>)

add_library(ci_example::ci_example ALIAS ci_example)
