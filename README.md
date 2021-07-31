# conan_qt_example

使用 conan 构建 Qt 项目。

## 说明

* 解决 `qt.qpa.plugin: Could not find the Qt platform plugin "windows" in ""` 报错

  参考 `conanfile.txt` 文件中注释。

* 解决无法 AUTOMOC/AUTOUIC 的问题

  将 CMake 从 `3.12rc` 升级至 `3.16.19112601-MSVC_2` 即可。

## 构建

打开 Visual Studio 的命令行工具：

```
mkdir build && cd build
conan install ..
cmake .. -G"NMake Makefiles"
nmake
```
