#include <iostream>
using namespace std;

void printAllPermuatations(string &s, int i)
{
    // Base Case
    if (i >= s.length())
    {
        cout << s << endl;
        return;
    }

    for (int j = i; j < s.length(); j++)
    {
        // Recursion
        swap(s[i], s[j]);
        printAllPermuatations(s, i + 1);

        // Backtracking
        swap(s[i], s[j]);
    }
}

bool isSafe(char maze[][3], int row, int col, bool visited[][3], int newX, int newY)
{
    // Safe = Inside Bound + Valid Cell (Unblocked Cell) + Not Visited
    if ((newX >= 0 && newX < row) && (newY >= 0 && newY < col) && (maze[newX][newY] == '.' && visited[newX][newY] == false))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(char maze[][3], int row, int col, int srcX, int srcY, int destX, int destY, string output, bool visited[][3])
{
    // If current position = destination position -> Answer Ready
    // Base Case
    if (srcX == destX && srcY == destY)
    {
        cout << output << endl;
        return;
    }

    // 1 Case main solve karunga, baki recursion
    // 1 case -> 1 movement -> Up or Down or Left or Right

    // UP
    int newX = srcX - 1;
    int newY = srcY;
    if (isSafe(maze, row, col, visited, newX, newY))
    {
        visited[newX][newY] = true;
        solve(maze, row, col, newX, newY, destX, destY, output + 'U', visited);
        visited[newX][newY] = false;
    }

    // DOWN
    newX = srcX + 1;
    newY = srcY;
    if (isSafe(maze, row, col, visited, newX, newY))
    {
        visited[newX][newY] = true;
        solve(maze, row, col, newX, newY, destX, destY, output + 'D', visited);
        visited[newX][newY] = false;
    }

    // LEFT
    newX = srcX;
    newY = srcY - 1;
    if (isSafe(maze, row, col, visited, newX, newY))
    {
        visited[newX][newY] = true;
        solve(maze, row, col, newX, newY, destX, destY, output + 'L', visited);
        visited[newX][newY] = false;
    }

    // RIGHT
    newX = srcX;
    newY = srcY + 1;
    if (isSafe(maze, row, col, visited, newX, newY))
    {
        visited[newX][newY] = true;
        solve(maze, row, col, newX, newY, destX, destY, output + 'R', visited);
        visited[newX][newY] = false;
    }
}

int main()
{
    //* Print All Permutations
    // string s = "abc";
    // int i = 0;
    // printAllPermuatations(s, i);

    // * Rat in a maze
    // '.' means rat can move here & '-'means rat cna't move here
    char arr[3][3] = {
        {'.', '.', '.'},
        {'.', '-', '-'},
        {'.', '.', '.'},
    };

    int row = 3;
    int col = 3;
    int srcX = 0;
    int srcY = 0;
    int destX = row - 1;
    int destY = col - 1;

    // src = 0,0 and destination = 2,2
    string output = "";

    // visited array
    bool visited[3][3] = {
        {true, false, false},
        {false, false, false},
        {false, false, false},
    };

    solve(arr, row, col, srcX, srcY, destX, destY, output, visited);
    return 0;
}