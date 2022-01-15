#include <iostream>
using namespace std;

class dublicate
{
    int A[10] = {0, 0, 8, 8, 10, 12, 15, 15, 15, 20};
    int i = 0, j = 0;

public:
    void fun1();
    void fun2();
};

void dublicate::fun1()
{

    int lastDublicate = 12345;
    for (int i = 0; i < 9; i++)
    {
        if (A[i] == A[i + 1] && A[i] != lastDublicate)
        {
            cout << "Element :: " << A[i] << endl;
        }
        lastDublicate = A[i];
    }
}
void dublicate::fun2()
{

    for (int i = 0; i < 9; i++)
    {
        if (A[i] == A[i + 1])
        {
            j = i + 1; // mistake scope
            while (A[i] == A[j])
            {
                j++;
            }
            cout << A[i] << " Times " << j - i << endl;
            i = j - 1; // mistake scope
        }
    }
}

int main()
{
    dublicate obj;
    obj.fun1();
    obj.fun2();

    return 0;
}