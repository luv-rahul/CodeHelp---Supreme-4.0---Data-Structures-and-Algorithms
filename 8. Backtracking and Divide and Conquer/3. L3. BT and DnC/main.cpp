#include <iostream>
#include <vector>
using namespace std;

//* N Queens
bool isSafe(int row, int col, vector<vector<char>> &board)
{
    int n = board.size();

    // leftHorizontal
    for (int i = 0; i < col; i++)
    {
        if (board[row][i] == 'Q')
            return false;
    }

    // leftUpperDiagonal
    int i = row - 1;
    int j = col - 1;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 'Q')
            return false;
        i--;
        j--;
    }

    // leftLowerDiagonal
    int x = row + 1;
    int y = col - 1;
    while (x < n && y >= 0)
    {
        if (board[x][y] == 'Q')
            return false;
        x++;
        y--;
    }

    return true;
}

void storeSolution(vector<vector<char>> &board, vector<vector<string>> &ans, int n)
{
    vector<string> temp;
    for (int row = 0; row < n; row++)
    {
        string output = "";
        for (int col = 0; col < n; col++)
        {
            char ch = board[row][col];
            output = output + ch;
        }
        temp.push_back(output);
    }
    ans.push_back(temp);
}

void solve(vector<vector<char>> &board, vector<vector<string>> &ans, int n, int col)
{
    // Base Case
    if (col >= n)
    {
        // One solution ready
        storeSolution(board, ans, n);
        return;
    }

    // 1 Case main solve karunga baki recursion
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board))
        {
            board[row][col] = 'Q';
            // Recursion
            solve(board, ans, n, col + 1);
            // BackTacking
            board[row][col] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> ans;
    vector<vector<char>> board(n, vector<char>(n, '.'));
    int col = 0;
    solve(board, ans, n, col);
    return ans;
}

int main()
{

    return 0;
}