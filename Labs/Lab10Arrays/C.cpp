#include <iostream>
#include <string>
using namespace std;



int main()
{
	string items[3];
	float prices[3];
	int arraySize = 3;
	int itemCount = 0;

	while (itemCount < arraySize)
	{
		cout << "Please enter item name: ";
		cin >> items[itemCount];
		cout << "Enter Price: ";
		cin >> prices[itemCount];
		itemCount++;
	}

	int counter = 0;

	while (counter < itemCount)
	{
		cout << "item: " << counter << " " << items[counter] << " $ " << prices[counter] << endl;
		counter++;
	}

	while (true)
	{

	}
}