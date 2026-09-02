include(FetchContent)

cmake_minimum_required(VERSION 3.20)
project(MiniMidiConductor VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

FetchContent_Declare(
    libremidi
    GIT_REPOSITORY git@https://github.com/celtera/libremidi
    GIT_TAG "v5.4.3"
    GIT_SHALLOW TRUE
    GIT_PROGRESS ON
)

FetchContent_MakeAvailable(libremidi)

add_executable(minimidi src/main.cpp)

target_link_libraries(minimidi PRIVATE libremidi)