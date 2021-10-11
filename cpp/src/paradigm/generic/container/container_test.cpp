#include <string>
#include <iostream>
#include <cassert>
#include <utility>

struct Person {
  std::string name;
  int age;

  friend std::ostream &operator<<(std::ostream &os, const Person &person) {
      os << "Person{"
         << "name: " << person.name << ", age: " << person.age
         << '}';
      return os;
  }
  bool operator==(const Person &rhs) const {
      return name == rhs.name && age == rhs.age;
  }
  bool operator!=(const Person &rhs) const {
      return !(rhs == *this);
  }
};

int main() {
    void *ary[5];

    int i = 1;
    std::string s = "hi";
    float f = 3.14;
    double d = 3.14;

    ary[0] = &i;
    ary[1] = &s;
    ary[2] = &f;
    ary[3] = &d;
    Person person = {"John", 34};
    ary[4] = &person;

//    test int
    int *p_int = (int *) ary[0];
    std::cout << *p_int << '\n';
    assert(p_int = &i);
    assert(*p_int = i);

//    test string
    std::string *p_str = (std::string *) ary[1];
    std::cout << *p_str << '\n';
    assert(p_str == &s);
    assert(*p_str == s);

//    test float
    float *p_float = (float *) ary[2];
    std::cout << *p_float << '\n';
    assert(p_float == &f);
    assert(*p_float = f);

//    test double
    double *p_double = (double *) ary[3];
    std::cout << *p_double << '\n';
    assert(p_double == &d);
    assert(*p_double == d);

//    test struct
    Person *pp = (Person *) ary[4];
    std::cout << *pp << '\n';
    assert(pp == &person);
    assert(*pp == person);

    return 0;
}
