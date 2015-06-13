

#include <iostream>
#include <cstdlib>

class Base {
  public:
    virtual void foo (int i = 10) {
      std::cout << "Base class foo called with i = " << i << std::endl;
    }
};

class Derived : public Base {
  public:
    virtual void foo (int k = 5) {
      std::cout << "Derived class foo called with k = " << k << std::endl;
    }
};

int main () {
  Base *bPtr = new Derived();
  bPtr->foo();  

  return 0;
}
