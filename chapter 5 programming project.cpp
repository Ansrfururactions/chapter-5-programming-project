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
    if (!)
    {
        cout << "Could not open file\n";   return 1;
    }
    string name1 = "jackie\n";
    string name2 = "sam\n";
    string name3 = "tom\n";
    string name4 = "bill\n";
    string name5 = "mary\n";
    string name6 = "paul\n";
    string name7 = "zev\n";
    string name8 = "berb\n";

    cout << "there is a total of 8 students in the class" << endl;

    cout << "the students to be lined up in alphabetical order are as follows:\n" << name8 << name4 << name1 << name5 << name6 << name2 << name3 << name7;
    
    inputFile.close();
}

