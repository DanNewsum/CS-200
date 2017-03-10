#include <iostream>
#include <string>
using namespace std;



int main()
{
	string items[3];
	float prices[3];
	

	for (int i = 0; i < 3; i++) {
	
		cout << "Please enter item name: ";
		cin >> items[i];
		cout << "Enter Price: ";
		cin >> prices[i];
	
	}

	

	for (int i = 0; i < 3; i++)
	{
		cout << "item # " << i << " " << items[i] << " $ " << prices[i] << endl;

	}
	

	while (true)
	{

	}
}