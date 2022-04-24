#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <stdlib.h>
#include <windows.h>
#include <algorithm>
#include "BFS.h"

using namespace std;

BFS::BFS(char maze[21][21]) {

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

void BFS::solve_Maze(char maze[21][21]) {

    current = start;
    Queue.push(current);
    Visited.push_back(current);

    while(!Queue.empty()) {
        current = Queue.front();
        Queue.pop();

        maze[current.X][current.Y] = '#';

        a[bad] = current.X;
        b[bad] = current.Y;
        bad++;

        if(current.X == ending.X && current.Y == ending.Y) {
            break;
        }

        map<XY, vector<XY>>::iterator itr;
        for(itr = adjacency_list.begin(); itr != adjacency_list.end(); ++itr) {
            if(itr->first.X == current.X && itr->first.Y == current.Y) {
                for (auto i: itr->second) {
                    if(NodeVisited(i.X, i.Y) == false) {
                        Queue.push(i);
                        Parent.insert(std::map<XY, XY>::value_type(i, current));
                        Visited.push_back(i);
                    }
                }
            }
        }
    }

}

void BFS::printSolution(char maze[21][21]) {

    XY path = ending;
    maze[path.X][path.Y] = '+';

    xg[good] = path.X;
    yg[good] = path.Y;
    good++;

    while( !(path.X == start.X && path.Y == start.Y) ) {

        map<XY, XY>::iterator itr;
        for(itr = Parent.begin(); itr != Parent.end(); ++itr) {
            if(itr->first.X == path.X && itr->first.Y == path.Y) {
                path = itr->second;
                maze[path.X][path.Y] = '+';

                xg[good] = path.X;
                yg[good] = path.Y;
                good++;

                break;
            }
        }
    }
}

bool BFS::NodeVisited(int x, int y) {

    for(auto &temp : Visited) {
        if(temp.X == x && temp.Y == y) {
            return true;
        }
    }
    return false;

}


