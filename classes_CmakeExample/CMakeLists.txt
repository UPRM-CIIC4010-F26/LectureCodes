cmake_minimum_required(VERSION 3.16)

project(TriangleExample LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(main
    main.cpp
    triangle.cpp
    coordinates.cpp
)
