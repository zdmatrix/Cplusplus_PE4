#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct CandyBar{
	string name;
	double weight;
	int calorie;
};

int main(void)
{
	CandyBar snack = {"Mocha Munch", 2.3, 350};

	cout << "The CandyBar's name is :" << snack.name << endl;
	cout << "The CandyBar's weight is :" << snack.weight << endl;
	cout << "The CandyBar's calorie is :" << snack.calorie << endl;
	getchar();
	return 0;
}