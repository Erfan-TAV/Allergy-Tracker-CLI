#include "AllergyHeader.h"

void createFoodTable(sqlite3 *db)
{
    cerr << "checking for food table...";

    string sql = "CREATE TABLE FOOD("
                 "SKU TEXT PRIMARY KEY NOT NULL,"
                 "food_name TEXT NOT NULL,"
                 "food_allergic INTEGER NOT NULL)";

    char *errMsg;
    int rc = sqlite3_exec(db, sql.c_str(), NULL, 0, &errMsg);

    if(rc != SQLITE_OK)
    {
        cerr << "\033[31mSQL error: " << errMsg << "\033[0m" << endl;
        sqlite3_free(errMsg);
    }
    else
    {
        cerr << "succes" << endl;
    }
}