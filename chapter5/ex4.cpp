#include <iostream>
#include <stdexcept>

struct DivideByZeroError: public std::runtime_error {
  DivideByZeroError(void): std::runtime_error("attempt to divide by zero") {}
};

struct UnderflowError: public std::runtime_error {
  UnderflowError(void): std::runtime_error("underflow") {}
};

struct OverflowError: public std::runtime_error {
  OverflowError(void): std::runtime_error("overflow") {}
};

class Integer {
  private:
    int m_val;

  public:
    Integer(int val = 0): m_val(val) {}

    virtual Integer operator+(const Integer& other) {
      unsigned char result = m_val + other.m_val;

      if (result < m_val) {
        throw OverflowError();
      }

      return Integer(result);
    }

    virtual Integer operator-(const Integer& other) {
      unsigned char result = m_val - other.m_val;

      if (result > m_val) {
        throw UnderflowError();
      }

      return Integer(result);
    }

    virtual Integer operator*(const Integer& other) {
      unsigned char result = m_val * other.m_val;

      if (result > m_val) {
        throw UnderflowError();
      }

      return Integer(result);
    }

    virtual Integer operator/(const Integer& other) {
      if (other.m_val == 0) {
        throw DivideByZeroError();
      }

      return Integer(m_val / other.m_val);
    }

    friend std::ostream& operator<<(std::ostream& out, const Integer& obj) {
      return out << obj.m_val;
    }
};

int main() {
  Integer a(129), b(128), c(0);
  try {
    std::cout << a + b << std::endl;
  } catch (DivideByZeroError& e) {
    std::cerr << e.what() << std::endl;
  } catch (UnderflowError& e) {
    std::cerr << e.what() << std::endl;
  } catch (OverflowError& e) {
    std::cerr << e.what() << std::endl;
  }

  return 0;
}
