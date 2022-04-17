#include <iostream>
using namespace std;

double tylor(int x, int n)
{
    static double s = 1;

    if (n == 0)
    {
        return 1;
    }
    else
    {
        s = 1 + x * s / n; // mistake scope int {{  x*s }}
        tylor(x, n - 1);
        return s;
    }
}
double tylor1(int x, int n)
{
    double s = 1;
    while (n > 0)
    {
        s = 1 + x * s / n; // mistake scope 
        n--;
    }
    return s;
}
int main()
{
    cout << tylor(1, 10)<<endl;
    cout << tylor1(1, 10);
    return 0;
}