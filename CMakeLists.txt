cmake_minimum_required(VERSION 3.14)
project(CalculatorTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

find_package(Threads REQUIRED)

add_executable(test_calculator
    test_calculator.cpp
)

target_link_libraries(test_calculator
    gtest
    gtest_main
    Threads::Threads
)
