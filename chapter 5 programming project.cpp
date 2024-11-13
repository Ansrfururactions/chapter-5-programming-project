#include <iostream>
using namespace std;

int main()
{
    int organism, days, amount;

    while (organism < 2) 
    {
        cout << "enter the amount of organisms" << endl;
        cin >> organism;
        if (organism < 2)
        {
            cout << "the number of organisms given is below the minimum, please enter at least two" << endl;
        }
    }
    while (days <= 1)
    {
        cout << "enter the amount of days for them to multiply" << endl;
        cin >> days;
        if (days <= 1)
        {
            cout << " any amount less than one is invaild, please tru again" << endl;
        }
    }
        amount = organism * days;
        cout << "the amount of organisms that would be produced from " << organism << " organisms over the course of " << days << " days would be " << amount << endl;
    
}