#include<iostream>

using namespace std;

int main()
{
    int input, a , b , times ,n;
    cout<<"enter row ::";
    cin>>input;
    cout<<"enter how many times repeat ::";
    cin>>times;

    for (n=1; n<=times; n++)
    {
        for (a=1; a<=input; a++)
    {
        for (b=1; b<=a; b++)
        {
            cout<<"$";

        }
        b=1;
        cout<<endl;
        
        
    }

    for (a=input; a>=1; a--)
    {
        for (b=a-1; b>=1; b--)
        {
            cout<<"$";


        }
        b=a;
        cout<<endl;

        
    }
    
    }
    
    
    

    

        
    return 0;
}