# Compiling

For properly compiling this example, use the provided CMakeLists.txt.

```shell
mkdir build && cd build && cmake .. && make -j8
```

The above will also produce compile commands allowing your editor's language
server protocol client to find the required packages.

For directly compiling the example, you may also use

```shell
g++ main.cpp range_widgets.cpp -o range_widgets `pkg-config --cflags --libs gtkmm-4.0` -std=c++20
```
