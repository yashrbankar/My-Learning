#include <iostream>
using namespace std;
int arr[5] ;
int max_value = -10000;
int recursion(int i)
{

    if (arr[i] > max_value && i < 5)
    {
        // cout<<"*999999999999999"<<endl;
        max_value = arr[i];
        recursion(i+1);
    }
    if(i<5)
    {
        // cout<<"#"<<endl;

       recursion(i+1);
    }
    
    return max_value;
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Number " << i + 1 << "=";
        cin >> arr[i];
    }

    cout<<"Max Value  is "<<reqcursion(0);

    return 0;
}