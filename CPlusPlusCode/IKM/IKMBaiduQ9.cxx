
#include <iostream>

class ExBase
{
  private:
    static int stat;
  public:
    static int GetStat() { return stat;}
};

int ExBase::stat = 25;

class ExDer1: public ExBase
{
  public:
  friend int Der1Fn() {
    return ExBase::stat;
  }

};

class ExDer2: public ExBase {};

class ExDer: public ExDer1, public ExDer2 {};

int main ()
{

  ExDer d;
  std::cout << d.GetStat() << std::endl;
}
