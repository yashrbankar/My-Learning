#include<iostream>
using namespace std;

int main()
{
    float a;
    cout<<"ENTER THE INTEGER ";
    cin>>a;
    if(0>a)
    {
        cout<<"the answer is"<<int (a*(-1));
    }
    else{
        cout<<"the answer is"<<int (a);

    } 
    return 0;
}