#include <iostream>

class Point {
  private:
    int m_x, m_y;

  public:
    Point() { m_x = 0; m_y = 0; }
    Point(int x, int y): m_x(x), m_y(y) {}
    ~Point() {}

  friend std::ostream& operator<<(std::ostream& out, const Point& point) {
    return out << "(" << point.m_x << ", " << point.m_y << ")";
  }

  friend std::istream& operator>>(std::istream& in, Point& point) {
    in >> point.m_x >> point.m_y;
    return in;
  }
};

int main() {
  Point p1(1, 2);
  std::cout<< p1 << std::endl;

  Point p2;
  std::cin >> p2;
  std::cout << p2 << std::endl;

  return 0;
}
