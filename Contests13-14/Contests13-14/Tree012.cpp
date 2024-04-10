
#include<iostream>
#include<vector>

int minimumHeightTree(int a, int b, int c) {

}

int main()
{
	int t;
	std::cin >> t;
	std::vector<int> res(t);
	for (int i = 0; i < t; i++) {
		int a, b, c;
		std::cin >> a >> b >> c;
		res[i] = minimumHeightTree(a, b, c);
	}
	for (int i = 0; i < t; i++) {
		std::cout << res[i] << std::endl;
	}
	return 0;
}