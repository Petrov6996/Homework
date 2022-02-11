#include <iostream>

int main()
{
    int n, i, s = 1, c = 0, c1, c2;
    char symbol;

    std::cout << "Please enter the number of steps of the pyramid: \n";
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

}