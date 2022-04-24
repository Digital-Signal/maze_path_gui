#ifndef A_STAR_H
#define A_STAR_H

#include <iostream>
#include <stack>
#include <vector>
#include <map>
#include <stdlib.h>
#include <windows.h>
#include <algorithm>
#include <cmath>

using namespace std;

class A_STAR
{
    private:

        struct Node {

            int X;
            int Y;
            int g;
            int h;
            int f;

            bool operator==(const Node &n) const {
                return n.X == X && n.Y == Y && n.g == g && n.h == h && n.f == f;
            }

            bool operator<(const Node &n) const {
                return X < n.X || (X == n.X && Y < n.Y);
            }

        };

    public:

        int good;
        int xg[20000];
        int yg[20000];
        int bad;
        int a[20000];
        int b[20000];

        A_STAR();
        void solve_Maze(char maze[21][21]);

};

#endif
