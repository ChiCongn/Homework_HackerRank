
#include<iostream>
#include<set>
#include<vector>

int main()
{
	int q;
	std::cin >> q;
	std::vector<int> first(q);
	std::vector<int> second(q);
	for (int i = 0; i < q; i++) {
		std::cin >> first[i];
		std::cin >> second[i];
	}
	std::set<int> mySet;
	for (int i = 0; i < q; i++) {
		if (first[i] == 1)
			mySet.insert(second[i]);
		else if (first[i] == 2) {
			mySet.erase(second[i]);
		}
		else {
			if (mySet.find(second[i]) != mySet.end())
				std::cout << "Yes" << std::endl;
			else
				std::cout << "No" << std::endl;
		}
	}
	return 0;
}