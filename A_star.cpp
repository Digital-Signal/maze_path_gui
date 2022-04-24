#include <iostream>
#include <stack>
#include <vector>
#include <map>
#include <stdlib.h>
#include <windows.h>
#include <algorithm>
#include <cmath>
#include "A_star.h"

using namespace std;

A_STAR::A_STAR() {

}

void A_STAR::solve_Maze(char maze[21][21]) {

    int X_s;
    int Y_s;
    int X_e;
    int Y_e;

    for(int i = 0; i < 21; i++) {
        for(int j = 0; j < 21; j++) {

            if (maze[i][j] == 'S') {
                X_s = i;
                Y_s = j;
            }

            if (maze[i][j] == 'E') {
                X_e = i;
                Y_e = j;
            }
        }
    }

    vector<Node> open;
    vector<Node> closed;
    vector<Node> neighbour;
    map<Node, Node> child_parent;

    Node n;
    n.X = X_s;
    n.Y = Y_s;
    n.f = 0;

    open.push_back(n);

    while(!open.empty()) {

        Node current = open.front();
        int min_f = open.front().f;

        for(Node temp : open) {
            if(temp.f < min_f) {
                min_f = temp.f;
                current = temp;
            }
        }

        open.erase(std::remove(open.begin(), open.end(), current), open.end());
        closed.push_back(current);

        for (int i = 0; i < 21; i++){
            for (int j = 0; j < 21; j++){
                if(maze[i][j] != 'X')
                    maze[i][j] = ' ';
            }
        }

        for(Node z: closed) {
            maze[z.X][z.Y] = '#';

            for(int i = 0; i < 20000; i++) {
                if(a[i] == z.X && b[i] == z.Y) {
                    goto after;
                }
            }
            a[bad] = z.X;
            b[bad] = z.Y;
            bad++;

            after:
                continue;

        }

        if(current.X == X_e && current.Y == Y_e) {
            break;
        }

        neighbour.clear();
        //up
        if(current.X-1 > -1) {
            if(maze[current.X - 1][current.Y] != 'X') {
                Node temp;
                temp.X = current.X - 1;
                temp.Y = current.Y;
                neighbour.push_back(temp);
            }
        }
        //right
        if(current.Y+1 < 21) {
            if(maze[current.X][current.Y+1] != 'X') {
                Node temp;
                temp.X = current.X;
                temp.Y = current.Y + 1;
                neighbour.push_back(temp);
            }
        }
        //down
        if(current.X+1 < 21) {
            if(maze[current.X + 1][current.Y] != 'X') {
                Node temp;
                temp.X = current.X + 1;
                temp.Y = current.Y;
                neighbour.push_back(temp);
            }
        }
        //left
        if(current.Y-1 > -1) {
            if(maze[current.X][current.Y-1] != 'X') {
                Node temp;
                temp.X = current.X;
                temp.Y = current.Y-1;
                neighbour.push_back(temp);
            }
        }
        //up right
        if(current.X-1 > -1 && current.Y+1 < 21) {
            if(maze[current.X - 1][current.Y+1] != 'X') {
                Node temp;
                temp.X = current.X - 1;
                temp.Y = current.Y + 1;
                neighbour.push_back(temp);
            }
        }
        //up left
        if(current.X-1 > -1 && current.Y-1 > -1) {
            if(maze[current.X - 1][current.Y -1] != 'X') {
                Node temp;
                temp.X = current.X - 1;
                temp.Y = current.Y -1;
                neighbour.push_back(temp);
            }
        }
        //down right
        if(current.X+1 < 21 && current.Y+1 < 21) {
            if(maze[current.X + 1][current.Y + 1] != 'X') {
                Node temp;
                temp.X = current.X + 1;
                temp.Y = current.Y + 1;
                neighbour.push_back(temp);
            }
        }
        //down left
        if(current.X+1 < 21 && current.Y-1 > -1) {
            if(maze[current.X + 1][current.Y-1] != 'X') {
                Node temp;
                temp.X = current.X + 1;
                temp.Y = current.Y - 1;
                neighbour.push_back(temp);
            }
        }

        for(Node n: neighbour) {

            if(std::find(closed.begin(), closed.end(), n) != closed.end())
                continue;

            n.g = current.g + sqrt(pow(current.X-n.X, 2) + pow(current.Y-n.Y,2))*10;
            n.h = sqrt(pow(X_e-n.X, 2) + pow(Y_e-n.Y,2))*10;
            n.f = n.g + n.h;

            for(Node temp : open) {
                if(temp.X == n.X && temp.Y == n.Y) {
                    if(n.g > temp.g) {
                        continue;
                    }
                }
            }

            open.push_back(n);
            child_parent.insert(std::map<Node, Node>::value_type(n, current));
        }
    }

    Node path;
    path.X = X_e;
    path.Y = Y_e;
    maze[path.X][path.Y] = '+';

    xg[good] = path.X;
    yg[good] = path.Y;
    good++;

    while( !(path.X == X_s && path.Y == Y_s) ) {

        map<Node, Node>::iterator itr;
        for(itr = child_parent.begin(); itr != child_parent.end(); ++itr) {
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
