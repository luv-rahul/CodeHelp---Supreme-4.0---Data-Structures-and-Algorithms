#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

/*Naive Approach*/
bool isPrime(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if ((n % i) == 0)
        {
            return false;
        }
    }
    return true;
}

/*Square Root Approach*/
bool isPrime(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }

    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; i++)
    {
        if ((n % i) == 0)
        {
            return false;
        }
    }
    return true;
}

int countPrimes(int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    return count;
}

/*Sieve of Eratosthenes*/
int countPrimes(int n)
{
    int count = 0;
    if (n == 0 || n == 1)
    {
        return 0;
    }
    vector<bool> v(n, true);
    v[0] = v[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (v[i] == true)
        {
            count++;
            int j = 2 * i;
            while (j < n)
            {
                v[j] = false;
                j = j + i;
            }
        }
    }
    return count;
}

/*GCD*/
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    return (a == 0) ? b : a;
}

/*Slow Exponentiation*/
int slowExponentiation(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int fastExponentiation(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = ans * a;
        }
        a = a * a;
        b = b >> 1;
    }
    return ans;
}

int main()
{
    cout << slowExponentiation(2, 5) << endl;
    cout << fastExponentiation(2, 5) << endl;
    return 0;
}