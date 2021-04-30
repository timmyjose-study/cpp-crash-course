#include <iostream>

template<typename T>
class Point {
  private:
    T m_x, m_y, m_z;

  public:
    Point(T x, T y, T z): m_x(x), m_y(y), m_z(z) {}
    ~Point() {}

    friend std::ostream& operator<<(std::ostream& out, const Point& obj) {
      return out << "(" << obj.m_x << ", " << obj.m_y << ", " << obj.m_z << ")";
    }
};

int main()  {
  Point<int> pi(1, 2, 3);
  std::cout << "pi = " << pi << std::endl;

  Point<double> pf(1.2, 2.3, 3.4);
  std::cout << "pf = " << pf << std::endl;
  return 0;
}
