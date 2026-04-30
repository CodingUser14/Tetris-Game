#include "block.h"

Block::Block() : cellSize{30}, rotationState{0}, rowOffset{0}, columnOffset{0} { colors = getCellColors(); }

void Block::Draw(int offsetX, int offsetY)
{
    std::vector<Position> tiles = GetCellPositions();
    for(Position item: tiles)
    {
        DrawRectangle(item.column * cellSize + offsetX, item.row * cellSize + offsetY, cellSize - 1, cellSize - 1, colors[id]);
    }
}

void Block::Move(int rows, int columns)
{
    rowOffset += rows;
    columnOffset += columns;
}

std::vector<Position> Block::GetCellPositions()
{
    std::vector<Position> tiles = cells[rotationState];
    std::vector<Position> movedTiles;
    for(Position item: tiles)
    {
        Position newPos = Position(item.row + rowOffset, item.column + columnOffset);
        movedTiles.push_back(newPos);
    }
    return movedTiles;
}

void Block::Rotate()
{
    rotationState++;
    if(rotationState == (int)cells.size())
    {
        rotationState = 0;
    }
}

// If we rotate from the last configuration of the block and it goes out of bounds then we need to set the rotation state back to it cause 
// we made sure that if it rotates from the last configuration that it goes to 0, so when rotating and undos, it will make -1, hence the condition
void Block::UndoRotation()
{
    rotationState--;
    if(rotationState == -1)
    {
        rotationState = cells.size() - 1;
    }
}