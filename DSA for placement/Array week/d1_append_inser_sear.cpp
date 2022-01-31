#include <bits/stdc++.h>
using namespace std;

class Array
{
public:
    int arr[10];
    int n;
    int length;
    Array()
    {
        cout << "Enter size of array ";
        cin >> length;
        cout << "enter " << length << " element ";
        for (int i = 0; i < length; i++)
        {
            cin >> arr[i];
        }
    }
    void display();
    void append();
    void insert();
    int search();
};

void Array::display()
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

void Array::append()
{
    int ele;
    cout << "\n element to be append :: ";
    cin >> ele;

    arr[length++] = ele;
    display();
}

int Array::search()
{
    int  ele;
    cout << "element to be search :: ";
    cin >> ele;
    for (int i = 0; i < length; i++)
    {
        if(arr[i]==ele)
        {
           return i;
        }
    }
    return 0;
}

void Array::insert()
{
    int ind, ele;
    cout << "enter the index to insert ::";
    cin >> ind;
    cout << "element to be insert :: ";
    cin >> ele;
    for (int i = length; i > ind; i--)
    {
        cout << "1\n";
        arr[i] = arr[i - 1];
    }
    arr[ind] = ele;
    length++;
    cout << "\n";
    display();
}
int main()
{
    int sear;
    Array obj;
    // obj.insert();
    // obj.append();
    sear=obj.search();
    if(sear!=0)
    {
      cout<<"element is found at index  :: "<<sear;
    }
    else
    {
        cout<<"Not found";
    }
    return 0;
}