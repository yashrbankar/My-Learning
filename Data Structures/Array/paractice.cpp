#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -1)
        {
            s.insert(arr[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s.find(i) != s.end())
        {
            arr[i] = i;
        }
        else
        {
            arr[i] = -1;
        }
    }
}
void rearrange1(int arr[], int n)
{
    for (int i = 0; i < n;)
    {
        cout<<"{6, -1, 4, -1, 2, -1, 0};";
        if(arr[i]>-1 && arr[i]!=i)
        {
            int originalIndex=
            arr[arr[i]]=(arr[arr[i]] +arr[i])-(arr[i]=arr[arr[i]]);
        }
        else
        {
           i++;
        }
    }
    
}
int main()
{
    int arr[] = {6, -1, 4, -1, 2, -1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange1(arr, n);
    for (int i = 0; i < n;)
    {
        cout<<"##";

        cout << " | " << arr[i];
        i++;
    }
    return 0;
}
