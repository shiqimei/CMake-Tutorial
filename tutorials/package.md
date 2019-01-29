# 打包
你可以通过 CPack 来将源码打包成 `deb` 包。具体方法如下:
1. 首先在 `CMakeLists.txt` 文件中添加以下内容:
````cmake
# Package
SET(CPACK_GENERATOR "DEB")
SET(CPACK_DEBIAN_PACKAGE_MAINTAINER "维护者名称") #required

INCLUDE(CPack)
````
2. 接着在正常 `cmake ..` 预处理完成后，使用 `make package` 完成打包。