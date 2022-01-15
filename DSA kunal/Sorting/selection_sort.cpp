#include <iostream>
using namespace std;

int swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int getmaxindex(int arr[] ,int end)
{
    //end = last element in unsorted array list
    // this function is used for find max value in the unsorted array
    int max = 0;
    for (int i = 0; i <= end; i++) //  i<= end must be great than equal to {{ mistake Scope }}
    {
        if (arr[max] < arr[i])
        {
            max = i;
        }
    }
    return max;
}

int selection(int arr[], int n)
{
    for (int i = 0; i < n; i++) 
    // for loop used here for last index to change max value
    {
        int last = n - i - 1; // last index is not cont
        /* n :: is no of elements in array
        
        let n=5
        
        i   || last= n(5) - i - 1 || 
        i=0 || last = 5    - 0 -1 == 4 // max1st no. is swap with index 4 in arr
        i=1 || last = 5    - 1 -1 == 3 // max2nd no. is swap with index 3 in arr
        i=2 || last = 5    - 2 -1 == 2 // max3th no. is swap with index 2 in arr
        i=3 || last = 5    - 3 -1 == 1 // max4th no. is swap with index 2 in arr
        i=4 || last = 5    - 4 -1 == 0 // max5th no. is swap with index 2 in arr

        here i(5)<n(5) cond false so loop breaks 

        */
        
        int maxindex = getmaxindex(arr,last);    
        // mistake scope // (arr , {{last}}) must use 'last' not 'n'
        //index of max no  is return from function getmaxindex
        swap(arr[last], arr[maxindex]);
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
    int arr[] = {5,4,3,2,1};
    sizeofarray = sizeof(arr) / sizeof(arr[0]);

    cout << "input array ::" << endl;
    display(arr, sizeofarray);
    selection(arr, sizeofarray);
    cout << endl;

    cout << "This Sorted Arrray  :: " << endl;
    display(arr, sizeofarray);

    return 0;
}