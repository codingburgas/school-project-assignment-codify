#include <iostream>
#include <raylib.h>
using namespace std;


void userResultMenu()
{
	BeginDrawing();
	ClearBackground(RAYWHITE);
	DrawRectangleRounded({ 370, 100, 1200, 900 },0.5,0, RAYWHITE);
	DrawRectangleRoundedLines({ 370, 100, 1200, 900 }, 0.25, 0,10, BLACK); // wrapper
	DrawText("You PASS/FAIL", 650, 150, 80, BLACK);
	DrawText("Last Attempt Result", 725, 490, 50, BLACK);
	DrawRectangleRounded({ 450,550, 1050, 150 }, 0.6, 0, RAYWHITE);
	DrawRectangleRoundedLines({ 450,550, 1050, 150 }, 0.6, 0,7, BLACK); // score text holder
	DrawText("You have scored 35/70 points (50%)", 480, 610,40, BLACK);
	DrawRectangleRounded({ 1280,595, 170, 60 }, 0.6, 0, RAYWHITE);
	DrawRectangleRoundedLines({ 1280,595, 170, 60 }, 25, 0, 7, BLACK); //  review button
	DrawText("Review", 1310, 610, 35, BLACK);
	DrawRectangleRounded({ 870,850, 200, 70 }, 0.6, 0, RAYWHITE);
	DrawRectangleRoundedLines({ 870,850, 200, 70 }, 1, 0, 7, BLACK); //  back button
	DrawText("Back", 915, 865, 45, BLACK);
	EndDrawing();
}
