
#include<iostream>

class Test {
  public:
  Test()  {std::cout << "in Test " << std::endl; }
  ~Test() {std::cout << "in ~Test " << std::endl;}
};

int main() {
  void *p = new Test;
  delete p; /* compiler shows warning: deleting void* is undefined */
            /* The destructor is not called, therefore             */
            /* this will result in a memory leak                   */

}
