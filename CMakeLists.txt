cmake_minimum_required(VERSION 3.23)
project(MeasureTime)

set(CMAKE_CXX_STANDARD 23)

set(HEADERS MeasureTime.hpp)

set(SOURCES example.cpp)

set(FLAGS -Wall -Wextra -Werror -Wpedantic)

add_executable(${PROJECT_NAME} ${SOURCES})
target_compile_options(${PROJECT_NAME} PUBLIC ${FLAGS})