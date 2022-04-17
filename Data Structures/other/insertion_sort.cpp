#include <iostream>
using namespace std;

int insertion(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // j varies with i // and it canverts particial array(in small parts )
    {
            
        for (int j = i + 1; j > 0; j--) //Mistake scope
        /*

         j varible examplantion 
         j varible is used sort partical array  
         for i=0 that is 1st  pass j is particially sorted from j=i(0)+1 to 0  {{ j=i(0)+1 to ; 0<j; j--}} 
         for i=1 that is 2nd  pass j is particially sorted from j=i(1)+1 to 0  {{ j=i(1)+1 to ; 0<j; j--}}
         till the j<0

         */

        {
            if (arr[j] < arr[j - 1]) // swaping
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else
            {
                break;  // this makes code optimize

                /*
                when the condition of the if swap is false
                then it means that the left side of j is already 
                sorted
                */  
                // it make code optimize than bubble sort
            }
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
    int arr[] = {5, 3, 4, 1, 2};
    sizeofarray = sizeof(arr) / sizeof(arr[0]);

    cout << "input array ::" << endl;
    display(arr, sizeofarray);
    insertion(arr, sizeofarray);
    cout << endl;

    cout << "This Sorted Arrray  :: " << endl;
    display(arr, sizeofarray);

    return 0;
}