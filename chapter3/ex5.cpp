#include <iostream>

class Foo {
  public:
    Foo& function1() {
      std::cout << "function1 was called" << std::endl;
      return *this;
    }

    void function2() {
      std::cout << "function2 was called" << std::endl;
    }
};

int main()
{
  Foo foo;
  foo.function1().function2();

  return 0;
}
