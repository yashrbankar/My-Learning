#include<iostream>
using namespace std;
int table(int x , int y)
{
  if (y!=1)
  {
    cout<<"1"<<endl;
    table(x,y-1);
  }
  cout<<x*y<<endl;
  
}

int main()
{
 int n;
 cout<<"Enter No .";
 cin>>n;
 table(n , 10);
return 0;
}