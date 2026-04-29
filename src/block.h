#pragma once //ensures this header file is included only once per compilation
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"
using namespace std;

class Block 
{
public:
    Block();
    void Draw();
    int id;
    map<int, vector<Position>> cells;
private:
    int cellSize;
    int rotationState;
    vector<Color> colors;
    int rowOffset;
    int columnOffset;
};