
#include<iostream>
#include<string>

struct Student {
private:
	int age;
	std::string firstName;
	std::string lastName;
	int standard;

public:
	void getInput(int _age, std::string _firstName, std::string _lastName, int _standard) {
		age = _age;
		firstName = _firstName;
		lastName=_lastName;
		standard = _standard;
	}
	~Student() { ; }
	void print() {
		std::cout << age << " " << firstName << " " << lastName << " " << standard;
	}
};

int main()
{
	int age, standard;
	std::string firstName, lastName;
	std::cin >> age >> firstName >> lastName >> standard;
	Student student;
	student.getInput(age, firstName, lastName, standard);
	student.print();
	return 0;

}