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
    Point p1; // no-argument constructor -> Point(0,0)
    Point p2(42); // Point(int) -> Point(42,0)
    Point p3(1,2); // Point(int,int) -> Point(1,2)
    Point *q = nullptr;
    {
        Point p(1,2); // stack object is automatically destroyed!
        p.move(10, 20);
        p.print();
    } // stack object is now destroyed
    q = new Point(-1,1); // heap object
    q->move(-10, 30);
    q->print();
    delete q; // heap object is destroyed!
    return 0;
}