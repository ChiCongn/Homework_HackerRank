#include<iostream>

int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << ((i + j < n-1) ? " " : "#");
		}
		std::cout << std::endl;
	}
	return 0;
}