/*
 * main.cpp
 *
 *  Created on: Aug 2, 2025
 *      Author: erfantavassoli
 */

#include "AllergyHeader.h"

int main()
{
    // constants
    const int userExit = 0;
    const int userMaxChoice = 3;

    // database
    sqlite3 *db;

    // variables
    int userChoice;

    char filename[] = "food_table.db";
    db = openDB(filename, db);

    // creates a table FOOD if it doesn't exist with sku, food_name, and food_allergic as columns
    createFoodTable(db);

    /**********************************
     * INPUT - get the user's choice
     */
    // displayed a menu for the user to choose what to do with the program
    userMenu();
    errorCheckInt(userChoice, userExit, userMaxChoice);

    while(userChoice != 0)
    {
        switch(userChoice)
        {
            case 1:
                newAllergyPage(db);
                break;
            case 3:
                // viewAllAllergyPage();
                break;
            // case 2
            default:
                // searchAllergyPage();
                break;
        }
        /**********************************
         * INPUT - get the user's choice
         */
        userMenu();
        errorCheckInt(userChoice, userExit, userMaxChoice);
    }

    clearScreen();

    cout << "closing database...";
    sqlite3_close(db);
    cout << "closed" << endl;

    cout << "program ended";
    return 0;
}
