#include <iostream>
#include <raylib.h>
#include "mainMenu.h"
#include "login.h"
#include "register.h"
#include "results.h"
#include "testMenu.h"
#include "categories.h"
#include "testQuestion.h"
#include "../library/sqlite3pp-1.0.9/headeronly_src/sqlite3pp.h"

using namespace std;
using namespace sqlite3pp;

int main()
{
	database db("database.db");
	db.execute("CREATE TABLE IF NOT EXISTS Users (id INTEGER PRIMARY KEY, user TEXT, password TEXT, isAdmin BIT)");
	InitWindow(1920, 1080, "Codify");
	while (!WindowShouldClose())
	{
		switch (menuState)
		{
		case 0:
			mainMenu();
			break;
		case 1:
			loginMenu(db);
			break;
		case 2:
			registerMenu(db);
			break;
		case 3:
			testMenu();
			break;
		case 4:
			testQuestion();
			break;
		case 5:
			userResultMenu();
			break;
		case 6:
			adminResultMenu();
			break;
		case 7:
			categories();
			break;
		}
	}
	CloseWindow();
}