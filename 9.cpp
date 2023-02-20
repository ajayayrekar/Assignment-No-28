/*9. Create an Integer class that contains int x as an instance variable and overload
casting int() operator that will type cast your Integer class object to int data type.*/

#include <iostream>
using namespace std;

class Integer {
public:
    int x;

    Integer() : x(0) {}

    Integer(int _x) : x(_x) {}

    operator int() {
        return x;
    }
};

int main() {
    Integer i(42);
    int j = static_cast<int>(i);

    cout << "i: " << i.x << endl;
    cout << "j: " << j << endl;

    return 0;
}
