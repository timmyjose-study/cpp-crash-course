#include <iostream>

class Foo {
  private:
    int m_attribute;

  public:
    Foo(void) { m_attribute = 0; }

    Foo(int value): m_attribute(value) {}

    ~Foo(void) 
    {
      std::cout << "sole destructor called" << std::endl;
    }
};

int main()
{
  Foo foo;

  return 0;
}
