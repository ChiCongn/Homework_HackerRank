
#include<iostream>
#include<vector>

int main()
{
	int n, query;
	std::cin >> n >> query;
	std::vector<std::vector<int>> matrix(n);
	for (int i = 0; i < n; i++) {
		int size;
		std::cin >> size;
		matrix[i].resize(size);
		for (int j = 0; j < size; j++) {
			std::cin >> matrix[i][j];
		}
	}
	std::vector<std::vector<int>> querys(query);
	for (int i = 0; i < query; i++) {
		querys[i].resize(2);
		for (int j = 0; j < 2; j++) {
			std::cin >> querys[i][j];
		}
		
	}
	for (int i = 0; i < query; i++) {
		std::cout << matrix[querys[i][0]][querys[i][1]]<<std::endl;
	}
}