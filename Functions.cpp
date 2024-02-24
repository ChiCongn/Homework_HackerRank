#include <cmath>
#include <iostream>
using namespace std;

int findMax(int& a, int& b, int& c, int& d) {
    return max(a, max(b, max(c, d)));
}

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << findMax(a, b, c, d);
    return 0;
}
