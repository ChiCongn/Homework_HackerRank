
#include<iostream>
#include<vector>

int main()
{
	int n;
	std:: cin >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	int e, eBegin, eEnd;
	std::cin >> e >> eBegin >> eEnd;
	a.erase(a.begin() + e-1);
	a.erase(a.begin() + eBegin-1, a.begin() + eEnd-1);
	std::cout << a.size() << std::endl;
	for (int it : a)
		std::cout << it << " ";
	return 0;
}