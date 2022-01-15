#include <iostream>

using namespace std;

int main()
{
    int input , i , j;
    cout << "enter value of n::";
    cin >> input;

    for (i = 1; i <= input; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "#";
            // cout << "1";
        }

        cout << endl;
    }

    for (i = input; i >= 1; i--)
    {
        for (j = i - 1; j >= 1; j--)
        {
            cout << "#";
            // cout << "1";
        }

        cout << endl;
    }

    return 0;
}