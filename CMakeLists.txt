cmake_minimum_required(VERSION 3.17.5)

project(QuantityMeasurementCPP)

add_subdirectory(lib/googletest)

include_directories(lib/googletest/include)

add_executable(executeTests main/feet.cpp main/feet.h test/feetTest.cpp)

target_link_libraries(executeTests PRIVATE gtest)