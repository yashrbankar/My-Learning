#include<bits/stdc++.h>
using namespace std;

class Set1
{
    public:
    vector<int>s1={1,3,4,5,6,7,9};
    vector <int>s2={2,4,5,6,8,10};
    bool common(int key , vector <int> v);
    void intersection();
    void union1();
};

bool Set1::common(int key , vector <int>v)
{
  for(auto i=v.begin();i<v.end();i++)
  {
      int val=*i;
      if(key==val)
      {
      return true;
      }
  }
  return false;

}

void Set1::intersection()
{
   for(auto i=s1.begin();i<s1.end();i++)
   {
      bool result=common(*i,s2);
      if(result==true)
      {
          cout<<" "<<*i;
      }
      
   }
   
}

void Set1::union1()
{
    for(auto i=s1.begin();i<s1.end();i++)
    {
        cout<<" "<<*i;
    }
    
    for(auto i=s2.begin();i<s2.end();i++)
    {
        int result=common(*i,s1);
        if(result==false)
        {
            cout<<" "<<*i;
        }
    }
}


int main()
{
  Set1 obj;
  obj.intersection();
  cout<<"\n"<<endl;
  obj.union1();
  
  
  return 0;
}


