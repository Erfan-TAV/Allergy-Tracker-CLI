#include "AllergyHeader.h"

void deleteByName(sqlite3 *database, string foodName)
{
    string sqlQeury;

    sqlQeury = "DELETE FROM FOOD WHERE food_name = \'" + foodName + "\'";

    executeSQL(database, sqlQeury, NULL, 0);
}

// string sql = "DELETE FROM 'STUDENT WHERE ID=2;";