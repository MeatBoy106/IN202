cmake_minimum_required(VERSION 2.6)
project(complex)

set(CMAKE_CXX_STANDARD 14)

add_executable(complex
    main.cpp
    CComplex.h
    CComplex.cpp
    Complex.h
    Complex.cpp)

target_compile_options(complex PUBLIC -Wall -Wextra -pedantic -Werror)
