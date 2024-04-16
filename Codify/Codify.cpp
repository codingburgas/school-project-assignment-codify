#include <iostream>
#include <raylib.h>
using namespace std;

int main()
{
	InitWindow(800, 450, "Codify");

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
		EndDrawing();
	}
	CloseWindow();
}

