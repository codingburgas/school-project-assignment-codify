#pragma once
#ifndef LOGIN_H
#define LOGIN_H
#include "../library/sqlite3pp-1.0.9/headeronly_src/sqlite3pp.h"
#include <string>
using namespace sqlite3pp;
bool login(database& db, const char* username, const char* password);
void loginMenu(sqlite3pp::database& db);
#endif