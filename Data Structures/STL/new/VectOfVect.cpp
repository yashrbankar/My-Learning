#include<bits/stdc++.h>
using namespace std;

void Display(vector<int>v)
{
    for(int i=0; i<v.size();i++)
    {
       cout<<" "<<v[i];
    }
}
int main()
{
   int N;
   vector<vector<int>>v;
   cout<<"enter the no of vector you wanted to created :";
   cin>>N;
   
   for(int i=0;i<N;i++)
   {
     int n;
     vector<int> temp;
     cout<<"n:";
     cin>>n;
     for(int j=0;j<n;j++)
     {
        cout<<"enter element : ";
        int x;
        cin>> x;
        temp.push_back(x);
     }
     v.push_back(temp);
   }
   
   for(int i=0;i<N ;i++)
   {
      Display(v[i]);
      cout<<"\n";
   }
}
