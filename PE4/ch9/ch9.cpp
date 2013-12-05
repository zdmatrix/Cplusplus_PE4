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
	CandyBar *snack = new CandyBar[3];
	
	string s1("Mocha Munch");
	
	snack->name += s1;
	snack->weight = 3.2;
	snack->calorie = 300;

	string s2("WoWo");
	(snack + 1)->name += s2;
	(snack + 1)->weight = 2.3;
	(snack + 1)->calorie = 350;

	string s3("JiaJia");
	(snack + 2)->name += s3;
	(snack + 2)->weight = 2.3;
	(snack + 2)->calorie = 350;
	

	cout << "The CandyBar's name is :" << snack[1].name << endl;
	cout << "The CandyBar's weight is :" << snack[1].weight << endl;
	cout << "The CandyBar's calorie is :" << snack[1].calorie << endl;
	getchar();
	return 0;
}