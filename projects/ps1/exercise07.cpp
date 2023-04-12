#include <iostream>

using namespace std;

int main() {
    int weekDay = 7;
    switch(weekDay){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Work harder!" << endl;
            break;
        case 6:
        case 7:
            cout << "Rest now..." << endl;
            break;
    }
    return 0;
}
