# 编译安装
1. 从官网下载最新版本的源码包，如 `cmake-3.13.3.tar.gz`
2. 打开终端
````bash
tar -zxcf cmake-3.13.3.tar.gz
cd cmake-3.13.3
mkdir build && cd build
cmake ..
make -j 8
````
3. 重启终端
````bash
cmake --version # cmake version 3.13.3
````