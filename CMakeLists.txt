cmake_minimum_required(VERSION 3.6.2)

project(test VERSION 1.0 LANGUAGES CXX)

# compilation c++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(pqt SHARED disp_vect.cpp test_tri.cpp swap_function.cpp quicksort.cpp)

add_executable(main main.cpp)
target_link_libraries(main PUBLIC pqt)



