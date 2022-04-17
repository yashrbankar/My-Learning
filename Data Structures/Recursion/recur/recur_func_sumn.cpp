#include<iostream>
using namespace std;
int nature(int a)
{
  if (a<0)
  {
      return 0;
      
  }
  
  return a + nature(a-1);
  
}

int main()
{

 int n;
 cout<<"Enter n";
 cin>>n;
  cout<<nature(n);

return 0;
}