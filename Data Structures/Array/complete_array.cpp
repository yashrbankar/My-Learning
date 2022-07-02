#include<bits/stdc++.h>
using namespace std;



int main()
{
    int arr[]={1,2,2,2,3,3,3,4};
    int H[10]={0,0,0,0,0,0,0,0,0,0};

    for (int i = 0; i < 7; i++)
    {
        H[arr[i]]++;
    }

    for(int i=1;i<10;i++)
    {
        if(H[i]>0)
        {
            cout<<H[i]<< " times "<<i<<endl;
        }
    }


    
   return 0;
}