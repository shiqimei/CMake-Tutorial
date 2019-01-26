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

## 相关关键字
- \<PackageName\>_FOUND `当<PackageName>被找到时为真否则为假`

## 用例
````cmake
# CMakeLists.txt

cmake_minimum_required(VERSION 3)
cmake_minimum_required(VERSION 3.13)
cmake_minimum_required(VERSION 3.13.3)
````
