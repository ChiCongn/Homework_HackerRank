#include <iostream>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;

void plusMinus(vector<int> arr) {
    int n = arr.size();
    int positive = 0, negative = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) positive++;
        else if (arr[i] == 0) zero++;
        else negative++;
    }
    cout << setprecision(6) << fixed << positive / (double)n << endl
        << negative / (double)n << endl << zero / (double)n;
}

int main()
{
    int n;
    cin >> n; 
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    plusMinus(arr);

    return 0;
}

