#include<iostream>

using namespace std;
// int sum( int , int )


// int sum( int a , int b )
int sum(int a , int b )
{
    int c = a+b;
    return c;
}

int main()
{    
    int num1 , num2 ;
    cout<<" enter no. :";
    cin>>num1;
    
    cout<<" enter no. :";
    cin>>num2;
    cout<<"The Sum is: "<< sum (num1 , num2);
    
   
    return 0;
}


