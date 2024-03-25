
#include<iostream>
#include<cmath>
#include<algorithm>

int powerSum(int x, int index, int n) {
	if (x == 0) {
		return 1;
	}
	int count = 0;
	for (int i = index; i >= 1; i--) {
		int power_i = x - pow(i, n);
		int j = pow(power_i, 1.0 / n);
		count += powerSum(power_i, std::min((i - 1), j), n);
	}
	return count;
}

int main()
{
	int x, n;
	std::cin >> x >> n;
	int index = pow(x, 1.0 / n);
	//std::cout << index << std::endl;
	std::cout << powerSum(x, index, n);
	return 0;
}