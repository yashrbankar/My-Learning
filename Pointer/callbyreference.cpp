#include<iostream>
using namespace std;

/*
 * = deference ( value store at the any address ) 
 int *ptr  = pointer declartion  ( this pointer )

 & = address   ( address of any value )
 int & var =  reference declartion  (original value not copy of var )

*/

// This not swaped 
// beacuse the changes done in only the swap function 

int swap(int  m , int n)
{
    int temp=m;
    m=n;
    n=temp;

}

// swap by using reference
int reference_swap(int &m , int &n) // copying value  by reference 
{
    int temp=m;
    m=n;
    n=temp;
}

//swap by using the Pointer

int pointer_swap(int *a , int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{

    int a=10 , b=20;
    cout<<"The value of a & b :: "<<a <<" & "<<b<<endl;

  // This not swaped 
    swap( a , b);
     cout<<"The value of a & b  ( call by value ) :: "<<a <<" & "<<b<<endl;

    
    // by using reference
    /*
    int x=yash;
    int y=&x
    both are not 
    this is like the parallel names
    */
    reference_swap(a ,b);
    cout<<"The value of a & b( call by pointers ) :: "<<a <<" & "<<b<<endl; 

    // by using the reference pointer 
    //  we send direct adrees in to the memory
    pointer_swap(&a , &b);
    cout<<"The value of a & b (call by address / references ):: "<<a <<" & "<<b<<endl; 



}