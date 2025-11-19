cmake_minimum_required(VERSION 4.1.0)
project(math_app VERSION 0.0.2 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(
    mathluck
    main.cpp
)
