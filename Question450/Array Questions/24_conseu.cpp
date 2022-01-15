// wrong answer for number not starting from 0

#include <iostream>
using namespace std;

int func(int arr[], int N)
{
    
    int A[N];
    for (int i = 0; i <N; i++)
    {
        A[i] = 0;
    }

    int x = 0;

    for (int k = 0; k < N; k++)
    {
    
            A[arr[k]-1]++;
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] == 0)
        {
            return i;
        }
    }

}

int main()
{
    int arr[7] = {1,2,4,5,6};
    cout << func(arr, 7);
    return 0;
}