#include <iostream>
using namespace std;

class Counti
{
    int n = 5, count = 0;
    int arr[5] = {5,4,3,2,1};

public:
    void func();
};
void Counti::func()
{
    int current=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            count++;
            while (i > 0 )
            {
                if (arr[i] < arr[i - 1])
                {
                    int t1 = arr[i];
                    arr[i] = arr[i - 1];
                    arr[i - 1] = t1;
                    current=arr[i+1];
                    count++;
                }
                i--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<count;
    
}

int main()
{
    Counti obj;
    obj.func();

    return 0;
}