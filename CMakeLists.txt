cmake_minimum_required(VERSION 3.22)
project(login_and_registration)

set(CMAKE_CXX_STANDARD 17)

add_executable(login_and_registration main.cpp user.cpp user.hpp session_manager.cpp session_manager.hpp)
