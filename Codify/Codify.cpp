#include <iostream>
#include <raylib.h>
#include "mainMenu.h"
#include "login.h"
#include "register.h"
using namespace std;

int main()
{
	InitWindow(1920, 1080, "Codify");

	while (!WindowShouldClose())
	{
		loginMenu();
	}
	CloseWindow();
}

