cmake_minimum_required(VERSION 3.23)
project(module01)

set(CMAKE_CXX_STANDARD 20)

add_executable(module01 main.cpp Account.cpp Account.h)
add_executable(bankingApp banking_app.cpp Account.cpp Account.h banking_app.cpp)
add_executable(isp isp.cpp)
