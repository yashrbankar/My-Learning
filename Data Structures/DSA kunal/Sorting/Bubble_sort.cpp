#include <iostream>
using namespace std;
int flag;
int bubble(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        // optimatin of code

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        // optimization
        if (flag == 0)
        {
            break;
        }
    }
}
int display(int arr[], int no)
{
    for (int i = 0; i < no; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int length;
    int arr[] = {1, 2, 3, 4, 5};
    length = sizeof(arr) / sizeof(arr[0]);

    cout << "input array ::" << endl;
    display(arr, length);
    bubble(arr, length);
    cout << endl;

    cout << "This Sorted Arrray  :: " << endl;
    display(arr, length);

    return 0;
}