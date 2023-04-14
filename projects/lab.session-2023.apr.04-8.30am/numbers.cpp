#include "numbers.h"
int getSumOfDigits(int number){
    int sum = 0;
    while (number > 0){
        sum += number%10;
        number = number / 10;
    }
    return sum;
}

int getSumOfPrimeFactors(int number){
    int sum = 0;
    int lastPrime = number/2;
    for (int prime=2;prime <= lastPrime;prime++){
        while ((number%prime) == 0){
            number = number / prime;
            sum += getSumOfDigits(prime);
        }
    }
    return sum;
}