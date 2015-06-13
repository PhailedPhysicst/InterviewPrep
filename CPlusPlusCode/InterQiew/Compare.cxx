#include <algorithm>
#include <iostream>
#include <iterator>


bool compare(int a, int b)
{
    return a % 2 == b % 2;
}

int main()
{
    int a[] = {3, 1, 4, 6, 1, 3};
    auto b = std::begin(a);
    auto e = std::end(a);

    e = std::unique(b, e, compare);
    std::copy(b, e, std::ostream_iterator<int>(std::cout));

    std::cout << std::endl;

    return 0;
}
