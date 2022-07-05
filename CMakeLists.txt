cmake_minimum_required(VERSION 3.22)
project(login_and_registration)

set(CMAKE_CXX_STANDARD 17)

add_executable(login_and_registration src/main.cpp src/user.cpp src/user.hpp src/session_manager.cpp src/session_manager.hpp)
