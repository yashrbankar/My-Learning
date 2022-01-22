#include <bits/stdc++.h>
using namespace std;

class Set
{
public:
    int A[5] = {1, 2, 4, 5, 7};
    int B[5] = {2, 3, 4, 6, 8};
    int a=5 , b=5;

    int C[10];
    int i = 0, j = 0, k = 0;

    void union1();
    void union2();
    void display(int * , int);
    void intersection1();
    void intersection2();
    void subtration1();
    void subtration();
    bool search(int , int * , int );
};

bool Set::search(int key , int arr[] ,int n)
{
    for (int i = 0; i < n; i++)
    {
        if (key==arr[i])
        {
            return true;
        }
    }
    return false; 
}

void Set::display( int arr[] ,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void Set::union1()
{
    int i = 0, j = 0, k = 0;
    for (int i = 0; i < a; i++)
    {
        C[i]=A[i];
        k++;
    }
    for (int i = 0; i < b; i++)
    {
        int key =B[i];
        bool ans=search(key, A , a );
        if (ans==false)
        {
            C[k]=key;
            k++;
        }
        
    }
    cout<<"union : ";
    display(C,  k); 
    
}
void Set::intersection1()
{
    for (int i = 0; i < a; i++)
    {
        int key =A[i];
        bool ans=search(key, B , b );
        if (ans==true)
        {
            C[k]=key;
            k++;
        }
        
    }
    display(C,  k);
}

void Set::union2()
{
    int i=0 , j=0 , k=0;
    while (i<a && j<b)
    {
        if(A[i]<B[j])
        {
            C[k++]=A[i++];
        }
        else if(A[i]>B[j])
        {
            C[k++]=B[j++];
        }
        else
        {
            C[k++]=A[i++];
            j++;
        }
    }

    for ( ; i < a; i++)
    {
        C[k++]=A[i];
    }
    for ( ; j < b; j++)
    {
        C[k++]=B[j];
    }
    display(C,  k);
}
void Set::intersection2()
{
    int i=0 , j=0 , k=0;
    while (i<a && j<b)
    {
        if(A[i]<B[j])
        {
           i++;
        }
        else if(A[i]>B[j])
        {
            j++;
        }
        else
        {
            C[k++]=A[i++];
            j++;
        }
    }

    display(C,k);
}

void Set::subtration()
{
    int k=0;
    for (int i = 0; i < a; i++)
    {
        int ans=search(A[i] , B , b);
        if (ans==false)
        {
            C[k++]=A[i];
        }
    }
    display(C,k);
}

int main()
{
    Set obj ;
    obj.union1();
    cout<<"\n unique :: ";
    obj.union2();
    cout<<"\n intersection :: ";
    obj.intersection1();
    cout<<"\n intersection2 :: ";
    obj.intersection2();
    cout<<"\n subtration (A-B) :: ";
    obj.subtration();
    return 0;
}