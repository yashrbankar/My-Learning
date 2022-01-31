#include <iostream>
using namespace std;
class hash1
{
    int A[10] = {3, 6, 8, 8, 8, 10, 10 , 12, 15, 20};
    int H[20];

public:
    void func();
};

void hash1::func()
{
    for (int i = 0; i < 20; i++)
    {
        H[i] = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        H[A[i]]++;
    }
    for (int i = 0; i < 20; i++)
    {
        if (H[i] > 1)
        {
            cout << i << " times " << H[i]<<endl;
        }
    }
}

int main()
{
    hash1 obj;
    obj.func();

    return 0;
}