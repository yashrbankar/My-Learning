#include <bits/stdc++.h>
using namespace std;

int sear(int arr[], int n , int key)
{
    for (int i = 0; i < n; i++)
    {
        if(key==arr[i])
        {
            return 1;
        }
    }
    return -1;
}

void Union()
{
    int A[5]={2,6,4,8,1};
    int B[4]={4,1,7,5};
    int C[9];
    int count=0;

    for (int i = 0; i <5; i++)
    {
        C[count++]=A[i];
    }

    for (int i = 0; i < 4; i++)
    {
        int key=B[i];
        int res;
        res=sear(A, 5,key);
        if(res==1)
        {
            C[count++]=key;
        }
    }

    for (int i = 0; i < count; i++)
    {
        cout<<" "<<C[i];
    }
    cout<<" \n";
}
int main()
{
    Union();

    return 0;
}