//14 17 18 19
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <vector>

std::vector <long double> a;

int gcd(int x, int y) {
    while (x != 0 and y != 0) {
        if (x > y) x %= y;
        else y %= x;
    }
    return std::max(x, y);
}

void is_natural(int* x) {
    while (*x <= 0) {
        std::cout << "Please enter natural border N: ";
        std::cin >> *x;
    }
}

int main()
{
    int n{}, ind{}, sz = 10;
    std::cout << "Please enter natural border N: ";
    std::cin >> n;
    is_natural(&n);
    for (int i = n; i > 0; i--) {
        for (int j = 1; j < i; j++) {
            if (gcd(i, j) == 1) a.push_back(j / 1.0 / i / 1.0), ind++;
        }
    }
    std::sort(a.begin(), a.end());
    for (int i = 0; i < ind; i++) {
        std::cout << a[i] << "\n";
    }
    return 0;
}