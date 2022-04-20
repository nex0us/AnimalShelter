cmake_minimum_required(VERSION 3.21)
project(AnimalShelter)

set(CMAKE_CXX_STANDARD 14)

add_executable(AnimalShelter main.cpp animal.cpp animal.h dog.cpp dog.h cat.cpp )
