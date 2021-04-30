#include <iostream>
#include <stdexcept>

class DivideByZero: public std::runtime_error {
  public:
    DivideByZero(): std::runtime_error("attempt to divide by zero") {}
};

int correct_division(int x, int y) {
  if (y == 0)
    throw DivideByZero();

  return x / y;
}

int main() {
  try {
    std::cout << correct_division(10, 2) << std::endl;
    std::cout << correct_division(10, 0) << std::endl;
  } catch (DivideByZero& e) {
    std::cerr << e.what() << std::endl;
  }

  return 0;
}
