
#include<iostream>
#include<string>

int main()
{
	std::string s;
	std::cin >> s;
	int k;
	std::cin >> k;
	for (int i = 0; i < k; i++) {
		s += '?';
	}
	int len = s.length();
	for (int i = (len / 2) * 2; i >= 2; i -= 2) {
		//std::cout << "i= " << i << std::endl;
		for (int j = 0; j <= len - i; j++) {
			int count = 0;
			//std::cout << "j= " << j << std::endl;
			for (int k = j; k < j + i / 2; k++) {
				if (s[k] == '?' || s[k + (i / 2)] == '?' || s[k] == s[k + (i / 2)]) {
					count++;
					//std::cout << "count= " << count << std::endl;
				}
			}
			if (count == i / 2) {
				std::cout << i;
				return 0;
			}
		}
	}
	return 0;
}