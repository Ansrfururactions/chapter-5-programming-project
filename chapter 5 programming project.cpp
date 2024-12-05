// chapter 5 programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
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
        while (inputFile >> population)
			if (population >= 1000)
			{
				int population;
				int year;
				int thousandpeople = population / 1000;
			    int reference=0;

				for (reference = 0; thousandpeople = reference; reference++)
				{
					cout << "*";
				}
			}
			else
			{
				cout << endl;
			}
	}
	inputFile.close();
	return 0;
}

