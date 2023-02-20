/*8. Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class.*/

#include <iostream>
using namespace std;

class Coordinate {
public:
    double x, y, z;

    Coordinate() : x(0), y(0), z(0) {}

    Coordinate(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}

    Coordinate& operator,(const Coordinate& other) {
        x = other.x;
        y = other.y;
        z = other.z;
        return *this;
    }

    void print() {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Coordinate c1(1, 2, 3);
    Coordinate c2(4, 5, 6);
    Coordinate c3;

    c3 = (c1, c2);

    cout << "c1: ";
    c1.print();

    cout << "c2: ";
    c2.print();

    cout << "c3: ";
    c3.print();

    return 0;
}
