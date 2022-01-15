#include <iostream>
#include <algorithm>
using namespace std;
class intersection1
{
    int m = 5, n = 5, ind = 0;
    int arr1[5] = {3, 5, 10, 4, 6};
    int arr2[5] = {12, 4, 7, 2, 5};
    int arr3[10];

public:
    void union_unsorted();
    bool search(int);
    void display();
};

int main()
{
    intersection1 obj;
    obj.union_unsorted();
    obj.display();

    return 0;
}

void intersection1::union_unsorted()
{

    for (int i = 0; i < m; i++)
    {
        arr3[i] = arr1[i];
        ind++;
    }
    for (int i = 0; i < n; i++)
    {
        int key = arr2[i];
        bool ans = search(key);
        if (ans == true)
        {
            arr3[ind++] = arr2[i];
        }
    }
}

bool intersection1::search(int key)
{
    for (int i = 0; i < m; i++)
    {
        if (key == arr1[i])
        {
            return false;
        }
    }
    return true;
}

void intersection1::display()
{
    for (int i = 0; i < ind; i++)
    {
        cout << arr3[i] << " ";
    }
}