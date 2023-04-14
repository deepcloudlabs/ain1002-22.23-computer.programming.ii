#include <iostream>

int main() {
    int x = 42;
    x += 1;
    // x = x + 1;
    /*
     * x++;
     * as many comments
     * as you want
     * these lines are omitted by the compiler
    */
    std::cout << "x=" << x << std::endl;
    return 42; // exit code
}
