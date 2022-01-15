#include <iostream>
using namespace std;

void swap(int *a, int *b); // Call by pointer

int partition(int arr[], int low, int high);

void quickSort(int arr[], int low, int high);

void displayArray(int arr[], int size);

int main()
{
    int arr[] = {12, 23, 3, 43, 51, 35, 19, 45, 0, 100};
    int no_of_elements = sizeof(arr) / sizeof(arr[0]); //  n means no element in array
    cout << "Input array" << endl;
    displayArray(arr, no_of_elements); // array passing
    cout << endl;
    
    quickSort(arr, 0, no_of_elements - 1);
    cout << "Array sorted with quick sort" << endl;
    displayArray(arr, no_of_elements);
    return 0;
}

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) // printing array
    {
        cout << arr[i] << "  ";
    }
}

// quicksort algorithm
void quickSort(int arr[], int low, int high)
{
    if (low < high) //( 2 elements ) mistake scope for  recursion condition is recuried
    {
        //partition the array
        int sorted_position_j = partition(arr, low, high); // mistake scope
        //sort the sub arrays independently  {{ sorting in 2 parts }}

        // Recursion call

        quickSort(arr, low, sorted_position_j - 1);  //  mistake scope  recurcion of quicksort not partition
        quickSort(arr, sorted_position_j + 1, high); //  mistake scope  recurcion of quicksort not partition
    }
}

// partition the array using first element as pivot
int partition(int arr[], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];
    // comment  Line no: 92

    while (i < j)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j) //condition imp
        {
            swap(&arr[i], &arr[j]);
        } //mistake scope
    }
    swap(&arr[low], &arr[j]); //mistake scope

    return j;
    // mistake scope
    // value of function to int j1
    // line 42
}

// Swap two elements - Utility function
void swap(int *a, int *b) // This Swaping of elements using Pointer swap {{Call by pointer Method}}
{
    int t = *a;
    *a = *b;
    *b = t;
}

// comment line no :: 58

// pivot is first element in array arr

// logic of quick = Anuj bhaiya
// logic
/*
        From Example 
        let arr is 1 to 10 {5 ,4 , 8 , 3, 2 ,9 ,1,6,7 ,10 }
        pivot=5; // first element in array 
        for exist position of 5 
        all small elements lefts side of 5 
        and  greater elements at right 
        then 5 is sorted 
        ///////////////////

        so

        when arr[i] is smaller then pivot then i++
        when arr[i] is greater  then pivot then j--
        then if (i<j)swap (arr[i] , arr[j])
        if i >j then swap then swap[arr[low] , arr[j]]
        now pivot is sorted at his orignal position 
        and array is converted is two unsorted parts left side of j and right side of j
        so quick sort is used as recursion function

        */