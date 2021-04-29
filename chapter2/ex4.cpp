#include <iostream>

void swap_ref(int& x, int& y) {
  int t = x;
  x = y;
  y = t;
}

void swap_ptr(int* px, int* py) {
  int t = *px;
  *px = *py;
  *py = t;
}

void swap_ref_ptr(int* &x, int* &y) {
  int t = *x;
  *x = *y;
  *y = t;
}

void display(int& x, int& y) {
  std::cout << "x = " << x << ", y = " << y << std::endl;
}

int main() {
  int x, y;

  std::cin >> x >> y;
  display(x, y);

  swap_ref(x, y);
  display(x, y);

  swap_ptr(&x, &y);
  display(x, y);

  int* px = &x;
  int* py = &y;
  swap_ref_ptr(px, py);
  display(x, y);

  return 0;

}
