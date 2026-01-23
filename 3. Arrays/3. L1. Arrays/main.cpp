#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printTwice(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << 2 * arr[i] << " ";
    }
    cout << endl;
}

void printEvenOdd(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] & 1)
        {
            cout << "Odd ";
        }
        else
        {
            cout << "Even ";
        }
    }
    cout << endl;
}

void countZeroesAndOnes(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        else if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    cout << "Zero Count: " << zeroCount << endl;
    cout << "Ones Count: " << oneCount << endl;
}

int searchElementInArray(vector<int> &nums, int target)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}

double findAverage(const vector<int> &arr)
{
    int sum = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    double average = (sum * 1.0 / n);
    return average;
}

vector<int> multiplyByTen(const vector<int> &arr)
{
    vector<int> ans;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        ans.push_back(arr[i] * 10);
    }
    return ans;
}

int findMaximum(vector<int> &arr)
{
    int maxAns = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        maxAns = max(maxAns, arr[i]);
    }
    return maxAns;
}

int findMinimum(vector<int> &arr)
{
    int minAns = INT_MAX;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        minAns = max(minAns, arr[i]);
    }
    return minAns;
}

std::pair<int, int> countZerosAndOnes(const std::vector<int> &nums)
{
    int size = nums.size();
    int zeroCount = 0;
    int oneCount = 0;
    std::pair<int, int> ans = make_pair(-1, -1);
    for (int i = 0; i < size; i++)
    {
        if (nums[i] == 0)
        {
            zeroCount++;
        }
        else if (nums[i] == 1)
        {
            oneCount++;
        }
    }
    ans.first = zeroCount;
    ans.second = oneCount;
    return ans;
}

int main()
{
    //* Creation + Initialization
    int arr[10];
    printArray(arr, 10);

    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5);

    int arr[5] = {10, 20};
    printArray(arr, 5);

    int arr[5] = {0};
    printArray(arr, 5);

    int arr[5] = {1};
    printArray(arr, 5);

    int arr[] = {10, 20, 30};
    printArray(arr, 3);

    int arr[5] = {11, 23, 35, 65, 77};
    printArray(arr, 5);

    //* Input + Output
    int arr[10];
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value at index " << i << ": ";
        cin >> arr[i];
    }
    printArray(arr, n);

    char ch[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the value at index " << i << ": ";
        cin >> ch[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << ch[i] << " ";
    }

    //* Functions
    int arr[10] = {1, 1, 0, 1, 0};
    int size = 5;
    printArray(arr, size);
    printTwice(arr, size);
    printEvenOdd(arr, size);
    countZeroesAndOnes(arr, size);
    return 0;
}