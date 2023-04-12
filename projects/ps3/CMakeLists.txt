cmake_minimum_required(VERSION 3.25)
project(exercise4)
project(exercise5)

set(CMAKE_CXX_STANDARD 17)

add_executable(exercise4 exercise4/TestBanking.cpp exercise4/Account.h exercise4/Account.cpp)
add_executable(exercise5 exercise5/TestBanking.cpp exercise5/Account.h exercise5/Account.cpp exercise5/Customer.h exercise5/Customer.cpp)
