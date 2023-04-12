#include <iostream>

using namespace std;

int main() {
    int number1, number2, number3;
    cout << "Enter the first integer: ";
    cin >> number1;
    cout << "Enter the second integer: ";
    cin >> number2;
    cout << "Enter the third integer: ";
    cin >> number3;
    if (number1 >= number2 && number1 <= number3 )
        cout << "Median is " << number1 << endl;
    else if (number1 >= number3 && number1 <= number2 )
        cout << "Median is " << number1 << endl;
    else if (number2 >= number1 && number2 <= number3 )
        cout << "Median is " << number2 << endl;
    else if (number2 >= number3 && number2 <= number1 )
        cout << "Median is " << number2 << endl;
    else if (number3 >= number1 && number3 <= number2 )
        cout << "Median is " << number3 << endl;
    else // if (number3 >= number2 && number3 <= number1 )
        cout << "Median is " << number3 << endl;

    return 0;
}