#include <bits/stdc++.h>
using namespace std;

bool path(int x1, int x2, int y1, int y2, int maze[8][8], bool visited[8][8])
{
    if (x1 == x2 && y1 == y2)
        return true;
    if (x1 > 7 || y1 > 7 || x2 > 7 || y2 > 7 || x1 < 0 || y1 < 0)
        return false;
    if (maze[x1][y1] == 0)
        return false;
    if (visited[x1][y1] == true)
        return false;
    visited[x1][y1] = true;
    if (path(x1 + 1, y1, x2, y2, maze, visited))
        return true;
    if (path(x1 - 1, y1, x2, y2, maze, visited))
        return true;
    if (path(x1, y1 + 1, x2, y2, maze, visited))
        return true;
    if (path(x1, y1 - 1, x2, y2, maze, visited))
        return true;
}

int main()
{
    int maze[8][8] = {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 1, 1, 1, 1, 0},
        {0, 1, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 1, 1, 0},
        {0, 1, 0, 0, 0, 0, 1, 0},
        {0, 1, 0, 0, 1, 0, 1, 0},
        {0, 1, 1, 1, 1, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0}};

    bool visited[8][8]{
        {false, false, false, false, false, false, false, false},
        {false, false, false, false, false, false, false, false},
        {false, false, false, false, false, false, false, false},
        {false, false, false, false, false, false, false, false},
        {false, false, false, false, false, false, false, false},
        {false, false, false, false, false, false, false, false},
        {false, false, false, false, false, false, false, false},
        {false, false, false, false, false, false, false, false}};

    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2 ;
    bool isPossible = path(x1, y1, x2, y2, maze, visited);
    if (isPossible)
        cout << 1;
    else
        cout << 0;
}