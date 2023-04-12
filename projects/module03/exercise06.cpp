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

int main() {
    // uniform initialization
    Point points[5]{{1},{2},{3,4},{5},{6,7}};
    for (Point& p : points){ // memory efficient (it does not require object creation in the stack using copy constructor)
        p.print();
    }
    Point p1{1,2};
    Point p2 = p1; // copy constructor
    Point p3(p1); // copy constructor
    return 0;
}