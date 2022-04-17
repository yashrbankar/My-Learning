#include<iostream>
using namespace std;

class Matrix
{
    int n , *arr  , col , row;
    public:
    void display();
    void get();
    void set();
   Matrix()
   {
       cout<<"Enter n ::";
       cin>>n;
       int size=(n*(n+1))/2;
       arr=new int[size];
       cout<<"Enter "<<size<<"elements"<<endl;
       for (int  i = 0; i <size; i++)
       {
           cin>>arr[i];
       }   
   }
   ~Matrix(){
       delete []arr;
   }

};

void Matrix::get()
{
    int i=0 , j=0 , key;
    cout<<"i&j";
    cin>>i>>j;
    if (i>=j)
    {
       cout<<arr[(i*(i-1))/2+(j-1)];
       display();
    }
    else
    {
        cout<<"0";
        display();
    }
    
}
void Matrix::set()
{
    int i=0 , j=0 , key=1;

    cout<<"Key :: "<<endl;
    cin>>key;
    cout<<"i & j"<<endl;
    cin>>i>>j;
    if (i>=j)
    {
       arr[(i*(i-1))/2+(j-1)]=key;
       display();
    }
}

void Matrix::display()
{
    int k=0;
    for (int i = 0; i <n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            if (i>=j)
            {
                cout<<arr[k++]<<" ";
            } 
            else
            {
                cout<<"0"<<" ";
            } 
        }
        cout<<endl;
    }
    
    
    

};


int main()
{
    Matrix obj;
    obj.display();
    obj.set();
    obj.~Matrix();
   return 0;
}