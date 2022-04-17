#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, index , length;
    cout<<"enter the size of array ::" ; 
    cin>>n;  
    cout<<"enter the length of array ::" ; 
    cin>>length;  
    int arr[n];
    cout<<"element in the array :: \n";
    for (int i = 0; i < length; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"enter the index at which the element to be insert ::";
    cin>>index;
    cout<<"enter the value to be inserted ";
    int key;
    cin>>key;

    if(index>-1 ||index<length)
    {
        for (int i = length; i >index ; i--)
        {
            arr[i]=arr[i-1];
        }
        arr[index]=key;
        length++;
    }
    else cout<<"invalid index \n";
    for (int  i = 0; i < length; i++)
    {
        cout<<" "<<arr[i];
    }
    


    
   return 0;
}