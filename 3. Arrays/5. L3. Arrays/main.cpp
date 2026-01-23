#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

/*Shift Array Elements by One Position*/
vector<int> shiftRight(const vector<int> &arr)
{
    vector<int> nums = arr;
    int n = nums.size();
    // Store last element in temp variable
    int temp = nums[n - 1];

    // Shift from last
    for (int i = n - 1; i > 0; i--)
    {
        nums[i] = nums[i - 1];
    }

    // Push stored element at first
    nums[0] = temp;

    return nums;
}

/*Rotate Array*/
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();

    if (k == 0 || k == n)
    {
        return;
    }

    if (k > n)
    {
        k = k % n;
    }

    // Store last k elements
    vector<int> temp;
    for (int i = n - k; i < n; i++)
    {
        temp.push_back(nums[i]);
    }

    // Shift
    for (int i = n - 1; i >= k; i--)
    {
        nums[i] = nums[i - k];
    }

    // Push stored elements
    for (int i = 0; i < k; i++)
    {
        nums[i] = temp[i];
    }
}

/*Traversal*/
void rowWiseTraversal(int arr[][2], int rowSize, int colSize)
{
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

void columnWiseTraversal(int arr[][2], int rowSize, int colSize)
{
    for (int col = 0; col < colSize; col++)
    {
        for (int row = 0; row < rowSize; row++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

void rowWiseSum(int arr[][2], int rowSize, int colSize)
{
    for (int row = 0; row < rowSize; row++)
    {
        int sum = 0;
        for (int col = 0; col < colSize; col++)
        {
            sum = sum + arr[row][col];
        }
        cout << "Sum of row " << row << ": " << sum << endl;
    }
}

void columnWiseSum(int arr[][2], int rowSize, int colSize)
{
    for (int col = 0; col < colSize; col++)
    {
        int sum = 0;
        for (int row = 0; row < rowSize; row++)
        {
            sum = sum + arr[row][col];
        }
        cout << "Sum of col " << col << ": " << sum << endl;
    }
}

pair<int, int> searchIn2DArray(int arr[][2], int rowSize, int colSize, int target)
{
    pair<int, int> ans = make_pair(-1, -1);
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            if (arr[row][col] == target)
            {
                ans.first = row;
                ans.second = col;
                return ans;
            }
        }
    }
    return ans;
}

int findMinimumElement(int arr[][2], int rowSize, int colSize)
{
    int minAns = INT_MAX;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            minAns = min(minAns, arr[row][col]);
        }
    }
    return minAns;
}

int findMaximumElement(int arr[][2], int rowSize, int colSize)
{
    int maxAns = INT_MIN;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            maxAns = max(maxAns, arr[row][col]);
        }
    }
    return maxAns;
}

int main()
{
    //* Creation + Initialization
    int arr[3][2];

    int arr[3][2] = {
        {1, 2},
        {10, 11},
        {11, 11}};

    int arr[3][2] = {
        {1, 2}};

    //* Access
    int arr[3][2] = {
        {1, 2},
        {10, 11},
        {11, 11}};

    cout << arr[0][0] << endl;
    cout << arr[2][0] << endl;

    //* Input
    int arr[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter the value for " << i << "," << j << ": ";
            cin >> arr[i][j];
        }
    }

    //* Output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //* Traversal
    int arr[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    int rowSize = 3;
    int colSize = 2;
    rowWiseTraversal(arr, rowSize, colSize);
    columnWiseTraversal(arr, rowSize, colSize);
    rowWiseSum(arr, rowSize, colSize);
    columnWiseSum(arr, rowSize, colSize);

    int target = 6;
    pair<int, int> ans = searchIn2DArray(arr, rowSize, colSize, target);
    cout << ans.first << "," << ans.second << endl;

    int minAns = findMinimumElement(arr, rowSize, colSize);
    cout << "Minimum Element: " << minAns << endl;

    int maxAns = findMaximumElement(arr, rowSize, colSize);
    cout << "Maximum Element: " << maxAns << endl;
    return 0;
}