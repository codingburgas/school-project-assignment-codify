#include <raylib.h>
using namespace std;
Color c1 = RAYWHITE, c2 = RAYWHITE;
void mainMenu()
{
	
	Rectangle mousePos = { GetMouseX(), GetMouseY(), 10,10 };
	if (CheckCollisionRecs({ 1920.0f / 2.43f, 490,370,80 }, mousePos) || CheckCollisionRecs({ 1920.0f / 2.43f, 610,370,80 }, mousePos))
		SetMouseCursor(MOUSE_CURSOR_POINTING_HAND); else SetMouseCursor(MOUSE_CURSOR_DEFAULT);
	if (CheckCollisionRecs({ 1920.0f / 2.43f, 490,370,80 }, mousePos)) c1 = LIGHTGRAY; else c1 = RAYWHITE;
	if (CheckCollisionRecs({ 1920.0f / 2.43f, 610,370,80 }, mousePos)) c2 = LIGHTGRAY; else c2 = RAYWHITE;
	BeginDrawing();
	ClearBackground(RAYWHITE);
	DrawRectangleRounded({ 1920.0f / 3.1f, 290, 700,550 }, 0.15, 0, RAYWHITE);
	DrawRectangleRoundedLines({ 1920.0f / 3.1f, 290, 700,550 }, 0.15, 0, 3, BLACK); // buttons wrapper
	DrawText("Welcome to Codify", 1920.0f / 2.75f, 330, 60, BLACK);
	DrawRectangleRounded({1920.0f / 2.43f, 490,370,80 }, 0.2, 0, c1);
	DrawRectangleRoundedLines({1920.0f / 2.43f, 490, 370,80}, 0.2, 0,5, BLACK); // login button
	DrawText("Log In", 1920.0f / 2.15f, 505, 50, BLACK);
	DrawRectangleRounded({ 1920.0f / 2.43f, 610,370,80 }, 0.2, 0, c2);
	DrawRectangleRoundedLines({ 1920.0f / 2.43f, 610, 370,80 }, 0.2, 0, 5, BLACK); // register button/
	DrawText("Register", 1920.0f / 2.2f, 630, 50, BLACK);
	EndDrawing();
}