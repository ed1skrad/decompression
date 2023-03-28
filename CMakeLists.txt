cmake_minimum_required(VERSION 3.24)
project(decompression C)

set(CMAKE_C_STANDARD 99)

add_executable(decompression main.c Struct.h File.c Decompressing.c Initialization.h Utilits.c openFile.c)
