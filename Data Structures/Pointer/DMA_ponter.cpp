#include <iostream>
using namespace std;

int main()
{
    int *ptr;         // pointer  ptr created inside the stack
    ptr = new int[5]; // DMA in the heap
                      // 5 space is created inside the heap
    cout<<" ptr::"<<sizeof(ptr);
    /*
    int arr[8];  ptr= new int[n];
     Dynmaic memory allocation using pointers
     array is not acutullay used here
     vvvIMP
     new opreater returns address of starting pointer in heap/
     */

    cout << "INPUT 5 NUMBERS :: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> ptr[i];
    }
    // commented for testing delete operator
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i]; // *(ptr+i)
    }
    cout<<endl<<endl;

    cout << "adress of starting point in heap" << ptr << endl;     // adress of starting point in heap
    cout << "value stored at starting point heapm ,k8ftr" << *ptr << endl; // deferencing the first address inside heap (value stored at starting point heap)
    //incomplete about  the New 
    cout << "This new[0] " << (new int) << endl; // random address in the heap
    cout << "new[0]  " << *(new int) << endl;// Garbage
    cout << "This new[1]" << *(new int[1]) << endl; // garbage

    delete[] ptr; // deleting the space in heap
    ptr=NULL;     // not the addrss so we made it null
    // testing delete operater

    // ptr=new int [2]; // new space again created
    for (int i = 0; i < 2; i++)
    {
        cin >> ptr[i];
    }
    for (int i = 0; i < 2; i++)
    {
        cout << ptr[i] << endl;
    }

    return 0;
}