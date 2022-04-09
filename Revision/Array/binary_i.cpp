#include <bits/stdc++.h>
using namespace std;

int  Binary(vector<int> v,int key)
{
   int j=v.size()-1, mid=0,i=0;
   while(i<=j)
   {
     mid=(j+i)/2;
     if(v[mid]==key)
     {
        return mid;
     }
     else if(v[mid]>key)
     {
        j=mid-1;
     }
     else
     {
       i=mid+1;
     }
   }
   return -1;
}

int binary(int key, vector<int>v, int l , int h)
{
  if(l<=h)
  {
    int mid=(l+h)/2;
    if(v[mid]==key)
    {
      return mid;
    }
    else if(v[mid]>key)
    {
      return binary(key ,v,l,mid-1);
    }
    else
    {
      return binary(key,v,mid+1,h); 
    }
  }
  return -1;
  

}

int main()
{
   vector<int>v={1,2,3,4,5};
   //int ans=Binary(v,1);
   int ans=binary(9,v,0,v.size());
   cout<<"answer is found at index :: "<<ans;
   return 0;
}
