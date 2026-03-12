cmake_minimum_required(VERSION 4.1)
project(Shade C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
        glfw
        GIT_REPOSITORY https://github.com/glfw/glfw.git
        GIT_TAG 3.4
)

FetchContent_MakeAvailable(glfw)

add_executable(Shade main.c)
target_link_libraries(Shade PRIVATE glfw)
