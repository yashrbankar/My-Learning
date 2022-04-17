#include <iostream>
using namespace std;

int fib1(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib1(n - 2) + fib1(n - 1);
    }
}

int fib2(int n)
{

    int t0 = 0, t1 = 1, sum = 0; // mistake scope sum=0 must be there
    for (int i = 0; i < n; i++)
    {
        sum = t0 + t1;
        t0 = t1;
        t1 = sum;
    }
    return sum;
}
int arr[20];
int fib3( int n)
{
    if (n <= 1)
    {
        arr[n] = n;
        return n;
    }
    else
    {
        if (arr[n - 2] == -1)
        {
            arr[n - 2] = fib3[n-2];
        }
        if (arr[n - 1] == -1)
        {
            arr[n - 1] = fib3[n-1];
        }
        return arr[n - 2] + arr[n - 1];
    }
}

int main()
{
    int n;
    cout << "enter the n :: ";
    cin >> n;
    for (int i = 0; i < 20; i++)
    {
        arr[i] = -1;
    }

    cout << fib1(n) << endl;
    cout << fib2(n) << endl;
    cout << fib3(n) << endl;

    return 0;
}