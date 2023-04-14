cmake_minimum_required(VERSION 3.25)
project(exercise01)
project(exercise02)
project(exercise03)
project(smith_numbers)
project(smith_numbers_refactored)

set(CMAKE_CXX_STANDARD 17)

add_executable(exercise01 exercise01.cpp)
add_executable(exercise02 exercise02.cpp)
add_executable(exercise03 exercise03.cpp)
add_executable(smith_numbers smith_numbers.cpp)
add_executable(smith_numbers_refactored smith_numbers_refactored.cpp numbers.cpp numbers.h)
