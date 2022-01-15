#include <iostream>
using namespace std;

int *pointer()
{
    int z = 1045;
    int *ptr1 = &z;
    return ptr1;
}

int array_function(int *a)
{
    cout << "This is  Array_function ";
    cout << a << endl;
    cout << *a << endl;
    cout << *((a) + 1) << endl;
    cout << *((a) + 2) << endl;
    cout << *((a) + 3) << endl;
    cout << *((a) + 4) << endl;
}

int main()

{

    // Basic of Pointer

    int a = 10;
    
    int *ptr1 = &a;
    cout << "-------Poniter Basics ---------" << endl

    // &
    //*

         << endl;
    cout << "Address of a *(&a) :: " << *(&a) << endl;             // 10
    cout << "Address of a ( ptr1 ) :: " << ptr1 << endl;           // address of a
    cout << "Address of ptr ( &ptr1 ) :: " << (&ptr1) << endl;     // address of ptr1
    cout << "Address of ptr ***( &ptr1 ) :: " << *(&ptr1) << endl;    // value store at prt1 that  is address of a
    cout << "Address of ptr ( &ptr1 ) :: " << *(*(&ptr1)) << endl; // deferencing of value stored at ptr1 i.e a=10;
    cout << "Valur store at pointer (*ptr1) :: " << *ptr1 << endl; // 10 

    // opertaion in pointer
     *ptr1 = 20;
    cout << "Changing Value of Pointer :: " << *ptr1 << endl;

    // increment in address

    cout<<"value of ptr1 is "<<ptr1<<endl;
    // cout<<"value of ptr1 is "<<ptr1+1;

    cout << "This is incre :: " << ++ptr1 << endl;
    cout<<"value of ptr1 is "<<ptr1<<endl;
    cout << "Increment in pointr address :: " << ++ptr1 << endl

         << endl; // Increment done in adress store in to the poin

    // pointer func   //     line no (4) returning the address

    cout << "The address of funtion Pointer ::" << pointer() << endl;           // Address Returning
    cout << "The value Stored int of funtion Pointer ::" << *pointer() << endl; // defrecing Address

    // array passing in Function
    int arr[4] = {10, 20, 30, 40,50};
    cout<<arr;

    cout << "------- Array ---------" << endl
         << endl;
    cout << "& of 0th element in array ::" << arr << endl; // address of 0th index element
    cout << "Value store in 0th element ::" << *arr << endl;
    cout << " Address in 1th element ::" << *(arr + 4) << endl; //
    cout << "Value store in 1th element ::" << *(arr + 1) << endl; // *(arr + 1)== arr[1]
    cout << "Value store in 2th element ::" << *(arr + 2) << endl;
    cout << "Value store in 3th element ::" << *(arr + 3) << endl;


    //
    //     0 +3  this is index

    // Here * = {{Defrence }} arr = {{array}}
    // pointer towards 0th element in of array

    // Array 2 Example

    cout << "-------passing in Function ---------" << endl
         << endl;

    int arr1[5] = {1, 2, 3, 4, 5};

    // cout<<"Adress 0 :: "<<  arr1<<endl;
    // cout<<"Adress 1 :: "<<  arr1+1<<endl;
    // cout<<"Adress 2 :: "<<  &arr1[2]<<endl;
    // cout<<"Adress 3 ::"<<   arr1[3]<<endl;
    // cout<<"Adress copy ::"<<*(arr1+3)<<endl;

    array_function(arr1); // only One Adress can be Pased in Function


    // Void Pointer in c++

    //  we use void pointer when we dont know the data type of the pointer 
    // it can  points  on any data type int char string 

    cout<<"THIS IS THE VOID POINTER "<<endl;

     int n1 = 10;
    void *v = &n1;
    cout<<"adress of the n1 :: "<<v<<endl;
    // we can not defernce this pointer Directly 
    //  cout<<" cant defernce the n1 :: "<<*v<<endl;
    //  ERROR :: 'void*' is not a pointer-to-object type

    // WE NEED TYPE Casting for the deferencing it
    // Typecasting void pointer( Derefercing ) 

    cout<<"Typecasting void pointer( Derefercing )  :: "<<*(int *)v<<endl; // *(int *) :: typecasting 

    // Use of void pointer 
    /*
     1. malloc and calloc return the void pointer
    */
     

    cout<<"---------------------------------------"<<endl;
    cout<<"---------------------------------------"<<endl;



    cout << "-------Poniter D.M.A ---------" << endl
         << endl;
    //  Dynmaic Memory  allocation
    //   Dynmaic allocation :: benifite of using Dynamic  Allocation is Create space only when required

    int n;
    cout << "Enter N::";
    cin >> n;
    int *dyna_ptr = new int;
    cout << "Enter Elements ::" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> *(dyna_ptr + i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << *(dyna_ptr + i);
    }
    cout<<"THIS IS NEW"<<new int;

    delete dyna_ptr;

    cout<<"---------------------------------------"<<endl;
    cout<<"---------------------------------------"<<endl;


    return 0;
}