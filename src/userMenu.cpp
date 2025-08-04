#include "AllergyHeader.h"

void userMenu()
{
    clearScreen();

    cout << "------------------------------------------" << endl;
    cout << "|                                        |" << endl;
    // TODO: add actual width function for cleaner code
    cout << "|          Food Allergy Tracker          |" << endl;
    cout << "|                                        |" << endl;
    cout << "|  [1] add new allergy information       |" << endl;
    cout << "|  [2] search for allergies              |" << endl;
    cout << "|  [3] list current allergies            |" << endl;
    cout << "|  [4] Delete a food entry               |" << endl;
    cout << "|                                        |" << endl;
    cout << "|  [0] save & quit                       |" << endl;
    cout << "|                                        |" << endl;
    cout << "------------------------------------------" << endl;
}