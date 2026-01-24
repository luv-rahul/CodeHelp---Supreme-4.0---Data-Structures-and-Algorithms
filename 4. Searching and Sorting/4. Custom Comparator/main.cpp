#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

bool myComp(int &a, int &b)
{
    return a > b; // a < b -> Increasing Order a > b -> Decreasing Order
}

void print2(vector<vector<int>> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        vector<int> temp = v[i];
        cout << "[" << temp[0] << "," << temp[1] << "]" << endl;
    }
}

bool myComparatorFor1thIndex(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1]; // a[1] < b[1] -> Increasing Order a[1] > b[1] -> Decreasing Order
}

int main()
{
    /*
    vector<int> v = {44, 55, 22, 11, 33};
    // sort(v.begin(), v.end()); // Increasing Order Sorting
    sort(v.begin(), v.end(), myComp); // Custom Comparator
    print(v);
    */

    vector<vector<int>> v;
    int n;
    cout << "Enter number of inputs:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        int b;
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;

        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }

    print2(v);

    // sort(v.begin(), v.end()); // Sorting done on based on 0th index

    cout << "Sorting based on 1th index" << endl;
    sort(v.begin(), v.end(), myComparatorFor1thIndex);

    print2(v);

    return 0;
}