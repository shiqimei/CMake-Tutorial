cmake_minimum_required(VERSION 3.13.3)

PROJECT(DistanceBetweenPoints)

FIND_PACKAGE(VTK REQUIRED)
INCLUDE(${VTK_USE_FILE})

ADD_EXECUTABLE(DistanceBetweenPoints DistanceBetweenPoints.cxx)

INSTALL(TARGETS DistanceBetweenPoints DESTINATION bin)

# Package
SET(CPACK_GENERATOR "DEB")
SET(CPACK_DEBIAN_PACKAGE_MAINTAINER "维护者名称") #required

INCLUDE(CPack)

# To use this:
# make package
# sudo dpkg -i DistanceBetweenPoints-0.1.1-Linux.deb

# This will result in the file:
#/usr/distance/DistanceBetweenPoints
