#include <iostream>
using namespace std;

void fun(int n)
{
    if (n > 0) // recursion condition
    {
        fun(n - 1); // recursive call ;
        cout << n << endl;
        fun(n - 1); // recursive call ;
    }
}

int main()
{
    int x = 3;
    fun(x);
    return 0;
}