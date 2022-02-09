// int a int b int c int r
// степень -- умножение н-ое количество раз само на себя... 
// 

#include <iostream>

int main()
{
    int a; 
    int an;
    int b;
    int c = 1;
    int r;

    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;

    an = a;
    
    while ( c < b )
    {
        c = c + 1;
        an = an * a;
    }
    std::cout << an;

    return 0;
}
