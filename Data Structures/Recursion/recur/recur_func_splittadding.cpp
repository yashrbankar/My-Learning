#include<iostream>
using namespace std;
int number;

int recursion(int number)
{
   if (number!=0)
   {
       return number%10 + recursion(number/10);
   }
   
}

int main()
{
    
    cout<<"Enter No : ";
    cin>>number;

    cout<< recursion(number);

return 0;
}