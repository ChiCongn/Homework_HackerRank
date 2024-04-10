#include <iostream>
#include <vector>
#include <cmath>

bool isBinaryDecimal(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && digit != 1) {
            return false;
        }
        num /= 10;
    }
    return true;
}

std::string canBeProductOfBinaryDecimals(int n) {
    if (n == 1) {
        return "YES"; 
    }
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0 && isBinaryDecimal(i) && isBinaryDecimal(n / i)) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int t;
    std::cin >> t;
    std::vector<std::string> res(t);
    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;
        res[i] = canBeProductOfBinaryDecimals(n);
    }
    for (int i = 0; i < t; i++) {
        std::cout << res[i] << std::endl;
    }
    return 0;

}
