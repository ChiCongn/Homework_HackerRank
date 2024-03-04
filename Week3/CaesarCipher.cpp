#include<iostream>
#include<string>
#include<cctype>

std::string cipheredMessage(const int& n, std::string& message, int& k) {
	std::string cipher = message;
	while (k > 26)
		k -= 26;
	for (int i = 0; i < n; i++) {
		if (isalpha(message[i])) {			
			if (islower(message[i]) && message[i] + k > 'z') {
				cipher[i] = message[i] + k - 26;
			}
			else if (isupper(message[i]) && message[i] + k > 'Z')
				cipher[i] = message[i] + k - 26;
			else cipher[i] = message[i] + k;
		}			
	}
	return cipher;
}

int main()
{
	int n;
	std::cin >> n;
	std::cin.ignore();
	std::string message;
	std::getline(std::cin, message);
	int k;
	std::cin >> k;
	std::cout << cipheredMessage(n, message, k);
	return 0;
}