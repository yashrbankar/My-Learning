#include <iostream>
using namespace std;


class Array
{

  int *A;
  int length , size;
  public:
  Array();

};
Array::Array()
{
    cout<<"Enter the size of the array ::";
    cin>>size;
    cout<<" Number of element to insert";
    int n;
    A=new int[size];
    length=0;
    cout<<"Enter number :: ";
    for (int i = 0; i < n; i++)
    {
       cin>>A[i];
       length++; 
    }
    

}

int main()
{
    Array arr;
}