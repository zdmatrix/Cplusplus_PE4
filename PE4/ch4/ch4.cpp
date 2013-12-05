#include <iostream>
#include <cstring>
#include <string>

int main(void)
{
	using namespace std;

	using namespace std;
	const int ENTERSIZE = 20;

	cout << "Enter your first name: ";
	string firstname;
	getline(cin, firstname);

	cout << "Enter your last name: ";
	string lastname;
	getline(cin, lastname);
	
	cout << "Here is the information in a signle string: " << lastname + ", " + firstname << endl;
	getchar();
	return 0;
}