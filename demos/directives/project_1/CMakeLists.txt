# 指定项目要求的最低 CMake 版本号
# 注意!!! 版本号过低则很多 CMake 的新特性不会受到支持
# 本 demo 要求 CMake 的最低版本号不低于 3.13.3
cmake_minimum_required(VERSION 3.13.3)

# 设置项目基本信息
project(
    CMake_Tutorial
    VERSION 1.3.0
    DESCRIPTION "an awesome Chinese CMake tutorial!"
    HOMEPAGE_URL "https://github.com/lolimay/CMake-Tutorial"
    LANGUAGES ASM                                                                                                                                                                                                                                               
)
# 备注:
# 1. 项目名中间不能有空格，不同单词之间可以使用下划线连接
#    若项目名中有空格请用双引号包裹起来，如 project("Hello World")
#    不过不建议这样做

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
