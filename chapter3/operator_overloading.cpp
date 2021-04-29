#include <iostream>

class Foo {
  private:
    int m_value;

  public:
    Foo(int value = 0): m_value(value) {}
    ~Foo() {}

    Foo operator+(const Foo& other)
    {
      return Foo(m_value + other.m_value);
    }

    Foo operator-(const Foo& other) 
    {
      return Foo(m_value - other.m_value);
    }

    Foo operator*(const Foo& other)
    {
      return Foo(m_value * other.m_value);
    }

    friend std::ostream& operator<<(std::ostream& out, const Foo& obj)
    {
      return out << "(" << obj.m_value << ")";
    }

    friend std::istream& operator>>(std::istream& in, Foo& obj)
    {
      int n;
      in >> n;
      obj.m_value = n;

      return in;
    }
};

int main()
{
  Foo foo1(21);
  Foo foo2(42);

  Foo foo3 = foo1 + foo2;
  Foo foo4 = foo1 - foo2;
  Foo foo5 = foo1 * foo2;

  std::cout << foo1 << " " << foo2 << " " << foo3 << std::endl;

  Foo foo6;
  std::cin >> foo6;
  std::cout << foo6 << std::endl;

  return 0;
}
