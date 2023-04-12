#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "enter an integer: ";
    cin >> number;
    if ( (number % 5) && (number % 7))
        cout << number << " is not divided by 5 and 7" << endl;
    else if ( !(number % 5) && !(number % 7))
        cout << number << " is divided by 5 and 7" << endl;
    else if ( !(number % 5) || !(number % 7))
        cout << number << " is divided by 5 or 7" << endl;
    return 0;
}