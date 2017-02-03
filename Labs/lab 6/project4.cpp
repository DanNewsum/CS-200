#include <iostream>
using namespace std;

int main() {

	float startingWage, percentRaisePerYear, adjustedWage;
	int yearsWorked;

	cout << "Please enter your starting wage" << endl;
	cin >> startingWage;

	cout << "Please enter the % the wage is increased each year" << endl;
	cin >> percentRaisePerYear;
	percentRaisePerYear = percentRaisePerYear / 100;

	cout << "Please enter the number of years you have worked" << endl;
	cin >> yearsWorked;

	adjustedWage = startingWage;

	for (int i = 0; i < yearsWorked; i++) {
		
		adjustedWage += adjustedWage * percentRaisePerYear;
		
		}

	cout << "New wage is " << adjustedWage;



	while (true)
	{

	}

}