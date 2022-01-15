#include <iostream>
using namespace std;

class Symetrical
{
    int *arr, n;

public:
    Symetrical()
    {
        int n1;
        cout << "Enter the n ::";
        cin >> n;
        n1 = n * (n + 1) / 2;
        arr = new int[n1];
        cout << "enter Elemnt:: " << n1 << endl;
        for (int i = 0; i < n1; i++)
        {
            arr[i] = i + 1;
        }
    }

    void display();
};

void Symetrical::display()
{
   
}

int main()
{
    Symetrical obj;
    obj.display();
    return 0;
}