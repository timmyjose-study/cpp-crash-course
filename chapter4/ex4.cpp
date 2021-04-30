#include <iostream>

class Singleton {
  private:
    static Singleton* m_instance;

    Singleton(void) {}

    Singleton(Singleton const& other) {}

    Singleton& operator=(Singleton const& other) {
      return *this;
    }

  public:
    static Singleton* instance() {
      if (m_instance == nullptr) {
        m_instance = new Singleton;
      }
      return m_instance;
    }
};

// explicitly set the static to 0
Singleton* Singleton::m_instance = 0;

int main() {
  Singleton* s1 = Singleton::instance();
  Singleton* s2 = Singleton::instance();
  Singleton* s3 = s1;

  return 0;
}
