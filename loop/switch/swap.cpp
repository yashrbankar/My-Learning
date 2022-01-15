#include <iostream>
using namespace std;
int main()
{
    int a , b , temp;
    cout<<"enter first no. "<<endl;
    // 4
    cin>>a;
    cout<<"enter second no. "<<endl3;
    // 5
    cin>>b;
    
    switch (a==b)
    {
        
    case 0:
        temp=a;
        a=b;
        b=temp;
        cout<<"swap anwer"<<endl;
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b;

        break;
    
    case 1:
    cout<<"both no are same";
        break;
    }
    return 0;

}