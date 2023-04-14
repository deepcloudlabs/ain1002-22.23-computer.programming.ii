#include <iostream>
using namespace std;

int main() {
    bool b = true;
    bool *bb = &b;
    int x  = 42; // x holds a value
    int *y = &x; // y is a pointer
    y = y - 8; // 10 * sizeof(int)
    cout << "x holds the value " << x << endl;
    cout << "y holds the address " << y << endl;
    cout << "y references to the value " << *y << endl;
    cout << "size of y is " << sizeof(y) << endl;
    y++; // y = y + sizeof(int) -> 4
    bb++; // bb = bb + sizeof(bool) -> 1
    cout << "size of b is " << sizeof(b) << endl;
    cout << "size of bb is " << sizeof(bb) << endl;

    return 0;
}