// chapter 5 programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;
	int population;
	int year= 1900;
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
		while (inputFile >> population)
		{
			cout << year;
				int thousandpeople = population / 1000;

				for (int reference = 0; thousandpeople > reference; reference++)
				{
					cout << "*";
				}
				cout << endl;
			year = year + 20;
		}
	}
	inputFile.close();
	return 0;
}

