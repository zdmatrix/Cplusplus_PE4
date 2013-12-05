#include <iostream>
#include <cstring>
#include <string>

int main(void)
{
	using namespace std;

	using namespace std;
	const int ENTERSIZE = 20;
	char lastname[ENTERSIZE] = {};

	cout << "Enter your first name: ";
	char *firstname = new char[ENTERSIZE];
	cin.getline(firstname, ENTERSIZE);

	cout << "Enter your last name: ";
	cin.getline(lastname, ENTERSIZE);
	
	strcat_s(lastname, ENTERSIZE, ", ");
	strcat_s(lastname, ENTERSIZE - 1, firstname);
	cout << "Here is the information in a signle string: " << lastname << endl;
	getchar();
	delete []firstname;
	return 0;
}