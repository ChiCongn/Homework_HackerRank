
#include<iostream>
#include<fstream>

int main()
{
	std::ofstream file("D:\\HighScore.txt");
	if (file.is_open()) {
		for (int i = 0; i < 4; i++) {
			file << i << ": ok!" << std::endl;
		}
	}
	file.close();
	return 0;
}