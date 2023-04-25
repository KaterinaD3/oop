cmake_minimum_required(VERSION 3.24)
project(virtual)

set(CMAKE_CXX_STANDARD 17)

add_executable(virtual main.cpp Animal.cpp Cat.h Cat.cpp Dog.h Dog.cpp)
