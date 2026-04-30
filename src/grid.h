#pragma once 
#include <vector>
#include <raylib.h>
using namespace std;

class Grid 
{
public:
    Grid();
    void Initialize();
    void Print();
    void Draw();
    bool IsCellOutside(int row, int column);
    int ClearFullRows();
    bool IsCellEmpty(int row, int column);
    int grid[20][10];

private:
    // Color is <r,g,b,a> 
    bool IsRowFull(int row);
    void ClearRow(int row);
    void MoveRowDown(int row, int numRows);
    int numRows;
    int numCols;
    int cellSize;
    vector<Color> colors;
};