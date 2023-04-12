#include <iostream>

int main() {

    double A = 4.53 ; // 4-bytes = 32-bits
    A = 100.0 * A ;
    std::cout << "A is " << A << std::endl ;

    double F; // 8-bytes = 64-bits
    std::cout << "Please enter F: " ;
    std::cin >> F;
    double C = ((F-32)*100)/180;
    std::cout << "Celsius value is " << C << std::endl ;
    return 0;
}
