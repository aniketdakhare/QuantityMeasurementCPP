cmake_minimum_required(VERSION 3.17.5)

project(QuantityMeasurementCPP)

add_subdirectory(lib/googletest)

include_directories(lib/googletest/include)

add_executable(executeTests main/utility/unit.cpp main/utility/unit.h main/model/length.cpp main/model/length.h test/lengthTest.cpp)

target_link_libraries(executeTests PRIVATE gtest)