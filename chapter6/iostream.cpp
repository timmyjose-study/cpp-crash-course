#include <iostream>

int main() {
  unsigned char age = 65;

  std::cout << static_cast<unsigned>(age) << std::endl;
  std::cout << static_cast<void const*>(&age) << std::endl;

  double d = 3.14159;
  std::cout.unsetf(std::ios::floatfield);
  std::cout.precision(5);
  std::cout << d << std::endl;
  std::cout.precision(10);
  std::cout << d << std::endl;
  std::cout.setf(std::ios::fixed, std::ios::floatfield);
  std::cout << d << std::endl;

  std::cout << "Enter a number, or -1 to quite: ";
  int n = 0;
  while (std::cin >> n) {
    if (n == -1) break;
    std::cout << "You entered " << n << std::endl;
  }

  return 0;
}
