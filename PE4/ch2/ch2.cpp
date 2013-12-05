#include <iostream>
#include <cstring>
#include <string>

int main(void)
{
	using namespace std;
	const int GRADESIZE = 2;

	cout << "Enter your name: \n";
	string name;
	getline(cin, name);

	cout << "Enter your favorite dessert: \n";
	string dessert;
	getline(cin, dessert);

	cout << "I have some delicious " << dessert << " for you, " << name << endl;
	getchar();
	return 0;
}