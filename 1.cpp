/*1. Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator*/

#include <iostream>

class Complex {
  private:
    double real, imag;
  public:
    Complex(double real=0, double imag=0) : real(real), imag(imag) {}

    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.real << " + " << c.imag << "i";
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Complex& c) {
        std::cout << "Real: ";
        is >> c.real;
        std::cout << "Imaginary: ";
        is >> c.imag;
        return is;
    }
};
