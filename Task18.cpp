//14 17 18 19
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <vector>

void is_natural(int* x) {
    while (!(std::cin >> *x) || *x <= 0) {
        std::cout << "Enter number of your digit: ";
    }
}

int main()
{
    int n{}, n1{}, x{ 0 }, y{ 1 }, num{};
    std::cout << "Enter number of your digit: ";
    is_natural(&n);
    if (n < 10) {
        std::cout << n << "\n";
        return 0;
    }
    n1 = n;
    while (n1 > 0) {
        if (x != 0) y *= 10, x++;
        else y *= 9, x++;
        n1 -= x * y;
    }
    n1 += x * y - 1;
    num = y / 9 + n1 / x;
    //std::cout << num << " " << n1 % x << "\n";
    y = n1 % x;
    for (int i = 0; i < x - y - 1; i++) {
        num /= 10;
    }
    std::cout << num % 10 << "\n";
    return 0;
}
//Если я правильно понял задача имеет ввиду ряд вида : 1 2 3 4 5 6 7 8 9 1 0 1 1 1 2 1 3 1 4 1 5 ...(то есть каждое число разбито на цифры)
