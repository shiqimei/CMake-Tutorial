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
- PROJECT_NAME 当前项目名称
- PROJECT_SOURCE_DIR 项目源代码路径
- PROJECT_BINARY_DIR 项目二进制文件路径
- PROJECT_VERSION 项目版本号
- PROJECT_VERSION_MAJOR 项目主版本号
- PROJECT_VERSION_MINOR 项目次版本号
- PROJECT_VERSION_PATCH 项目小版本号
- PROJECT_VERSION_TWEAK 项目末版本号
- PROJECT_DESCRIPTION 项目描述
- PROJECT_HOMEPAGE_URL 项目主页地址
- CMAKE_PROJECT_\<PROJECT-NAME\>_INCLUDE 包含上一层目录
- CMAKE_PROJECT_NAME 根项目名称
- CMAKE_PROJECT_VERSION 根项目名称
- CMAKE_PROJECT_DESCRIPTION 根项目描述
- CMAKE_PROJECT_HOMEPAGE_URL 根项目主页地址

## 备注
1. CMake 默认认为当前项目所用的编程语言是 `C/C++` ，此时 LANGUAGES 参数项可以缺省不填。当使用 CMake 去构建其它项目时(如汇编 `ASM`、`CUDA` 等)，需要指定LANGUAGES 参数项。

> Optionally you can specify which languages your project supports. Example languages include C, CXX (i.e. C++), CUDA, Fortran, and ASM. By default C and CXX are enabled if no language options are given. Specify language NONE, or use the LANGUAGES keyword and list no languages, to skip enabling any languages.
>
> If enabling ASM, list it last so that CMake can check whether compilers for other languages like C work for assembly too.