#include <iostream>

class Coord {
  private:
    int m_x, m_y, m_z;

  public:
    // default constructor
    Coord() { m_x = m_y = m_z = 0; }

    // costructor with initialization list
    Coord(int x, int y, int z): m_x(x), m_y(y), m_z(z) {}

    // copy constructor
    Coord(const Coord& source)
    {
      this->m_x = source.m_x;
      this->m_y = source.m_y;
      this->m_z = source.m_z;
    }

    ~Coord() {}

    void operator=(const Coord& other)
    {
      this->m_x = other.m_x;
      this->m_y = other.m_y;
      this->m_z = other.m_z;
    }

    friend std::ostream& operator<<(std::ostream& out, const Coord& obj)
    {
     return out << "(" << obj.m_x << ", " << obj.m_y << ", " << obj.m_z << ")";
    }
};

int main()
{
  Coord c1(1, 2, 3);
  std::cout << c1 << std::endl;

  Coord c2 = c1;
  std::cout << c2 << std::endl;

  Coord c3(11, 12, 13);
  std::cout << c3 << std::endl;

  Coord c4;
  c4 = c3;
  std::cout << c4 << std::endl;

  return 0;
}
