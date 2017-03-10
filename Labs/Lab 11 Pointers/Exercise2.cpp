#include <iostream>
#include <string>
using namespace std;

int main() {

	int list[5] = {0,23,45,77,90};

	cout << "Array address: " << &list << endl;

	for (int i = 0; i < 5; i++)
	{
		
		cout << "Item " << i << "address: " << &list[i] << "             value: " << list[i] << endl;
	}

	while (true)
	{

	}
}