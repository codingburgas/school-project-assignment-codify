#include <iostream>
#include <raylib.h>
using namespace std;

void categories()
{
	Color c1 = RAYWHITE, c2 = RAYWHITE, c3 = RAYWHITE, c4 = RAYWHITE, c5 = RAYWHITE, c6 = RAYWHITE;
	Rectangle mousePos = { GetMouseX(), GetMouseY(), 10,10 };
	BeginDrawing();
	ClearBackground(RAYWHITE);
	if (CheckCollisionRecs({ 1350,420, 250, 100 }, mousePos)) c1 = LIGHTGRAY; else c1 = RAYWHITE;
	if (CheckCollisionRecs({ 1050,420, 275, 100 }, mousePos)) c2 = LIGHTGRAY; else c2 = RAYWHITE;
	if (CheckCollisionRecs({ 1350,590, 250, 100 }, mousePos)) c3 = LIGHTGRAY; else c3 = RAYWHITE;
	if (CheckCollisionRecs({ 1050,590, 275, 100 }, mousePos)) c4 = LIGHTGRAY; else c4 = RAYWHITE;
	if (CheckCollisionRecs({ 1350,760, 250, 100 }, mousePos)) c5 = LIGHTGRAY; else c5 = RAYWHITE;
	if (CheckCollisionRecs({ 1050,760, 275, 100 }, mousePos)) c6 = LIGHTGRAY; else c6 = RAYWHITE;

	DrawRectangleRounded({ 300,120, 1320, 140 }, 0.15, 0, SKYBLUE);  // category1 tab
	DrawRectangleRoundedLines({ 300,120, 1320, 140 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 300,290, 1320, 140 }, 0.15, 0, SKYBLUE);  // category2 tab
	DrawRectangleRoundedLines({ 300,290, 1320, 140 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 300,460, 1320, 140 }, 0.15, 0, SKYBLUE); //category3 tab
	DrawRectangleRoundedLines({ 300,460, 1320, 140 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 300,630, 1320, 140 }, 0.15, 0, SKYBLUE); //category4 tab
	DrawRectangleRoundedLines({ 300,630, 1320, 140 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 300,800, 1320, 140 }, 0.15, 0, SKYBLUE); //category5 tab
	DrawRectangleRoundedLines({ 300,800, 1320, 140 }, 0.25, 0, 5, BLACK);
	DrawText("Categories Review", 675, 35, 60, BLACK);
	DrawText("Categories 1 - %", 700, 160, 60, BLACK);
	DrawText("Categories 2 - %", 700, 330, 60, BLACK);
	DrawText("Categories 3 - %", 700, 505, 60, BLACK);
	DrawText("Categories 4 - %", 700, 670, 60, BLACK);;
	DrawText("Categories 5 - %", 700, 845, 60, BLACK);
	DrawText("Overall - %", 750, 965, 60, BLACK);
	EndDrawing();
}