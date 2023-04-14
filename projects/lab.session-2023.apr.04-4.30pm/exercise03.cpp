#include <iostream>
using namespace std;

int main() {
    // n is the mathematician house number: three-digit number
    for (int n=100;n<1'000;n++){ // n is our loop variable
        int sumLeft = 0;
        for (int i=1;i<n;i++){ // this is the first inner loop
            // sumLeft = sumLeft + i;
            sumLeft += i; // shorthand notation
        }
        // you cannot access to i
        int sumRight=0;
        int houseNumber=n+1;
        for (;sumRight<sumLeft;houseNumber++){ // this is the second inner loop
            sumRight += houseNumber;
        }
        if (sumLeft != sumRight){ // this is the condition that n is not the solution
            continue; // jump to ==> ...;n++){
        }
        cout << "The mathematician house number is " << n << endl;
        cout << "There are " << houseNumber << " houses in the street!" << endl;
        break;
    }
    return 0;
}
