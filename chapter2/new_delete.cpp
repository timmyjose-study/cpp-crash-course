#include <iostream>

int main() {
  int *ptr_int = new int;
  *ptr_int = 100;
  std::cout << *ptr_int << std::endl;
  delete ptr_int;

  int *ptr_int_arr = new int[10];
  for (int i = 0; i < 10; i++) 
    ptr_int_arr[i] = i;

  for (int j = 0 ; j < 10; j++) 
    std::cout << ptr_int_arr[j] << " ";
  std::cout << std::endl;

  delete[] ptr_int_arr;

  return 0;
}
