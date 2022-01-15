#include <iostream>
using namespace std;
int main()
{
    int a , b ;
    cout<<"enter no for table "<< endl;
    cin>>a;
    for (b=1; b<=10; b=b+1)
    {
        cout<<"Table  of "<<a;
        cout<<a <<"*"<<b <<"="<<a*b<<endl;
    }
    return 0 ;
    
}