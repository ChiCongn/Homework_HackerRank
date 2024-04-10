
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>

void convertTime(std::string time) {
	int hour= stoi(time.substr(0, 2));
	int tm = hour;
	std::string minu = time.substr(3, 2);
	if (hour == 0) {
		std::cout << "12:" << minu << " AM" << std::endl;
	}
	else if (hour == 12) {
		std::cout << "12:" << minu << " PM" << std::endl;
	}	
	else if (hour > 12) {
		hour -= 12;
		std::cout << std::setw(2) << std::setfill('0') << hour << ":" << minu << " PM" << std::endl;
	}
	else {
		std::cout << std::setw(2) << std::setfill('0') << hour << ":" << minu << " AM" << std::endl;
	}
}

int main()
{
	int t;
	std::cin >> t;
	std::cin.ignore();
	std::vector<std::string> input(t);
	for (int i = 0; i < t; i++) {
		std::cin >> input[i];
	}
	for (int i = 0; i < t; i++) {
		convertTime(input[i]);
	}
	return 0;
}