//6. Create a complex class and overload assignment operator for that class.

#include <iostream>

class Complex {
  private:
    double real, imag;
  public:
    Complex& operator=(const Complex& c) {
        real = c.real;
        imag = c.imag;
        return *this;
    }
};
