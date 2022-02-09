#include <iostream>

int main()
{
    int a;
    int count = 0;
    int c = 1;

    std::cout << "Vvodi chislo ";
    std::cin >> a;

    while ( c <= a)
    {   
        if ( c % 3 == 0 || c % 4 == 0) 
        {
            std::cout << c << " ";
            count = count + 1;
        }
        c = c + 1;
    }
    
    std::cout << "\n" << count;

    return 0;
}