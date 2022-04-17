#include <iostream>
using namespace std;
class dublicate
{
    int *arr;
    int n , key;

public:
    dublicate();
    int func();
};

int main()
{
    dublicate obj;
    obj.func();
    return 0;
}

dublicate::dublicate()
{
    cout << "Enter the n :: ";
    cin >> n;

    cout << "Enter elements in the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int  dublicate::func()
{
     
}
