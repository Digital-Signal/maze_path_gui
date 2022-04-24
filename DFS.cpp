#include <iostream>
#include <stack>
#include <vector>
#include <map>
#include <stdlib.h>
#include <windows.h>
#include "DFS.h"

using namespace std;

DFS::DFS(char maze[21][21]) {

    for(int i = 0; i < 21; i++) {
        for(int j = 0; j < 21; j++) {

            if (maze[i][j] == 'S') {
                start.X = i;
                start.Y = j;
            }

            if (maze[i][j] == 'E') {
                ending.X = i;
                ending.Y = j;
            }

            if (maze[i][j] != 'X') {

                ++num_of_vertices;

                XY xy;
                xy.X = i;
                xy.Y = j;

                vector<XY> neighbours;

                //UP
                if(i-1 > -1)
                if(maze[i-1][j] != 'X') {
                    XY up;
                    up.X = i-1;
                    up.Y = j;
                    neighbours.push_back(up);
                }

                //RIGHT
                if(j+1 < 21)
                if(maze[i][j+1] != 'X') {
                    XY right;
                    right.X = i;
                    right.Y = j+1;
                    neighbours.push_back(right);
                }

                //DOWN
                if(i+1 < 21)
                if(maze[i+1][j] != 'X') {
                    XY down;
                    down.X = i+1;
                    down.Y = j;
                    neighbours.push_back(down);
                }

                //LEFT
                if(j-1 > -1)
                if(maze[i][j-1] != 'X') {
                    XY left;
                    left.X = i;
                    left.Y = j-1;
                    neighbours.push_back(left);
                }
                adjacency_list.insert(std::map<XY, vector<XY>>::value_type(xy, neighbours));

            }
        }
    }

}

void DFS::solveMaze(char maze[21][21]) {


    current = start;
    Stack.push(current);
    Visited.push_back(current);
    maze[current.X][current.Y] = '+';

    while(true) {

        if(current.X == ending.X && current.Y == ending.Y) {
            break;
        }

        GoBack = true;

        map<XY, vector<XY>>::iterator itr;
        for(itr = adjacency_list.begin(); itr != adjacency_list.end(); ++itr) {
            if(itr->first.X == current.X && itr->first.Y == current.Y) {
                for (auto i: itr->second) {
                    if(NodeVisited(i.X, i.Y) == false) {
                        maze[i.X][i.Y] = '+';

                        a[bad] = i.X;
                        b[bad] = i.Y;
                        bad++;

                        b1[backward] = -2;
                        b2[backward] = -2;
                        backward++;

                        current.X = i.X;
                        current.Y = i.Y;
                        Stack.push(current);
                        Visited.push_back(current);
                        GoBack = false;
                        goto end;
                    }
                }
                goto end;

            }

        }
        end:
        if(GoBack == true) {
            maze[(Stack.top()).X][(Stack.top()).Y] = '#';

            a[bad] = (Stack.top()).X;
            b[bad] = (Stack.top()).Y;
            bad++;

            b1[backward] = (Stack.top()).X;
            b2[backward] = (Stack.top()).Y;
            backward++;

            Stack.pop();
            current.X = (Stack.top()).X;
            current.Y = (Stack.top()).Y;
        }

    }

}

void DFS::printSolution(char maze[21][21]) {

    while(Stack.empty() == false) {
        int x = Stack.top().X;
        int y = Stack.top().Y;
        maze[x][y] = '+';

        xg[good] = x;
        yg[good] = y;
        good++;

        Stack.pop();
    }

}

bool DFS::NodeVisited(int x, int y) {

    for(auto &temp : Visited) {
        if(temp.X == x && temp.Y == y) {
            return true;
        }
    }
    return false;

}
