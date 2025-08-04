#include "AllergyHeader.h"

void deleteAllergyPage(sqlite3 *database)
{
    clearScreen();

    // variables
    int userChoice;
    int foodSKU;
    string foodName;

    cout << "delete an allergy" << endl;
    cout << "(1) delete by SKU or Barcode" << endl;
    cout << "(2) delete by food name" << endl;
    cout << endl;
    cout << "(0) return to menu" << endl;

    cout << endl;

    errorCheckInt(userChoice, 0, 2);

    // TODO: finalize function calls
    switch(userChoice)
    {
        case 1:
            cout << "Enter the food SKU or Barcode: ";
            errorCheckInt(foodSKU, 1, 1569325055);
            // deleteBySKU(database, 23321);
            break;
        case 2:
            cout << "Enter the food name: ";
            getline(cin, foodName);
            deleteByName(database, foodName);
            break;
        default:
            break;
    }
}