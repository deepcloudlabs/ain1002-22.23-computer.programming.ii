#include <iostream>

using namespace std;

class Point {
    int x, y;
public:
    Point(int x=0,int y=0) : x(x), y(y) {}

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

int main() {
    // uniform initialization
    int x = 42;
    int y{42};
    Point p1{}; // no-argument constructor -> Point(0,0)
    Point p2{42}; // Point(int) -> Point(42,0)
    Point p3{1,2}; // Point(int,int) -> Point(1,2)

    return 0;
}