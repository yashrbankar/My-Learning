#include<iostream>
using namespace std;

int main()
{
    int *ptr;
    // ptr= new int[5]; // Dynmaic memory allocation using pointers 
                     //array is not acutullay used here
    ptr=(int*)malloc(5*sizeof(int));
    cout<<"Enter Array ::"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>ptr[i]; 
    }
    for (int i = 0; i < 5; i++)
    {  
        cout<<ptr[i];
    }

    delete []ptr;
    

return 0;
}