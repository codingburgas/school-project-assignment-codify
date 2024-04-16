#include <raylib.h>
using namespace std;
void mainMenu()
{
	BeginDrawing();
	ClearBackground(RAYWHITE);
	DrawRectangleRounded({ 1920.0f / 3.1f, 290, 700,550 }, 0.15, 0, RAYWHITE);
	DrawRectangleRoundedLines({ 1920.0f / 3.1f, 290, 700,550 }, 0.15, 0, 3, BLACK); // buttons wrapper
	DrawText("Welcome to Codify", 1920.0f / 2.75f, 330, 60, BLACK);
	DrawRectangleRounded({1920.0f / 2.43f, 490,370,80 }, 0.2, 0, RAYWHITE);
	DrawRectangleRoundedLines({1920.0f / 2.43f, 490, 370,80}, 0.2, 0,5, BLACK); // login button
	DrawText("Log In", 1920.0f / 2.15f, 505, 50, BLACK);
	DrawRectangleRounded({ 1920.0f / 2.43f, 610,370,80 }, 0.2, 0, RAYWHITE);
	DrawRectangleRoundedLines({ 1920.0f / 2.43f, 610, 370,80 }, 0.2, 0, 5, BLACK); // register button/
	DrawText("Register", 1920.0f / 2.2f, 630, 50, BLACK);
	EndDrawing();
}