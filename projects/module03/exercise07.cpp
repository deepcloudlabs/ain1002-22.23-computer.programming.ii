#include <iostream>

using namespace std;

class Point {
    int x, y;
public:
    Point(int x,int y=0) : x(x), y(y) {}
    Point(Point& other){ // copy constructor
        cout << "Point::Point(Point& other)" << endl;
        this->x = other.x;
        this->y = other.y;
    }
    void move(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void print() const {
        cout << "Point [ x: " << x << ", y: " << y << "]\n";
    }

    ~Point() {
        cout << "Point::~Point() is executed for "
             << "Point [ x: " << x << ", y: " << y << "]\n";
    }
};
class A {
    const int i=42;
    const int j;
public:
    A(int m) : j(m){

    }
};
class B {
    // (1) no-argument/default constructor
    // (2) copy constructor
    // destructor
    // assignment operator
};

int main() {
    const Point p1{1,2};
    p1.print(); // print is allowed since print is a const method!
    // Error: you are not allowed to mutate constant objects -> p1.move(3,4); // object state is mutated!

    return 0;
}