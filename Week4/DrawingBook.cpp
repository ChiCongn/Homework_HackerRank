#include<iostream>
#include<vector>

int pageCount(const int& n,const int& target) {
	int minTurnPage = 0;
	if (target <= n / 2) {
		minTurnPage = target / 2;
	}
	else minTurnPage = n / 2 - target / 2;
	return minTurnPage;
}

int main() 
{
	int n, target;
	std::cin >> n >> target;
	std::cout << pageCount(n, target);
	return 0;
}