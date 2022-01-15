#include <iostream>
using namespace std;

void sub_array(int arr[], int n)
{
    int cur = 1;
    int max = -1000000;
    for (int i = 0; i < n-1; i++)
    {
         cur=arr[i];
        for (int j = i + 1; j < n; j++)
        {
        cur = cur * arr[j];
            if (cur > max)
            {
                max = cur;
                
            }
        }
    }
    cout<<"max :: "<<max;
}
int main()
{
    int arr[5]={6, -3, -10, 0, 2};
    sub_array(arr, 5);
    return 0;
}