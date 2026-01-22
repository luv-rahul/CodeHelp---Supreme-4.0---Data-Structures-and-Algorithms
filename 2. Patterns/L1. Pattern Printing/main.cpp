#include <iostream>
using namespace std;

//* Global Variable
// int a = 5;

// Function Defination
void print()
{
    cout << "Hello, Rahul" << endl;
}

void checkEvenOdd(int num)
{
    if ((num % 2) == 0)
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Odd Number" << endl;
    }
}

void checkPositiveNegativeZero(int num)
{
    if (num > 0)
    {
        cout << "Positive" << endl;
    }
    else if (num < 0)
    {
        cout << "Negative" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }
}

int printAverage(int a, int b, int c)
{
    int avg = (a + b + c) / 3;
    return avg;
}

void printCounting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

void printTable(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << num * i << " ";
    }
    cout << endl;
}

void convertIntoUpperCase(char ch)
{
    ch = ch - 'a' + 'A';
    cout << "UpperCase: " << ch << endl;
}

void convertIntoLowerCase(char ch)
{
    ch = ch - 'A' + 'a';
    cout << "LowerCase: " << ch << endl;
}

int main()
{
    //* Local Variable
    // int a = 6;
    // cout << a << endl;

    //* Blocked Scope Variable
    // {
    //     int a = 7;
    //     cout << a << endl;
    // }

    //* Functions
    print(); // Function Call

    checkEvenOdd(16);

    checkPositiveNegativeZero(0);

    int avg = printAverage(10, 20, 30);
    cout << "Average: " << avg << endl;

    printCounting(10);

    printTable(2);

    convertIntoUpperCase('r');

    convertIntoLowerCase('R');
    return 0;
}