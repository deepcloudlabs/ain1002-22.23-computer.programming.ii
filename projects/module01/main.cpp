#include <iostream>



class A { // abstract class
    int x;
public:
    A(int x) : x(x) {}

    virtual int fun() = 0; // abstract -> pure virtual method
    void gun() {} // concrete method
};

class B : public A { // concrete class
public:
    B(int x) : A(x) {}

    int fun() override { return 42; }

};

class I { // interface: all methods are pure virtual!
public:
    virtual int fun() = 0;
    virtual void gun(int x,int y) = 0;
    virtual double sun() = 0;
};

int main() {
    // Error: cannot instantiate A
    // A a{1};
    B b{100};
    return 0;
}