#include <iostream>
#include <cmath>

class Point {
  private:
    float m_x, m_y;

  public:
    Point(float x, float y): m_x(x), m_y(y) {}
    ~Point() {}

    static Point cartesian(float x, float y) {
      return Point(x, y);
    }
    
    static Point polar(float rho, float theta) {
      return Point(rho * std::cos(theta), rho * std::sin(theta));
    }

    friend std::ostream& operator<<(std::ostream& out, const Point& p) {
      return out << "(" << p.m_x << ", " << p.m_y << ")";
    }
};

int main() {
  Point polar = Point::polar(1.2, 2.3);
  std::cout << polar << std::endl;

  Point cartesian = Point::cartesian(1.2, 2.3);
  std::cout << cartesian << std::endl;

  return 0;
}
