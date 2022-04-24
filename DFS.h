#ifndef DFS_H
#define DFS_H

#include <iostream>
#include <stack>
#include <vector>
#include <map>
#include <stdlib.h>
#include <windows.h>

using namespace std;

class DFS
{
    private:
        bool GoBack;
        int num_of_vertices = 0;

        struct XY {
            int X;
            int Y;

            bool operator < (const XY &xy) const {
                return X < xy.X || (X == xy.X && Y < xy.Y);
            }

        };

        stack<XY> Stack;
        vector<XY> Visited;
        XY current;

        map<XY, vector<XY>> adjacency_list;
        XY start;
        XY ending;

    public:
        int good;
        int xg[20000];
        int yg[20000];
        int bad;
        int a[20000];
        int b[20000];
        int backward;
        int b1[20000];
        int b2[20000];

        DFS (char maze[21][21]);
        void solveMaze(char maze[21][21]);
        void printSolution(char maze[21][21]);
        bool NodeVisited(int x, int y);

};

#endif
