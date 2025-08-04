#include "AllergyHeader.h"

void errorCheckInt(short &userChoice, int lowNum, int highNum)
{
    bool invalid;

    invalid = true;

    do // while(invalid)
    {
        if(!(cin >> userChoice))
        {
            cout << endl
                 << "   ****Please enter a valid input, a number between " + to_string(lowNum) + " and " + to_string(highNum) << endl
                 << endl;
            cin.clear();
        }
        else if(userChoice < lowNum || userChoice > highNum)
        {
            cout << endl
                 << "   ****Please enter a valid input, a number between " + to_string(lowNum) + " and " + to_string(highNum) << endl
                 << endl;
        }
        else
        {
            invalid = false;
        }
        cin.ignore(1000, '\n');
    } while(invalid);
}