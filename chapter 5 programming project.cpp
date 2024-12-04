// chapter 5 programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{


	ofstream outputFile;
	outputFile.open("People.txt");

		int population;
	
	outputFile.close();

	ifstream inputFile;

	string town;
	string filename;

	cout << "enter the town name: " << endl;
	cin >> town;

	cout << "Enter the file name: ";
	cin >> filename;

	

	inputFile.open(filename);
	if (inputFile.fail())
	{
		cout << "could not open file, rerun the program and try again.";
	}
	else
	{
        while (inputfile >>)
		
	}
	inputFile.close();
	return 0;
}

