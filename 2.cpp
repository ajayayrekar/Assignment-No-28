/*2. Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables.*/

#include <iostream>

class Complex {
  private:
    double real, imag;
  public:
    void setData(double real, double imag) {
        this->real = real;
        this->imag = imag;
    }

    void displayData() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};
