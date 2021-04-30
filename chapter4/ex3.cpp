#include <iostream>

class Real {
  private:
  double m_value;
  public:
  Real(double value): m_value(value) {}
  ~Real() {}

  Real operator+(const Real& other) {
    return Real(m_value + other.m_value);
  }

  Real operator-(const Real& other) {
    return Real(m_value - other.m_value);
  }

  Real operator*(const Real& other) {
    return Real(m_value * other.m_value);
  }

  Real operator/(const Real& other) {
    assert(other.m_value != 0.0);
    return Real(m_value / other.m_value);
  }

  friend std::ostream& operator<<(std::ostream& out, const Real& obj) {
    return out << obj.m_value;
  }
};

class Integer: public Real {
  public:
    Integer(int ival): Real(ival) {}
    ~Integer() {}
};

int main() {
  Real r1(1.23), r2(2.34);
  Integer i1(11), i2(12);

  std::cout << r1 << " + " << r1 << " = " << r1 + r2 << std::endl;
  std::cout << r1 << " - " << r1 << " = " << r1 - r2 << std::endl;
  std::cout << r1 << " * " << r1 << " = " << r1 * r2 << std::endl;
  std::cout << r1 << " / " << r1 << " = " << r1 / r2 << std::endl;
  std::cout << r1 << " + " << i1 << " = " << r1 + i1 << std::endl;
  std::cout << r1 << " + " << i2 << " = " << r1 + i2 << std::endl;
  std::cout << r2 << " + " << i1 << " = " << r2 + i1 << std::endl;
  std::cout << r2 << " + " << i2 << " = " << r2 + i2 << std::endl;
  std::cout << i1 << " + " << i2 << " = " << i1 + i2 << std::endl;

  return 0;
}
