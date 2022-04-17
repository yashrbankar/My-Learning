#include <iostream>
using namespace std;

double tylor(int x, int n)
{
    static double  p = 1, f = 1;
    double r;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        r = tylor(x, n - 1);
        p = p * x;
        f = f * n;
        return r + p / f;
    }
}

int main()
{
    int n;
    cout<<"Enter power of e ::";
    cin>>n;
    cout<<tylor(n, 10);
    return 0;
}