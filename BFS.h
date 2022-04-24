#ifndef BFS_H
#define BFS_H

#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <stdlib.h>
#include <windows.h>
#include <algorithm>

using namespace std;

class BFS
{
    private:
        struct XY {

            int X;
            int Y;

            bool operator < (const XY &xy) const {
                return X < xy.X || (X == xy.X && Y < xy.Y);
            }

        };

        queue<XY> Queue;
        XY start;
        XY ending;
        XY current;
        map<XY, vector<XY>> adjacency_list;
        map<XY, XY> Parent;
        vector<XY> Visited;
        int num_of_vertices = 0;

    public:
        int good;
        int xg[20000];
        int yg[20000];
        int bad;
        int a[20000];
        int b[20000];

        BFS(char maze[21][21]);
        void solve_Maze(char maze[21][21]);
        void printSolution(char maze[21][21]);
        bool NodeVisited(int x, int y);

};

#endif

