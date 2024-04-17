#include <iostream>
#include <raylib.h>
#include <string>
using namespace std;
 Color c3 = RAYWHITE, c4 = RAYWHITE, c5 = RAYWHITE;
 string loginInputUser = "";
 string loginInputPass = "";
void loginMenu()
{

	Rectangle mousePos = { GetMouseX(), GetMouseY(), 10,10 };

	if (CheckCollisionRecs({ 650, 475, 600, 85 }, mousePos) || CheckCollisionRecs({ 650, 600, 600, 85 }, mousePos) || CheckCollisionRecs({ 850, 775, 200, 85 }, mousePos))
		SetMouseCursor(MOUSE_CURSOR_POINTING_HAND); else SetMouseCursor(MOUSE_CURSOR_DEFAULT);
	if (CheckCollisionRecs({ 650, 475, 600, 85 }, mousePos)) c3 = LIGHTGRAY; else c3 = RAYWHITE;
	if (CheckCollisionRecs({ 650, 600, 600, 85 }, mousePos)) c4 = LIGHTGRAY; else c4 = RAYWHITE;
	if (CheckCollisionRecs({ 850, 775, 200, 85 }, mousePos)) c5 = LIGHTGRAY; else c5 = RAYWHITE;
	// hover checks
	int key = GetKeyPressed();
	if (key > 0 && key < 250 && loginInputUser.length() < 10 && CheckCollisionRecs({ 650, 475, 600, 85 }, mousePos))
	loginInputUser += (char)key;
		
	if (key > 0 && key < 250 && loginInputPass.length() < 10 && CheckCollisionRecs({ 650, 600, 600, 85 },mousePos))
		loginInputPass += (char)key;
		
	// input boxes keypress checks
	if (IsKeyPressed(KEY_BACKSPACE) && loginInputUser.length() > 0 && CheckCollisionRecs({ 650, 475, 600, 85 }, mousePos)) loginInputUser.pop_back();
	if (IsKeyPressed(KEY_BACKSPACE) && loginInputPass.length() > 0 && CheckCollisionRecs({ 650, 600, 600, 85 }, mousePos)) loginInputPass.pop_back();
	const char* userText = loginInputUser.c_str();
	const char* passwordText = loginInputPass.c_str();

	BeginDrawing();
	ClearBackground(RAYWHITE);
	DrawRectangleRounded({ 600, 200, 700, 700 }, 0.2, 0, RAYWHITE);
	DrawRectangleRoundedLines({ 600, 200, 700, 700 }, 0.2, 0, 7, BLACK); // wrapper
	DrawRectangleRounded({ 650, 475, 600, 85 }, 0.2, 0, c3);
	DrawRectangleRoundedLines({ 650, 475, 600, 85 }, 0.2, 0, 5, BLACK); // username input
	DrawText(userText, 670, 500, 40, BLACK);
	if (loginInputUser.length() == 0 && !CheckCollisionRecs({ 650, 475, 600, 85 }, mousePos)) DrawText("Username", 850, 500, 40, DARKGRAY);
	DrawRectangleRounded({ 650, 600, 600, 85 }, 0.2, 0, c4);
	DrawRectangleRoundedLines({ 650, 600, 600, 85 }, 0.2, 0, 5, BLACK); // password input
	DrawText(passwordText, 670, 625, 40, BLACK); 
	if (loginInputPass.length() == 0 && !CheckCollisionRecs({ 650, 600, 600, 85 }, mousePos)) DrawText("Password", 850, 625, 40, DARKGRAY);
	DrawRectangleRounded({ 850, 775, 200, 85 }, 0.2, 0, c5);
	DrawRectangleRoundedLines({ 850, 775, 200, 85 }, 0.2, 0, 5, BLACK); // login btn
	DrawText("Login", 900, 800, 40, BLACK);
	DrawText("Log Into An Existing Account", 640, 300, 40, BLACK);
	EndDrawing();
}