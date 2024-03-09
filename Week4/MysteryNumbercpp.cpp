#include<iostream>
#include<vector>
#include<map>

int mysteryNumber(const int& n, std::vector<int>& a, std::vector<int>& b);

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	std::vector<int> b(n + 1);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	for (int i = 0; i < n + 1; i++) {
		std::cin >> b[i];
	}
	std::cout << mysteryNumber(n, a, b);
	return 0;
}

int mysteryNumber(const int& n, std::vector<int>& a, std::vector<int>& b) {
	std::map<int, int> frequenceA;
	std::map<int, int> frequenceB;
	for (int i = 0; i < n; i++) {
		frequenceA[a[i]]++;		
		frequenceB[b[i]]++;
	}
	frequenceB[b[n]]++;
	for (int i = 0; i < n + 1;i++) {
		if (frequenceA[b[i]] < frequenceB[b[i]])
			return b[i];
	}
	return -1;
}