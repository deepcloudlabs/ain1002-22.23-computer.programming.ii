#include <iostream>

using namespace std;

int main(){
    int x = 42; // x is local variable -> Stack
    // i is created once in Stack
    for (int i=0;i<10;i++){ // x10 times
        int y = i*2; // y is a local variable
        // i=0
        // i=1
        // ...
        // i=9
        cout << "i: " << i << endl;
    } // y is destroyed
    // i is not available anymore

}