#include <iostream>
using namespace std;
class Dubli
{
    int *arr, n;

public:
    Dubli()
    {
        cout << "Enter the n ::";
        cin >> n;
        arr = new int[n];
        cout << "Enter the elements :: " << endl;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        fun();
    }
    void fun();
};

void Dubli::fun()
{
    int index = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (j != index && arr[index] == arr[j])
            {
                cout<<arr[index++]<<endl;
            }

        }
        index++;
    }
}

int main()
{
    Dubli obj;

    return 0;
}