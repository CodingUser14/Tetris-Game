#include <raylib.h>
#include "grid.h"
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

    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(darkBlue); // clear screen for new frame

        EndDrawing();
    }

    CloseWindow();
}