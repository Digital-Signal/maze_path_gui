#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
#include <set>
#include <algorithm>
#include <random>
#include <time.h>
#include "Randomized_Kruskal_s_Algorithm.h"

using namespace std;

RANDOMIZED_KRUSKAL_S_ALGORITHM::RANDOMIZED_KRUSKAL_S_ALGORITHM() {

}

void RANDOMIZED_KRUSKAL_S_ALGORITHM::GenerateMaze(char maze[21][21], int x[20000], int y[20000]) {

    int aaa = 0;

    for(int i = 0; i < 21; i++) {
        for(int j = 0; j < 21; j++) {
            if(i%2==1 || j%2==1) {
                Cell wall;
                wall.X = i;
                wall.Y = j;

                Wall_List.push_back(wall);
            }
            if(i%2==0 && j%2==0) {
                set<Cell> s_cell;
                Cell cell;
                cell.X = i;
                cell.Y = j;
                s_cell.insert(cell);

                set_cell.push_back(s_cell);
            }
        }
    }

    srand((time(NULL)));
    random_shuffle(Wall_List.begin(), Wall_List.end());
    while(set_cell.size() != 1)
    for (auto & w : Wall_List) {

        // Up and Down cells
        if(w.X - 1 > -1 && w.X + 1 < 21 && w.X % 2 == 1 && w.Y % 2 == 0) {
            set<Cell> one;
            set<Cell> two;

            for (auto & s : set_cell) {
                for (auto & c : s) {
                    if(c.X == w.X - 1 && c.Y == w.Y) {
                        one.insert(s.begin(), s.end());
                        goto second;
                    }
                }
            }
            second:
            for (auto & s : set_cell) {
                for (auto & c : s) {
                    if(c.X == w.X + 1 && c.Y == w.Y) {
                        two.insert(s.begin(), s.end());
                        goto ending;
                    }
                }
            }
            ending:

            if(one != two && !one.empty() && !two.empty()) {

                maze[w.X][w.Y] = ' ';
                maze[w.X - 1][w.Y] = ' ';
                maze[w.X + 1][w.Y] = ' ';

                x[aaa] = w.X;
                y[aaa] = w.Y;
                aaa++;
                x[aaa] = w.X - 1;
                y[aaa] = w.Y;
                aaa++;
                x[aaa] = w.X + 1;
                y[aaa] = w.Y;
                aaa++;

                Wall_List.erase(std::remove(Wall_List.begin(), Wall_List.end(), w), Wall_List.end());
                set_cell.erase(std::remove(set_cell.begin(), set_cell.end(), one), set_cell.end());
                set_cell.erase(std::remove(set_cell.begin(), set_cell.end(), two), set_cell.end());
                set<Cell> new_set;

                set_union(std::begin(one), std::end(one), std::begin(two), std::end(two), std::inserter(new_set, std::begin(new_set)));
                set_cell.push_back(new_set);

                goto finish;
            }


        }

        // Left and Right cells
        else if(w.Y - 1 > -1 && w.Y + 1 < 21 && w.X % 2 == 0 && w.Y % 2 == 1) {
            set<Cell> one;
            set<Cell> two;

            for (auto & s : set_cell) {
                for (auto & c : s) {
                    if(c.X == w.X && c.Y == w.Y-1) {
                        one.insert(s.begin(), s.end());
                        goto second1;
                    }
                }
            }
            second1:
            for (auto & s : set_cell) {
                for (auto & c : s) {
                    if(c.X == w.X && c.Y == w.Y+1) {
                        two.insert(s.begin(), s.end());
                        goto ending1;
                    }
                }
            }
            ending1:

            if(one != two && !one.empty() && !two.empty()) {

                maze[w.X][w.Y] = ' ';
                maze[w.X][w.Y-1] = ' ';
                maze[w.X][w.Y+1] = ' ';

                x[aaa] = w.X;
                y[aaa] = w.Y;
                aaa++;

                x[aaa] = w.X;
                y[aaa] = w.Y-1;
                aaa++;

                x[aaa] = w.X;
                y[aaa] = w.Y+1;
                aaa++;

                Wall_List.erase(std::remove(Wall_List.begin(), Wall_List.end(), w), Wall_List.end());
                set_cell.erase(std::remove(set_cell.begin(), set_cell.end(), one), set_cell.end());
                set_cell.erase(std::remove(set_cell.begin(), set_cell.end(), two), set_cell.end());
                set<Cell> new_set;

                set_union(std::begin(one), std::end(one), std::begin(two), std::end(two), std::inserter(new_set, std::begin(new_set)));
                set_cell.push_back(new_set);

                goto finish;
            }

        }

        finish:
        int x = 0;
    }

    x[aaa] = -1;
    y[aaa] = -1;

}


