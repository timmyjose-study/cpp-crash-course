#include <iostream>

const double divide(const double x, const double y) {
  assert(y != 0);
  return x / y;
}

int main() {
  std::cout << divide(10, 3) << std::endl;
  return 0;
}
