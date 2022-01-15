#include <iostream>
#include <stdio.h> // C and C++ Convert
using namespace std;
//  Page no 6 
struct name
{

    int num; // 4
    // char arr[10]; // 10 
    // Some times extra memory is created in the Structure due to the "PADDING"
    char name[10];// 1 
    // SIZE OF name == 16 due to the padding
    
};

int main()
{
    /*
     SIZE OF STRUCT
    int size;
    struct name obj;
    size = sizeof(obj); // that space is created  in the stack
    // Every every obj size is created in stack
    cout << "The size :: " << size;

    */

   cout<<"Enter Number of obj to created "<<endl;
   int n;
   cin>>n;
   struct name objs[n];
   for (int i = 0; i <n; i++)
   {
       cout<<"Enter the Roll no & Name ";
       cin>>objs[i].num;
       cin>>objs[i].name;
   }
    return 0;
}