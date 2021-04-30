#include <iostream>
#include <stdexcept>

class MyError: public std::runtime_error {
  public:
    MyError(): std::runtime_error("MyError") {}
};

class Foo {
  public:
    Foo(void) {
      throw new MyError;
    }
};

int main() {
  try {
  Foo* foo = new Foo;
  } catch (MyError* e) {
    std::cerr << e->what() << std::endl;
  }

  return 0;
}
