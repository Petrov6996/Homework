#include <iostream>

int main()
{
    int a, b, c, poshelnahui;
    b = 0; 
    c = 0;

    std::cout << "Enter please number dalbaebina :) ";
    std::cin >> a;

    while ( c <= a)
    {   
       poshelnahui = poshelnahui + 1;
        c = c + 1;

        if ( c % 3 == 0)
        {
            std::cout << c << " ";
            b = b + poshelnahui;
        }

    }

    std::cout << "\n" << b;

    return 0;
}
