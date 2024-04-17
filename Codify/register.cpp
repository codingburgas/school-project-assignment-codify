#include <iostream>
#include <raylib.h>
#include <string>
using namespace std;
Color c6 = RAYWHITE, c7 = RAYWHITE, c8 = RAYWHITE;
void registerMenu()
{
	BeginDrawing();
	ClearBackground(RAYWHITE);
	DrawRectangleRounded({ 600, 200, 700, 700 }, 0.2, 0, RAYWHITE);
	DrawRectangleRoundedLines({ 600, 200, 700, 700 }, 0.2, 0, 7, BLACK); // wrapper
	DrawRectangleRounded({ 650, 475, 600, 85 }, 0.2, 0, c6);
	DrawRectangleRoundedLines({ 650, 475, 600, 85 }, 0.2, 0, 5, BLACK); // username input
	DrawRectangleRounded({ 650, 600, 600, 85 }, 0.2, 0, c7);
	DrawRectangleRoundedLines({ 650, 600, 600, 85 }, 0.2, 0, 5, BLACK); // password input
	DrawRectangleRounded({ 850, 775, 200, 85 }, 0.2, 0, c8);
	DrawRectangleRoundedLines({ 850, 775, 200, 85 }, 0.2, 0, 5, BLACK); // register btn
	DrawText("Register", 865, 800, 40, BLACK);
	DrawText("Create a New Account", 665, 300, 50, BLACK);
	EndDrawing();
}