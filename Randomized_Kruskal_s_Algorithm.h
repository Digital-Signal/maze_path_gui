#ifndef RANDOMIZED_KRUSKAL_S_ALGORITHM_H
#define RANDOMIZED_KRUSKAL_S_ALGORITHM_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
#include <set>
#include <algorithm>
#include <random>
#include <time.h>

class RANDOMIZED_KRUSKAL_S_ALGORITHM
{

    private:

        struct Cell {
            int X;
            int Y;
            bool operator==(const Cell &c) const {
                return c.X == X && c.Y == Y;
            }

            bool operator<(const Cell &c) const {
                return X < c.X || (X == c.X && Y < c.Y);
            }
        };

    std::vector<Cell> Wall_List;
    std::vector<std::set<Cell>> set_cell;

    public:
        RANDOMIZED_KRUSKAL_S_ALGORITHM();
        void GenerateMaze(char maze[21][21], int x[20000], int y[20000]);

};

#endif
