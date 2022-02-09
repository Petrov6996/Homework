#include <iostream>

int main()
{
    int a;
    int c;

    std::cout << "Chislo pzhlst ";
    std::cin >> a;

    c = a * -1;

    while ( c <= a)
    {
        std::cout << " " << c;
        c = c + 1;
    }

    return 0;
}