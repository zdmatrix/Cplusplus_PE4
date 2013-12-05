#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct Pizza{
	string name;
	double weight;
	int inch;
};

int main(void)
{
	Pizza *newPizza = new Pizza;
	const int SIZE = 2;

	cout << "Please enter the company of this pizza: " << endl;
	getline(cin, newPizza->name);
	cout << "Please enter the inch of this pizza: " << endl;
	cin >> newPizza->inch;
	cout << "Please enter the weight of this pizza: " << endl;
	cin >> newPizza->weight;

	cout << "The pizza's company is: " << newPizza->name << endl;
	cout << "The pizza's inch is: " << newPizza->inch << endl;
	cout << "The pizza's weight is: " << newPizza->weight << endl;
	getchar();
	getchar();
	return 0;
}