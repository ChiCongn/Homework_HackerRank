
#include<iostream>
#include<map>
#include<vector>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	std::map<int, int> bird;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		bird[a[i]]++;
	}

}