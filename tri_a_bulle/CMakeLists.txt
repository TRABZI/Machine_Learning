cmake_minimum_required(VERSION 3.7.2)

project(test VERSION 1.0 LANGUAGES CXX)

# compilation c++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(tribulle SHARED test_tri.cpp tri_a_bulle.cpp)

add_executable(main main.cpp)
target_link_libraries(main PUBLIC tribulle)



