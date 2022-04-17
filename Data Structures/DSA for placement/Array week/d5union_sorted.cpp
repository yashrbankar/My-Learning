#include<bits/stdc++.h>
using namespace std;

void Union()
{
    int i=0,j=0 , count=0;
    int A[]={1,3,5,7,9};
    int B[]={2,4,6,8,10};
    int C[10];

    while (i<5 && j<5)
    {
        if(A[i]<B[j])
        {
          C[count++]=A[i++];
        }
        else if(A[i]>B[j])
        {
          C[count++]=B[j++];
        }
        else
        {
            C[count++]=A[i++];
            j++;
        }
    }
    
    for (; i < 5; i++)
    {
            C[count++]=A[i];
    }
    for (; j< 5; j++)
    {
            C[count++]=B[j];
    }

    for (int l = 0; l < count; l++)
    {
        cout<<" "<<C[l];
    }
    
}

int main()
{
    Union();
   return 0;
}