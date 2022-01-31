#include <iostream>
using namespace std;

class Array
{
public:
    int n;
    int size = 10;
    int *H;
    int length;
    int *A;

    void display();
    void append();
    void insert();
    int search();
    Array()
    {
        A = new int[size];

        cout << "Enter number of elements to be inserted in array :" << endl;
        cin >> n;
        length = n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter value of " << i << " index :" << endl;
            cin >> A[i];
        }
    }
};
void Array::display()
{

    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
}
void Array::append()
{
    int x;
    cout << "\nEnter number to be added in array :" << endl;
    cin >> x;
    A[length] = x;
    length++;
    cout << "New Array is : " << endl;
    display();
}
void Array::insert()
{
    int index, x;
    cout << "\nEnter index at which value is to be insertd " << endl;
    cin >> index;
    cout << "Enter value to be inserted : " << endl;
    cin >> x;
    for (int i = length; i >= index; i--)
    {
        A[i + 1] = A[i];
    }
    A[index] = x;
    length++;
    display();
}
int Array::search()
{
    int key;
    cout << "\nEnter element to be found : " << endl;
    cin >> key;
    for (int i = 0; i < length; i++)
    {
        if (key == A[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    Array a;
    a.append();
    a.insert();
    int ans=a.search();
    if (ans != 1)
    {
        cout << "Element found at index " << ans << endl;
    }
    else
    {
        cout << "Element not found " << endl;
    }
    return 0;
}