/*10. Create a Distance class having 2 instance variable feet and inches. Also create
default constructor and parameterized constructor takes 2 variables . Now overload ()
function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
inches = a+b + 15.*/

#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inches;

    Distance() : feet(0), inches(0) {}

    Distance(int _feet, int _inches) : feet(_feet), inches(_inches) {}

    void operator()(int a, int b, int c) {
        feet = a + c + 5;
        inches = a + b + 15;
    }

    void print() {
        cout << feet << " feet, " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1;
    d1(1, 2, 3);

    cout << "d1: ";
    d1.print();

    return 0;
}
