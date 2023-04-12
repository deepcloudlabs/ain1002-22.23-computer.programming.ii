#include <iostream>

using namespace std;

int main() {
    char color;
    cout << "Enter a color: ";
    cin >> color;
    switch (color) {
        case 'r':
            cout << "stop" << endl;
        case 'g':
            cout << "go" << endl;
        default:
            cout << "caution" << endl;
            break;
    }
    if (color == 'r')
        cout << "stop" << endl;
    else if (color == 'g')
        cout << "go" << endl;
    else
        cout << "caution" << endl;
    return 0;
}