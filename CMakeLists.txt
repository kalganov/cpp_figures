cmake_minimum_required(VERSION 3.7)
project(shapes)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp headers/Shape.h cpp/Text.cpp headers/Text.h cpp/Triangle.cpp headers/Triangle.h cpp/Point.cpp headers/Point.h cpp/Trapeze.cpp headers/Trapeze.h cpp/TextTrapeze.cpp headers/TextTrapeze.h headers/ListedStack.h)
add_executable(shapes ${SOURCE_FILES})