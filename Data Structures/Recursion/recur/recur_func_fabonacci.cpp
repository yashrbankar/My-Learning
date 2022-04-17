#include <iostream>
using namespace std;

int fab(int a)
{
    if (a < 2)
    {
        return 1;
    }
    return fab(a - 1) + fab(a - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fab(n);

    return 0;
}