#include <iostream>
#include <raylib.h>
#include <string>
using namespace std;
Color c6 = RAYWHITE, c7 = RAYWHITE, c8 = RAYWHITE;
string regInputUser = "";
string regInputPass = "";
void registerMenu()
{
	Rectangle mousePos = { GetMouseX(), GetMouseY(), 10,10 };

	if (CheckCollisionRecs({ 650, 475, 600, 85 }, mousePos) || CheckCollisionRecs({ 650, 600, 600, 85 }, mousePos) || CheckCollisionRecs({ 850, 775, 200, 85 }, mousePos))
		SetMouseCursor(MOUSE_CURSOR_POINTING_HAND); else SetMouseCursor(MOUSE_CURSOR_DEFAULT);
	if (CheckCollisionRecs({ 650, 475, 600, 85 }, mousePos)) c6 = LIGHTGRAY; else c6 = RAYWHITE;
	if (CheckCollisionRecs({ 650, 600, 600, 85 }, mousePos)) c7 = LIGHTGRAY; else c7 = RAYWHITE;
	if (CheckCollisionRecs({ 850, 775, 200, 85 }, mousePos)) c8 = LIGHTGRAY; else c8 = RAYWHITE;
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
	DrawRectangleRounded({ 650, 475, 600, 85 }, 0.2, 0, c6);
	DrawRectangleRoundedLines({ 650, 475, 600, 85 }, 0.2, 0, 5, BLACK); // username input
	DrawText(userText, 670, 500, 40, BLACK);
	if (regInputUser.length() == 0 && !CheckCollisionRecs({ 650, 475, 600, 85 }, mousePos)) DrawText("Username", 850, 500, 40, DARKGRAY);
	DrawRectangleRounded({ 650, 600, 600, 85 }, 0.2, 0, c7);
	DrawRectangleRoundedLines({ 650, 600, 600, 85 }, 0.2, 0, 5, BLACK); // password input
	DrawText(passwordText, 670, 625, 40, BLACK);
	if (regInputPass.length() == 0 && !CheckCollisionRecs({ 650, 600, 600, 85 }, mousePos)) DrawText("Password", 850, 625, 40, DARKGRAY);
	DrawRectangleRounded({ 850, 775, 200, 85 }, 0.2, 0, c8);
	DrawRectangleRoundedLines({ 850, 775, 200, 85 }, 0.2, 0, 5, BLACK); // register btn
	DrawText("Register", 865, 800, 40, BLACK);
	DrawText("Create a New Account", 665, 300, 50, BLACK);
	EndDrawing();
}