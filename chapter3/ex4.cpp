#include <iostream>
#include <string>

class Person {
  private:
    std::string m_name;
    int m_age;

  public:
    Person() {}

    Person(std::string name, int age): m_name(name), m_age(age) {}

    ~Person() {}

    friend std::istream& operator>>(std::istream& in, Person& person)
    {
      return in >> person.m_name >> person.m_age;
    }

    friend std::ostream& operator<<(std::ostream& out, const Person& person)
    {
      return out << "{ name = " << person.m_name << ", age = " << person.m_age << " }";
    }
};

int main()
{
  Person bob;

  std::cin >> bob;
  std::cout << bob << std::endl;

  return 0;
}
