cmake_minimum_required(VERSION 4.2)
project(Test2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Test2 "main.cpp"
        "../Test3/main1.cpp"
        "../Test3/constants.h"
)
