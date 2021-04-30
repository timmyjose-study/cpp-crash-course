#include <iostream>

int main() {
  try {
    float sz = -1;
    float* array = new float[sz];
  } catch (std::bad_alloc e) {
    std::cerr << "Caught error: " << e.what() << std::endl;
  }

  return 0;
}
