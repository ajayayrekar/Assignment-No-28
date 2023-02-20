/*3. Overload subscript operator [] that will be useful when we want to check for an index
out of bound.*/

#include <iostream>
#include <stdexcept>

class Array {
  private:
    int arr[10];
  public:
    int& operator[](int index) {
        if (index < 0 || index >= 10) {
            throw std::out_of_range("Index out of bounds.");
        }
        return arr[index];
    }
};
