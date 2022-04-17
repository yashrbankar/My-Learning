#include<iostream>
using namespace std;

class Comman
{   int n1=5,n2=5,n3=5;
    int i=0, j=0,k=0;
    int A[5]={1,2,3,5 , 10};
    int B[5]={2,3,5,6,10};
    int C[5]={3,5,6,7,10};

    public:
    void func();

};

void Comman::func()
{
    
    while (i<=n1 && j<=n2 && k<=n3)
    {
        if (A[i]==B[j] && A[i]==C[k] && B[j]==C[k] )
        {
            cout<<"Comman Element is :: "<<A[i]<<endl;
            i++;
            j++;
            k++;
        }
        
         // ii
        else if (A[i]>B[j])
        {
           j++; 
        }
        else if (A[i]>C[k])
        {
           k++; 
        }
        /// kk
        else if (C[k]>A[i])
        {
           i++; 
        }
        else if (C[k]>B[j])
        {
           j++; 
        }
        // j
        else if (B[j]>A[i])
        {
           i++; 
        }
        else if (B[j]>C[k])
        {
           k++; 
        }
        else
        {
           cout<<" Comman Element is not found "<<endl;
        }

    }
    

}

int main()
{
   Comman obj;
   obj.func();

   return 0;
}