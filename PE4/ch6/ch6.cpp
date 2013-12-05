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
	CandyBar snack[] = {
		{"Mocha Munch", 2.3, 350},
		{"Yuhui he", 3.2, 350},
		{"Mocha Munch", 2.3, 350}
	};

	cout << "The CandyBar's name is :" << snack[1].name << endl;
	cout << "The CandyBar's weight is :" << snack[1].weight << endl;
	cout << "The CandyBar's calorie is :" << snack[1].calorie << endl;
	getchar();
	return 0;
}