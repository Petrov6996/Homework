#include <iostream>

int main()
{
    int a, d, n, c;

    std::cout << "Please enter values:\n";
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "d = ";
    std::cin >> d;
    std::cout << "n = ";
    std::cin >> n;

    while ( c < n )
    {
        c = c + 1;

        std::cout << a << " ";
        a = a + d;
    }



    return 0;
}