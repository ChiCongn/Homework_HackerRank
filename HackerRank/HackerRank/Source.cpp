
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>
#include<vector>
int* genNumbers(int n) {
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 50;
    }
    return a;
}

void printNumbers(int* a, int n) {
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = a[i];
    }
    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < n-2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 25) {
                    std::cout << arr[i] << " " << arr[j] <<" " << arr[k] << std::endl;
                }
            }
        }
    }
}

int main()
{
    srand(time(0));
    int n;
    std::cin >> n;
    int* a = genNumbers(n);
    printNumbers(a, n);
    return 0;
}