#include <iostream>

class Foo {
  private:
    int m_attribute;
    void function(void) {}

  public:
    Foo(int attribute): m_attribute(attribute) { }

    ~Foo() {}

    void attribute() {
      std::cout << this->m_attribute << std::endl;
    }
};

struct Bar {
  int attribute;
  void function(void) {}
};

int main()
{
  Foo foo(42);
  foo.attribute();

  Bar bar;
  bar.attribute = 21;
  std::cout << bar.attribute << std::endl;

  return 0;
}

