#include <iostream>
#include <vector>
using namespace std;

/*1572. Matrix Diagonal Sum*/
int diagonalSum(vector<vector<int>> &mat)
{
    int n = mat.size();

    /*Primary Diagonal Sum*/
    int primarySum = 0;
    for (int i = 0; i < n; i++)
    {
        primarySum = primarySum + mat[i][i];
    }

    /*Secondary Diagonal Sum*/
    int i = 0;
    int j = n - 1;
    int secondarySum = 0;
    while (i < n && j >= 0)
    {
        secondarySum = secondarySum + mat[i][j];
        i++;
        j--;
    }

    if (n & 1)
    {
        int mid = n / 2;
        int totalSum = primarySum + secondarySum - mat[mid][mid];
        return totalSum;
    }
    else
    {
        int totalSum = primarySum + secondarySum;
        return totalSum;
    }
}

/*867. Transpose Matrix*/
vector<vector<int>> transpose(vector<vector<int>> &matrix)
{
    int rowSize = matrix.size();
    int columnSize = matrix[0].size();

    vector<vector<int>> ans(columnSize, vector<int>(rowSize, 0));

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            ans[j][i] = matrix[i][j];
        }
    }
    return ans;
}

int main()
{

    return 0;
}