#include <iostream>
namespace A {
  int x=42;
  int y=3;
  int fun(int u){
      return u*u*u;
  }
}

namespace B {
  int x = 549;
  int y=5;
  int fun(int u){
      return 2*u;
  }
}

int main(){
    // x is local variable -> Stack,
    // local x hides the global x
    // int x = 108;
    std::cout << B::fun(5) << std::endl;

}