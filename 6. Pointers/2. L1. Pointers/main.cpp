#include <iostream>
using namespace std;

int main()
{
    int xyz = 15;
    int pqr = 12;
    int *p1 = &xyz;
    int *p2 = &pqr;
    cout << &xyz << endl;

    //* sizeof
    // int a = 15;
    // int *ptr = &a;
    // cout << sizeof(ptr) << endl;

    // char ch = 'K';
    // char *ctr = &ch;
    // cout << sizeof(ctr) << endl;

    // bool flag = true;
    // bool *btr = &flag;
    // cout << sizeof(btr) << endl;

    //* Pointers with Arrays
    // int arr[] = {5, 10, 15, 20, 25};
    // int *ptr = arr;
    // cout << arr << endl;
    // cout << ptr << endl;
    // cout << &arr << endl;
    // cout << &arr[0] << endl;

    // arr = 0; // Error

    char ch[100] = "Babbar";
    char *cptr = ch;
    cout << ch << endl;
    cout << &ch << endl;
    // extra caution case
    cout << cptr << endl;
    cout << &ch[0] << endl;
    // ------------------
    cout << ch[0] << endl;
    cout << &cptr << endl;
    cout << *cptr << endl;
    cout << *(cptr + 3) << endl;

    return 0;
}