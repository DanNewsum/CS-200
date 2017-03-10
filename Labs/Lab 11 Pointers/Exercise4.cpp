#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int i = 5;
	float f = 10.77;
	bool b = true;
	double d = 1.23456;
	char choice;


	cout << "What data type? [i]nt, [f]loat, [b]oolean, or [d]ouble?";
	cin >> choice;
	
	
	if (choice == 'i') {
		int* pointerInt = &i;
		cout << "Integer size: " << sizeof(i) << " " <<
			"Address: " << pointerInt;
		
	}

	else if (choice == 'f') {
		float* pointerFloat = &f;
		cout << "Float size: " << sizeof(f) << " " <<
			"Address: " << pointerFloat;
	
	}

	else if (choice == 'b') {
		bool* pointerBool = &b;
		cout << "Float size: " << sizeof(b) << " " <<
			"Address: " << pointerBool;

	}

	else if (choice == 'd') {
		double* pointerDouble = &d;
		cout << "Float size: " << sizeof(d) << " " <<
			"Address: " << pointerDouble;

	}
	

	while (true)
	{

	}


}