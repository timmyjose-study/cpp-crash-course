#include <iostream>
#include <stdexcept>

class MyRuntimeError: public std::runtime_error  {
  public:
    MyRuntimeError(): std::runtime_error("MyRuntimeError!") {}
};

int main() {
  try {
    throw MyRuntimeError();
    } catch (MyRuntimeError& e) {
      std::cerr << e.what() << std::endl;
    }

  return 0;
}
