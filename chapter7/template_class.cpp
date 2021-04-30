#include <iostream>
#include <string>

template<typename T>
class Foo {
  private:
    T m_value;

  public:
    Foo(T value): m_value(value) {}
    ~Foo() {}

    virtual void display_value() {
      std::cout << m_value << std::endl;
    }
};

int main() {
  Foo<int> foo_int(42);
  foo_int.display_value();

  Foo<std::string> foo_string("hello");
  foo_string.display_value();

  return 0;
}
