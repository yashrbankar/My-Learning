#include <iostream>
using namespace std;

class Merge
{
    int m = 5, n = 6;
    int A[5] = {3, 8, 16, 20, 25};
    int B[6] = {4, 10, 12, 22, 23 , 27};
    int C[11];

public:
    void func();
    void display();
};

int main()
{
    Merge obj;
    obj.func();
    obj.display();

    return 0;
}

void Merge::func()
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            C[k++] = A[i++];
        }
        else
        {
            C[k++] = B[j++];
        }
    }

    while (i < m)
    {
        C[k++] = A[i++];
    }
    while (j < n)
    {
        C[k++] = B[j++];
    }
}

void Merge::display()
{
    for (int  i = 0; i < m+n; i++)
    {
        cout<<C[i]<<" ";
    }
    
}