
#include<iostream>
#include<vector>
#include<string>


int tandemRepeats(std::string s) {
	int len = s.length();
	for (int i = (len/2)*2; i >= 2; i -= 2) {
		int count = 0;
		for (int j = 0; j < i/2; j++) {
			if (s[j] == '?' || s[j + (i / 2)] == '?' || s[j] == s[j + (i / 2)]) {
				count++;
			}
		}
		if (count == i)
			return i;
		for (int k = 1; k < (i / 2) -1; k++) {
			if (s[k + (i / 2) -1] == s[k + i -1]|| s[k+i-1] == '?' || s[k + (i / 2)-1] == '?')
				count++;
			if (s[k - 1] == s[k + (i / 2) - 1] || s[k - 1] == '?' || s[k + (i / 2) - 1] == '?')
				count--;
			if (count == i / 2) {
				return i;
			}
		}		
	}
	return 0;
}

int main()
{
	int n;
	std::cin >> n;
	std::cin.ignore();
	std::vector<int> res(n);
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		res[i] = tandemRepeats(s);
	}
	for (int i = 0; i < n; i++) {
		std::cout << res[i] << std::endl;
	}
	return 0;
}