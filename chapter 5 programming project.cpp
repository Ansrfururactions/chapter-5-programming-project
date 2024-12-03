// chapter 5 programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{


    ifstream inputFile;
    inputFile.open("LineUp.txt");
    if (inputFile.fail())
    {
        cout << "could not open file, rerun the program and try again.";
        return 0;
    }
    string name;
    string first= "z";
    string last;

    while (inputFile >> name)
    {
       if (name < first)
           
           first = name;
      
       else if (name > last)
           
           last = name;
    }


    cout << "there is a total of 8 students in the class" << endl;

    cout << "the student that goes first is " << first << " and the student who goes last is " << last << endl;
    
    inputFile.close();
}

