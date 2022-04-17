#include <iostream>
using namespace std;

class union2
{
    int k = 0 , m=6 , n=6 ;
    int A[6] = {0,2,5,6,8 , 10};
    int B[6] = {1,3,5,7,9 , 11};
    int C[10];

public:
    void func();
    void display();
};

int main()
{
    union2 obj;
    obj.func();
    obj.display();

    return 0;
}

void union2::func()
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (A[i] == B[j])
        {
            C[k++] = A[i++];
            j++;
        }
        else{
            i++;
            j++;
        }

    }
   
}

void union2::display(){
    for (int i = 0; i < k; i++)
    {
        cout<<C[i]<<"  ";
    }
    
}