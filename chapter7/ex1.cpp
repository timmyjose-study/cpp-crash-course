#include <iostream>
#include <string>

template<typename T>
void gen_swap(T& t1, T& t2) {
  T temp = t1;
  t1 = t2;
  t2 = temp;
}

int main() {
  int a = 1, b = 2;
  std::cout << "Before gen_swap, a = " << a << ", b = " << b << std::endl;
  gen_swap<int>(a, b);
  std::cout << "After gen_swap, a = " << a << ", b = " << b << std::endl;

  double da = -19.2321, db = 0.02232;
  std::cout << "Before gen_swap, da = " << da << ", db = " << db << std::endl;
  gen_swap<double>(da, db);
  std::cout << "After gen_swap, da = " << da << ", db = " << db << std::endl;

  std::string sa = "hello", sb = "world";
  std::cout << "Before gen_swap, sa = " << sa << ", sb = " << sb << std::endl;
  gen_swap<std::string>(sa, sb);
  std::cout << "After gen_swap, sa = " << sa << ", sb = " << sb << std::endl;

  return 0;
}
