#include <iostream>
#include "utility.h"
using namespace std;


int main() {
    for (int number=2;number<1'000;++number){
        int sumOfDigits = bau::getSumOfDigits(number);
        int sumOfPrimeFactors = bau::getSumOfPrimeFactors(number);
        if (sumOfDigits == sumOfPrimeFactors){
            cout << number
                 << " is a Smith number: "
                 << sumOfDigits
                 << ", "
                 << sumOfPrimeFactors
                 << "."
                 << endl;
        }
    }

    return 0;
}