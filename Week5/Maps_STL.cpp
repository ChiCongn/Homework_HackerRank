
#include<iostream>
#include<map>
#include<string>

int main()
{
	int n;
	std::cin >> n;
	std::map<std::string, int> student;
	for (int i = 0; i < n; i++) {
		int type;
		std::cin >> type;
		std::string s;
		std::cin >> s;
		if (type == 1) {
			int num;
			std::cin >> num;
			student.insert(std::make_pair(s, 0));
			student[s] += num;
		}
		else if (type == 2) {
			student.erase(s);
		}
		else if (type == 3) {
			std::cout << student[s] << std::endl;
		}
		else;
	}
	return 0;
}