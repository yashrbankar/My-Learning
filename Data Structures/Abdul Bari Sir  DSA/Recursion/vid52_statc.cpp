#include<iostream>
using namespace std;

int fun(int n)
{
    static int x;
    if (n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    
}

int main()
{
    int x=5;
    cout<<fun(x);

return 0;
}