#include<iostream>
#include<map>
#include<vector>

int equalizeArray(const int& n, std::vector<int>& a) {
	std::map<int, int> countFrequence;
	for (int i = 0; i < n; i++) {
		countFrequence[a[i]]++;
	}
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (countFrequence[a[i]] > max)
			max = countFrequence[a[i]];
	}
	return n - max;
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	std::cout << equalizeArray(n, a);
	return 0;
}