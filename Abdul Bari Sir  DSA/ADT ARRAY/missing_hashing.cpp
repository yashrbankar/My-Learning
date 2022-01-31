#include <iostream>
using namespace std;

class miss
{
    int A[10] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
    int l = 1, h = 12, *H;

public:
    void func();
    miss()
    {
        H = new int[h];
    }

};

void
miss::func()
{
    for (int i = 0; i < 10; i++)
    {
        H[A[i]]++;
    }
    for (int i = l - 1; i < h; i++)
    {
        if (H[i] == 0)
        {
            cout << "Missing Element ::" << i << endl;
        }
    }
}

int main()
{
    miss obj;
    obj.func();

    return 0;
}