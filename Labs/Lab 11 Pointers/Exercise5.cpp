#include <iostream>
#include <string>
using namespace std;

int main() {

	float priceHamburger = 4.50 , priceFries = 1.99, priceSalad = 3.59;
	float* ptrPrice;
	float taxAmt;
	int choice;
	cout << "What do you want?" << endl;
	cout << "1. Hamburger" << endl << "2. Fries" << endl << "3. Salad" << endl;
	cin >> choice;

	if (choice == 1) {
		ptrPrice = &priceHamburger;
		taxAmt = *ptrPrice * 0.065;
		*ptrPrice += taxAmt;

		cout << "Original Price: $4.50" << endl;
		cout << "With tax: " << *ptrPrice;

	}

	else if (choice == 2) {
		ptrPrice = &priceFries;
		taxAmt = *ptrPrice * 0.065;
		*ptrPrice += taxAmt;

		cout << "Original Price: $1.99" << endl;
		cout << "With tax: " << *ptrPrice;
	

	}

	else if (choice == 3) {
		ptrPrice = &priceSalad;
		taxAmt = *ptrPrice * 0.065;
		*ptrPrice += taxAmt;

		cout << "Original Price: $3.59" << endl;
		cout << "With tax: " << *ptrPrice;
	
	
	}


	while (true)
	{

	}


}