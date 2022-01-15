#include<iostream>
using namespace std;
int n;

int foct(int n)
{
    if (n>=0 && n<2)
    {
        return 1 ;
    }
    
    return n*foct(n-1); 
}

int main()
{
    int n;
 cout<<"Enter Number :";
 cin>>n;
 cout<<foct(n);
return 0;
}