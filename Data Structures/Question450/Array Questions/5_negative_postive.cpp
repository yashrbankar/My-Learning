#include<iostream>
using namespace std;
class integer
{
    int *arr , length;
    public:
    integer();
    int setdata();
    int getdata();
    int count();
    
};
int main()
{
  integer obj;
  obj.setdata();
  obj.count();
  obj.getdata();
}
// decleartion of constructer 
integer::integer()
{
    //  array in the class 
    cout<<"Enter length ::";
    cin>>length;
    arr=new int[length];  // DMA
}

int integer::setdata()
{
    
    for (int i = 0; i < length; i++)
    {
        cin>>arr[i];
    }
}
int integer::getdata()
{
    
    for (int i = 0; i < length; i++)
    {
        cout<<arr[i]<<" , ";
    }
}
int integer::count()
{ 
    int index=0;
    for (int  i = 0; i < length; i++)
    {
        if (arr[i]<0)
        {
            int temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;
            index++;
        }
        
    }
    
}


