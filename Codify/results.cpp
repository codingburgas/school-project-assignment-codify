#include <iostream>
#include <raylib.h>
using namespace std;


class UserResults
{
	const char* username;
	int geographyScore;
	int mathScore;
	int englishScore;
};


void userResultMenu()
{
	Color c1 = RAYWHITE, c2 = RAYWHITE;
	Rectangle mousePos = { GetMouseX(), GetMouseY(), 10,10 };
	if (CheckCollisionRecs({ 1280,595, 170, 60 }, mousePos) || CheckCollisionRecs({ 870,850, 200, 70 }, mousePos))
		SetMouseCursor(MOUSE_CURSOR_POINTING_HAND); else SetMouseCursor(MOUSE_CURSOR_DEFAULT);
	if (CheckCollisionRecs({ 1280,595, 170, 60 }, mousePos)) c1 = LIGHTGRAY; else c1 = RAYWHITE;
	if (CheckCollisionRecs({ 870,850, 200, 70 }, mousePos)) c2 = LIGHTGRAY; else c2 = RAYWHITE;
	BeginDrawing();
	ClearBackground(BEIGE);
	DrawRectangleRounded({ 370, 100, 1200, 900 },0.25,0, RAYWHITE);
	DrawRectangleRoundedLines({ 370, 100, 1200, 900 }, 0.25, 0,10, BLACK); // wrapper
	DrawText("You PASS/FAIL", 650, 150, 80, BLACK);
	DrawText("Last Attempt Result", 725, 490, 50, BLACK);
	DrawRectangleRounded({ 450,550, 1050, 150 }, 0.6, 0, RAYWHITE);
	DrawRectangleRoundedLines({ 450,550, 1050, 150 }, 0.6, 0,7, BLACK); // score text holder
	DrawText("You have scored 35/70 points (50%)", 480, 610,40, BLACK);
	DrawRectangleRounded({ 1280,595, 170, 60 }, 0.6, 0, c1);
	DrawRectangleRoundedLines({ 1280,595, 170, 60 }, 25, 0, 7, BLACK); //  review button
	DrawText("Review", 1310, 610, 35, BLACK);
	DrawRectangleRounded({ 870,850, 200, 70 }, 0.6, 0, c2);
	DrawRectangleRoundedLines({ 870,850, 200, 70 }, 1, 0, 7, BLACK); //  back button
	DrawText("Back", 915, 865, 45, BLACK);
	EndDrawing();
}

void adminResultMenu()
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
	DrawRectangleRounded({ 250,200, 1420, 770 }, 0.25, 0, BEIGE);
	DrawRectangleRoundedLines({ 250,200, 1420, 770 }, 0.25, 0, 5, BLACK); //geography tab
	DrawRectangleRounded({ 300,400, 1320, 140 }, 0.15, 0, RAYWHITE);  // geography tab
	DrawRectangleRoundedLines({ 300,400, 1320, 140 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 1350,420, 250, 100 }, 0.15, 0, c1); //review button
	DrawRectangleRoundedLines({ 1350,420, 250, 100 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 1050,420, 275, 100 }, 0.15, 0, c2); //attempt button
	DrawRectangleRoundedLines({ 1050,420, 275, 100 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 300,570, 1320, 140 }, 0.15, 0, RAYWHITE); //history tab
	DrawRectangleRoundedLines({ 300,570, 1320, 140 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 1350,590, 250, 100 }, 0.15, 0, c3); //review button
	DrawRectangleRoundedLines({ 1350,590, 250, 100 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 1050,590, 275, 100 }, 0.15, 0, c4); //attempt button
	DrawRectangleRoundedLines({ 1050,590, 275, 100 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 300,740, 1320, 140 }, 0.15, 0, RAYWHITE); //biology tab
	DrawRectangleRoundedLines({ 300,740, 1320, 140 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 1350,760, 250, 100 }, 0.15, 0, c5); //review button
	DrawRectangleRoundedLines({ 1350,760, 250, 100 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 1050,760, 275, 100 }, 0.15, 0, c6); //attempt button
	DrawRectangleRoundedLines({ 1050,760, 275, 100 }, 0.25, 0, 5, BLACK);
	DrawTriangle(
		{ 925, 370 },
		{ 1025, 370 },
		{ 975, 320 },
		BLACK
	);
	DrawTriangle(
		{ 925, 900 },
		{ 975, 950 },
		{ 1025, 900 },

		BLACK
	);
	DrawText("Available Tests", 725, 75, 60, BLACK);
	DrawText("Select Test", 775, 225, 60, BLACK);
	DrawText("User1", 320, 440, 60, BLACK);
	DrawText("%", 1075, 440, 60, BLACK);
	DrawText("Review", 1380, 440, 60, BLACK);
	DrawText("User2", 320, 615, 60, BLACK);
	DrawText("Review", 1380, 615, 60, BLACK);
	DrawText("%", 1075, 615, 60, BLACK);
	DrawText("User3", 320, 780, 60, BLACK);
	DrawText("%", 1075, 780, 60, BLACK);
	DrawText("Review", 1380, 780, 60, BLACK);
	EndDrawing();
}
