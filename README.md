# delegates

**Modern c++17 library containing multicast delegate and event classes on Windows, macOS, Linux, iOS and android.**

[![delegates](docs/pictures/delegates_header.png)](https://gammasoft71.wixsite.com/delegates)

## Continuous Integration build status

| Operating system | Status                                                                                                                                              |
|------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------|
| Windows          | [![Build status](https://ci.appveyor.com/api/projects/status/6483r6dkpixsyxs9?svg=true)](https://ci.appveyor.com/project/gammasoft71/xtd-delegates) |
| macOS            | [![Build Status](https://travis-ci.org/gammasoft71/delegates.svg?branch=master)](https://travis-ci.org/gammasoft71/delegates)                       |
| Linux            | [![Build Status](https://travis-ci.org/gammasoft71/delegates.svg?branch=master)](https://travis-ci.org/gammasoft71/delegates)                       |

## Features

* Single and multicast delegate
* event, event_args and event_handler are base classes for eventing.
* action represents a delegate that has variable parameters and does not return a value.
* func represents a delegate that has variables parameters and returns a value of the type specified by the result_t type.
* predicate represents a delagate that defines a set of criteria and determines whether the specified object meets those criteria.
* overload represents class that use to determine one of const and non const overloaded methods.

### For more information see
* [website](https://gammasoft71.wixsite.com/delegates) 
* [markdown documentations](docs/home.md)
* [sources](https://github.com/gammasoft71/delegates)
* [Reference Guide](https://codedocs.xyz/gammasoft71/delegates/)

## Examples

The classic first application 'Hello World'.

delegates_hello_world.cpp:

```c++
#include <delegates/delegates>
#include <iostream>
#include <string>

using namespace std;
using namespace delegates;

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
find_package(delegates REQUIRED)
add_executable(${PROJECT_NAME} delegates_hello_world.cpp)
target_link_libraries(${PROJECT_NAME} delegates)
```

## Getting Started

* [Installation](docs/downloads.md) provides download and install documentation.
* [Portability](docs/portability.md) provides information about C++, libraries dependency, Operating System suported, Compilators and Devepment Environment tools.
* [Examples](docs/examples.md) provides some examples.
