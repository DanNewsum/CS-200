#include <iostream>
#include <string>
using namespace std;

// Declare function here
float CountChange(int quarterCount, int dimeCount, int nickelCount, int pennyCount){

	float quarterValue = quarterCount * 0.25;
	float dimeValue = dimeCount * 0.10;
	float nickelValue = nickelCount * 0.05;
	float pennyValue = pennyCount * 0.01;

	float totalmoney = quarterValue + dimeValue + nickelValue + pennyValue;
	return totalmoney;

}

int main()
{
	while (true)
	{
		int quarters, dimes, nickels, pennies;

		cout << "How many quarters? ";
		cin >> quarters;

		cout << "How many dimes? ";
		cin >> dimes;

		cout << "How many nickels? ";
		cin >> nickels;

		cout << "How many pennies? ";
		cin >> pennies;

		float money = CountChange(quarters, dimes, nickels, pennies);
		cout << "Money: $" << money << endl;

		cout << endl << endl;
	}

	return 0;
}