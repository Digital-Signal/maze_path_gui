#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
#include "Randomized_Prim_s_Algorithm.h"

using namespace std;

RANDOMIZED_PRIM_S_ALGORITHM::RANDOMIZED_PRIM_S_ALGORITHM() {

}

void RANDOMIZED_PRIM_S_ALGORITHM::GenerateMaze(char maze[21][21], int x[20000], int y[20000]) {

    int aaa = 0;

    Cell cell;
    cell.X = 1;
    cell.Y = 1;

    maze[cell.X][cell.Y] = ' ';
    x[aaa] = cell.X;
    y[aaa] = cell.Y;
    aaa++;

    // UP wall
    if(cell.X-1 > -1) {
        Cell Up;
        Up.X = cell.X-1;
        Up.Y = cell.Y;
        if(maze[Up.X][Up.Y] == 'X') {
            Wall_List.push_back(Up);
        }
    }
    // RIGHT wall
    if(cell.Y+1 < 21) {
        Cell Right;
        Right.X = cell.X;
        Right.Y = cell.Y+1;
        if(maze[Right.X][Right.Y] == 'X'){
            Wall_List.push_back(Right);
        }
    }
    // DOWN wall
    if(cell.X+1 < 21) {
        Cell Down;
        Down.X = cell.X+1;
        Down.Y = cell.Y;
        if(maze[Down.X][Down.Y] == 'X'){
            Wall_List.push_back(Down);
        }
    }
    // LEFT wall
    if(cell.Y-1 > -1) {
        Cell Left;
        Left.X = cell.X;
        Left.Y = cell.Y-1;
        if(maze[Left.X][Left.Y] == 'X'){
            Wall_List.push_back(Left);
        }
    }

    while(!Wall_List.empty()) {

        int i = rand() % Wall_List.size();
        Cell wall = Wall_List[i];

        int count = 0;

        //up
        if(wall.X-1 > -1)
            if(maze[wall.X-1][wall.Y] == ' ')
               ++count;
        //right
        if(wall.Y+1 < 21)
            if(maze[wall.X][wall.Y+1] == ' ')
                ++count;
        //down
        if(wall.X+1 < 21)
            if(maze[wall.X+1][wall.Y] == ' ')
                ++count;
        //left
        if(wall.Y-1 > -1)
            if(maze[wall.X][wall.Y-1] == ' ')
                ++count;

        if(count == 1) {
            maze[wall.X][wall.Y] = ' ';
            x[aaa] = wall.X;
            y[aaa] = wall.Y;
            aaa++;

            // UP wall
            if(wall.X-1 > -1) {
                Cell Up;
                Up.X = wall.X-1;
                Up.Y = wall.Y;
                if(maze[Up.X][Up.Y] == 'X'){
                    Wall_List.push_back(Up);
                }
            }
            // RIGHT wall
            if(wall.Y+1 < 21) {
                Cell Right;
                Right.X = wall.X;
                Right.Y = wall.Y + 1;
                if(maze[Right.X][Right.Y] == 'X'){
                    Wall_List.push_back(Right);
                }
            }
            // DOWN wall
            if(wall.X+1 < 21) {
                Cell Down;
                Down.X = wall.X+1;
                Down.Y = wall.Y;
                if(maze[Down.X][Down.Y] == 'X'){
                    Wall_List.push_back(Down);
                }
            }
            // LEFT wall
            if(wall.Y-1 > -1) {
                Cell Left;
                Left.X = wall.X;
                Left.Y = wall.Y-1;
                if(maze[Left.X][Left.Y] == 'X'){
                    Wall_List.push_back(Left);
                }
            }
        }

        Wall_List.erase(std::remove(Wall_List.begin(), Wall_List.end(), wall), Wall_List.end());

    }

    x[aaa] = -1;
    y[aaa] = -1;

}
