

#include<iostream>
#include<vector>

void printUpscaling(int n) {
	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			if (i % 4 == 0 || i % 4 == 1) {
				if (j % 4 == 0|| j % 4 == 1) {
					std::cout << "#";
				}
				else
					std::cout << ".";
			}
			else {
				if (j % 4 == 2 || j % 4 == 3) {
					std::cout << "#";
				}
				else
					std::cout << ".";
			}
		}
		std::cout << std::endl;
	}
}

int main()
{
	int t;
	std::cin >> t;
	std::vector<int> input(t);
	for (int i = 0; i < t; i++) {
		std::cin >> input[i];
	}
	for (int i = 0; i < t; i++) {
		printUpscaling(input[i]);
	}
	return 0;
}