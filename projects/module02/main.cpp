#include <iostream>
#include "circle.h"
#include "employee.h"

using namespace std;

int main() {
    // local/stack/automatic variable

    // this is the first Circle object created at Stack!
    Circle c1(0, 0, 10); // c1 is a Stack object from the class Circle

    // The third constructor -- delegates --> The first constructor -> Circle(0,0,1'000)
    Circle c2(1'000);

    // The second constructor is used!
    Circle c3(10, 20);
    cout << "Area of c1 is " << c1.area() << endl;
    cout << "Circumference of c1 is " << c1.circumference() << endl;
    // pointers
    Circle *p; // there is no object created yet for our pointer
    p = new Circle(1.2); //  the second Circle object is created in Heap!
    cout << "Area of c1 is " << p->area() << endl;
    cout << "Circumference of c1 is " << p->circumference() << endl;
    delete p; // destroyed the object

    // create an employee
    auto jack = new employee("1","jack shephard","tr1",100'000,"IT");
    jack->increaseSalary(1.0);
    delete jack;
    return 0; // c1 is destroyed automatically!
}

