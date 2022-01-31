#include <iostream>
using namespace std;

class ABK
{
    int A[4] = {1,1,1,1};
    int i = 0, j = 3;

public:
    void func();
};

void
ABK::func()
{
    while(i < j)
    {
        if (A[i] + A[j] > 2)
        {
            j--;
        }
        else if (A[i] + A[j] < 2)
        {
            i++;
        }
        else
        {
            cout << A[i] << " + " << A[j] << " = "<<2<<endl;
            i++;
            j--;
        }
    }
}

int main()
{
    ABK obj;
    obj.func();

    return 0;
}