
#include<iostream>

class Student {
	std::string name;
	int scores[5];
	int totalScore;
public:
	Student() {
		totalScore = 0;
		name = "";
	}
	~Student();
	void input(int _scores[5]) {
		for (int i = 0; i < 5; i++) {
			scores[i] = _scores[i];
		}
	}
	int calculateTotlalScore() {
		for (int it : scores) {
			totalScore += it;
		}
		return totalScore;
	}
};

int main() {
	int n;
	std::cin >> n;
	int score[100][5];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			std::cin >> score[i][j];
		}
	}
	Student student[100];
	int numStudentScoreLargeH = 0;
	student[0].input(score[0]);
	int studentScore = student[0].calculateTotlalScore();
	for (int i = 1; i < n; i++) {
		student[i].input(score[i]);
		if (student[i].calculateTotlalScore() > studentScore)
			numStudentScoreLargeH++;
	}
	std::cout << numStudentScoreLargeH;
	return 0;
}