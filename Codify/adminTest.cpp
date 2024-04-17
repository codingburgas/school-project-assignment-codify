#include <raylib.h>
using namespace std;
void adminTest()
{
	BeginDrawing();
	ClearBackground(RAYWHITE);
	DrawRectangleRounded({ 250,200, 1420, 770 }, 0.15, 0, RAYWHITE);
	DrawRectangleRoundedLines({ 250,200, 1420, 770 }, 0.25, 0, 5, BLACK); //geography tab
	DrawRectangleRounded({ 300,400, 1320, 140 }, 0.15, 0, RAYWHITE);  // geography tab
	DrawRectangleRoundedLines({ 300,400, 1320, 140 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 1350,420, 250, 100 }, 0.15, 0, RAYWHITE); //review button
	DrawRectangleRoundedLines({ 1350,420, 250, 100 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 1050,420, 275, 100 }, 0.15, 0, RAYWHITE); //attempt button
	DrawRectangleRoundedLines({ 1050,420, 275, 100 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 300,570, 1320, 140 }, 0.15, 0, RAYWHITE); //history tab
	DrawRectangleRoundedLines({ 300,570, 1320, 140 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 1350,590, 250, 100 }, 0.15, 0, RAYWHITE); //review button
	DrawRectangleRoundedLines({ 1350,590, 250, 100 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 1050,590, 275, 100 }, 0.15, 0, RAYWHITE); //attempt button
	DrawRectangleRoundedLines({ 1050,590, 275, 100 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 300,740, 1320, 140 }, 0.15, 0, RAYWHITE); //biology tab
	DrawRectangleRoundedLines({ 300,740, 1320, 140 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 1350,760, 250, 100 }, 0.15, 0, RAYWHITE); //review button
	DrawRectangleRoundedLines({ 1350,760, 250, 100 }, 0.25, 0, 5, BLACK);
	DrawRectangleRounded({ 1050,760, 275, 100 }, 0.15, 0, RAYWHITE); //attempt button
	DrawRectangleRoundedLines({ 1050,760, 275, 100 }, 0.25, 0, 5, BLACK);
	DrawTriangle(
		{ 925, 370 },
		{ 1025, 370 },
		{ 975, 320 }, 
		RED
	);
	DrawTriangle(
		{ 925, 900 },
		{ 975, 950 },
		{ 1025, 900 },

		RED 
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