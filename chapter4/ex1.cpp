#include <iostream>
#include <string>

class Foo {
  protected:
    std::string m_name;

public:
  Foo(std::string name): m_name(name) {
    std::cout << "constructor for " << name << " was called" << std::endl;
  }

  ~Foo(void) {
    std::cout << "destructor for " << this->m_name << " was called" << std::endl;
  }
};

class Bar: public Foo {
  public:
    Bar(std::string name): Foo(name) {
      std::cout << "constructor for " << name << " was called" << std::endl;
    }

    ~Bar(void) {
      std::cout << "destructor for " << this->m_name << " was called" << std::endl;
    }
};

int main() {
  std::cout << "Hello!" << std::endl;

  {
    Foo* foo = new Foo("foo");
    Foo another_foo("another_foo");
    Foo* bar = new Bar("bar");
    Bar baz = Bar("baz");
    Bar* quux = new Bar("quux");

   delete foo;
   delete bar;
   delete quux;
  }


  std::cout << "Adios!" << std::endl;

  return 0;
}
