#include <iostream>
using namespace std;
int main() {
    double a11, a12, a21, a22;
    cout << "a11: ";
    cin >> a11;
    cout << "a12: ";
    cin >> a12;
    cout << "a21: ";
    cin >> a21;
    cout << "a22: ";
    cin >> a22;
    double determinant = a11 * a22 - a12 * a21;
    cout << "determinant is " << determinant << endl;
    return 0;
}
