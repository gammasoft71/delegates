#include <delegates/delegates>
#include <iostream>
#include <string>

using namespace std;
using namespace delegates;

int main() {
  delegate<void()> d1;
  delegate<void()> d2 = d1;

  d1 += []()  {
    cout << "test" << endl;
  };
  
  d2();
}
