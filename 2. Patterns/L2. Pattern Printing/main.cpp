#include <iostream>
using namespace std;

void printSquare(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printSolidRectangle(int n, int m)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= m; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printRightAngleTriangle(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printHollowSquare(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            // First & Last Row
            if (row == 1 || row == n)
            {
                cout << "* ";
            }
            // Middle Rows
            else
            {
                if (col == 1 || col == n)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}

void printHollowRectangle(int n, int m)
{
    for (int row = 1; row <= n; row++)
    {
        // First & Last Row
        if (row == 1 || row == n)
        {
            for (int col = 1; col <= m; col++)
            {
                cout << "* ";
            }
        }
        // Middle Rows
        else
        {
            cout << "* ";
            for (int col = 1; col <= m - 2; col++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}

void printHollowRightAngleTriangle(int n)
{
    for (int row = 1; row <= n; row++)
    {
        // First, Second & Lat Row
        if (row == 1 || row == 2 || row == n)
        {
            for (int col = 1; col <= row; col++)
            {
                cout << "* ";
            }
        }
        // Middle Rows
        else
        {
            cout << "* ";
            for (int col = 1; col <= row - 2; col++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}

void printInvertedRightAngleTriangle(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printSolidPyramid(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << "  ";
        }
        for (int star = 1; star <= (2 * row - 1); star++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printInvertedSolidPyramid(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= row - 1; space++)
        {
            cout << "  ";
        }
        for (int star = 1; star <= (2 * n) - (2 * row - 1); star++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printNumberTriangle(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << row;
        }
        cout << endl;
    }
}

void printFloydsTriangle(int n)
{
    int count = 1;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

int main()
{

    return 0;
}