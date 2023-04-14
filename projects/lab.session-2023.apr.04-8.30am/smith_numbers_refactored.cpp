#include <iostream>
#include "numbers.h"

using namespace std;

int main() {
    for (int n = 2; n < 1'000; n++) {
        int sumOfDigits = getSumOfDigits(n);
        int sumOfPrimeFactors = getSumOfPrimeFactors(n);
        if (sumOfPrimeFactors == sumOfDigits) {
            cout << "sumOfDigits(" << n << "): " << sumOfDigits << endl;
            cout << "sumOfPrimeFactors(" << n << "): " << sumOfPrimeFactors << endl;
            cout << n << " is a Smith Number." << endl;
            cout << endl;
        }
    }
    return 0;
}
