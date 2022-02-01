#include <iostream>
using namespace std;

class ADT
{
    int length = 0, size = 20;
    int arr[20];

public:
    ADT();
    int insert();
    int display();
    void remove();
    void search();
    void reverse();
    void right_shift();
};
int main()
{
    ADT obj;
label:
    cout << "Plz select the Right Key for performing Operation on Array" << endl;
    cout << "_______________________________________________" << endl
         << endl;
    cout << "Key :: 0  - For Exiting " << endl;
    cout << "Key :: 1  - For Display " << endl;
    cout << "Key :: 2  - For Inserting New Elements " << endl;
    cout << "Key :: 3  - For deleting  Element " << endl;
    cout << "Key :: 4  - For searching  Element " << endl;
    cout << "Key :: 5  - For reversing  Element " << endl;
    cout << "Key :: 6  - For right Shifting Element " << endl;
    int key = 0;
    cout << "Enter the Correct key ::";
    cin >> key;
    switch (key)
    {
    case 0:
        cout << "Program Ended " << endl;
        return 0;
        break;
    case 1:
        obj.display();
        break;
    case 2:
        obj.insert();
        break;
    case 3:
        obj.remove();
        break;
    case 4:
        obj.search();
        break;
    case 5:
        obj.reverse();
        break;
    case 6:
        obj.right_shift();
        break;

    default:
        cout << "Enter the correct key" << endl;
        goto label;
        break;
    }
    if (key != 0)
    {
        goto label;
    }

    return 0;
}
ADT::ADT()
{
    cout << "Enter the length of array :: ";
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
}

void ADT::remove()
{
    int index;
    cout << "Enter the Index for  Deleting  :: ";
    cin >> index;
    if (index <= length)
    {
        for (int i = index; i < length; i++)
        {
            arr[i] = arr[i + 1];
        }
        length--;
        display();
    }
    else
    {
        cout << "Enter the correct index " << endl;
    }
}

int ADT::insert()
{
    int index, number;
    cout << "Enter the Index for inserting  :: ";
    cin >> index;
    cout << "Enter the Number for inserting  :: ";
    cin >> number;
    if (index <length)
    {

        for(int i = length; i > index - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = number;
        length++;
    }
    else
    {
        length++;
        arr[length] = number;
    }
    display();
}

int ADT::display()
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ADT::search()
{
    int key;
    cout << "Enter Key for Searching " << endl;
    cin >> key;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == key)
        {
            cout << "The Element is Present at the index : " << i << endl;
        }
    }
}

void ADT::reverse()
{
    cout << "array is reversed sucessfully " << endl;
    int i = 0, j = length - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]); // STL function 
        i++;
        j--;
    }
    display();
}

void ADT::right_shift()
{
    int first = arr[0];
    for (int i = 0; i < length - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[length-1] = first;
    display();
}
