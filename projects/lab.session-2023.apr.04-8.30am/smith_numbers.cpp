#include <iostream>

using namespace std;

int main() {
    for (int n=2;n<1'000;n++){
        int sumOfDigits = 0;
        int number = n;
        while (number > 0){
            sumOfDigits += number%10;
            number = number / 10;
        }
        number = n;
        int sumOfPrimeFactors = 0;
        for (int prime=2;prime <= (n/2);prime++){
            while ((number%prime) == 0){
                number = number / prime;
                int p = prime;
                while (p > 0){
                    sumOfPrimeFactors += p%10;
                    p = p / 10;
                }
            }
        }
        if (sumOfPrimeFactors == sumOfDigits){
            cout << "sumOfDigits(" << n << "): " << sumOfDigits << endl;
            cout << "sumOfPrimeFactors(" << n << "): " << sumOfPrimeFactors << endl;
            cout << n << " is a Smith Number." << endl;
        }
    }
    return 0;
}
