#include<iostream>
#include<vector>

int countDivisibleSumPairs(int& n, int& k, std::vector<int>& a) {
	int count = 0;
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((a[i] + a[j]) % k == 0)
				count++;
		}
	}
	return count;
}

int main()
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	std::cout << countDivisibleSumPairs(n, k, a);
	return 0;
}