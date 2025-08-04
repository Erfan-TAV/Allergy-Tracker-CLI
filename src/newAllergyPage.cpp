#include "AllergyHeader.h"

void newAllergyPage(sqlite3 *database)
{
    // variables
    int foodSKU;
    string foodSKUStr;
    string foodName;
    char foodAllergic;
    int foodAllergicBool;
    string foodAllergicBoolStr;
    string sqlQuery;

    clearScreen();

    /********************************************
     * OUTPUT - menu directing the user to what to enter
     */
    const short promptWidth = 48;
    cout << left;
    for(int i = 0; i < promptWidth + 2; i++)
        cout << "-";
    cout << endl;
    cout << "|" << centerText(promptWidth, "  ") << "|" << endl;
    cout << "|" << centerText(promptWidth, "New Allergy ") << "|" << endl;
    cout << "|" << centerText(promptWidth, "  ") << "|" << endl;
    cout << "|" << setw(promptWidth) << " Enter the following information : " << "|" << endl;
    cout << "|" << centerText(promptWidth, "  ") << "|" << endl;
    cout << "|" << setw(promptWidth) << "  (1) The food\'s sku or barcode number" << "|" << endl;
    cout << "|" << setw(promptWidth) << "  (2) The food\'s name" << "|" << endl;
    cout << "|" << setw(promptWidth) << "  (3) If the food causes an allergic reaction" << "|" << endl;
    cout << "|" << centerText(promptWidth, "  ") << "|" << endl;
    cout << "|" << setw(promptWidth) << " Enter 0 for the sku to go back to the main menu" << "|" << endl;
    for(int i = 0; i < promptWidth + 2; i++)
        cout << "-";
    cout << endl;
    cout << right;

    /************************************
     * INPUT - get the food's information
     *************************************/
    // TODO: error checking
    cout << "(1): ";
    cin >> foodSKU;
    cin.ignore(1000, '\n');

    // the user wants to continue adding a new food
    // if(foodSKU > 0)
    // {
    cout << "(2): ";
    getline(cin, foodName);

    cout << "(3): ";
    cin.get(foodAllergic);
    cin.ignore(1000, '\n');

    if(foodAllergic == 'Y' || foodAllergic == 'y')
    {
        foodAllergicBool = 1;
    }
    else
    {
        foodAllergicBool = 0;
    }

    /***************************
     * PROC - create sql query and combine to a single string
     */
    // TODO: add sqlite3 prepared statements
    foodSKUStr = to_string(foodSKU);
    foodAllergicBoolStr = to_string(foodAllergicBool);
    cout << "foodSKU: " << foodSKUStr << endl;
    cout << "food allergic: " << foodAllergicBoolStr << endl;
    sqlQuery
        = "INSERT INTO FOOD(SKU, food_name, food_allergic) VALUES(" + foodSKUStr + ", \'" + foodName + "\', " + foodAllergicBoolStr + ");";
    // executeSQL(database, sqlQuery.c_str(), NULL, NULL);
    char *errMsg;
    int rc = sqlite3_exec(database, sqlQuery.c_str(), NULL, 0, &errMsg);
    if(rc != SQLITE_OK)
    {
        cout << "error occured " << errMsg << endl;
        sqlite3_free(errMsg);
    }
    else
    {
        cout << "operation insert successful" << endl;
    }
    // }
}
