
#include<iostream>
#include<vector>

int NearlyShortestRepeatingSubstring(int n, std::string s) {
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			std::string k = "";
			for (int j = 0; j < s.length(); j++) {

			}
		}
	}
}

int main()
{
	int t;
	std::cin >> t;
	std::vector<int> res(t);
	for (int i = 0; i < t; i++) {
		int n;
		std::cin >> n;
		std::cin.ignore();
		std::string s;
		std::cin >> s;
		res[i] = NearlyShortestRepeatingSubstring(n, s);
	}
	for (int i = 0; i < t; i++) {
		std::cout << res[i] << std::endl;
	}
	return 0;
}
