#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    while (N!=0)
    {
        int x;
        vector<int>v;
        cin>>x;
        if(x%2!=0)
        {
            N--;
            cout<<-1;
        }
        int pos=0;
        int nega=0;
        for (int i = 0; i < x; i++)
        {
            cout<<"enter the ele :: ";
            int ele;
            cin>>ele;
            v.push_back(ele);
            if(ele==1)
            {
               pos++;
            }
            else
            {
                nega++;
            }
        }
        int ans=abs(pos-nega)/2;
        cout<<ans;
        N--;
    }
    

   
   return 0;
}