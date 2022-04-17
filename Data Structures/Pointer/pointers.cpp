// basics kof pointer 
#include< iostream >
using namespace std;

/* thm

Pointer ::  Pointer are Varible That Store address of other Varibles

leature 4 
call by reference;

/////////////////////////////////////////////////

leature 5  :: Pointer and Arrays 

 1. cout<< arr == cout<< &arr[0] in Array 
  this Gives Address of Of 0th index of array 

 2. cout<< *arr == cout<< arr[];
  this Gives value of Of 0th index of array 

    
    here i is index in array
 3. cout<< arr+i == cout<< &arr[i] in Array 
 this Gives Address of Of ith index of array

 4. cout<< *(arr+i) == cout<< arr[i];
 this Gives Address of Of ith index of array 

 ////////////////////////////////////////////////

 leature no 6 :: Array as function (Argument)

 sum= A[i]+ sum;


*/

int add(int A[] , int size) // How to pass array is passed in function 
{
    int sum=0;
    for(int i=0 ; i<size ; i++)
    {
        sum=sum+A[i];
    }
    return sum;
}

int main()
{
    int A[]={1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    cout<<"The addtion :: "<<add(A , size); // How to pass array is passed in function 
   return 0;

}
