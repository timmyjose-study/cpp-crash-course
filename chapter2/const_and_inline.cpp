#include <iostream>

const int two = 2;

inline int square(int x) {
  return x * x;
}

int main() {
  std::cout << two * square(2) << std::endl;

  return 0;
}