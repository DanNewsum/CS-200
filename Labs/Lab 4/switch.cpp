#include <iostream>
#include <string>
using namespace std;

int main()
{
	double a, b;
	int choice;
		
	cout << "Enter a value for a" << endl;
	cin >> a;
	cout << endl;
	cout << "Enter a value for b" << endl;
	cin >> b;
	cout << endl << endl;

	cout << "Select Operation:" << endl;
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case 1:
		cout << a << " + " << b << " = " << (a + b);
		break;

	case 2:
		cout << a << " - " << b << " = " << (a - b);
		break;
	
	case 3:
		cout << a << " * " << b << " = " << (a * b);
		break;

	case 4:
		cout << a << " / " << b << " = " << (a / b);
		break;
	}

	while (true) {}

	return 0;
}