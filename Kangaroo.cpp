#include<iostream>

int main() 
{
	int x1, v1, x2, v2;
	std::cin >> x1 >> v1 >> x2 >> v2;
	double time = (double)(x2 - x1) / (v1 - v2);
	int timeInt = (x2 - x1) / (v1 - v2);
	std::cout << ((time >= 0 && time == timeInt) ? "YES" : "NO") << std::endl;
	std::cout << time << "   " << timeInt;
	return 0;
}