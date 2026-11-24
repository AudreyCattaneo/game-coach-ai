cmake_minimum_required(VERSION 3.16)
project(game-coach-ai CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(gamecoachai
    src/main.cpp
    src/replay.cpp
    src/analyze.cpp
    src/coach.cpp
    src/cli.cpp
)

target_include_directories(gamecoachai PRIVATE include)

if(WIN32)
    target_link_libraries(gamecoachai PRIVATE userenv)
endif()
