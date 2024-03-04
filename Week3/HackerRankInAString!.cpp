#include<iostream>
#include<string>
#include<vector>

std::string isSubsequenceContainHkRank(const std::string& s) {
	int len = s.length();
	std::string target = "hackerrank", check="";
	int k = 0, i = -1;
	std::string sub = s;
	while (k < target.length() && i < len) {
		sub = sub.substr(i+1, (len - i-1));
		i = sub.find(target[k]);
		if (i == std::string::npos)
			return "NO";
		check += target[k];
		k++;		
	}
	if (check == target) return "YES";
	else return "NO";
}

int main()
{
	int queries;
	std::cin >> queries;
	std::cin.ignore();
	std::vector<std::string> res(queries);
	for (int i = 0; i < queries; i++) {
		std::string s;
		std::getline(std::cin, s);
		res[i] = isSubsequenceContainHkRank(s);
	}
	for (int i = 0; i < queries; i++) {
		std::cout << res[i] << std::endl;
	}
	return 0;
}