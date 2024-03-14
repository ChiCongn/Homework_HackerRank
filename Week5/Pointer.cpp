
#include<iostream>

void print(int* a, int* b) {
	std::cout << *a + *b << std::endl
		<< abs(*a - *b);
}

int main()
{
	int m, n;
	std::cin >> m >> n;
	int* a = &m, * b = &n;
	print(a, b);
}