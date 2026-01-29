#include <iostream>
using namespace std;

int factorial(int n)
{
    // Base Case
    if (n == 1)
    {
        return 1;
    }

    // Processing + Recursive Call
    int factorialAns = n * factorial(n - 1);
    return factorialAns;
}

int power(int a, int b)
{
    // Base Case
    if (b == 0)
    {
        return 1;
    }

    // Processing + Recursive Call
    int ans = a * power(a, b - 1);
    return ans;
}

void printCounting(int n)
{
    // Base Case
    if (n == 0)
    {
        return;
    }

    // Recursive Call
    printCounting(n - 1);

    // Processing
    cout << n << " ";
}

void printName(int count)
{

    // Base Case
    if (count == 0)
    {
        return;
    }

    cout << "Rahul" << endl;
    printName(count - 1);
}

int fibonacciNthTerm(int n)
{
    // Base Case
    if (n == 0 || n == 1)
    {
        return n;
    }

    // Processing + Recursive Call
    int nthTerm = fibonacciNthTerm(n - 1) + fibonacciNthTerm(n - 2);
    return nthTerm;
}

int main()
{
    //* Factorial of a Number
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;

    //* Power
    int a;
    int b;
    cout << "Enter number: ";
    cin >> a;
    cout << "Enter power: ";
    cin >> b;
    cout << "Ans of " << a << "^" << b << " is: " << power(a, b) << endl;

    //* Counting
    int n;
    cout << "Enter number: ";
    cin >> n;
    printCounting(n);

    //* Print Name
    int n;
    cout << "Enter input: ";
    cin >> n;
    printName(n);

    //* Fibonacci Term
    int n;
    cout << "Enter term: ";
    cin >> n;
    cout << n << "th " << "term is: " << fibonacciNthTerm(n) << endl;
    return 0;
}