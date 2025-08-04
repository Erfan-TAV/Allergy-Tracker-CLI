#include "AllergyHeader.h"

int errorCheckInt()
{
    bool invalid;
    int userChoice;

    invalid = true;

    do // while(invalid)
    {
        if(!(cin >> userChoice))
        {
            cin.clear();
        }
        else
        {
            invalid = (userChoice >= 0 && userChoice <= 3);
            if(invalid)
            {
                cout << endl
                     << "   ****Please enter a valid input, a number 0 through 3" << endl
                     << endl;
            }
            else
            {
                invalid = false;
            }
        }

    } while(invalid);

    return userChoice;
}