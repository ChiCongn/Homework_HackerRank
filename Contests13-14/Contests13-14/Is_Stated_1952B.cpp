
#include<iostream>
#include<vector>

int main() {
	std::vector<std::string> s(21);
	for (int i = 0; i < 21; i++) {
		std::cin >> s[i];
	}
	int count1 = 0,count0 = 0;
	for (int i = 0; i < 21; i++) {
		for (int j = 0; j < 21; j++) {
			if (s[i][j] == '1')
				count1++;
			else
				count0++;
		}
		
	}
	//std::cout << "Count 1: " << count1 << " Count0: " << count0 << std::endl;
	std::cout << abs(count1 - count0) +1;
	return 0;
}