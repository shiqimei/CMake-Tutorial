# cmake_minimum_required

## 定义
用于指定项目要求的最低 CMake 版本

## 用法
````cmake
cmake_minimum_required(VERSION <major>[.<minor>[.<patch>]])
````

## 备注
1. `<major>[.<minor>[.<patch>]]` 表示小版本号(patch)可以单独省略，但当次版本号(minor)省略时小版本号(patch)也要同时省略，主版本号(major)不能省略。
2. 其实还有更小的版本号叫 tweak，但 CMake 的版本号最多只有 3 位，所以上面就没有写成 `<major>[.<minor>[.<patch>[.<tweak>]]]]` 了。
4. 其实 `cmake_minimum_required` 还可以指定项目要求的 CMake 最高不能超过某个版本号，具体用法请查看 [cmake_minimum_required - CMake Documentation](https://cmake.org/cmake/help/latest/command/cmake_minimum_required.html?highlight=cmake_minimum_required)。

## 用例
````cmake
# CMakeLists.txt

cmake_minimum_required(VERSION 3)
cmake_minimum_required(VERSION 3.13)
cmake_minimum_required(VERSION 3.13.3)
````
