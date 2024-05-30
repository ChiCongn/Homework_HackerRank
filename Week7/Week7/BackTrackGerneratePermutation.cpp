
#include<iostream>
#include<string>

void generatePermutation(std::string& current) {
	if (current.length() == 3) {
		std::cout << current << std::endl;
		return;
	}
	for (char i = 'a'; i <= 'd'; i++) {
		current.push_back(i);
		generatePermutation(current);
		current.pop_back();
	}
}

int main() {
	std::string s = "";
	generatePermutation(s);
	return 0;
}