#include <iostream>
#include <limits.h>
using namespace std;

void printArray(int arr[], int size, int index)
{
    // Base Case
    if (index == size)
    {
        return;
    }

    // Processing
    cout << arr[index] << " ";

    // Recursive Call
    printArray(arr, size, index + 1);
}

void printReverseArray(int arr[], int size)
{
    // Base Case
    if (size == 0)
    {
        return;
    }

    // Processing
    cout << arr[size - 1] << " ";

    // Recursive Call
    printReverseArray(arr, size - 1);
}

int searchInArray(int arr[], int size, int index, int target)
{
    // Base Case
    if (index == size)
    {
        return -1;
    }

    if (arr[index] == target)
    {
        return index;
    }

    searchInArray(arr, size, index + 1, target);
}

void findMinimumElement(int arr[], int size, int index, int &minAns)
{
    // Base Case
    if (index == size)
    {
        return;
    }

    // Processing
    minAns = min(minAns, arr[index]);

    // Recursive Call
    findMinimumElement(arr, size, index + 1, minAns);
}

void findMaximumElement(int arr[], int size, int index, int &maxAns)
{
    // Base Case
    if (index == size)
    {
        return;
    }

    // Processing
    maxAns = max(maxAns, arr[index]);

    // Recursive Call
    findMaximumElement(arr, size, index + 1, maxAns);
}

void printOddNumber(int arr[], int size, int index)
{
    // Base Case
    if (index == size)
    {
        return;
    }

    // Processing
    if (arr[index] & 1)
    {
        cout << arr[index] << " ";
    }

    // Recursive Call
    printOddNumber(arr, size, index + 1);
}

void printEvenNumber(int arr[], int size, int index)
{
    // Base Case
    if (index == size)
    {
        return;
    }

    // Processing
    if (!(arr[index] & 1))
    {
        cout << arr[index] << " ";
    }

    // Recursive Call
    printEvenNumber(arr, size, index + 1);
}

int recursiveBinarySearch(int arr[], int start, int end, int target)
{
    // Base Case
    if (start > end)
    {
        return -1;
    }

    // Processing + Recursive Call
    int mid = (start + (end - start) / 2);

    if (arr[mid] == target)
    {
        return mid;
    }
    else if (target < arr[mid])
    {
        return recursiveBinarySearch(arr, start, mid - 1, target);
    }
    else if (target > arr[mid])
    {
        return recursiveBinarySearch(arr, mid + 1, end, target);
    }
}

void printDigits(int n)
{
    // Base Case
    if (n == 0)
    {
        return;
    }

    // Processing + Recursive Call
    int digit = n % 10;
    printDigits(n / 10);

    cout << digit << " ";
}

int main()
{
    int arr[] = {11, 12, 13, 14, 15};
    int size = 5;
    int index = 0;

    //* Print Array
    printArray(arr, size, index);

    //* Print Reverse Array
    printReverseArray(arr, size);

    //* Search Target
    int target = 40;
    cout << "Target found at index: " << searchInArray(arr, size, index, target) << endl;

    //* Minimum Element & Maximum Element
    int minAns = INT_MAX;
    int maxAns = INT_MIN;
    findMinimumElement(arr, size, index, minAns);
    findMaximumElement(arr, size, index, maxAns);
    cout << "Minimum Element: " << minAns << endl;
    cout << "Maximum Element: " << maxAns << endl;

    //* Odd Number
    printOddNumber(arr, size, index);

    //* Even Number
    printEvenNumber(arr, size, index);

    //* Binary Search
    int target = 16;
    int start = 0;
    int end = size - 1;
    cout << "Target is found at: " << recursiveBinarySearch(arr, start, end, target) << endl;

    //* Print Digits
    int n;
    cout << "Enter number: ";
    cin >> n;
    printDigits(n);
    return 0;
}