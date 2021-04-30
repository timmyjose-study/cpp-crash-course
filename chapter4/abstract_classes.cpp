class Foo {
  public:
    Foo(void){}
    virtual ~Foo(void) {}
    virtual void method1(void) = 0;
};

class Bar: public Foo {
  public:
    Bar(void) {}
    ~Bar(void) {}
    void method1(void) {}
};

int main() {
  Foo* foo = new Bar();
  foo->method1();

  return 0;
}
