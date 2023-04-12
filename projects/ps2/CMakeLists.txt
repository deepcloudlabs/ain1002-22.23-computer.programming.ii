cmake_minimum_required(VERSION 3.25)
project(exercise1)
project(exercise2)
project(exercise3)

set(CMAKE_CXX_STANDARD 17)

add_executable(exercise1 exercise1/TestVehicle.cpp exercise1/vehicle.h exercise1/vehicle.cpp)
add_executable(exercise2 exercise2/TestVehicle.cpp exercise2/vehicle.h exercise2/vehicle.cpp)
add_executable(exercise3 exercise3/TestVehicle.cpp exercise3/vehicle.h exercise3/vehicle.cpp)
