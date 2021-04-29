#include <iostream>

constexpr int square(int x) 
{
  return x * x;
}

int main()
{
  int x = 42;
  int y = square(x);
  int z;

  std::cin >> z;
  std::cout << y << " " << square(z) << std::endl;

  return 0;
}
