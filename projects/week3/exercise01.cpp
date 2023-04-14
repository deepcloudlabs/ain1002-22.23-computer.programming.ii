#include <iostream>
using namespace std;
// memory model: stack, heap, text, data
// lost is a global variable -> data
int lost[] = {4, 8, 15, 16, 23, 42}; // lost is an array of integers.

int main() { //beginning of the block
    // floating-point numbers
    static float m = 3.1415; // now m is stored in data region
    double n = 3.14151617;
    bool z;
    unsigned int p= 108;
    long long q= 1'000'000;
    int x = 42; // x is a scalar variable
    int y[] = {4, 8, 15, 16, 23, 42}; // y is an array of integers.
    // y is i) local/stack variable ii) array iii) holds values
    cout << "size of float is " << sizeof(m) << "-bytes" << endl;
    cout << "size of double is " << sizeof(double) << "-bytes" << endl;
    cout << "size of bool is " << sizeof(bool) << "-bytes" << endl;
    cout << "size of unsigned int is " << sizeof(unsigned int) << "-bytes" << endl;
    cout << "size of int is " << sizeof(int) << "-bytes" << endl;
    cout << "size of long long is " << sizeof(long long) << "-bytes" << endl;
    cout << "size of my array named y is " << sizeof(y) << "-bytes" << endl;
    cout << "there are " << sizeof(y)/sizeof(int) << " elements in the array." << endl;
    return 0;
}
