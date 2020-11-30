[![delegates](docs/pictures/header.png)](https://gammasoft71.wixsite.com/xtd-delegates)

[![Build Status](https://travis-ci.org/gammasoft71/xtd_delegates.svg?branch=master)](https://travis-ci.org/gammasoft71/xtd_delegates)
[![Build status](https://ci.appveyor.com/api/projects/status/6483r6dkpixsyxs9?svg=true)](https://ci.appveyor.com/project/gammasoft71/xtd-delegates)
[![Reference Guide](https://img.shields.io/badge/code-Reference_Guide-brightgreen.svg)](https://codedocs.xyz/gammasoft71/xtd_delegates/)
[![Website](https://img.shields.io/badge/web-gammasoft-brightgreen.svg)](https://gammasoft71.wixsite.com/gammasoft)
[![license](https://img.shields.io/github/license/gammasoft71/xtd.delegates.svg)](LICENSE.md)
<!--- 
[![Download delegates](https://img.shields.io/sourceforge/dt/delegates.svg)](https://sourceforge.net/projects/delegates/files/latest/download)
[![GitHub top language](https://img.shields.io/github/languages/top/gammasoft71/xtd.delegates.svg)](README.md)
[![Windows](https://img.shields.io/badge/os-Windows-004080.svg)](README.md)
[![macOS](https://img.shields.io/badge/os-macOS-004080.svg)](README.md)
[![Linux](https://img.shields.io/badge/os-Linux-004080.svg)](README.md)
[![codecov](https://codecov.io/gh/gammasoft71/xtd.delegates/branch/master/graph/badge.svg)](https://codecov.io/gh/gammasoft71/xtd.delegates)
--->

# Features

* Single and multicast delegate
* event, event_args and event_handler are base classes for eventing.
* action represents a delegate that has variable parameters and does not return a value.
* func represents a delegate that has variables parameters and returns a value of the type specified by the result_t type.
* predicate represents a delagate that defines a set of criteria and determines whether the specified object meets those criteria.
* overload represents class that use to determine one of const and non const overloaded methods.

For more information see [Documentation](docs) and [Reference guide](https://codedocs.xyz/gammasoft71/xtd_delegates).

# Examples

The classic first application 'Hello World'.

src/delegates_hello_world.cpp:

```c++
#include <xtd/xtd.delegates>
#include <iostream>
#include <string>

using namespace std;
using namespace xtd;

int main() {
  delegate<void(const string& str)> write_line;
  
  write_line += [](const string& str)  {
    cout << str << endl;
  };
  
  write_line += [](auto str)  {
    cerr << str << endl;
  };
  
  write_line("Hello, world!");
}
```

CMakeLists.txt:

```cmake
cmake_minimum_required(VERSION 3.3)

project(delegates_hello_world)
find_package(xtd.delegates REQUIRED)
add_executable(${PROJECT_NAME} src/delegates_hello_world.cpp)
target_link_libraries(${PROJECT_NAME} xtd.delegates)
```

For more examples see [examples](examples)

# Download and install

Before running examples you must download and install delegates. To download and install it read Downloads file.

