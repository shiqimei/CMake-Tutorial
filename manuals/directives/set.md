# set

## 定义
用于为变量(普通变量、缓存变量、环境变量)赋值

## 用法
````cmake
set(<variable> <value1> <value2> ...)
````

## 常用变量
- CMAKE_CXX_STANDARD `C++ 标准版本`
- CMAKE_INCLUDE_CURRENT_DIR `是否自动将当前的源目录和构建目录添加包含路径`
- CMAKE_INSTALL_PREFIX `软件安装路径前缀`
    CMAKE_INSTALL_PREFIX 的默认值是 `/usr/local`，当我们使用
    ````cmake
    install(TARGETS ${PROJECT_NAME} DESTINATION bin)
    ````
    我们项目经过构建最终生成的二进制文件就会被安装到 `/usr/local/bin` 目录下。

### Qt 变量
Qt 是一个强大的 C++ 跨平台界面开发框架。Qt 在构建其项目时主要有 3 步预处理工作: moc、rcc 和 uic。首先，从 Qt 继承而来的类中只要使用了 Q_OBJECT 宏，都必须使用 moc 工具将其预处理成对应的 moc 文件。其次，Qt 的界面文件是 `*.ui`，在构建过程中，Qt 则会使用 uic 工具将其预处理成对应的头文件 `ui_*.h`。最后，Qt 还需要使用 rcc 工具处理它的资源文件 *.qrc，将其编译成对应的源代码文件 `qrc_*.cpp` 或独立的二进制资源文件 `*.rcc`。

- CMAKE_AUTOMOC `是否自动使用 moc 处理源文件` (适用于 Qt 项目)
    
    > Qt 将源代码交给标准 C++ 编译器之前，需要将 Qt 的扩展语法替换掉，完成这一操作的就是 moc 工具。 moc 全称是 Meta-Object Compiler(元对象编译器)，moc 会分析 C++ 源文件，如果它发现在一个头文件中包含了宏 Q_OBJECT，则会生成另外一个在原文件名前加上 `moc_` 前缀的 C++ 源文件，这个新的源文件中包含了 Q_OBJECT 宏的实现代码。
- CMAKE_AUTORCC `是否自动使用 rcc 处理 *.qrc 文件` (适用于 Qt 项目)
    > Qt 的 rcc 工具用于将 `*qrc` 文件中描述的图片、文档等文件编译成编译成对应的源代码文件 `qrc_*.cpp` 或者独立的二进制资源文件 `*.rcc`。
- CMAKE_AUTORCC `是否自动使用 uic 处理 *.ui 文件` (适用于 Qt 项目)
    > Qt 的 
## 用例
````cmake
# CMakeLists.txt

cmake_minimum_required(VERSION 3)
cmake_minimum_required(VERSION 3.13)
cmake_minimum_required(VERSION 3.13.3)
````