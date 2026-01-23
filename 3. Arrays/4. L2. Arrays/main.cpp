#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*Reverse Array*/
vector<int> reverseArray(const vector<int> &arr)
{
    vector<int> ans = arr;
    int n = ans.size();
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        int temp;
        temp = ans[j];
        ans[j] = ans[i];
        ans[i] = temp;
        i++;
        j--;
    }
    return ans;
}

/*Find Unique Element*/
int findUniqueElement(vector<int> &nums)
{
    int ans = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ nums[i];
    }
    return ans;
}

/*Sort 0 and 1*/
/*
// sort() approach
vector<int> sortArray(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    return nums;
}

// counting approach
vector<int> sortArray(vector<int> &nums)
{
    int zeroCount = 0;
    int n = nums.size();
    // Count total zeroes
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            zeroCount++;
        }
    }
    // Insert total zeroes at beginning
    for (int i = 0; i < zeroCount; i++)
    {
        nums[i] = 0;
    }
    // Rest will be ones
    for (int i = zeroCount; i < n; i++)
    {
        nums[i] = 1;
    }
    return nums;
}

// two-pointer approach
vector<int> sortArray(vector<int> &nums)
{
    int n = nums.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (nums[i] == 0)
        {
            i++;
        }
        if (nums[j] == 1)
        {
            j--;
        }
        if (i < j && nums[i] == 1 && nums[j] == 0)
        {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
    return nums;
}
*/

void printAllPairs(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << "[" << arr[i] << "," << arr[j] << "]" << endl;
        }
    }
}

void printAllTriplets(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                cout << "[" << arr[i] << "," << arr[j] << "," << arr[k] << "]" << endl;
            }
        }
    }
}

/*Two Sum*/
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}

/*Three Sum*/
vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
            {
                continue;
            }
            for (int k = j + 1; k < n; k++)
            {
                if (k > j + 1 && nums[k] == nums[k - 1])
                {
                    continue;
                }
                if ((nums[i] + nums[j] + nums[k]) == 0)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;
}



int main()
{
    vector<int> arr = {10, 20, 30, 40};
    printAllPairs(arr);
    // printAllTriplets(arr);
    return 0;
}