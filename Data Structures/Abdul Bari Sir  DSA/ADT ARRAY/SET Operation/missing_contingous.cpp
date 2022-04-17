#include <iostream>
using namespace std;
class missing
{
    int A[10] = {6, 7, 8, 9, 10, 13, 14, 16, 17};
    int l = A[0], h = A[10], diff = A[0];

public:
    void func();
    
};

int main()
{

    missing obj;
    obj.func();

    return 0;
}

void missing::func()
{
    for (int i = 0; i < 10; i++)
    {
        if (A[i]-i!=diff)
        {
            while (diff<A[i]-i)
            {
                cout<<"element ::"<<diff+i<<endl;
                diff++;
            }
            
        }
        
    }
    

}
