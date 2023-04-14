#include "utility.h"

namespace bau {
    int getSumOfDigits(int n) { // definitions
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n = n / 10;
        }
        return sum;
    }

    int getSumOfPrimeFactors(int n) {
        int sum = 0;
        int lastProbablePrime = n / 2;
        for (int prime = 2; prime <= lastProbablePrime; prime++) {
            while (n % prime == 0) {
                n = n / prime;
                sum += getSumOfDigits(prime);
            }
        }
        return sum;
    }
}

