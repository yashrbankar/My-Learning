#include <iostream>
using namespace std; 

int main()
{
    int a , x, sum = 0 ,z ;
    z=a;
    for (a=2; a<5; a++)
    {
        for ( x= 1; x<a; x++)
        {
            a%x==0;
           sum = sum + x;



        }
        cout<<sum<<endl;
        
        


    }
    
}