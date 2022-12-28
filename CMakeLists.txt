cmake_minimum_required(VERSION 3.24)
set(M68K_CRT none)
project(AmiHello C)

set(CMAKE_C_STANDARD 99)

add_executable(AmiHello
        src/hello.c
        )
install(TARGETS AmiHello DESTINATION AmiHello)
