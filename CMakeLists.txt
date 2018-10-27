cmake_minimum_required(VERSION 3.0)
project(Francpp)
add_definitions(-std=c++17)
set(SRCS
src/main.cpp
)
include_directories(Francpp PRIVATE ./src ./test)
add_executable(Francpp ${SRCS})
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/Francpp DESTINATION bin)
