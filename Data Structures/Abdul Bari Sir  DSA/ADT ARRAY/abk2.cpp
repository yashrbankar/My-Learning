#include <iostream>
#include <algorithm>
using namespace std;

class Hash
{
    int max, *H , k;
    int A[10] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};

public:
    Hash()
    {
        max = *max_element(A, A + 10);
        H = new int[max];
        cout<<"Enter Valur of  k ::";
        cin>>k;
        for (int i = 0; i <max; i++)
        {
            H[i] = 0;
        }
    }
    void func();
};
 void Hash::func()
 {
     int kmins=0;
     for (int i = 0; i < 10; i++)
     {
        kmins=k-A[i];
        
        if (H[kmins]>0)
        {
            cout<<A[i]<<","<<kmins<<endl
        }
        else
        {
            H[A[i]]++;
        }
         
     }
     

 }
int main()
{
    Hash obj;
    obj.func();
    return 0;
}