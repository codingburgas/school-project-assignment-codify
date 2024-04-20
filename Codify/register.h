#pragma once
#include "../library/sqlite3pp-1.0.9/headeronly_src/sqlite3pp.h"
#include <string>
using namespace sqlite3pp;
bool registerUser(database& db, const char* username, const char* password);
void registerMenu(database& db);