
#include<iostream>
#include<vector>

void lowerBound(const int& n, const std::vector<int>& a, const int& query) {
	int index = 0;
	if (a[n / 2] > query) index = 0;
	else index = n/2;
	bool isFind = false;
	while (a[index] <= query && index < n) {
		if (a[index] == query) {
			isFind = true;
			break;
		}
		index++;
	}
	
	std::cout << ((isFind) ? "Yes" : "No") << " " << index+1 << std::endl;
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	int query;
	std::cin >> query;
	std::vector<int> queries(query);
	for (int i = 0; i < query; i++) {
		std::cin >> queries[i];
	}
	for (int i = 0; i < query; i++) {
		lowerBound(n, a, queries[i]);
	}
	return 0;
}