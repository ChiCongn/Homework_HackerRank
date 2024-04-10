
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

std::vector<std::pair<std::string, std::string>> cardGame(int& n,const char& suit, std::vector<std::string>& a) {
	std::vector<std::pair<std::string, std::string>> fail(0);
	std::vector<std::pair<std::string, std::string>> res;
	std::vector<std::string> suitArr;
	std::vector<std::string> suitC;
	std::vector<std::string> suitD;
	std::vector<std::string> suitH;
	std::vector<std::string> suitS;
	std::vector<std::string> redundant;
	for (int i = 0; i < 2*n; i++) {
		switch (a[i][2])
		{
		case 'C':
			suitC.push_back(a[i]);
			break;
		case 'D':
			suitC.push_back(a[i]);
			break;
		case 'H':
			suitC.push_back(a[i]);
			break;
		case 'S':
			suitC.push_back(a[i]);
			break;
		default:
			break;
		}
		if (a[i][2] == suit) {
			suitArr.push_back(a[i]);
		}
	}
	
	int index = 0;
	while (index < 2 * n) {
		if (index+1<2*n && a[index][2] == a[index + 1][2] && a[index][2] != suit) {
			res.push_back(std::make_pair(a[index], a[index + 1]));
			index += 2;
		}
		else if (a[index][2!=suit]) {
			redundant.push_back(a[index]);
			index++;
		}
		else {
			;
		}
	}
	for (int i = 0; suitC[0][2] != suit && i < suitC.size(); i += 2) {
		//res.push_back()
	}
	int lenSuit = suitArr.size();
	int lenRedundant = redundant.size();
	if (lenSuit < lenRedundant) {
		return fail;
	}
	else {
		for (int j = 0; j < lenRedundant; j++) {
			res.push_back(std::make_pair(redundant[j], suitArr[j]));
		}
		for (int j = lenSuit - lenRedundant; j < lenSuit-1; j += 2) {
			res.push_back(std::make_pair(suitArr[j], suitArr[j + 1]));
		}
		return res;
	}	
}

void print(std::vector<std::pair<std::string, std::string>>& a) {
	for (auto it : a) {
		std::cout << it.first << " " << it.second << std::endl;
	}
}

int main()
{
	int t;
	std::cin >> t;
	std::vector<std::vector<std::pair<std::string, std::string>>> res(t);
	for (int i = 0; i < t; i++) {
		int n;
		std::cin >> n;
		char suit;
		std::cin >> suit;
		std::vector<std::string> a(2*n);
		for (int j = 0; j < 2*n; j++) {
			std::cin >> a[j];
		}
		res[i] = cardGame(n, suit, a);
	}
	for (int i = 0; i < t; i++) {
		if (res[i].size() >=1) {
			print(res[i]);
		}
		else {
			std::cout << "IMPOSSIBLE" << std::endl;;
		}
	}
	return 0; 
}

//int main()
//{
//	int n;
//	std::cin >> n;
//	char suit;
//	std::cin >> suit;
//	std::vector<std::string> a(2 * n);
//	for (int j = 0; j < 2*n; j++) {
//		std::cin >> a[j];
//	}
//	std::cout << "=========================" << std::endl;
//	for (int i = 0; i < 2 * n; i++) {
//		std::cout << a[i] << std::endl;
//	}
//	return 0;
//}