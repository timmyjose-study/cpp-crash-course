#include <iostream>

float foo(float a = 0, float b = 1, float c = 2) {
  return a + b + c;
}

int main() {
  std::cout << foo() << std::endl
            << foo(1) << std::endl
            << foo(1, 2) << std::endl
            << foo(1, 2, 3) << std::endl;

  return 0;
}