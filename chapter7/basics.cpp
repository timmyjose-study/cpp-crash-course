template<typename T1>
void foo1() {}

template<typename T1, typename T2>
void foo2() {}

template<typename T>
class Foo {};

int main() {
  foo1<int>();
  foo2<int, char>();

  Foo<int> foo;

  return 0;
}
