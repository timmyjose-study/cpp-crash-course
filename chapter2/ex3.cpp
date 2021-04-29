#include <iostream>

int main() {
  const int n = 5;
  int **a = new int*[n];

  for (int i = 0; i < n; i++)
    a[i] = new int[n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      a[i][j] = i * n + j;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      std::cout << a[i][j] << " ";
    }
    std::cout << std::endl;
  }

  for (int i = 0; i < n; i++) 
    delete[] a[i];
  delete[] a;

  return 0;
}