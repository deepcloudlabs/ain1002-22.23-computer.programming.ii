#include <iostream>

using namespace std;

class Point {
    int x, y;
public:
    Point() : x(0), y(0) {}

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
    Point *q = nullptr;
    {
        Point p; // stack object is automatically destroyed!
        p.move(10, 20);
        p.print();
    } // stack object is now destroyed
    q = new Point; // heap object
    q->move(-10, 30);
    q->print();
    delete q; // heap object is destroyed!
    return 0;
}