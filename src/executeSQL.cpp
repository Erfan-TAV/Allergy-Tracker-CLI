/*
 * executeSQL.cpp
 *
 *  Created on: Aug 2, 2025
 *      Author: erfantavassoli
 */

#include "AllergyHeader.h"

int executeSQL(sqlite3 *db, const string &sql, int (*callback)(void *, int, char **, char **),
               void *data)
{
    char *errMsg;
    int rc = sqlite3_exec(db, sql.c_str(), callback, data, &errMsg);

    if(rc != SQLITE_OK)
    {
        cerr << "SQL error" << errMsg << endl;
        sqlite3_free(errMsg);
    }
    else
    {
        cout << "SQL executed successfully." << endl;
    }

    return rc;
}
