#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int key = v[i + 1];
        int j = i;
        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}

int main()
{
    vector<int> v = {5, 4, 3, 2, 1};
    insertionSort(v);
    print(v);
    return 0;
}