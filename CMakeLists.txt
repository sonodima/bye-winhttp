cmake_minimum_required(VERSION 3.26)

if(NOT WIN32)
    message(FATAL_ERROR "This project can only be compiled on Windows")
endif()

option(LOG_CALLS "Print all the calls to WinHttp to the allocated console" ON)

set(CMAKE_C_STANDARD 99)

project(winhttp LANGUAGES C)
add_library(winhttp SHARED src/dllmain.c src/winhttp.c)

set_target_properties(winhttp PROPERTIES OUTPUT_NAME "winhttp")
set_target_properties(winhttp PROPERTIES PREFIX "")

if(LOG_CALLS)
    target_compile_definitions(winhttp PRIVATE LOG_CALLS)
endif()
