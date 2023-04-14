#include <iostream>
#include <cmath>
using namespace std;

#ifndef MODULE02_CIRCLE_H
#define MODULE02_CIRCLE_H
class Circle {
private:
    // information hiding principle
    double x, y, radius; // attributes/fields/properties/data/state
public:
    // Overloaded Constructors
    // Circle(1,2), Circle(1,2,3)
    Circle(double x,double y,double radius); // declaration
    Circle(double x,double y);
    Circle(double radius);
    ~Circle();
    double getX() const;
    double getY() const;
    double getRadius() const {
        return radius;
    }
    inline void move(int x, int y);
    void scale(double rate);
    double area() const;
    double circumference() const;
};
#endif //MODULE02_CIRCLE_H
