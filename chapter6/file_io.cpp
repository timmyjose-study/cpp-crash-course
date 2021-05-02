#include <iostream>
#include <string>
#include <fstream>

int main() {
  std::string filename = "rationals.t";
  std::ifstream file(filename);

  if (!file.is_open()) {
    std::cerr << "could not open " << filename << " for reading" << std::endl;
    std::exit(1);
  }

  char byte;
  while (file.get(byte)) {
    std::cout << byte;
  }

  file.close();

  return 0;
}
