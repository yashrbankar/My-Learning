#include <iostream>
using namespace std;
int arr[6];

int num(int x)
{
    if (x>=0)
    {
        cout<<"1"<<endl;
        num(x-1);
    }
    // cout<<"Number store in Array";
    cout<<arr[x]<<",";
    
    
  
}

    int main()
{
    
    
    for (int i = 0; i <=  5; i++)
    {
        cout << "Element -" << i << " : ";
        cin >> arr[i];
        cout << endl;
    }
    num(5);

    return 0;
}