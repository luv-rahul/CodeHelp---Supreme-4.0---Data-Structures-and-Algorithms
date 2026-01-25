#include <iostream>
#include <string>
using namespace std;

int getLength(char arr[])
{
    int index = 0;
    int length = 0;
    while (arr[index] != '\0')
    {
        length++;
        index++;
    }
    return length;
}

void replaceCharacter(char arr[], char originalChar, char newChar)
{
    int n = getLength(arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == originalChar)
        {
            arr[i] = newChar;
        }
    }
}

void convertIntoUpperCase(char arr[])
{
    int n = getLength(arr);
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] >= 'A' && arr[i] <= 'Z') || arr[i] == ' ')
        {
            continue;
        }
        else
        {
            char ch = arr[i];
            ch = ch - 'a' + 'A';
            arr[i] = ch;
        }
    }
}

void convertIntoLowerCase(char arr[])
{
    int n = getLength(arr);
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] >= 'a' && arr[i] <= 'z') || arr[i] == ' ')
        {
            continue;
        }
        else
        {
            char ch = arr[i];
            ch = ch - 'A' + 'a';
            arr[i] = ch;
        }
    }
}

void reverseCharArray(char arr[])
{
    int n = getLength(arr);
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

bool checkPalindrome(char arr[])
{
    int n = getLength(arr);
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    //* Creation
    char arr[10];

    //* Input
    cout << "Enter input: ";
    cin >> arr;

    //* Output
    cout << "Output: " << arr << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    char arr[4];
    arr[0] = 'R';
    arr[1] = 'a';
    cout << arr << endl;
    int val = arr[3]; // Null Character - ASCII Value = 0
    cout << val << endl;

    char arr[5];
    arr[0] = 'R';
    arr[1] = 'a';
    arr[2] = 'h';
    arr[3] = 'u';
    arr[4] = 'l';
    cout << arr << endl; // Print characters until null character is found

    //* cin.getline
    char arr[50];
    // cin >> arr;
    cin.getline(arr, 20, '\t');
    cout << arr << endl;

    char arr[100];
    cin.getline(arr, 100, 'X');
    cout << arr << endl;

    //* Length of Char Array
    char arr[50];
    cin >> arr;
    cout << "Length of char array: " << getLength(arr) << endl;

    //* Replace Character
    char arr[100];
    char originalChar = ' ';
    char newChar = 'X';
    cin.getline(arr, 100, '\n');
    replaceCharacter(arr, originalChar, newChar);
    cout << arr << endl;

    //* Upper Case & Lower Case
    char arr[100];
    cin.getline(arr, 100);
    convertIntoUpperCase(arr);
    cout << arr << endl;
    convertIntoLowerCase(arr);
    cout << arr << endl;

    //* Reverse Char Array
    char arr[100];
    cin >> arr;
    reverseCharArray(arr);
    cout << arr << endl;

    //* Check Palindrome
    cout << "Palindrome or not: " << checkPalindrome(arr) << endl;

    //* Strings
    // Creation
    string s;

    // Initialization
    string name = "Rahul";
    string fullName = "Rahul Kumar";

    // Output
    cout << name << endl;
    cout << fullName << endl;

    // Input
    cin >> s;
    getline(cin, s);
    cout << s << endl;

    // length
    string str = "Rahul";
    cout << str.length() << endl;

    // push_back
    str.push_back('x');
    cout << str << endl;

    // pop_back
    str.pop_back();
    cout << str << endl;

    // at
    cout << str.at(0) << endl;

    // concat
    string firstName = "Rahul";
    string lastName = "Kumar";
    string fullName = firstName + " " + lastName;
    cout << fullName << endl;

    // clear
    fullName.clear();
    cout << fullName.length() << endl;

    // empty
    if (fullName.empty())
    {
        cout << "String is empty" << endl;
    }
    else
    {
        cout << "String isn't empty" << endl;
    }

    // begin & end
    string str = "Rahul";
    auto it = str.begin();
    auto it2 = str.end() - 1;
    cout << *it << endl;
    cout << *it2 << endl;

    // front
    cout << str.front() << endl;

    // substr
    string name = "abcdefghij";
    cout << name.substr(2, 1) << endl;

    // find
    string name = "Rahul Kumar";
    int ans = name.find("l");
    cout << ans << endl;

    // compare
    string first = "Rahul";
    string second = "Rahul";
    cout << first.compare(second) << endl;

    return 0;
}