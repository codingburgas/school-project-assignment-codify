#include <iostream>
#include <raylib.h>
#include <string>
using namespace std;
string regInputUser = "";
string regInputPass = "";
void registerMenu()
{
	Rectangle mousePos = { GetMouseX(), GetMouseY(), 10,10 };
	Color c1 = RAYWHITE, c2 = RAYWHITE, c3 = RAYWHITE;
	if (CheckCollisionRecs({ 650, 475, 600, 85 }, mousePos) || CheckCollisionRecs({ 650, 600, 600, 85 }, mousePos) || CheckCollisionRecs({ 850, 775, 200, 85 }, mousePos))
		SetMouseCursor(MOUSE_CURSOR_POINTING_HAND); else SetMouseCursor(MOUSE_CURSOR_DEFAULT);
	if (CheckCollisionRecs({ 650, 475, 600, 85 }, mousePos)) c1 = LIGHTGRAY; else c1 = RAYWHITE;
	if (CheckCollisionRecs({ 650, 600, 600, 85 }, mousePos)) c2 = LIGHTGRAY; else c2 = RAYWHITE;
	if (CheckCollisionRecs({ 850, 775, 200, 85 }, mousePos)) c3 = LIGHTGRAY; else c3 = RAYWHITE;
	// hover checks

	int key = GetKeyPressed();
	if (key > 0 && key < 250 && regInputUser.length() < 10 && CheckCollisionRecs({ 650, 475, 600, 85 }, mousePos))
		regInputUser += (char)key;

	if (key > 0 && key < 250 && regInputPass.length() < 10 && CheckCollisionRecs({ 650, 600, 600, 85 }, mousePos))
		regInputPass += (char)key;

	// input boxes keypress checks
	if (IsKeyPressed(KEY_BACKSPACE) && regInputUser.length() > 0 && CheckCollisionRecs({ 650, 475, 600, 85 }, mousePos)) regInputUser.pop_back();
	if (IsKeyPressed(KEY_BACKSPACE) && regInputPass.length() > 0 && CheckCollisionRecs({ 650, 600, 600, 85 }, mousePos)) regInputPass.pop_back();
	const char* userText = regInputUser.c_str();
	const char* passwordText = regInputPass.c_str();




	BeginDrawing();
	ClearBackground(RAYWHITE);
	DrawRectangleRounded({ 600, 200, 700, 700 }, 0.2, 0, RAYWHITE);
	DrawRectangleRoundedLines({ 600, 200, 700, 700 }, 0.2, 0, 7, BLACK); // wrapper
	DrawRectangleRounded({ 650, 475, 600, 85 }, 0.2, 0, c1);
	DrawRectangleRoundedLines({ 650, 475, 600, 85 }, 0.2, 0, 5, BLACK); // username input
	DrawText(userText, 670, 500, 40, BLACK);
	if (regInputUser.length() == 0 && !CheckCollisionRecs({ 650, 475, 600, 85 }, mousePos)) DrawText("Username", 850, 500, 40, DARKGRAY);
	DrawRectangleRounded({ 650, 600, 600, 85 }, 0.2, 0, c2);
	DrawRectangleRoundedLines({ 650, 600, 600, 85 }, 0.2, 0, 5, BLACK); // password input
	DrawText(passwordText, 670, 625, 40, BLACK);
	if (regInputPass.length() == 0 && !CheckCollisionRecs({ 650, 600, 600, 85 }, mousePos)) DrawText("Password", 850, 625, 40, DARKGRAY);
	DrawRectangleRounded({ 850, 775, 200, 85 }, 0.2, 0, c3);
	DrawRectangleRoundedLines({ 850, 775, 200, 85 }, 0.2, 0, 5, BLACK); // register btn
	DrawText("Register", 865, 800, 40, BLACK);
	DrawText("Create a New Account", 665, 300, 50, BLACK);
	EndDrawing();
}