#include <iostream>

// this needs to be before the place where it's used from - forward declarations for the loss
namespace Bar {
  void foo() {
    std::cout << "foo was called" << std::endl;
  }
};


class Foo {
  public:
    Foo(void) {}
    ~Foo(void) {}

    void foo() {
      std::cout << "Foo::foo was called" << std::endl;
      Bar::foo();
    }
};

int main() {
  Foo foo;
  foo.foo();

  return 0;
}
