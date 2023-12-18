cmake_minimum_required(VERSION 3.25)
project(cppcoro_test1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH ${CMAKE_BINARY_DIR})

find_package(andreasbuhr-cppcoro REQUIRED)

add_subdirectory(src)
