#include <iostream>
#include <raylib.h>
#include <string>
#include "../library/sqlite3pp-1.0.9/headeronly_src/sqlite3pp.h"
using namespace std;

void testQuestion()
{
	BeginDrawing();
	ClearBackground(RAYWHITE);
	DrawRectangle(200, 420, 1450, 370, RAYWHITE); //question rectangle
	DrawRectangleLines(200, 420, 1450, 370, BLACK);
	DrawRectangleRounded({ 200,900, 900, 100 }, 0.15, 0, RAYWHITE); // answer rectangle
	DrawRectangleRoundedLines({ 200,900, 900, 100 }, 0.25, 0, 5, BLACK);
	DrawRectangle(750, 150, 400, 170, RAYWHITE); //question number rectangle
	DrawRectangleLines(750, 150, 400, 170, BLACK);
	DrawRectangleRounded({ 1250,900, 400, 100 }, 0.15, 0, RAYWHITE); //next rectangle
	DrawRectangleRoundedLines({ 1250,900, 400, 100 }, 0.25, 0, 5, BLACK);
	DrawText("", 225, 445, 60, BLACK);
	DrawText("", 775, 175, 60, BLACK);
	DrawText("", 225, 925, 60, BLACK);
	DrawText("Next", 1325, 925, 60, BLACK);
	EndDrawing();
}