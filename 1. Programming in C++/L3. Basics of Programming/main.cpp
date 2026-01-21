#include <iostream>
using namespace std;

int main()
{
    //* Conditionals
    /*if-else*/
    int age = 16;
    if (age > 18)
    {
        cout << "Age is greater than 18" << endl;
    }
    else
    {
        cout << "Age is less than 18" << endl;
    }

    /*if-elseif-else*/
    int percentage = 75;
    if (percentage >= 90)
    {
        cout << "A" << endl;
    }
    else if (percentage >= 80 && percentage < 90)
    {
        cout << "B" << endl;
    }
    else if (percentage >= 70 && percentage < 80)
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "F" << endl;
    }

    int index = 7;
    if (index == 1)
    {
        cout << "Monday" << endl;
    }
    else if (index == 2)
    {
        cout << "Tuesday" << endl;
    }
    else if (index == 3)
    {
        cout << "Wednesday" << endl;
    }
    else if (index == 4)
    {
        cout << "Thurday" << endl;
    }
    else if (index == 5)
    {
        cout << "Friday" << endl;
    }
    else if (index == 6)
    {
        cout << "Saturday" << endl;
    }
    else if (index == 7)
    {
        cout << "Sunday" << endl;
    }
    else
    {
        cout << "Invalid Index" << endl;
    }

    /*Nested if*/
    int age = 20;
    char gender = 'M';
    if (age == 20)
    {
        if (gender == 'F')
        {
            cout << "You're a girl of 20." << endl;
        }
        else
        {
            cout << "You're a boy of 20." << endl;
        }
    }

    /*Ternary Operator*/
    int age = 16;
    int value = (age > 18) ? 50 : 100;
    cout << value << endl;

    /*Switch*/
    int index = 3;
    switch (index)
    {
    case 1:
        cout << "Monday" << endl;
        break;

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wednesday" << endl;
        break;

    case 4:
        cout << "Thursday" << endl;
        break;

    case 5:
        cout << "Friday" << endl;
        break;

    case 6:
        cout << "Saturday" << endl;
        break;

    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid Index" << endl;
        break;
    }
    return 0;
}