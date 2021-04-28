#include <iostream>

namespace Foo {
  int x = 42;
}

namespace Bar {
  int x = 21;
}

int main() {
  std::cout << "Foo.x = " << Foo::x << std::endl;
  std::cout << "Bar.x = " << Bar::x << std::endl;

  return 0;
}