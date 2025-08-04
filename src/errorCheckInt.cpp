#include "AllergyHeader.h"

int errorCheckInt(short &userChoice, int lowNum, int highNum)
{
    bool invalid;

    invalid = true;

    do // while(invalid)
    {
        cout << "before if" << endl;
        if(!(cin >> userChoice))
        {
            cout << "non int input" << endl;
            cout << endl
                 << "   ****Please enter a valid input, a number between " + to_string(lowNum) + " and " + to_string(highNum) << endl
                 << endl;
            cin.clear();
        }
        else if(userChoice < lowNum || userChoice > highNum)
        {
            cout << "invalid range input" << endl;
            cout << endl
                 << "   ****Please enter a valid input, a number between " + to_string(lowNum) + " and " + to_string(highNum) << endl
                 << endl;
        }
        else
        {
            cout << "valid input" << endl;
            invalid = false;
        }
        cin.ignore(1000, '\n');
    } while(invalid);

    return userChoice;
}