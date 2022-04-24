#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
#include <set>
#include <algorithm>
#include <random>
#include <time.h>
#include "Recursive_Backtracker.h"

using namespace std;

RECURSIVE_BACKTRACKER::RECURSIVE_BACKTRACKER(){
    srand (time(NULL));
}

void RECURSIVE_BACKTRACKER::GenerateMaze(char maze[21][21], Cell current) {

    maze[current.X][current.Y] = ' ';
    x[aaa] = current.X;
    y[aaa] = current.Y;
    aaa++;

    int unvisited = 0;
    if(current.X - 2 > -1) // Up
        if(maze[current.X-2][current.Y] == 'X')
            ++unvisited;

    if(current.X + 2 < 21) // Down
        if(maze[current.X+2][current.Y] == 'X')
            ++unvisited;

    if(current.Y - 2 > -1) // Left
        if(maze[current.X][current.Y-2] == 'X')
            ++unvisited;

    if(current.Y + 2 < 21) // Right
        if(maze[current.X][current.Y+2] == 'X')
            ++unvisited;

    while(unvisited > 0) {

        unvisited = 0;
        if(current.X - 2 > -1) // Up
            if(maze[current.X-2][current.Y] == 'X')
                ++unvisited;

        if(current.X + 2 < 21) // Down
            if(maze[current.X+2][current.Y] == 'X')
                ++unvisited;

        if(current.Y - 2 > -1) // Left
            if(maze[current.X][current.Y-2] == 'X')
                ++unvisited;

        if(current.Y + 2 < 21) // Right
            if(maze[current.X][current.Y+2] == 'X')
                ++unvisited;

        Cell chosen;

        int next = rand() % 4;

        if(next == 0)
            goto first;
        else if(next == 1)
            goto second;
        else if(next == 2)
            goto third;
        else
            goto fourth;

        first:
        if(current.X - 2 > -1) // Up
            if(maze[current.X-2][current.Y] == 'X') {

                chosen.X = current.X-2;
                chosen.Y = current.Y;

                maze[current.X-1][current.Y] = ' ';
                x[aaa] = current.X-1;
                y[aaa] = current.Y;
                aaa++;
                GenerateMaze(maze, chosen);

            }
        goto ending;

        second:
        if(current.X + 2 < 21) // Down
            if(maze[current.X+2][current.Y] == 'X') {

                chosen.X = current.X+2;
                chosen.Y = current.Y;
                maze[current.X+1][current.Y] = ' ';
                x[aaa] = current.X+1;
                y[aaa] = current.Y;
                aaa++;
                GenerateMaze(maze, chosen);

            }
        goto ending;

        third:
        if(current.Y - 2 > -1) // Left
            if(maze[current.X][current.Y-2] == 'X') {

                chosen.X = current.X;
                chosen.Y = current.Y-2;
                maze[current.X][current.Y-1] = ' ';
                x[aaa] = current.X;
                y[aaa] = current.Y-1;
                aaa++;
                GenerateMaze(maze, chosen);

            }
        goto ending;

        fourth:
        if(current.Y + 2 < 21) // Right
            if(maze[current.X][current.Y+2] == 'X') {

                chosen.X = current.X;
                chosen.Y = current.Y+2;
                maze[current.X][current.Y+1] = ' ';
                x[aaa] = current.X;
                y[aaa] = current.Y+1;
                aaa++;
                GenerateMaze(maze, chosen);

            }

        ending:
        continue;
    }

    return;

}
