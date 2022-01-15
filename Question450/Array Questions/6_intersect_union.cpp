#include <iostream>
using namespace std;
class sets
{

    int *ptr1, *ptr2, *array , *array2;
    int length1, length2, index = 0;

public:
    sets();
    int intersection();
    int display();
    int union2();
};

int main()
{
    class sets obj;
    obj.intersection();
    obj.union2();
    return 0;
}

sets::sets()
{
    cout << "Enter the first array : " << endl;
    cout << "length1 ::";
    cin >> length1;
    ptr1 = new int[length1];
    for (int i = 0; i < length1; i++)
    {
        cin >> ptr1[i];
    }
    cout << "Enter the second array : " << endl;
    cout << "length2 ::";
    cin >> length2;
    ptr2 = new int[length2];
    for (int i = 0; i < length2; i++)
    {
        cin >> ptr2[i];
    }
}

int sets::intersection()
{
    
    array = new int[10];

    
    for (int i = 0; i < length1; i++)
    {
        for (int j = 0; j < length2; j++)
        {
            if (ptr1[i] == ptr2[j])
            {
                array[index++] = ptr1[i];
            }
        }
    }
    cout<<"Intersection ::"<<endl;
    for (int i = 0; i < index; i++)
    {
        cout << array[i] << "   ";
    }
}

int sets::union2()
{
    
    int index_union = length1 + index;
    array2 = new int[index_union];

    for (int i = 0; i < length1; i++)
    {
        array2[i] = ptr1[i];
    }
    for (int i = length1 ; i < index_union; i++)
    {
        array2[i] = array[i];
    }
    cout<<"Union :: "<<endl;
    for (int i = 0; i < index_union; i++)
    {
        cout<<array2[i]<<" ";
    }
    
}
