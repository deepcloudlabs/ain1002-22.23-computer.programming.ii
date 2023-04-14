#include <iostream>

using namespace std;

// The mathematician house number is 204.
// There are 289 houses in the street.

int main() {
    // n is the mathematician house number
    for (int n=100;n<1'000;n++){ // n is mathematician house number
        int sumLeft = 0;
        for (int i=1;i<n;i++){ // the first inner for loop
            sumLeft = sumLeft + i;
        }
        int sumRight=0, m;
        for (m=n+1;sumLeft>sumRight;m++){ // the second inner for loop
            sumRight = sumRight + m;
        }
        if (sumLeft == sumRight){
            // we do have the solution
            cout << "The mathematician house number is " << n << endl;
            cout << "There are " << m << " houses in the street." << endl;
        }
    }
    return 0;
}
