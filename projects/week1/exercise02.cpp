#include <iostream>

int x=42; // x is a global variable -> Data

int fun(int u,int v){
    int x = u*v; // local variable -> stack variable -> automatic variable
    return 2*::x+3*v;
}

int main(){
    // x is local variable -> Stack,
    // local x hides the global x
    int x = 108;
    std::cout << ::x << std::endl;
    std::cout << fun(3,5) << std::endl;
}