#include "circle.h"

Circle::Circle(double x, double y, double radius) { // (1)
    this->x = x;
    this->y = y;
    this->radius = radius;
}

Circle::Circle(double x, double y) : x(x), y(y) { // (2)
}

Circle::Circle(double radius) : Circle(0, 0, radius) { // (3)
}

Circle::~Circle() {
    cout << "~Circle()" << endl;
}

//region getters
double Circle::getX() const { // constant methods
    return x;
}

double Circle::getY() const {
    return y;
}


//endregion

void Circle::move(int x, int y) {
    this->x = x;
    this->y = y;
}

void Circle::scale(double rate) {
    if (rate > 0.0)
        this->radius = rate * this->radius;
}

double Circle::area() const {
    return M_PI * this->radius * this->radius;
}

double Circle::circumference() const {
    return 2.0 * M_PI * this->radius;
}