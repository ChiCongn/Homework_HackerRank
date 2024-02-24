#include <iostream>
#include <vector>
#include<string>

using namespace std;

string balancedSums(vector<int> arr) {
    long long sumLeft = 0, sumRight = 0;
    long long sum = 0;
    for (int x : arr) {
        sum += x;
    }
    for (int i = 0; i < arr.size(); i++) {
        sumRight = sum - sumLeft - arr[i];
        if (sumLeft == sumRight)
            return "YES";
        sumLeft += arr[i];
    }
    return "NO";   
}

int main()
{
    int t;
    cin >> t;
    vector<string> res(t);
    for (int i = 0; i < t; i++) {       
        int n;
        cin >> n;        
        vector<int> arr(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

       res[i] = balancedSums(arr);
    }
    for (int i = 0; i < t; i++) {
        cout << res[i] << endl;
    }
    return 0;
}


