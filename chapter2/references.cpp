#include <iostream>

int main() {
  int x = 42;
  int& rx = x;

  std::cout << "x = " << x << ", and rx = " << rx << std::endl;
  return 0;
}