#include <iostream>
#include <vector>
using namespace std;

/*Helper - Print*/
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*Merge Two Sorted Arrays*/
void mergeTwoSortedArrays(int arr1[], int arr2[], int size1, int size2, vector<int> &ans)
{
    int i = 0;
    int j = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else
        {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while (i < size1)
    {
        ans.push_back(arr1[i]);
        i++;
    }

    while (j < size2)
    {
        ans.push_back(arr2[j]);
        j++;
    }
}

/*Merge Sort*/
void mergeSortedArrays(int arr[], int start, int end, int mid)
{
    // Create Copy of Left & Right Sorted Part
    int leftArrayLength = mid - start + 1;
    int rightArrayLength = end - mid;

    // Dynamically created array of same length of original array left & right part
    int *arr1 = new int[leftArrayLength];
    int *arr2 = new int[rightArrayLength];

    // Left Part Copied
    int mainArrayIndex = start;
    for (int i = 0; i < leftArrayLength; i++)
    {
        arr1[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    // Right Part Copied
    mainArrayIndex = mid + 1;
    for (int i = 0; i < rightArrayLength; i++)
    {
        arr2[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    // Merge Logic
    int i = 0;
    int j = 0;
    mainArrayIndex = start;
    while (i < leftArrayLength && j < rightArrayLength)
    {
        if (arr1[i] < arr2[j])
        {
            arr[mainArrayIndex] = arr1[i];
            i++;
            mainArrayIndex++;
        }
        else
        {
            arr[mainArrayIndex] = arr2[j];
            j++;
            mainArrayIndex++;
        }
    }

    while (i < leftArrayLength)
    {
        arr[mainArrayIndex] = arr1[i];
        i++;
        mainArrayIndex++;
    }

    while (j < rightArrayLength)
    {
        arr[mainArrayIndex] = arr2[j];
        j++;
        mainArrayIndex++;
    }

    // Free Dynamic memory
    delete[] arr1;
    delete[] arr2;
}

void mergeSort(int arr[], int start, int end)
{
    int mid = (start + end) / 2;

    // Base Case: Invalid Array + Single Element In Array
    if (start >= end)
    {
        return;
    }

    // Left Part
    mergeSort(arr, start, mid);

    // Right Part
    mergeSort(arr, mid + 1, end);

    // Merge Left & Right Part
    mergeSortedArrays(arr, start, end, mid);
}

int main()
{
    // int arr1[] = {10, 20, 30, 40};
    // int arr2[] = {15, 25};
    // int size1 = 4;
    // int size2 = 2;
    // vector<int> ans;
    // mergeTwoSortedArrays(arr1, arr2, size1, size2, ans);
    // print(ans);

    int arr[] = {7, 2, 4, 3, 1, 5};
    int size = 6;
    int start = 0;
    int end = size - 1;
    mergeSort(arr, start, end);
    printArray(arr, size);
    return 0;
}