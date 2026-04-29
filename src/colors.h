#pragma once
#include <raylib.h>
#include <vector>

extern const Color darkGrey; // extern allows to use it in another file and const implies it cannot be changed
extern const Color green; 
extern const Color red; 
extern const Color orange; 
extern const Color yellow; 
extern const Color purple; 
extern const Color cyan; 
extern const Color blue; 

std::vector<Color> getCellColors();
