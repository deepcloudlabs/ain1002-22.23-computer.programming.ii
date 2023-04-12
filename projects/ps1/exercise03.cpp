#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "integer in base 10: ";
    cin >> number;
    cout << dec << number << endl;
    cout << "0x" << hex << number << endl;
    cout << "0" << oct << number << endl;
}