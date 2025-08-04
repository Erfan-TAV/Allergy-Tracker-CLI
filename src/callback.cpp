/*
 * callback.cpp
 *
 *  Created on: Aug 2, 2025
 *      Author: erfantavassoli
 */

#include "AllergyHeader.h"

int callback(void *data, int argc, char **argv, char **columnNames)
{
    for(int i = 0; i < argc; i++)
    {
        cout << columnNames[i] << " = " << (argv[i] ? argv[i] : "NULL") << endl;
    }
    cout << endl;

    return 0;
}
