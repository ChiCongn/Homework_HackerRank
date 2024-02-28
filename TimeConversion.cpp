#include<iostream>
#include<string>

std::string timeConversion(const std::string& time12Hour) {
	std::string time24Hour;	
	int hour = std::stoi(time12Hour.substr(0, 2));
	std::string meridiem = time12Hour.substr(8, 2);
	if (meridiem == "PM" && hour != 12)
		hour += 12;
	else if (meridiem == "AM" && hour == 12)
		hour = 0;
	time24Hour = ((hour < 10) ? "0" : "") + std::to_string(hour) + time12Hour.substr(2, 6);
	return time24Hour;
}

int main()
{
	std::string time12Hour;
	std::getline(std::cin, time12Hour);
	std::cout << timeConversion(time12Hour);
	return 0;
}