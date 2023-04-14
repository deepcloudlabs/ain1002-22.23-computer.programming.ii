#include <iostream>
using namespace std;
// memory model: stack, heap, text, data


int main() {
    int x;
    int size = 10;
    int *lost ;
    // do something else
    lost = new int[size];
    *(lost+0) = 1;
    *(lost+1) = 2; // lost[1] = 2;
    lost[2] = 42;
    cout << lost[0] << endl;
    cout << lost[1] << endl;
    cout << x << endl;
    delete []lost;
    return 0;
}