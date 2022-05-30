# 🐈 blnscpp
Single header C++ API for the Big List of Naughty Strings https://github.com/minimaxir/big-list-of-naughty-strings

Here's some examples:
```
Powerلُلُصّبُلُلصّبُررً ॣ ॣh ॣ ॣ冗
🏳0🌈️
జ్ఞ‌ా
گچپژ
Ω≈ç√∫˜µ≤≥÷
åß∂ƒ©˙∆˚¬…æ
œ∑´®†¥¨ˆøπ“‘
¡™£¢∞§¶•ªº–≠
¸˛Ç◊ı˜Â¯˘¿
ÅÍÎÏ˝ÓÔÒÚÆ☃
Œ„´‰ˇÁ¨ˆØ∏”
```

# CMake Integration

You can setup your CMake project to use BLNS using [CPM](https://github.com/cpm-cmake/CPM.cmake)
(no need to download / clone this repo manually).

Consider you want to add blns to a project called `myapp`. Here is what
your CMakeLists.txt file looks like:

```cmake
project("myapp")

# Add BLNS cmake package
CPMAddPackage("gh:eliabieri/blnscpp#master")
add_executable(${PROJECT_NAME} myapp.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${blnscpp_SOURCE_DIR}/include)  # Add include path
target_link_libraries(${PROJECT_NAME} PRIVATE lib_blns)  # Link the blns library
```

With this setup, you can use blns like so in `myapp.cpp`:

```c++
#include <blns/blns.h>  // <-- Blns header to include
#include <iostream>

int main() {
    for (auto const &ns : blns::Blns::getStrings())
    {
        std::cout << ns << std::endl;
    }
}
```

# Local Build

```bash
mkdir build && cd build
cmake ..
cmake --build .
```

Run example :

```bash
./blns_example
```
