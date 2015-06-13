#include <iostream>

class A
{
public:
    A(int n = 0)
        : m_i(n)
    {
        std::cout << m_i;
        ++m_i;
    }

protected:
    int m_i;
};

class B
    : public A
{
public:
    B(int n = 5) : m_a(new A[2]), m_x(++m_i) { std::cout << m_i; }

    ~B() { delete [] m_a; }

private:
    A m_x;
    A *m_a;
};

int main()
{
    B b;

    std::cout << std::endl;

    return 0;
}
