#include<iostream>

using namespace std;

int main()
{
    int input, row , col, num ;
    cout<<"enter your no ::";
    cin>>input;
    for(row=1;row<=input;row++)
    {
        
            for (num=1; num<=row; num++)
            {
               cout<<num<<"  "; 
            }
            cout<<endl;                  
    }
    for(row=input;row>=1;row--)
    {
        
            for (num=1; num<=row; num++)
            {
               cout<<num<<"  "; 
            }
            cout<<endl;                  
    }

    

        
    return 0;
}