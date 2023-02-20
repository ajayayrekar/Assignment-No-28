/*11. Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that
function.*/

#include <iostream>
using namespace std;

class Marks {
  int marks;
public:
  Marks(int m) : marks(m) {}
  void display() {
    cout << "Marks: " << marks << endl;
  }
};

class MarksPtr {
  Marks *ptr;
public:
  MarksPtr(Marks *p = nullptr) : ptr(p) {}
  Marks* operator->() {
    return ptr;
  }
};

int main() {
  Marks obj(75);
  obj.display();

  MarksPtr ptr(&obj);
  ptr->display();

  return 0;
}
