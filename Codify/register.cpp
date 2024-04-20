#include <iostream>
#include <raylib.h>
#include <string>
#include "../library/sqlite3pp-1.0.9/headeronly_src/sqlite3pp.h"
using namespace std;
using namespace sqlite3pp;
string regInputUser = "";
string regInputPass = "";
extern int menuState;


bool registerUser(database& db, const char* username, const char* password)
{
	query q(db, "SELECT * FROM Users WHERE user = ?");
	q.bind(1, username, nocopy);
	if (q.begin() != q.end()) 
	{
		cout << "Username already exists. Please choose a different one." << endl;
		return false;
	}
	command cmd(db, "INSERT INTO Users (user,password) VALUES (:user,:pass)");
	cmd.bind(":user", username, nocopy);
	cmd.bind(":pass", password, nocopy);
	cmd.execute();
	cout << "Registration successful!" << endl;
	return true;
}
void registerMenu(database& db)
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
	if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
	{
		if (CheckCollisionRecs({ 850, 775, 200, 85 }, mousePos) && registerUser(db, userText, passwordText))
		{
			menuState = 0;
			regInputUser = "";
			regInputPass = "";
		}
	}
	
	EndDrawing();
}