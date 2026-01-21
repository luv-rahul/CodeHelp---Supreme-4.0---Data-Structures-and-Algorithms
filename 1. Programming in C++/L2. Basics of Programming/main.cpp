#include <iostream>
using namespace std;

int main()
{
    //* First Program
    cout << "Hello, C++" << endl;

    //* Variables & Datatypes
    int age = 23;
    float f = 3.14;
    double d = 4.13289;
    bool babbar = 1;
    char grade = '+';

    //* Operators
    int a = 10;
    int b = 5;
    /* Arithmetic */
    cout << (a + b) << endl;
    cout << (a - b) << endl;
    cout << (a * b) << endl;
    cout << (a / b) << endl;
    cout << (a % b) << endl;

    /*Assignment*/
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;

    return 0;
}