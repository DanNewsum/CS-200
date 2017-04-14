#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	string searchFor;
	string newWord;
	string buffer;

	cout << " What word do you want to search for? ";
	cin >> searchFor;
	cout << endl;

	cout << "What is the word used to replace it? ";
	cin >> newWord;
	 
	ifstream input("story_original.txt");
	ofstream output("New_story.txt");

	while (input >> buffer)
	{
		if (buffer == searchFor)
		{
			output << newWord << " ";

		}
		else {

			output << buffer << " ";
		}

		
	}
	
	input.close();
	output.close();




};