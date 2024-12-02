#include <iostream>
using namespace std;

int main()
{
    int organism = 0, days = 0, amount=0, day = 1;
    double GrowthRate = 0.0;

    while (organism < 2) 
    {
        cout << "enter the amount of organisms" << endl;
        cin >> organism;
        if (organism < 2)
        {
            cout << "the number of organisms given is below the minimum, please enter at least two" << endl;
        }
    }

    cout << "enter the average growth rate of the population (represent it as a percentage)";
        cin >> GrowthRate;
        GrowthRate = GrowthRate;

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
        organism = organism + organism*GrowthRate;
        cout << "the amount of organisms that would be produced on day " << day << " would be " << amount << endl;
        day++;
    }
    
}