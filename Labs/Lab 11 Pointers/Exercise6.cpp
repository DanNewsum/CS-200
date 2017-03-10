#include <iostream>
#include <string>
using namespace std;

int main() {

	string students[3] = { "Doug","Kate", "Fred" };
	string* ptrStudent;
	int choice;

	cout << "Enter 0, 1, or 2: ";
	cin >> choice;

	if (choice == 0)
	{
		ptrStudent = &students[0];
		cout << "New name: ";
		cin >> *ptrStudent;

	}
	else if(choice == 1 ) {
		ptrStudent = &students[1];
		cout << "New name: ";
		cin >> *ptrStudent;
	
	
	}
	else if (choice == 2) {
		ptrStudent = &students[2];
		cout << "New name: ";
		cin >> *ptrStudent;

	}

	for (int i = 0; i < 3; i++)
	{
		cout << "student " << i << " = " << students[i] << endl;
	}

	
	

	while (true)
	{

	}


}