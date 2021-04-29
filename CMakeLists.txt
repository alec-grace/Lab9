cmake_minimum_required(VERSION 3.19)
project(Lab9)

set(CMAKE_CXX_STANDARD 20)

add_executable(Problem1 Problem1.cpp Animal.cpp)
add_executable(Problem2 Problem2.cpp Animal.cpp Mammal.cpp Bird.cpp Fish.cpp
        Reptile.cpp Amphibian.cpp)