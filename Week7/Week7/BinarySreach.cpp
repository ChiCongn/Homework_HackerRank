
#include<iostream>
#include<vector>

int binarySreach(int target, int left, int right, std::vector<int> a) {
	int mid = left + (right - left) / 2;
	if (target == a[mid]) return mid;
	else if (target > a[mid]) {
		return binarySreach(target, mid + 1, right, a);
	}
	else {
		return binarySreach(target, left, mid - 1, a);
	}
}

int main() {
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	std::cout << binarySreach(12, 0, n - 1, a);
	return 0;
}