cmake_minimum_required(VERSION 3.13.3)

project(find_package)

find_package(OpenCV QUIET)
find_package(OpenCV)
find_package(OpenCV REQUIRED)