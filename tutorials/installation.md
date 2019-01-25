本项目所有代码示例要求的最低 CMake 版本不低于 3.13.3 版本，你可以通过直接安装或编译安装获取最新版本的 CMake。

请先尝试直接从源中安装 CMake:

# 直接安装
````bash
sudo apt install cmake -y # 安装 CMake
cmake --version # 查看 CMake 版本信息
````
若源中的 CMake 版本低于 3.13.3，请尝试编译安装，方法如下:

# 编译安装
这里以编译安装 CMake 3.13.3 为例，先从 [官网](https://cmake.org/download/) 下载最新版本的源码包，如 `cmake-3.13.3.tar.gz` ，接着打开终端输入以下命令:
````bash
sudo apt install cmake -y # 先从源中安装旧版本的 cmake
tar -zxcf cmake-3.13.3.tar.gz # 解压
cd cmake-3.13.3 # 切换到 cmake-3.13.3 项目目录
mkdir build && cd build # 新建并切换到构建目录
cmake .. # CMake 构建生成 Makefile 文件
make -j 8 # Make 构建生成最终的二进制可执行文件
sudo apt purge cmake -y # 卸载旧版本的 cmake
sudo make install # 安装新版本的 cmake
cmake --version # 确认 cmake 3.13.3 是否安装成功
````