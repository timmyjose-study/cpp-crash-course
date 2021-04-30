#include <iostream>
#include <string>

template<typename T>
class Foo {
  private:
    T m_val;

  public:
    Foo(T val): m_val(val) {
      std::cout << "Template constructor called" << std::endl;
    }

    ~Foo() {}
};

template<>
class Foo<int> {
  private:
  int m_ival;

  public:
    Foo(int ival): m_ival(ival) {
      std::cout << "Int constructor called" << std::endl;
    }

    ~Foo() {}
};

int main() {
  Foo<std::string> foo_string("hola");
  Foo<int> foo_int(42);
  Foo<double> foo_double(1.2345);

  return 0;
}
