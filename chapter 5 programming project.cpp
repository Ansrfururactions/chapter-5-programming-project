#include <iostream>
using namespace std;

int main()
{
    int organism = 0, days = 0, amount=0, day = 1;

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
    while (day <= days)
    {
        amount = organism * day;
        cout << "the amount of organisms that would be produced on day " << day << " would be " << amount << endl;
        day++;
    }
    
}