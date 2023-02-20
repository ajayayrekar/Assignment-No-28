//7. Create an Integer class and overload logical not operator for that class.

#include <iostream>

class Integer {
  private:
    int x;
  public:
    Integer(int x=0) : x(x) {}

    bool operator!() {
        return x == 0;
    }
};
