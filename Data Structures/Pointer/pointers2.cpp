
/*

charcter array & pointers


*/


#include<iostream>
#include <string>
using namespace std;

int main()
{
    // type1
    char a[10]="yash";

    // type2
    // char a[]={'y','a','s','h' , '\0'};



    // type 3
    // a[0]='y';
    // a[1]='a';
    // a[2]='s';
    // a[3]='h';
    // a[4]='\0';
     cout<< "Size of array "<<sizeof a<<endl; // this used for finding  array length

    cout<<a <<endl; // Imp  concept  string   for   array i.e gives output  Yash


    int a1[4];
    a1[0]=1;
    a1[1]=1;
    a1[2]=1;
    a1[3]=1;
    // a1[4]='\0';
    
    cout<<a1 ; // Imp concept of int array  i.e  gives  Adress of &a1[0]


return 0;
}