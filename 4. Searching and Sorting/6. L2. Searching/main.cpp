#include <iostream>
#include <vector>
using namespace std;

/*Find Peak Index in a Mountain Array*/
int peakIndexInMountainArray(vector<int> &arr)
{
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    int mid = (start + (end - start) / 2);

    while (start < end)
    {
        // Line A
        if (mid + 1 < n && arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        // Line B
        if (mid + 1 < n && arr[mid] > arr[mid + 1])
        {
            end = mid;
        }
        mid = (start + (end - start) / 2);
    }

    return mid;
}

/*Find Square Root using Binary Search*/
int mySqrt(int x)
{
    int start = 0;
    int end = x;
    long long mid = (start + (end - start) / 2);
    int ans = -1;
    while (start <= end)
    {
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (mid * mid > x)
        {
            end = mid - 1;
        }
        mid = (start + (end - start) / 2);
    }
    return ans;
}

/*Search an Element in a 2D Matrix*/
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int columns = matrix[0].size();
    int n = rows * columns;
    int start = 0;
    int end = n - 1;
    int mid = (start + (end - start) / 2);
    while (start <= end)
    {
        int rowIndex = mid / columns;
        int colIndex = mid % columns;
        if (matrix[rowIndex][colIndex] == target)
        {
            return true;
        }
        else if (target < matrix[rowIndex][colIndex])
        {
            end = mid - 1;
        }
        else if (target > matrix[rowIndex][colIndex])
        {
            start = mid + 1;
        }
        mid = (start + (end - start) / 2);
    }
    return false;
}

/*33. Search in Rotated Sorted Array*/
int findPivotIndex(vector<int> &nums)
{
    int n = nums.size();
    int start = 0;
    int end = n - 1;
    int mid = (start + (end - start) / 2);

    while (start <= end)
    {
        if (start == end)
        {
            return mid;
        }

        // At Pivot
        if (mid + 1 < n && nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        // Line B
        else if (nums[mid] < nums[start])
        {
            end = mid - 1;
        }
        // Line A
        else
        {
            start = mid + 1;
        }
        mid = (start + (end - start) / 2);
    }
    return -1;
}

int binarySearch(vector<int> nums, int start, int end, int target)
{
    int mid = (start + (end - start) / 2);
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (target < nums[mid])
        {
            end = mid - 1;
        }
        else if (target > nums[mid])
        {
            start = mid + 1;
        }
        mid = (start + (end - start) / 2);
    }
    return -1;
}

int search(vector<int> &nums, int target)
{
    int pivotIndex = findPivotIndex(nums);
    if (target >= nums[0] && target <= nums[pivotIndex])
    {
        return binarySearch(nums, 0, pivotIndex, target);
    }
    else
    {
        return binarySearch(nums, pivotIndex + 1, nums.size() - 1, target);
    }
}

int main()
{

    return 0;
}