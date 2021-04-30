#include <iostream>

class Foo {
  public:
    Foo(void) {}
    virtual ~Foo(void){}
    void method1(void) {}
    virtual void method2(void) {}
};

class Bar: public Foo {
  public:
    Bar(void){}
    ~Bar(void) {}
    void method2(void) {}
};

class Bar_public: public Foo {}; // public parts are public, and protected are protected
class Bar_private: private Foo {}; // public and protected are private
class Bar_protected: protected Foo {}; // public and protected are protected

int main() {
  Foo* bar = new Bar();
  bar->method1();
//  bar->method2();
//
  return 0;
}
