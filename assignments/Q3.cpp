#include<iostream>

using namespace std;

int main()
{
    int num,n,mul=1;
    cout<<"enter ur no.:: ";
    cin>>num;
    // 10
    for(n=num;n>=1;n=n-1)
    {
       mul=mul*n;
    //    cout<<"@"<<endl; 
    }
    cout<<"*"<<endl; 
    cout<<"Solution::"<<mul;
    

        
    return 0;
}