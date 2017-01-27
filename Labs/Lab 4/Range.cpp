#include <iostream>
#include <string>
using namespace std;

int main()
{

	double x1, x2;
	x1 = 5.00;

	cout << "x1 = " << x1 << endl;
	cout << "Where is x2?" << endl;
	cin >> x2;

	if (x1 >= (x2 - 5) && x1 <= ( x2 + 5) )
	{
		cout << "It is within 5 units from x1" << endl;

	}

	else
	{
		cout << "Too far away..." << endl;

	}

	while (true) {}

	return 0;
}