#include <iostream>
using namespace std;

class cycle
{
    int *arr, n, times;

public:
    cycle();
    int rotation();
    int display();
};

////////////////////////

int main()
{
    cycle obj;
    obj.rotation();
    obj.display();
    return 0;
}

///////////////////////////

cycle::cycle()
{
    cout << "Enter the lenght ::";
    cin >> n;
    cout << "How many time runs cycle ::";
    cin >> times;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int cycle::rotation()
{
    int temp = arr[0];
    static int var=0;
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    var++;
    if (var<times)
    {
        rotation();
    }
    
    

}

int cycle::display()
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}