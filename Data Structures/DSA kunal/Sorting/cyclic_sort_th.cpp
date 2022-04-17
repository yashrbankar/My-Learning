#include <iostream>
using namespace std;

int cycle(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        // 5 4 3 2 1
        int correctindex = arr[i] - 1; //
        // 0  not  5-1      
        if (i != correctindex)  // current is not equal to the correct index then swap it
        {
            int temp = arr[i];
            arr[i] = arr[correctindex];
            arr[correctindex] = temp;
        }
        else
        {
            i++; // when i == correctindex that is number is it coreect position then i++ 
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
    int sizeofarray;
    int arr[] = {5, 4, 3, 2, 1};
    sizeofarray = sizeof(arr) / sizeof(arr[0]);

    cout << "input array ::" << endl;
    display(arr, sizeofarray);
    cycle(arr, sizeofarray);
    cout << endl;

    cout << "This Sorted Arrray  :: " << endl;
    display(arr, sizeofarray);

    return 0;
}