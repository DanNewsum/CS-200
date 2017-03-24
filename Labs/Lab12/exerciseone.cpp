#include <iostream>
#include <string>
using namespace std;

struct College
{
	string name;
	string state;

};

struct Student
{
	string name;
	College* ptrSchool;

};

int main() {
	string schools[] = { "jccc", "MCCKC", "KCKCC" };
	struct Student studentList[5];
	string tempName;

	

	struct College colleges[3];
	colleges[0].name = "JCCC";;
	colleges[1].name = "MCCKC";
	colleges[2].name = "KCKCC";

	colleges[0].state = "KS";
	colleges[1].state = "MO";
	colleges[2].state = "KS";

	int choice;


	for (int i = 0; i < 5; i++)
	{
		cout << "Please enter the students name:" << endl;
		cin >> studentList[i].name;

		for (int i = 0; i < 3; i++)
		{
			cout << i << ". " << colleges[i].state << " " << colleges[i].name << endl;

		}
		cout << "Please enter the school to attend: " << endl;
		cin >> choice;

			if (choice == 0)
			{
			studentList[i].ptrSchool = &colleges[0];

			}
			else if (choice == 1)
			{
			studentList[i].ptrSchool = &colleges[1];
			}
			else if (choice == 2)
			{
				studentList[i].ptrSchool = &colleges[2];
			}
		}

	for (int i = 0; i < 5; i++)
	{
		cout << "Student ID: " << i << endl;
		cout << studentList[i].name << endl;
		cout << studentList[i].ptrSchool->name << endl;
		cout << studentList[i].ptrSchool->state << endl;
		cout << endl;


	}
	while (true)
	{

	}
}
