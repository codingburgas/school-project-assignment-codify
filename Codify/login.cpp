#include <iostream>
#include <raylib.h>
#include <string>
using namespace std;
 Color c3 = RAYWHITE, c4 = RAYWHITE, c5 = RAYWHITE;
void loginMenu()
{
	Rectangle mousePos = { GetMouseX(), GetMouseY(), 10,10 };
	if (CheckCollisionRecs({ 650, 475, 600, 85 }, mousePos) || CheckCollisionRecs({ 650, 600, 600, 85 }, mousePos) || CheckCollisionRecs({ 850, 775, 200, 85 }, mousePos))
		SetMouseCursor(MOUSE_CURSOR_POINTING_HAND); else SetMouseCursor(MOUSE_CURSOR_DEFAULT);
	if (CheckCollisionRecs({ 650, 475, 600, 85 }, mousePos)) c3 = LIGHTGRAY; else c3 = RAYWHITE;
	if (CheckCollisionRecs({ 650, 600, 600, 85 }, mousePos)) c4 = LIGHTGRAY; else c4 = RAYWHITE;
	if (CheckCollisionRecs({ 850, 775, 200, 85 }, mousePos)) c5 = LIGHTGRAY; else c5 = RAYWHITE;
	BeginDrawing();
	ClearBackground(RAYWHITE);
	DrawRectangleRounded({ 600, 200, 700, 700 }, 0.2, 0, RAYWHITE);
	DrawRectangleRoundedLines({ 600, 200, 700, 700 }, 0.2, 0, 7, BLACK); // wrapper
	DrawRectangleRounded({ 650, 475, 600, 85 }, 0.2, 0, c3);
	DrawRectangleRoundedLines({ 650, 475, 600, 85 }, 0.2, 0, 5, BLACK); // username input
	DrawRectangleRounded({ 650, 600, 600, 85 }, 0.2, 0, c4);
	DrawRectangleRoundedLines({ 650, 600, 600, 85 }, 0.2, 0, 5, BLACK); // password input
	DrawRectangleRounded({ 850, 775, 200, 85 }, 0.2, 0, c5);
	DrawRectangleRoundedLines({ 850, 775, 200, 85 }, 0.2, 0, 5, BLACK); // login btn
	DrawText("Login", 900, 800, 40, BLACK);
	DrawText("Log Into An Existing Account", 640, 300, 40, BLACK);
	EndDrawing();
}