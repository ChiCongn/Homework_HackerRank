
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

int gameScore(int n, std::vector<int> a) {
	std::sort(a.begin(), a.end());
	std::map<int, int> sequence;
	std::vector<int> c;
	if (a[0] != 0) {
		return 0;
	}
	int index = n;
	for (int i = n - 1; i >= 0; i--) {
		sequence[a[i]]++;
	}
	for (int i = n - 1; i >= 0; i--) {
		if (sequence[i] == 1)
			index = i;
	}
	for (int i = 1; i < n; i++) {
		if (sequence[i] == 0 || (sequence[i] == 1 && i > index)) {
			return i;
		}
	}
	return 1;
}

int main() {
	int t;
	std::cin >> t;
	std::vector<int> res(t);
	for (int i = 0; i < t; i++) {
		int n;
		std::cin >> n;
		std::vector<int> a(n);
		for (int j = 0; j < n; j++) {
			std::cin >> a[j];
		}
		res[i] = gameScore(n, a);
	}
	for (int i = 0; i < t; i++) {
		std::cout << res[i] << std::endl;
	}
	return 0;
}