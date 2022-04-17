1#include <iostream>
using namespace std;

class subarray
{
    int *arr, n;

public:
    subarray();
    int kadanes();
};

int main()
{
    subarray obj;
    obj.kadanes();

    return 0;
}

subarray::subarray()
{
    cout << " n :: ";
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int subarray::kadanes()
{
    int max = -10000;  // 1 2 3 -2 5
    int current_value = 0;
    for (int i = 0; i < n; i++)
    {
        current_value = current_value + arr[i];
        if (max < current_value)
        {
            max = current_value;
        }
        if (current_value < 0)
        {
            current_value = 0;
        }
    }
    cout<<"max :: " << max;
}