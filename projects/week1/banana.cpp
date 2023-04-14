#include <iostream>
// Process -> Running Application
// resides in memory
// 4 special regions: Stack,
//         Heap (new/delete operators, pointers), Text, Data

double z = 3.141516; // global variable -> Data

int main() { // lives inside Text
    { // inner block
        int x = "42"; // x is a local/stack/automatic/temporary variable
        { // inmost block
            int y = 108; // a local variable -> Stack
        } // y is destroyed here!
        std::cout << "x=" << x << std::endl;
        std::cout << "y=" << y << std::endl;
    } // x is destroyed here!
    std::cout << "x=" << x << std::endl;
    std::cout << "z=" << z << std::endl;
    return 0; // 0 exit code means SUCCESS
              // z is destroyed
}