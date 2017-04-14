#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Option
{
	string title;
	int count;

};

struct Poll
{
	string question;
	Option options[4];


};
int main() {
	
	Poll myPoll;

	myPoll.question = "What is the best food?";

	myPoll.options[0].title = "Pizza";
	myPoll.options[0].count = 0;

	myPoll.options[1].title = "Veggie Taco";
	myPoll.options[1].count = 0;

	myPoll.options[2].title = "Samosas";
	myPoll.options[2].count = 0;

	myPoll.options[3].title = "Sushi";
	myPoll.options[3].count = 0;

	bool quit = false;

	while (quit == false)
	{
		int choice;
		cout << myPoll.question << endl << "0. " << myPoll.options[0].title << endl << "1. " << myPoll.options[1].title <<
			endl << "2. " << myPoll.options[2].title << endl << "3. " << myPoll.options[3].title << endl << "4. Exit" << endl << endl << "What is your selection?" << endl;

		cin >> choice;

		if (choice == 0)
		{
			myPoll.options[0].count++;

		}
		else if (choice == 1) {

			myPoll.options[1].count++;

		}
		else if (choice == 2) {

			myPoll.options[2].count++;

		}
		else if (choice == 3) {

			myPoll.options[3].count++;

		}
		else if (choice == 4) {
		
			quit = true;

		}

	}

	ofstream output;
	output.open("results.txt");

	output << "Question" << endl << "What is the best food?" << endl << endl << "Results" << endl << myPoll.options[0].title << "........" << myPoll.options[0].count << " votes" << endl
		<< myPoll.options[1].title << "........" << myPoll.options[1].count << " votes" << endl << myPoll.options[2].title << "........" << myPoll.options[2].count << " votes" << endl <<
		myPoll.options[3].title << "........" << myPoll.options[3].count << " votes";

	output.close();


};