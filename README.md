[![delegates](docs/pictures/header.png)](https://gammasoft71.wixsite.com/gammasoft)

[![Build Status](https://travis-ci.org/gammasoft71/delegates.svg?branch=master)](https://travis-ci.org/gammasoft71/delegates)
[![Build status](https://ci.appveyor.com/api/projects/status/6483r6dkpixsyxs9?svg=true)](https://ci.appveyor.com/project/gammasoft71/xtd-delegates)
[![Reference Guide](https://img.shields.io/badge/code-Reference_Guide-brightgreen.svg)](https://codedocs.xyz/gammasoft71/delegates/)
[![Website](https://img.shields.io/badge/web-gammasoft-brightgreen.svg)](https://gammasoft71.wixsite.com/gammasoft)
[![license](https://img.shields.io/github/license/gammasoft71/delegates.svg)](LICENSE.md)

# Features

* Single and multicast delegate
* event, event_args and event_handler are base classes for eventing.
* action represents a delegate that has variable parameters and does not return a value.
* func represents a delegate that has variables parameters and returns a value of the type specified by the result_t type.
* predicate represents a delagate that defines a set of criteria and determines whether the specified object meets those criteria.
* overload represents class that use to determine one of const and non const overloaded methods.

For more information see [Documentation](docs) and [Reference guide](https://codedocs.xyz/gammasoft71/delegates).

# Examples

The classic first application 'Hello World'.

src/delegates_hello_world.cpp:

```c++
#include <delegates/delegates>
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
find_package(delegates REQUIRED)
add_executable(${PROJECT_NAME} src/delegates_hello_world.cpp)
target_link_libraries(${PROJECT_NAME} delegates)
```

For more examples see [examples](examples)

# Download and install

Before running examples you must download and install delegates. To download and install it read Downloads file.

