#include <iostream>

class Foo {
  private:
    int m_attribute;

  public:
    Foo(void) 
    {
      std::cout << "constructor with no arguments called" << std::endl;
      m_attribute = 0;
    }

    Foo(int value): m_attribute(value) 
  {
    std::cout << "constructor with one argument called" << std::endl;
  }
};

int main()
{
  Foo foo1;
  Foo foo2(42);

  return 0;
}
