#include <iostream>

class Functor {
  private:
    int m_value;

  public:
    Functor(int value): m_value(value) {}
    ~Functor() {}

    int operator()(int value) {
      return m_value + value;
    }
};

int main() {
  Functor f(11);

  std::cout << "f(11) = " << f(11) << std::endl;
  std::cout << "f(89) = " << f(89) << std::endl;
  std::cout << "f(101) = " << f(101) << std::endl;
  std::cout << "f(-11) = " << f(-11) << std::endl;
  std::cout << "f(0) = " << f(0) << std::endl;

  return 0;
}

