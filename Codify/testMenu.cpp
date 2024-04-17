#include <raylib.h>
using namespace std;
void testMenu()
{
	BeginDrawing();
	ClearBackground(RAYWHITE);
	DrawRectangleRounded({ 250,200, 1420, 730 }, 0.15, 0, RAYWHITE);
	DrawRectangleRoundedLines({ 250,200, 1420, 730 }, 0.25, 0, 5, BLACK); //geography tab
	DrawRectangleRounded({ 300,400, 1320, 140}, 0.15, 0, RAYWHITE);  // geography tab
	DrawRectangleRoundedLines({ 300,400, 1320, 140}, 0.25, 0, 5, BLACK);
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
	DrawText("Available Tests", 725, 75, 60, BLACK);
	DrawText("Select Test", 775, 270, 60, BLACK);
	DrawText("Geography", 320, 440, 60, BLACK);
	DrawText("Attempt", 1075, 440, 60, BLACK);
	DrawText("Review", 1380, 440, 60, BLACK);
	DrawText("History", 320, 615, 60, BLACK);
	DrawText("Review", 1380, 615, 60, BLACK);
	DrawText("Attempt", 1075, 615, 60, BLACK);
	DrawText("Biology", 320, 780, 60, BLACK);
	DrawText("Attempt", 1075, 780, 60, BLACK);
	DrawText("Review", 1380, 780, 60, BLACK);
	EndDrawing();
}