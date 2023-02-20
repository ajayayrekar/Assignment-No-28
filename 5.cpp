//5. Create a student class and overload new and delete operators outside the class.

#include <iostream>

class Student {
  private:
    int rollno;
  public:
    void* operator new(size_t size);
    void operator delete(void* p);
};

void* Student::operator new(size_t size) {
    std::cout << "Memory allocated for object." << std::endl;
    void* p = malloc(size);
    return p;
}

void Student::operator delete(void* p) {
    std::cout << "Memory freed for object." << std::endl;
    free(p);
}

int main() {
    Student* s = new Student;
    delete s;
    return 0;
}
