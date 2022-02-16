#include <bits/stdc++.h>
using namespace std;
int flag=0, first=-1,last=-1;

void func(char arr[], int index, char key)
{
    if (arr[index] != 0)
    {
        if (key == arr[index] && flag == 0)
        {
            first = index;
            flag=-1;
        }
        else if (key == arr[index])
        {
            last = index;
        }
        func(arr, index + 1, key);
    }
}

int main()
{
    char arr[] = "yash";
    char key = 'a';
    func(arr, 0, key);
    cout<<first<<" "<<last;
    return 0;
}