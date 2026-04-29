#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"
/*
Tetris Game 
// stuct Color = {red, green, blue, alpha}


*/
int main() 
{
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300, 600, "Tetris"); // Initalize a game window width x height
    SetTargetFPS(60);

    Grid grid = Grid(); // Initialize object grid with the default constructor 
    grid.Print();
    LBlock block = LBlock();


    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(darkBlue); // clear screen for new frame
        grid.Draw();
        block.Draw();
        EndDrawing();
    }
    CloseWindow();
}