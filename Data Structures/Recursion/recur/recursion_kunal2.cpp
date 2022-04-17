#include <iostream>
using namespace std;

int fibo(int i)
{
    if (i < 2)
    {
        return i;
    }
    return fibo(i - 1) + fibo(i - 2);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << fibo(i);

        cout << " , ";
    }
    cout<<".........";

    return 0;
}