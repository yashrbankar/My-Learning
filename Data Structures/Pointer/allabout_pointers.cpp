#include <iostream>
using namespace std;

int *pointer() // return type pointer
{
    int z = 1045;
    int *ptr1 = &z;
    return ptr1; // returning the address
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

    // ! Basic of Pointer

    cout << "/n------ Basic of Pointer ------- ";

    // * in very simple words pointer is used store addresses
    int a = 10;
    // &(reference) is used for finding address of any var
    // *(deference)  it is exactly opposite to the &
    //  * is used find value stored at any add

    // * Example
    int *ptr1 = &a; // ? declartion of pointer

    cout << "-------Poniter Basics ---------" << endl
         << endl;
    cout << "*(&a) :: " << *(&a) << endl;            // 10 here * and & cancell each other so answer is simply a=10
    cout << " ptr1:: " << ptr1 << endl;              // ptr1 is pointer // and pointer used for storing the address (&a)
    cout << "&ptr1  :: " << (&ptr1) << endl;         // address of ptr1 // its own address
    cout << "*( &ptr1 ) :: " << *(&ptr1) << endl;    // value store at prt1 that  is address of a
    cout << "*(*(&ptr1)):: " << *(*(&ptr1)) << endl; // deferencing of value stored at ptr1 i.e a=10;
    cout << "(*ptr1) :: " << *ptr1 << endl;          // nothing bt *(&a)== a (10)


    //! opertaion on pointer

    cout << "---------opertion on pointer --------\n";
    *ptr1 = 20; // * re-assinging the values (a=10 -> 20)
    cout << "new value of a:: " << *ptr1 << endl;

    //* increment in address ( moving to next memory address )
    cout << "value of ptr1 is " << ptr1 << endl;
    ptr1++; //?  incrementing the pointer

    cout << "This is pre-increment :: " << ptr1 << endl;
    // *this integer type pointer so incremented by 4 bts

    cout << "Increment in pointer address :: " << *ptr1 << endl
         << endl; // memory is not contious so that garbage value

    // *line no (4) returning the address
    cout << "The address of varible in function ::" << pointer() << endl; // Address Returning
    cout << "The value Stored at address ::" << *pointer() << endl;       // dereferecing Address

    // ! array passing in Function

    int arr[4] = {10, 20, 30, 40};
    cout << "arr :: " << arr;      // ? arr= &arr[0]; address of index zero
    cout << "arr+1:: " << arr + 1; // ?  arr= &arr[1];

    cout << "------- Array ---------" << endl<< endl;
    cout << "& of 0th element in array ::" << arr << endl; // address of 0th index element

    cout << "Value store in 0th element ::" << *arr << endl;
    cout << " Address in 1th element ::" << *(arr + 4) << endl;

    cout << "Value store in 1th element ::" << *(arr + 1) << endl; // *(arr + 1)== arr[1]
    cout << "Value store in 2th element ::" << *(arr + 2) << endl;
    cout << "Value store in 3th element ::" << *(arr + 3) << endl;


    //! Array 2 Example

    cout << "-------passing in Function ---------" << endl
         << endl;

    int arr1[5] = {1, 2, 3, 4, 5};
    array_function(arr1); // array alway pass by address
    // we pass address of first element

    //! Void Pointer in c++

    //  we use void pointer when we dont know the data type of the pointer
    // it can  points  on any data type int char string

    cout << "THIS IS THE VOID POINTER " << endl;

    int n1 = 10;
    void *v = &n1;
    cout << "adress of the n1 :: " << v << endl;
    // ? we can not defernce this pointer Directly
    //  cout<<" cant defernce the n1 :: "<<*v<<endl;
    //  ERROR :: 'void*' is not a pointer-to-object type

    // ? WE NEED TYPE Casting for the deferencing it
    // ? Typecasting void pointer( Derefercing )

    cout << "Typecasting void pointer( Derefercing )  :: " << *(int *)v << endl; // *(int *) :: typecasting

    // ? Use of void pointer
    /* 
     1. malloc and calloc return the void pointer in c langauage
    */

    cout << "---------------------------------------" << endl;
    cout << "---------------------------------------" << endl;

    cout << "-------Poniter D.M.A ---------" << endl
         << endl;
    // ! Dynmaic Memory  allocation
    //  ? Dynmaic allocation :: allot memory in heap at run time
    // ? we need pointer to allocate memory in heap
    int n;
    cout << "Enter N::";
    cin >> n;
    int *dyna_ptr = new int; // memory of 4 or 8 bits is alloted in the heap
    cout << "Enter Elements ::" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> *(dyna_ptr + i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << *(dyna_ptr + i);
    }

    delete dyna_ptr; // deleting memory after using it

    cout << "---------------------------------------" << endl;
    cout << "---------------------------------------" << endl;
    cout << "thank you :)";

    // ? @yashrbankar  (CSI DYPIEMR)

    return 0;
}