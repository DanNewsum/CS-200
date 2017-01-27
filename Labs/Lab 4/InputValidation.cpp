#include <iostream>
#include <string>
using namespace std;

int main()
{

	int choice;

	cout << "Pick your favorite fruit!" << endl;
	cout << "1. Apple" << endl;
	cout << "2. Banana" << endl;
	cout << "3. Orange" << endl;
	cout << "4. Pear" << endl;
	cin >> choice;

	if(choice > 0 && choice < 5){
	
		cout << "Great choice!" << endl;

	}

	else {

		cout << " Invalid choice";
			

	}


	while (true) {}

	return 0;
}