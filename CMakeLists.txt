cmake_minimum_required(VERSION 3.16)

project(ci_example)


add_subdirectory(src)


option(CI_EXAMPLE_BUILD_TESTS "Build the unit tests, default: ON" ON)
option(CI_EXAMPLE_BUILD_TEST_COVERAGE "Build a test coverage report, default: OFF" OFF)
if(CI_EXAMPLE_BUILD_TESTS)
    enable_testing()

    if(CI_EXAMPLE_BUILD_TEST_COVERAGE)
        include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/code_coverage.cmake")
        append_coverage_compiler_flags()
        set(COVERAGE_EXCLUDES '*test/*' '/usr/*')
    endif()

    add_subdirectory(test)

    if(CI_EXAMPLE_BUILD_TEST_COVERAGE)
        string(TOLOWER ${CMAKE_BUILD_TYPE} CI_EXAMPLE_SCRIPT_BUILD_TYPE)
        setup_target_for_coverage(NAME ci_example_coverage
                                  EXECUTABLE ${CMAKE_COMMAND} -E chdir .. sh scripts/run_tests_${CI_EXAMPLE_SCRIPT_BUILD_TYPE}.sh
                                  DEPENDENCIES testciexample)
    endif()

endif()


