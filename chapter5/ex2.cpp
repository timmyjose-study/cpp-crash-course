#include <iostream>
#include <vector>

class Foo {
  public:
    virtual void foo() const {}
};

class Bar {
  public:
    void bar() {}
};

void throw_bad_alloc() {
  float sz = -1;
  float* arr = new float[sz];
}

void throw_bad_cast() {
  Foo foo;
  Bar bar = dynamic_cast<Bar&>(foo);
}

void throw_out_of_range() {
  std::vector<int> v;
  int foo = v.at(100);
}

int main() {
  try {
    throw_bad_alloc();
  } catch (std::bad_alloc& e) {
    std::cerr << e.what() << std::endl;
  }

  try {
    throw_bad_cast();
  } catch (std::bad_cast& e) {
    std::cerr << e.what() << std::endl;
  }

  try {
    throw_out_of_range();
  } catch (std::out_of_range& e) {
    std::cerr << e.what() << std::endl;
  }

  return 0;
}
