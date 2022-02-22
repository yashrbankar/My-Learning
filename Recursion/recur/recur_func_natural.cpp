#include<iostream>
using namespace std;
int nature(int a)
{
  if (a>0)
  {
      cout<<" "<<a;
      nature(a-1);
      cout<<" "<<a;
  }
  
}

int main()
{

 int n;
 cout<<"Enter n";
 cin>>n;
 nature(5);

return 0;
}