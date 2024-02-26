#include<iostream>
#include<vector>


int countDivisibleDigits(long long& n) {
	long long temp = n;
	int count = 0;
	while (n > 0) {
		int mod = n % 10;
		if (mod != 0 && temp % mod == 0) {
			count++;
		}
		n /= 10;
	}
	return count;
}

int main()
{
	int t;
	std::cin >> t;
	std::vector<int> res(t);
	for (int i = 0; i < t; i++) {
		long long n;
		std::cin >> n;
		res[i] = countDivisibleDigits(n);
	}
	for (int i = 0; i < t; i++) {
		std::cout << res[i] << std::endl;
	}
	return 0;
}