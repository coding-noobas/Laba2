//14 17 18 19
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <vector>

void is_natural(long long* x) {
    while (!(std::cin >> *x) || *x <= 0) {
        std::cout << "Please enter natural border N: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

int main()
{
    long long n{}, x{}, sqx, k{};
    std::cout << "Please enter natural border N: ";
    is_natural(&n);
    for (long long i = 1; i < n; i++) {
        for (long long j = 1; j < n; j++) {
            x = i * i + j * j;
            sqx = sqrt(x);
            if (sqx * sqx == x && sqx <= n) std::cout << i << " " << j << " " << sqrt(x) << "\n";
        }
    }
    //std::cout << k << "\n";
    return 0;
}

