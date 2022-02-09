#include <iostream>

int main()
{
    unsigned int a, counter = 0, one = 0, two = 1, res = 0;

    std::cout << "Please enter number \n";
    std::cin >> a;

    // 0 1 1 2 3 5 8 13 21 34 55 ...

    while ( counter < a)
    {
    
        if ( counter == 0)
        {
            std::cout << one << " " << two << " ";
        }
        
        counter = counter + 1;

        res = one + two;
        one = two;
        two = res;
    
        std::cout << res << " ";
    }

    return 0;
}   