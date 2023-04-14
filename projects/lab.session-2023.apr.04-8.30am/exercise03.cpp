#include <iostream>

using namespace std;

// The mathematician house number is 204.
// There are 289 houses in the street.

int main() {
    // n is the mathematician house number
    int n=100;
    while (n<1'000){ // n is mathematician house number
        int sumLeft = 0,i=1;
        while (i<n){ // the first inner for loop
            sumLeft = sumLeft + i;
            i++;
        }
        int sumRight=0, m;
        m=n+1; // initialize the loop variable
        while(sumLeft>sumRight){
            sumRight = sumRight + m;
            m++;
        }
        if (sumLeft == sumRight){
            // we do have the solution
            cout << "The mathematician house number is " << n << endl;
            cout << "There are " << m << " houses in the street." << endl;
            break;
        }
        n++;
    }
    return 0;
}
