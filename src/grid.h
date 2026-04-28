#pragma once // ?? duplicate
#include <vector>
#include <raylib.h>
using namespace std;

class Grid 
{
public:
    Grid();
    void Initialize();
    void Print();
    int grid[20][10];


private:
    // Color is <r,g,b,a> 
    vector<Color> GetCellColors;
    int numRows;
    int numCols;
    int cellSize;
    vector<Color> colors;
};