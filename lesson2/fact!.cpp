#include <iostream>

int main()
{
    int a;
    int i = 1; // можно и не присваивать "1"
    int result = 1;

    std::cout << "Please enter fucking factorial: ";
    std::cin >> a;
    
    while (i < a)
     {
         i = i + 1;
         result = result * i;
     }
      
    std::cout << result;

    return 0;
}

// 5 = 1 * 2 * 3 * 4 * 5 = 120 5