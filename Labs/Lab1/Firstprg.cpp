#include <iostream>
#include <string>
using namespace std;

int main()
{
	double bakingSoda, bakingPowder, butter,
		whiteSugar, eggs, ratio;

	bakingSoda = 1;
	bakingPowder = .5;
	butter = 1;
	whiteSugar = 1.5;
	eggs = 1;

	cout << "How many batches do you want to make?" << endl;
	cin >> ratio;
	cout << ratio * bakingSoda << " tsp baking soda" << endl;
	cout << ratio * bakingPowder << " tsp baking powder" << endl;
	cout << ratio * butter << " c butter" << endl;
	cout << ratio * whiteSugar << " c white sugar" << endl;
	cout << ratio * eggs << " egg" << endl;

	while (true);
	return 0;
}