#include "grid.h"
#include <iostream>
using namespace std;

// Default Constructor
Grid::Grid() : numRows{20}, numCols{10}, cellSize{30} { Initialize(); }

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

vector<Color> GetCellColors()
{
    //Color DARKGRAY = { };


}