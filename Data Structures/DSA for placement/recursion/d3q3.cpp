// Recursive approach to check if an
// Array is sorted or not
#include <bits/stdc++.h>
using namespace std;


int func(int arr[], int n)
{
	
	if (n == 1 || n == 0)
		return 1;

	if (arr[n - 1] < arr[n - 2])
		return 0;

	return func(arr, n - 1);
}

int main()
{
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	if (func(arr, n))
    {
		cout << "sorted ";
    }
	else
		cout << "Not sorted";
}
