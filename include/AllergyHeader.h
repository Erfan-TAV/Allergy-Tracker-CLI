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

void errorCheckInt(int &userChoice, int lowNum, int highNum);

void deleteAllergyPage(sqlite3 *database);

// TODO: modify to overload the same function name
// void deleteBySKU(sqlite3 *database, int sku);

void deleteByName(sqlite3 *database, string foodName);

#endif /* ALLERGYHEADER_H_ */
