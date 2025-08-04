/*
 * AllergyHeader.h
 *
 *  Created on: Aug 2, 2025
 *      Author: erfantavassoli
 */

#ifndef ALLERGYHEADER_H_
#define ALLERGYHEADER_H_

#include <iomanip>
#include <iostream>
#include <sqlite3.h>
#include <string>
using namespace std;

int executeSQL(sqlite3 *db, const string &sql,
               int (*callback)(void *, int, char **, char **) = nullptr, void *data = nullptr);

int callback(void *data, int argc, char **argv, char **columnNames);

void createFoodTable(sqlite3 *db);

void userMenu();

sqlite3 *openDB(char *filename, sqlite3 *database);

void clearScreen();

void newAllergyPage(sqlite3 *database);

string centerText(int colWidth, string text);

#endif /* ALLERGYHEADER_H_ */
