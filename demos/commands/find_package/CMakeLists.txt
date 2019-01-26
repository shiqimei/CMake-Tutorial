cmake_minimum_required(VERSION 3.13.3)

project(find_package)

set(CMAKE_EXPORT_COMPILE_COMMANDS 0)

find_package(PkgConfig REQUIRED)
message(${PkgConfig_FOUND})