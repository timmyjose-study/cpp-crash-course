#include <iostream>

template<unsigned int N>
struct Factorial {
  enum { value = N * Factorial <N-1>::value };
};

template<>
struct Factorial<0> {
  enum { value = 1 };
};

template<unsigned int M, unsigned int N>
struct Power {
  enum { value = M * Power<M, N-1>::value };
};

template<unsigned int M>
struct Power<M, 0> {
  enum { value = 1 };
};

int main() {
  std::cout << Factorial<10>::value << std::endl;
  std::cout << Factorial<5>::value << std::endl;

  std::cout << Power<3, 5>::value << std::endl;
  std::cout << Power<2, 10>::value << std::endl;
  std::cout << Power<2, 0>::value << std::endl;

  return 0;
}
