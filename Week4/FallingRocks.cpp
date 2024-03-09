#include<iostream>
#include<vector>
#include<string>

bool possibleMove(const std::vector<std::string>& statusCoordinates,const int& pos, const int& h, const int& w );

int main()
{
	int width, height;
	std::cin >> width >> height;
	std::cin.ignore();
	std::vector<std::string> statusCoordinates(height);
	for (int i = 0; i < height; i++) {
		std::getline(std::cin, statusCoordinates[i]);
	}
	int pos = statusCoordinates[0].find('Y');
	if (possibleMove(statusCoordinates, pos,height, width))
		std::cout << "YES";
	else
		std::cout << "NO";

	
	return 0;
}

bool possibleMove(const std::vector<std::string>& statusCoordinates,const int& pos, const int& h, const int& w) {
	std::vector<std::vector<bool>> memo(h, std::vector<bool>(w, false));
	memo[0][pos] = true;
	for (int i = 0; i < h-1; i++) {
		for (int j = 0; j < w; j++) {
			if (memo[i][j]) {
				if (statusCoordinates[i + 1][j] == 'E')
					memo[i + 1][j] = true;
				if (j - 1 >= 0 && statusCoordinates[i + 1][j - 1] == 'E')
					memo[i + 1][j - 1] = true;
				if (j + 1 < w && statusCoordinates[i + 1][j + 1] == 'E')
					memo[i + 1][j + 1] = true;
			}
		}
	}
	for (int j = 0; j < w; j++) {
		if (memo[h-1][j])
			return true;
	}
	return false;
}

