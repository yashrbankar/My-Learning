#include<bits/stdc++.h>
using namespace std;
void insert()
{
    vector <int>v={5,4,3,2,1};
    int j,n, k;
    for (int i = 1; i < n; i++)
    {
        j=i-1;
        k=v[i];
        while (v[j]>k && j>=0)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=k;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<" "<<v[i];
    }
    
    

}

int main()
{
    insert();

   
   return 0;
}