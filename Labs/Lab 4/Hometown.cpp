#include <iostream>
#include <string>
using namespace std;

int main()
{
	string homeTown, name;
	
	cout << "What is your hometown?" << endl;
	cin >> homeTown;

	if (homeTown.size() > 6) {
	
		cout << "That's a long name!" << endl << endl;

	}

	cout << "What is your name?" << endl;
	cin >> name;

	cout << "Hello, " << name << " from " << homeTown;
	
	while(true){}

	return 0;
}