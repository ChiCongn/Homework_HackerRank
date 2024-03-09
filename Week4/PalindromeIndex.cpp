
#include<iostream>
#include<string>
#include<vector>

bool isPalindrome(const std::string& s, int left, int right);
int palindromeIndex(const std::string& s);

int main()
{
	int t;
	std::cin >> t;
	std::cin.ignore();
	std::vector<int> res(t);
	for (int i = 0; i < t; i++) {
		std::string s;
		std::getline(std::cin, s);
		res[i] = palindromeIndex(s);
	}
	for (int i = 0; i < t; i++) {
		std::cout << res[i] << std::endl;
	}
	return 0;
}

bool isPalindrome(const std::string& s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int palindromeIndex(const std::string& s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            if (isPalindrome(s, left + 1, right)) {
                return left;
            }
            if (isPalindrome(s, left, right - 1)) {
                return right;
            }
            return -1; 
        }
        left++;
        right--;
    }
    return -1;
}