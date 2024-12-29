cmake_minimum_required(VERSION 3.10)
project(GymWorkoutPlanner)

include_directories(${CMAKE_SOURCE_DIR}/include)

set(CMAKE_CXX_STANDARD 17)

add_executable(GymWorkoutPlanner src/main.cpp)