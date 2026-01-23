#include <iostream>
#include <limits.h>
using namespace std;

int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    return sum;
}

int smallestDigit(int num)
{
    int minAns = INT_MAX;
    while (num > 0)
    {
        int digit = num % 10;
        minAns = min(minAns, digit);
        num = num / 10;
    }
    return minAns;
}

string checkEvenOdd(int num)
{
    if ((num % 2) == 0)
    {
        return "Even";
    }
    else
    {
        return "Odd";
    }
}

string checkEvenOdd(int num)
{
    if (num & 1)
    {
        return "Odd";
    }
    else
    {
        return "Even";
    }
}

int reverseNumber(int num)
{
    int reverse = 0;
    while (num > 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    return reverse;
}

string isPalindrome(int num)
{
    int ans = reverseNumber(num);
    if (num == ans)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{

    return 0;
}