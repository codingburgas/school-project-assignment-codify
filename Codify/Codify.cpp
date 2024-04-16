#include <iostream>
#include <raylib.h>
#include "mainMenu.h"
using namespace std;

int main()
{
	InitWindow(1920, 1080, "Codify");

	while (!WindowShouldClose())
	{
		mainMenu();
	}
	CloseWindow();
}

