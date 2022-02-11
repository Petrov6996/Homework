#include <iostream>

int main()
{
    int n, i, s = 1, c = 0, c1, c2;
    char symbol;

    std::cout << "Please enter the number of steps of the rhombus: \n";
    std::cin >> n;
    std::cout << "Please enter the symbol: \n";
    std::cin >> symbol;

    while ( c < n )
    {   
        std::cout << "\n";

        c = c + 1;
        i = n - c; // определение количества пробелов на каждой ступени пирамиды
        c1 = 0; c2 = 0; // обнуляем счетчики

        // первый цикл выводит пробелы
        while ( i > c1)
        {
            std::cout << " ";
            c1 = c1 + 1;
        }

        // второй цикл выводит символы
        while ( s > c2)
        {
            std::cout << symbol;
            c2 = c2 + 1;
        }

        s = s + 2; // каждый цикл по ступени вниз добавляет два символа
    }

    int i1 = i, n1 = i, c3 = ( n - 1 ) / -1, s1 = s - 2, c4, c5;

    while ( n1 > c3 )
    {
        std::cout << "\n";
        c3 = c3 + 1;
        s1 = s1 - 2;
        c4 = -1;
        c5 = 0;

        while ( i1 > c4)
        {
            std::cout << " ";
            c4 = c4 + 1;
        }

        while (s1 > c5)
        {
            std::cout << symbol;
            c5 = c5 + 1;
        }
                
        i1 = i1 + 1;

    }



        
}