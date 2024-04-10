

#include<iostream>
#include<vector>
#include<string>

std::string StairPeak(int a, int b, int c) {
	if (a < b && b < c) {
		return "STAIR";
	}
	else if (a<b && b>c) {
		return "PEAK";
	}
	else
		return"NONE";
}

int main()
{
	int t;
	std::cin >> t;
	std::vector<std::string> res(t);
	for (int i = 0; i < t; i++) {
		int a, b, c;
		std::cin >> a >> b >> c;
		res[i] = StairPeak(a, b, c);
	}
	for (int i = 0; i < t; i++) {
		std::cout << res[i] << std::endl;
	}
	return 0;
}