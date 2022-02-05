#include <bits/stdc++.h>
using namespace std;

int sear(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return -1;
}

void intersection()
{
    int A[] = {4, 3, 1, 6, 7};
    int B[] = {6, 8, 3, 7, 9};
    int C[10];
    int ans, key, count = 0;
    for (int i = 0; i < 5; i++)
    {
        key = A[i];
        ans = sear(B, 5, key);
        if (ans == 1)
        {
            C[count++] = key;
        }
    }
    cout << "intersection  :: ";
    for (int i = 0; i < count; i++)
    {
        cout << " " << C[i];
    }
    cout << "\n";
}

void difference()
{
    int A[] = {4, 3, 1, 6, 7};
    int B[] = {6, 8, 3, 7, 9};
    int C[10];
    int ans, key, count = 0;
    for (int i = 0; i < 5; i++)
    {
        key = A[i];
        ans = sear(B, 5, key);
        if (ans == -1)
        {
            C[count++] = key;
        }
    }
    cout << "diference :: ";
    for (int i = 0; i < count; i++)
    {
        cout << " " << C[i];
    }
    cout << "\n";
}

int main()
{
    intersection();
    difference();
    return 0;
}