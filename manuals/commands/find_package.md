# find_package

## 定义
查找外部项目并加载其设置

## 用法
````cmake
find_package(<PackageName> [version] [EXACT] [QUIET] [MODULE]
             [REQUIRED] [[COMPONENTS] [components...]]
             [OPTIONAL_COMPONENTS components...]
             [NO_POLICY_SCOPE])
````
## 可选参数
- QUIET `若 package 没有被找到，不输出任何警告和错误信息`
- REQUIRED `当 package 没有被找到时，立即停止并输出错误信息`

更多用法请参考官方英文文档: [find_package - CMake Doc](https://cmake.org/cmake/help/latest/command/find_package.html)


## 相关关键字
- \<PackageName\>_FOUND `当<PackageName>被找到时为真否则为假`

## 用例
````cmake
cmake_minimum_required(VERSION 3.13.3)

project(find_package)

find_package(OpenCV QUIET)
find_package(OpenCV)
find_package(OpenCV REQUIRED)
````

### 输出
````cmake
# find_package(OpenCV QUIET) OpenCV包未找到->不输出任何警告和错误信息

# find_package(OpenCV) OpenCV包未找到->输出警告信息，但继续处理
CMake Warning at CMakeLists.txt:7 (find_package):
  By not providing "FindOpenCV.cmake" in CMAKE_MODULE_PATH this project has
  asked CMake to find a package configuration file provided by "OpenCV", but
  CMake did not find one.

  Could not find a package configuration file provided by "OpenCV" with any
  of the following names:

    OpenCVConfig.cmake
    opencv-config.cmake

  Add the installation prefix of "OpenCV" to CMAKE_PREFIX_PATH or set
  "OpenCV_DIR" to a directory containing one of the above files.  If "OpenCV"
  provides a separate development package or SDK, be sure it has been
  installed.

# find_package(OpenCV) OpenCV包未找到->输出错误信息，立即终止
CMake Error at CMakeLists.txt:8 (find_package):
  By not providing "FindOpenCV.cmake" in CMAKE_MODULE_PATH this project has
  asked CMake to find a package configuration file provided by "OpenCV", but
  CMake did not find one.

  Could not find a package configuration file provided by "OpenCV" with any
  of the following names:

    OpenCVConfig.cmake
    opencv-config.cmake

  Add the installation prefix of "OpenCV" to CMAKE_PREFIX_PATH or set
  "OpenCV_DIR" to a directory containing one of the above files.  If "OpenCV"
  provides a separate development package or SDK, be sure it has been
  installed.


-- Configuring incomplete, errors occurred! # 处理未完成
````