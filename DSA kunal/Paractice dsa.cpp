#include <iostream>
using namespace std;
int swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int getmaxindex(int arr, int end)
{
    int max = 0;
    for (int i = 0; i <= end; i++)
    {
        if (arr[max] < arr[i])
        {
            max = i;
        }
    }
    return max;
}
int selection(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int last = size - i - 1;//
        int maxindex = getmaxindex(arr, last); //
        swap(arr[last], arr[maxindex]);
    }
}

int main()
{
    int n;
    int arr[] = {5, 4, 3, 2, 1};
    n = sizeof(arr) / sizeof(arr[0]);
    selection(arr, n);
    cout << "Sorted Array ::" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}