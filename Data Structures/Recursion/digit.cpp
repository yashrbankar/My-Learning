#include <iostream>
#include <cmath> //for rise to power
using namespace std;
int index()
{
    

}

int main()
{
    int sum = 1, n, x;
    cout << "Enter Number :";
    cin >> n;
    // 100

    if (n < 10)
    {
        cout << 1;
    }
    else
    {
        for (int i = 1; i < 10; i++)
        {
            x = n / (pow(10, i)); // syntex of power
            if (x > 0)

            {

                sum = sum + 1;
            }
            else
            {

                break;
            }
        }
        cout << sum;
    }

    return 0;
}