#include <iostream>
using namespace std;

/*Hollow Pyramid*/
void printHollowPyramid(int n)
{
    for (int row = 1; row <= n; row++)
    {
        // Space
        for (int space = 1; space <= n - row; space++)
        {
            cout << "  ";
        }
        // First & Last Row
        if (row == 1 || row == n)
        {
            for (int star = 1; star <= (2 * row - 1); star++)
            {
                cout << "* ";
            }
        }
        // Middle Rows
        else
        {
            cout << "* ";
            for (int space = 1; space <= (2 * row - 1) - 2; space++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}

/*Solid Diamond*/
void upperHalf(int n)
{
    for (int row = 1; row <= n - 1; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (int star = 1; star <= (2 * row - 1); star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void lowerHalf(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= row - 1; space++)
        {
            cout << " ";
        }
        for (int star = 1; star <= (2 * n) - (2 * row - 1); star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printSolidDiamond(int n)
{
    upperHalf(n);
    lowerHalf(n);
}

/*Hollow Diamond*/
void upperHalfHollow(int n)
{
    for (int row = 1; row <= n - 1; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        if (row == 1)
        {
            cout << "*";
        }
        else
        {
            cout << "*";
            for (int space = 1; space <= (2 * row - 1) - 2; space++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}

void lowerHalfHollow(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= row - 1; space++)
        {
            cout << " ";
        }
        if (row == n)
        {
            cout << "*";
        }
        else
        {
            cout << "*";
            for (int space = 1; space <= (2 * n) - (2 * row - 1) - 2; space++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}

void printHollowDiamond(int n)
{
    upperHalfHollow(n);
    lowerHalfHollow(n);
}

/*Rhombus*/
void printRhombus(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (int star = 1; star <= n; star++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*Hour Glass*/
void upperHalfHourGlass(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int space = 1; space <= row; space++)
        {
            cout << " ";
        }
        for (int star = 1; star <= (2 * n) - (2 * row); star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void lowerHalfHourGlass(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (int star = 1; star <= 2 * row; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printHourglass(int n)
{
    upperHalfHourGlass(n);
    lowerHalfHourGlass(n);
}

/*Zig-Zag*/

void printPattern(int N, char C)
{
    for (int row = 0; row <= N / 2; row++)
    {
        for (int space = 0; space < row; space++)
        {
            cout << " ";
        }

        for (int col = 1; col <= N - (2 * row); col++)
        {
            cout << C;
        }
        cout << endl;
    }

    for (int row = 1; row <= N / 2; row++)
    {
        for (int space = 1; space <= N / 2 - row; space++)
        {
            cout << " ";
        }

        for (int col = 1; col <= (2 * row + 1); col++)
        {
            cout << C;
        }
        cout << endl;
    }
}

int main()
{
    printPattern(7, '@');
    return 0;
}