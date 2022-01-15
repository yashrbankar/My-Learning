#include<iostream>
using namespace std;
int nature(int a)
{
  if (a!=1)
  {
      nature(a-1);
      
  }
  
  cout<<a<<endl;
  
}

int main()
{

 int n;
 cout<<"Enter n";
 cin>>n;
 nature(n);

return 0;
}