# project
## 定义
用于指定项目的详细信息，如项目名称、版本、描述、主页以及项目主要使用的编程语言等。
## 用法
````cmake
project(<PROJECT-NAME>
        [VERSION <major>[.<minor>[.<patch>[.<tweak>]]]]
        [DESCRIPTION <project-description-string>]
        [HOMEPAGE_URL <url-string>]
        [LANGUAGES <language-name>...])
````
## 相关关键字
- PROJECT_NAME `当前项目名称`
- PROJECT_SOURCE_DIR `项目源代码路径`
- PROJECT_BINARY_DIR `项目二进制文件路径`
- PROJECT_VERSION `项目版本号`
- PROJECT_VERSION_MAJOR `项目主版本号`
- PROJECT_VERSION_MINOR `项目次版本号`
- PROJECT_VERSION_PATCH `项目小版本号`
- PROJECT_VERSION_TWEAK `项目末版本号`
- PROJECT_DESCRIPTION `项目描述`
- PROJECT_HOMEPAGE_URL `项目主页地址`
- CMAKE_PROJECT_\<PROJECT-NAME\>_INCLUDE `包含上一层目录`
- CMAKE_PROJECT_NAME `根项目名称`
- CMAKE_PROJECT_VERSION `根项目名称`
- CMAKE_PROJECT_DESCRIPTION `根项目描述`
- CMAKE_PROJECT_HOMEPAGE_URL `根项目主页地址`

## 备注
1. CMake 默认认为当前项目所用的编程语言是 `C/C++` ，此时 LANGUAGES 参数项可以缺省不填。当使用 CMake 去构建其它项目时(如汇编 `ASM`、`CUDA` 等)，需要指定LANGUAGES 参数项。

> Optionally you can specify which languages your project supports. Example languages include C, CXX (i.e. C++), CUDA, Fortran, and ASM. By default C and CXX are enabled if no language options are given. Specify language NONE, or use the LANGUAGES keyword and list no languages, to skip enabling any languages.
>
> If enabling ASM, list it last so that CMake can check whether compilers for other languages like C work for assembly too.

## 用例
````cmake
# 指定项目要求的最低 CMake 版本号
# 注意!!! 版本号过低则很多 CMake 的新特性不会受到支持
# 本 demo 要求 CMake 的最低版本号不低于 3.13.3
cmake_minimum_required(VERSION 3.13.3)

# 设置项目基本信息
project(
    "CMake Tutorial"
    VERSION 1.3.0
    DESCRIPTION "an awesome Chinese CMake tutorial!"
    HOMEPAGE_URL "https://github.com/lolimay/CMake-Tutorial"
    LANGUAGES ASM                                                                                                                                                                                                                                               
)

# 输出调试信息
message("Project Name: " ${PROJECT_NAME})
message("Version Info: " ${PROJECT_VERSION})
message("Major Version Number: " ${PROJECT_VERSION_MAJOR})
message("Minor Version Number: " ${PROJECT_VERSION_MINOR})
message("Patch Version Number: " ${PROJECT_VERSION_PATCH})
message("Tweak Version Number: " ${PROJECT_VERSION_TWEAK})

# 判断项目是否有 tweak 版本号
if(PROJECT_VERSION_TWEAK STREQUAL "")
    message("There is no tweak version number!")
else()
    message("VERSION_TWEAK " ${PROJECT_VERSION_TWEAK})
endif()
# 备注:
# 1. 当没有 tweak 版本号时，则 PROJECT_VERSION_TWEAK 变量的内容是空字符串
# 2. 格外注意!!! 在大部分情况下 CMake 的变量都需要通过 ${} 引用
#    但是在 if 条件中则不需要加 ${}，直接使用变量名
# 3. CMake 比较字符串是否相等的运算符是 STREQUAL 而不是 EQUAL

# 输出调试信息
message("Project Description: " ${PROJECT_DESCRIPTION})
message("Project Homepage: " ${PROJECT_HOMEPAGE_URL})
````

<p align="center"><a href="https://github.com/lolimay/CMake-Tutorial/blob/master/demos/directives/project_1/CMakeLists.txt"><img src="https://github.com/favicon.ico" height="16"> 源代码地址</a></p>