# 01 - CMake 基础起点

编译：

```bash
cmake -S . -B build && make -C ./build

./build/tutorial
# ./build/tutorial Version 1.0
# Usage: ./build/tutorial number

./build/tutorial 1
# Is less than 0: False

./build/tutorial -1
# Is less than 0: True
```
