cmake_minimum_required(VERSION 2.8.12)
project(ce_contest_cpp)

# Attention:
# This file is not dependent by evaluation program, you can modify this file just for local debugging.

# We use g++-12 to compile, so that we recommend you to use the same compiler to test for better compatibility.
message("Your OS: ${CMAKE_HOST_SYSTEM_NAME}")
if (CMAKE_HOST_SYSTEM_NAME MATCHES "Darwin")
    set(CMAKE_C_COMPILER "gcc-12")
    set(CMAKE_CXX_COMPILER "g++-12")
elseif (MAKE_HOST_SYSTEM_NAME MATCHES "Windows")
    # Add w64devkit\bin to PATH.
else ()
    set(CMAKE_C_COMPILER "gcc")
    set(CMAKE_CXX_COMPILER "g++")
endif ()
add_definitions(-w)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_GLIBCXX_HAS_GTHREADS=0")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/include_common)

file(GLOB_RECURSE sources_c "${PROJECT_SOURCE_DIR}/src/*.c")
file(GLOB_RECURSE sources_cc "${PROJECT_SOURCE_DIR}/src/*.cc")
file(GLOB_RECURSE sources_cpp "${PROJECT_SOURCE_DIR}/src/*.cpp")


file(GLOB_RECURSE sources__c "${PROJECT_SOURCE_DIR}/src_common/*.c")
file(GLOB_RECURSE sources__cc "${PROJECT_SOURCE_DIR}/src_common/*.cc")
file(GLOB_RECURSE sources__cpp "${PROJECT_SOURCE_DIR}/src_common/*.cpp")

add_executable(main ${sources_c} ${sources_cc} ${sources_cpp})
