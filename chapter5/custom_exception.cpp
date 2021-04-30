#include <iostream>
#include <stdexcept>

class MyException: public std::exception {
  public:
    const char* what() const throw() {
      return "MyException!";
    }
};

void throws_exception1()  {
  throw MyException();
}

void throws_exception2() {
  throw new MyException;
}

int main() {
  try {
    throws_exception1();
  } catch (MyException& e) {
    std::cerr << e.what() << std::endl;
  }

  try {
    throws_exception2();
  } catch (MyException* e) {
    std::cerr << e->what() << std::endl;
  }

  return 0;
}
