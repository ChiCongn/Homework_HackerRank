#include<iostream>
#include<string>

int main()
{
	std::string a, b;
	std::getline(std::cin, a);
	std::getline(std::cin, b);
	int len1 = a.length(), len2 = b.length();
	std::string concennate = a + b;	
	a.erase(a.begin()), b.erase(b.begin());
	a = concennate[0] + a;
	b = concennate[len1] + b;
	std::cout << len1 << " " << len2 << std::endl
		<< concennate << std::endl
		<< a << " " << b;
	return 0;
}