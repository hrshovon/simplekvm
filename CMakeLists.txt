cmake_minimum_required(VERSION 3.0)

project(simplekvm
        VERSION 0.1
        DESCRIPTION "A hardware platform agnostic kvm"
        LANGUAGES CXX)

add_executable(simplekvm
               src/main.cpp)

target_include_directories(simplekvm
                           PUBLIC
                           include/
                           www/)

#target_link_libraries(simplekvm PUBLIC Crow::Crow)
target_compile_options(simplekvm PRIVATE -Wall -Wextra -Wpedantic)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

file(COPY www DESTINATION .)
