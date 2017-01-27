#include <iostream>
#include <string>
using namespace std;

int main()
{
	double studentPoints, totalPoints, percent;

	cout << "What score did you get?" << endl;
	cin >> studentPoints;

	cout << "How many points were there on the test?" << endl;

	cin >> totalPoints;

	percent = (studentPoints / totalPoints) * 100;

	if (percent > 70)
	{
		cout << "Pass" << endl;

	}
	
	else {

		cout << "Fail";
	}

	while (true) {}

	return 0;
}