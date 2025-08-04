#include "AllergyHeader.h"

sqlite3 *openDB(char *filename, sqlite3 *database)
{
    cerr << "connecting to database...";

    bool failed = sqlite3_open(filename, &database);

    if(failed)
    {
        cerr << "\033[31mDatabase could not be opened\033[0m" << sqlite3_errmsg(database) << endl;
        return database;
    }
    else
    {
        cerr << "success" << endl;
        return database;
    }
}