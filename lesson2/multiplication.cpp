#include <iostream>

int main()
{
    int a, b, result, chek;

    std::cout << "Please enter two numbers: \n";
    std::cin >> a >> b;
    std::cout << "Enter the result of the multipication: ";
    std::cin >> chek;

    result = a * b;

    if ( result == chek)
    {
        std::cout << chek << " This is correct answer! (Molodec gavna kusok)";
    }
    else 
    {
        std::cout << result << " Ebat tu typoe huilo";
    }
    
    return 0;
}