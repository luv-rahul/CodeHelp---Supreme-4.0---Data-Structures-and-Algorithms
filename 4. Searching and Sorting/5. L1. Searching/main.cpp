#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*Binary Search Implementation*/
int binarySearch(const vector<int> &arr, int target)
{
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    int mid = (start + (end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        mid = (start + (end - start) / 2);
    }
    return -1;
}

/*First & Last Occurence*/
int firstOccurence(vector<int> nums, int target)
{
    int n = nums.size();
    int start = 0;
    int end = n - 1;
    int mid = (start + (end - start) / 2);
    int ans = -1;
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            ans = mid;
            end = mid - 1;
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
    return ans;
}

int lastOccurence(vector<int> nums, int target)
{
    int n = nums.size();
    int start = 0;
    int end = n - 1;
    int mid = (start + (end - start) / 2);
    int ans = -1;
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            ans = mid;
            start = mid + 1;
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
    return ans;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans;
    int firstOccurenceIndex = firstOccurence(nums, target);
    int lastOccurenceIndex = lastOccurence(nums, target);
    ans.push_back(firstOccurenceIndex);
    ans.push_back(lastOccurenceIndex);
    return ans;
}

/*Missing Number*/
int missingNumber(vector<int> &nums)
{
    int n = nums.size();

    sort(nums.begin(), nums.end());

    int start = 0;
    int end = n - 1;
    int mid = (start + (end - start) / 2);
    int missingNumber = -1;
    while (start <= end)
    {
        if ((nums[mid] - mid) == 1)
        {
            // Store & Compute
            missingNumber = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + (end - start) / 2);
    }

    // Original Expected= [0,1,2,3,4]
    // Given = [0,1,2,3]
    // In this case, missingNumber = -1, so last element i.e n is missing,
    // so n is returned, else missing Number is retured.
    if (missingNumber == -1)
    {
        return n;
    }
    else
    {
        return missingNumber;
    }
}

int main()
{
    /*Binary Search Using STL*/
    vector<int> v = {10, 20, 30, 40, 50, 60, 70};
    int target = 70;
    bool ans = binary_search(v.begin(), v.end(), target);
    cout << "Found or not: " << ans << endl;
    return 0;
}