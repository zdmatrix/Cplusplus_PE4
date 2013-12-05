#include <iostream>
#include <cstring>
#include <string>

int main(void)
{
	using namespace std;
	const int GRADESIZE = 2;

	cout << "What is  your first name?";
	string firstname;
	getline(cin, firstname);

	cout << "What is your last name?";
	string lastname;
	getline(cin, lastname);

	cout << "What letter grade do you deserve?";
	char *grade = new char[GRADESIZE];
	cin.getline(grade, GRADESIZE);

	cout << "What is your age?";
	int age;
	cin >> age;

	cout << "Name: " << lastname << ", " << firstname << endl;
	cout << "Grade: " << (char)(*grade + 1) << endl;
	cout << "Age: " << age << endl;
	getchar();
	getchar();
	delete []grade;
	return 0;
}