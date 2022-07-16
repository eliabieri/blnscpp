# BLNS CPP 🐈

#### C++ API for the [Big List of Naughty Strings](https://github.com/minimaxir/big-list-of-naughty-strings).

[](mdtoc)
## Table of Contents

* [Description 📃](#description-)
* [Features ⚡](#features-)
* [Usage : CMake Integration 🔨](#usage--cmake-integration-)
	* [What if I don't use CMake ? ⚠️](#what-if-i-dont-use-cmake--)
* [Contribution 🌍](#contribution-)
	* [How to contribute ?](#how-to-contribute-)
	* [Debug : local build 🪲](#debug--local-build-)
[](/mdtoc)

## Description 📃

Some strings are known to cause various issues when passed as user input (e.g. security issues, crashes, injections, ...). The Big List of Naughty Strings contains most of them.

It's highly recommended to test your functions taking `std::string` as input with the elements of this list to ensure everything works as expected.

This repository provides a C++ API to use this list, with a [CMake](https://cmake.org/) integration.

## Features ⚡ 

- :heavy_check_mark: CMake integration
- :heavy_check_mark: Cross-platform
- :heavy_check_mark: Latest version of BLNS.txt is downloaded automatically at every build
- :heavy_check_mark: Uses only C++ STL and only C++ standards
- :heavy_check_mark: Compatible with the latest C++ standards (C++23 included)
- :heavy_check_mark: Example project provided in the repository
- :heavy_check_mark: The implementation contains C assertions to ensure your copy of the project works as expected

## Usage : CMake Integration 🔨

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
    for (const auto &ns : blns::Blns::getStrings())
    {
        std::cout << ns << std::endl;
    }
    return 0;
}
```

### What if I don't use CMake ? ⚠️

It is not recommended to use this API without CMake. In the build steps of this project, the latest version of the list is downloaded directly from the [BLNS repository](https://github.com/minimaxir/big-list-of-naughty-string). The list is often updated. You should use its latest version to test your code with the state-of-the-art strings. CMake is the easiest way to implement this : you have the latest version of [BLNS.txt](https://raw.githubusercontent.com/minimaxir/big-list-of-naughty-strings/master/blns.txt) at every clean build. Moreover, if you use CPM as indicated above, you will benefit from the latest version of the API without changing your code.

If you don't want (of can't) use CMake, you can clone this repository or add it as a [git submodule](https://git-scm.com/book/en/v2/Git-Tools-Submodules) to use the API. However, you will need to implement your own way to download [BLNS.txt](https://raw.githubusercontent.com/minimaxir/big-list-of-naughty-strings/master/blns.txt) at the root of the repository. Please, ensure that:
 - :heavy_check_mark: The latest version of BLNS.txt is downloaded automatically at every build
 - :heavy_check_mark: You can benefit from the patches of this API without changing your code

## Contribution 🌍

### How to contribute ?

Please, feel free to contribute to this project if you feel like it. You can report a bug / propose a feature [creating an issue](https://github.com/eliabieri/blnscpp/issues). If you want to submit your changes, please [fork the repository](https://github.com/eliabieri/blnscpp/fork) and create a pull request from your fork to the master branch.

### Debug : local build 🪲

Prerequisites:
- [CMake](https://cmake.org/)

First, clone the repository :
```bash
git clone https://github.com/eliabieri/blnscpp
cd blnscpp
```

Then, build:
```bash
mkdir build && cd build
cmake ..
cmake --build .
```

Run the example :

```bash
./blns_example
```
