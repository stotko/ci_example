
add_executable(testciexample main.cpp)

target_sources(testciexample PRIVATE example_func.cpp)

target_link_libraries(testciexample PRIVATE
                                    ci_example::ci_example
                                    gtest)

add_test(NAME testciexample
         COMMAND testciexample)
