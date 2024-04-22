#include <iostream>
#include <raylib.h>
#include <string>
#include "../library/sqlite3pp-1.0.9/headeronly_src/sqlite3pp.h"
using namespace std;
using namespace sqlite3pp;
extern const char* selectedCourse;
int index = GetRandomValue(1, 50);
int counter = 1;
string answerInput = "";
int correctAnswers = 0;
Color colorButton1 = RAYWHITE, colorButton2 = LIME;
class QUESTION
{
	const char* question = "";
	const char* answer;
public:
	void displayQuestion()
	{
		database db("database.db");
		const char* value;
		Rectangle mousePos = { GetMouseX(), GetMouseY(), 10,10 };
		string queryStr = "SELECT question FROM " + string(selectedCourse) + " WHERE id = (:id)";
		string queryStr2 = "SELECT answer FROM " + string(selectedCourse) + " WHERE id = (:id)";
		query qryQuestion(db, queryStr.c_str());
		query qryAnswer(db, queryStr2.c_str());
		qryQuestion.bind(":id", index);
		qryAnswer.bind(":id", index);
		for (sqlite3pp::query::iterator i = qryQuestion.begin(); i != qryQuestion.end(); ++i) {
			for (int j = 0; j < qryQuestion.column_count(); ++j) {
				question = (*i).get<const char*>(j);
			}
		DrawText(question, 225, 580, 40, BLACK);
		}
		for (sqlite3pp::query::iterator i = qryAnswer.begin(); i != qryAnswer.end(); ++i) {
			for (int j = 0; j < qryAnswer.column_count(); ++j) {
				answer = (*i).get<const char*>(j);
			}
			if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) 
			{
				if (CheckCollisionRecs({ 1250,900, 400, 100 }, mousePos)) {
					if (answer == answerInput) correctAnswers++;
					counter++;
					index = GetRandomValue(1, 50);
				}
			}
		}
	}
};





void testQuestion()
{
	QUESTION q;
	Rectangle mousePos = { GetMouseX(), GetMouseY(), 10,10 };
	const char* currentQuestion = "";
	int key = GetKeyPressed();
	if (key > 0 && key < 250 && answerInput.length() < 30 && CheckCollisionRecs({ 200,900, 900, 100 }, mousePos))
		if (IsKeyDown(KEY_CAPS_LOCK)) answerInput += toupper((char)key);
		else answerInput += tolower((char)key);
	if (IsKeyPressed(KEY_BACKSPACE) && answerInput.length() > 0 && CheckCollisionRecs({ 200,900, 900, 100 }, mousePos)) answerInput.pop_back();
	if (CheckCollisionRecs({ 200,900, 900, 100 }, mousePos) || CheckCollisionRecs({ 1250,900, 400, 100 }, mousePos)) SetMouseCursor(MOUSE_CURSOR_POINTING_HAND); else SetMouseCursor(MOUSE_CURSOR_DEFAULT);
	if (CheckCollisionRecs({ 200,900, 900, 100 }, mousePos)) colorButton1 = LIGHTGRAY; else colorButton1 = RAYWHITE;
	if (CheckCollisionRecs({ 1250,900, 400, 100 }, mousePos)) colorButton2 = LIME; else colorButton2 = RAYWHITE;
	BeginDrawing();
	ClearBackground(RAYWHITE);
	DrawRectangleRounded({ 200, 420, 1450, 370 },0.2,0, SKYBLUE); //question rectangle
	DrawRectangleRoundedLines({ 200, 420, 1450, 370 },0.2,0,5, BLACK);
	DrawRectangleRounded({ 200,900, 900, 100 }, 0.15, 0, colorButton1); // answer rectangle
	DrawRectangleRoundedLines({ 200,900, 900, 100 }, 0.25, 0, 5, BLACK);
	DrawRectangle(750, 150, 400, 170, RAYWHITE); //question number rectangle
	DrawRectangleRounded({ 1250,900, 400, 100 }, 0.15, 0, colorButton2); //next rectangle
	DrawRectangleRoundedLines({ 1250,900, 400, 100 }, 0.25, 0, 5, BLACK);
	q.displayQuestion();
	DrawText(TextFormat("Question %d", counter), 775, 175, 60, BLACK);
	DrawText(answerInput.c_str(), 225, 925, 60, BLACK);
	if(counter < 20) DrawText("Next", 1375, 925, 60, BLACK);
	else if(counter == 20) DrawText("Finish", 1375, 925, 60, BLACK);
	if (selectedCourse == "Mathematics") DrawText("Solve the equation:", 225, 450, 50, BLACK);
	if (selectedCourse == "Geography") DrawText("Answer the question:", 225, 450, 50, BLACK);
	if (selectedCourse == "English") DrawText("Fill the blanks or Rewrite the correct sentence", 225, 450, 50, BLACK);
	EndDrawing();
}