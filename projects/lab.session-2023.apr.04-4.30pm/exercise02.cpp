#include <iostream>

using namespace std;

int main() {
    // n is the mathematician house number: three-digit number
    int n = 100;
    do { // n is our loop variable
        int sumLeft = 0;
        int i = 1;
        while (i < n) { // this is the first inner loop
            // sumLeft = sumLeft + i;
            sumLeft += i; // shorthand notation
            i++;
        }
        // you cannot access to i
        int sumRight = 0;
        int houseNumber = n + 1; // the first part of the for loop
        while (sumRight < sumLeft /* the second part of the for loop */) { // this is the second inner loop
            sumRight += houseNumber;
            houseNumber++; // the last/third part of the for loop
        }
        if (sumLeft == sumRight) {// this is the condition that n is the solution
            cout << "The mathematician house number is " << n << endl;
            cout << "There are " << houseNumber << " houses in the street!" << endl;
        }
        n++;
    } while (n < 1'000);
    return 0;
}
