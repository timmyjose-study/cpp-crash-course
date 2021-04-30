#include <iostream>
#include <string>

template<typename T>
T max(T a, T b) {
  if (a > b) 
    return a;
  else
    return b;
}

int main() {
  std::cout << max<int>(1, 2) << std::endl;
  std::cout << max<std::string>("hello", "world") << std::endl;

  return 0;
}
