#include <iostream>

int main ()
{
    int a, b, c, z;
    int lower;

    std::cout << "Please enter the number: \n";
    std::cin >> a >> b >> c >> z;

    if (a < b && a < c) {
        lower = a;
    }
    else {
        if (b < c) {
            lower = b;
        }
        else {
            lower = c;
        }
    }
    if (lower < z) {
        std::cout << "Your lowest number is \n" << lower;
    }
    else { 
        std::cout << "Your lowest number is \n" << z;
    }

    return 0;
}