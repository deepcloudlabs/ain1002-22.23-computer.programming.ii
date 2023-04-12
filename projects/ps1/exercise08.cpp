#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a 3-digit, distinct digits, positive integer: ";
    cin >> number;
    if (number < 0){
        cout << "Next time please enter a positive integer" << endl;
    }
    if (number < 100 || number > 999){
        cout << "Next time please enter a 3-digit integer" << endl;
    }
    int leastSignificantDigit = number % 10;
    int centerDigit = (number/10) % 10;
    int mostSignificantDigit = number/100;
    if (
            leastSignificantDigit == centerDigit ||
            leastSignificantDigit == mostSignificantDigit ||
            mostSignificantDigit == centerDigit
     ){
        cout << "Next time please enter an integer with distinct digits" << endl;
    }
    return 0;
}