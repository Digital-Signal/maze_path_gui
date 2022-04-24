#ifndef RECURSIVE_BACKTRACKER_H
#define RECURSIVE_BACKTRACKER_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
#include <set>
#include <algorithm>
#include <random>
#include <time.h>

class RECURSIVE_BACKTRACKER
{

    private:

    public:
        int aaa;
        int x[20000];
        int y[20000];
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
        RECURSIVE_BACKTRACKER();

        void GenerateMaze(char maze[21][21], Cell current);

};

#endif

