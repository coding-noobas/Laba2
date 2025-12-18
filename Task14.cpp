//14 17 18 19
#include <iostream>
#include <iomanip>
#include <algorithm>

void is_natural(int* x, int* y) {
    while (!(std::cin >> *x >> *y) || *x <= 0 || *y <= 0) {
        std::cout << "Please enter borders of segment: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

void is_correct(int* x, int* y) {
    if (*x > *y) std::swap(*x, *y);
}

int sum_of_digits(int x) {
    int ans{}, y{};
    while (x > 0) {
        y = std::max(y, x % 10);
        ans += x % 10, x /= 10;
    }
    return ans;
}

int find_max_digits(int x) {
    int y{};
    while (x > 0) {
        y = std::max(y, x % 10);
        x /= 10;
    }
    return y;
}

int main()
{
    int mn, mx;
    std::cout << "Please enter borders of segment: ";
    std::cin >> mn >> mx;
    is_natural(&mn, &mx);
    is_correct(&mn, &mx);
    //std::cout << mn << " " << mx << "\n";
    for (int i = mn; i <= mx; i++) {
        int sum = sum_of_digits(i), max_digits = find_max_digits(i);
        //std::cout << std::find(sqdig, sqdig + 20, sum) - sqdig << " ";
        if (sum == max_digits * max_digits) {
            std::cout << i << "\n";
        }
    }
    std::cout << "\n";
    return 0;
}

