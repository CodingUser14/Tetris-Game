#include <raylib.h>
#include "game.h"
#include "colors.h"
#include <iostream>
/*
Tetris Game 
// stuct Color = {red, green, blue, alpha}


*/

double lastUpdateTime = 0;

bool EventTriggered(double interval)
{
    double currentTime = GetTime();
    if(currentTime - lastUpdateTime >= interval)
    {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

int main() 
{
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(500, 620, "Tetris"); // Initalize a game window width x height
    SetTargetFPS(60);

    Font font = LoadFontEx("Font/monogram.ttf", 64, 0, 0);

    Game game = Game();

    while(WindowShouldClose() == false)
    {
        game.HandleInput();
        if(EventTriggered(0.2))
        {
            game.MoveBlockDown();
        }

        BeginDrawing();
        ClearBackground(darkBlue); // clear screen for new frame
        DrawTextEx(font, "Score", {365, 15}, 38, 2, WHITE); // text
        DrawTextEx(font, "Next", {370, 175}, 38, 2, WHITE); // text
        if(game.gameOver)
        {
            DrawTextEx(font, "GAME OVER", {320, 450}, 38, 2, WHITE); // text
        }
        DrawRectangleRounded({320, 55, 170, 60}, 0.3, 6, lightBlue);
        
        char scoreText[10];
        sprintf(scoreText, "%d", game.score);
        Vector2 textSize = MeasureTextEx(font, scoreText, 38, 2);

        DrawTextEx(font, scoreText, {320 + (170 - textSize.x)/2, 65}, 38, 2, WHITE); // text
        DrawRectangleRounded({320, 215, 170, 190}, 0.3, 6, lightBlue);
        game.Draw();
        EndDrawing();
    }
    CloseWindow();
}