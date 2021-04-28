#include <iostream>

int add(int x, int y) {
  return x + y;
}

double add(double x, double y) {
  return x + y;
}

int main() {
  std::cout << add(1, 19) << ", " << add(1.0, 19.22) << std::endl;

  return 0;
}