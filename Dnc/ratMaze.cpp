#include <bits/stdc++.h>

using namespace std;

bool isSafe(int x, int y, int maze[][3], int row, int col, vector<vector<bool>> &visited)
{
    if (((x >= 0 && x < row) && (y >= 0 && y < col)) && (maze[x][y] == 1) && (visited[x][y] == false))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solveMaze(int maze[][3], int row, int col, int x, int y, vector<vector<bool>> &visited, vector<string> &path, string output)
{
    if (x == row - 1 && y == col - 1)
    {
        // answer found
        path.push_back(output);
        return;
    }

    // Down Direction -> x+1, y

    if (isSafe(x + 1, y, maze, row, col, visited))
    {
        visited[x + 1][y] = true;
        solveMaze(maze, row, col, x + 1, y, visited, path, output + 'D');
        // backtrack
        visited[x + 1][y] = false;
    }

    // Left Direction  x, y-1
    if (isSafe(x, y - 1, maze, row, col, visited))
    {
        visited[x][y - 1] = true;
        solveMaze(maze, row, col, x, y - 1, visited, path, output + 'L');
        // backtrack
        visited[x][y - 1] = false;
    }

    // right x, y+1
    if (isSafe(x, y + 1, maze, row, col, visited))
    {
        visited[x][y + 1] = true;
        solveMaze(maze, row, col, x, y + 1, visited, path, output + 'R');
        // backtrack
        visited[x][y + 1] = false;
    }

    // up x-1, y
    if (isSafe(x - 1, y, maze, row, col, visited))
    {
        visited[x - 1][y] = true;
        solveMaze(maze, row, col, x - 1, y, visited, path, output + 'U');
        // backtrack
        visited[x - 1][y] = false;
    }
}

int main()
{
    int maze[3][3] = {{1, 0, 0}, {1, 1, 0}, {1, 1, 1}};

    if (maze[0][0] == 0)
    {
        cout << "No path exist.";
        return 0;
    }

    int row = 3;
    int col = 3;
    vector<vector<bool>> visited(row, vector<bool>(col, false));

    // source ki value true
    visited[0][0] = true;
    vector<string> path;

    string output = "";

    solveMaze(maze, row, col, 0, 0, visited, path, output);

    cout << "Printing the path: ";
    for (auto i : path)
    {
        cout << i << " ";
    }


    if (path.size() == 0)
    {
        cout << "No path exist.";
        return 0;
    }

    return 0;
}
