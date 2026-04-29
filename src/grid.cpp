#include "grid.h"
#include <iostream>
#include "colors.h"
using namespace std;

// Default Constructor
Grid::Grid() : numRows{20}, numCols{10}, cellSize{30} { Initialize(); colors = getCellColors(); }

// Grid Initialization 
void Grid::Initialize()
{
    for(int row = 0; row < numRows; row++)
    {
        for(int column = 0; column < numCols; column++)
        {
            grid[row][column] = 0;
        }
    }
}

// Print Grid in terminal
void Grid::Print()
{
    for(int row = 0; row < numRows; row++)
    {
        for(int column = 0; column < numCols; column++)
        {
            cout << grid[row][column] << " ";
        }
        cout << endl;
    }
}

void Grid::Draw()
{
    for(int row = 0; row < numRows; row++)
    {
        for(int column = 0; column < numCols; column++)
        {
            int cellValue = grid[row][column];
            // x, y, w, h, color
            DrawRectangle(column * cellSize+1, row * cellSize+1, cellSize-1, cellSize-1, colors[cellValue]); 
        }
    }
}