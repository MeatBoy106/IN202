cmake_minimum_required(VERSION 2.6)
project(file_attente)

set(CMAKE_CXX_STANDARD 14)

add_executable(file_attente
    main.cpp
    Ticket.h
    Ticket.cpp)

target_compile_options(file_attente PUBLIC -Wall -Wextra -pedantic -Werror)
