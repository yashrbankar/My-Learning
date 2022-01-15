#include<iostream>
using namespace std;

int recur(int* a )
{
    
    
    if(*(a)>2)
    {
        cout<<*a<<endl;
        return *(a) * recur(a+1);
    }

    return *a;

}

int main()
{

  int n ;
//   int* ptr ;
  cout<<"Enter Number ::";
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
  {
      arr[i]=n-i;
  }


  cout<<"Foctorail of "<< " is ::"<<recur( arr );


return 0;
}