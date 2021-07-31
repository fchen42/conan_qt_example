# conan_qt_example

使用 conan 构建 Qt 项目。

解决 `qt.qpa.plugin: Could not find the Qt platform plugin "windows" in ""` 报错。

## 构建

打开 Visual Studio 的命令行工具：

```
mkdir build && cd build
conan install ..
cmake .. -G"NMake Makefiles"
nmake
```
