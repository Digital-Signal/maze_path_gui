#ifndef RANDOMIZED_PRIM_S_ALGORITHM_H
#define RANDOMIZED_PRIM_S_ALGORITHM_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

class RANDOMIZED_PRIM_S_ALGORITHM
{

    private:

        struct Cell {
            int X;
            int Y;
            bool operator==(const Cell &c) const {
                return c.X == X && c.Y == Y;
            }
        };

    std::vector<Cell> Wall_List;

    public:
        RANDOMIZED_PRIM_S_ALGORITHM();
        void GenerateMaze(char maze[21][21], int x[20000], int y[20000]);

};

#endif

