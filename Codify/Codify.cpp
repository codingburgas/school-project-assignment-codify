#include <iostream>
#include <raylib.h>
#include "mainMenu.h"
#include "login.h"
#include "register.h"
#include "resultUserMenu.h"
#include "testMenu.h"
#include "adminTest.h"
using namespace std;

int main()
{
	InitWindow(1920, 1080, "Codify");

	while (!WindowShouldClose())
	{
		testMenu();
	}
	CloseWindow();
}

