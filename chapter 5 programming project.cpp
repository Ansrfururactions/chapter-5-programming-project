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
        
		int initialpopulation = 0, population = initialpopulation, year = 1900;
			
		cout << "please enter initial population" << endl;
		cin >> initialpopulation;
		cout << town << " population" << endl;
	  
		
		while (population >= 1000 && year == 1900)
		{ 
			cout << "1900";
			population = population - 1000;
			year = year + 20;
			
	    }
		while (population >= 1000 )
		{
			cout << " *";
			population = population - 1000;
			 
		}
		cout << endl;
		population = initialpopulation + 2000;
		
			while (population >= 1000 && year == 1920)
		{
			cout << "1920";
			population = population - 1000;
			year = year + 20;

		}
		while (population >= 1000)
		{
			cout << " *";
			population = population - 1000;
		}
		cout << endl;
		population = initialpopulation + 2000;
		while (population >= 1000 && year == 1940)
		{
			cout << "1940";
			population = population - 1000;
			year = year + 20;

		}
		while (population >= 1000)
		{
			cout << " *";
			population = population - 1000;
		}
		cout << endl;
	}
	inputFile.close();
	return 0;
}

