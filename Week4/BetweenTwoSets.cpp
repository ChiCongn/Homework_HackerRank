#include <iostream>
#include<vector>
#include<algorithm>

int gcd(int a, int b);
int findLCM(const int& n, std::vector<int>& a);
int getTotalX(const int& n, const int& m, std::vector<int>& a, std::vector<int>& b);

int main()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> a(n);
	std::vector<int> b(m);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		std::cin >> b[i];
	}
	std::cout << getTotalX(n, m, a, b);
	return 0;
}

int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int findLCM(const int& n, std::vector<int>& a) {
	int lcm = 1;
	for (int i = 0; i < n; i++) {
		int current_gcd = gcd(lcm, a[i]);
		lcm = (lcm * a[i]) / current_gcd;
	}
	return lcm;
}


int getTotalX(const int& n, const int& m, std::vector<int>& a, std::vector<int>& b) {
	std::sort(a.begin(), a.end());
	std::sort(b.begin(), b.end());
	int total = 0;
	int lcm = findLCM(n, a);
	int left = lcm, right = b[0];
	while (left <= right) {
		bool check = true;
		for (int i = 0; i < m; i++) {
			if (b[i] % left != 0) {
				check = false;
				break;
			}				
		}
		if (check) total++;
		left +=lcm;
	}

	return total;
}