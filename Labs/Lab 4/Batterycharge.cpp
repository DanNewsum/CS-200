#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	float batterycharge;

	cout << "What percent is your battery at?" << endl;
	cin >> batterycharge;

	if (batterycharge >= 75)
	{

		cout << "[****]";

	}

	else if (batterycharge >= 50 && batterycharge < 75)
	{

		cout << "[***-]";

	}

	else if (batterycharge >= 25 && batterycharge < 50)
	{

		cout << "[**--]";

	}

	else {

		cout << "[*---]";

	}

	while (true) {}

	return 0;
}