| [Home](home.md) | [Downloads](downloads.md) | [Examples](examples.md) | [Documentation](documentation.md) | [Sources](https://github.com/gammasoft71/delegates) | [Project](https://sourceforge.net/projects/delegates/) | [Gammasoft](https://gammasoft71.wixsite.com/gammasoft) | [Contact](contact.md) | [Website](https://gammasoft71.wixsite.com/delegates) |

# Example

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
find_package(tunit REQUIRED)
add_executable(${PROJECT_NAME} delegates_hello_world.cpp)
target_link_libraries(${PROJECT_NAME} delegates)
```

Output:

```
Hello, world!
Hello, world!
```

[Click here to see more examples](../examples)

______________________________________________________________________________________________

© 2021 Gammasoft.
