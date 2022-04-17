#include<iostream>

using namespace std;

int main()
{
    int U, L , i , n=1, d=1 , sum =0;
    cout<<"enter starting limit ::";
    cin>>L;
    cout<<"enter ending limit ::";
    cin>>U;
    

    for (i=L; i<=U; i++)
    {
        for (d; d<=U ; d++)
        {
            i%d==0;
            sum=sum+n;

            break;
            
        }
        
        
        
    }
    if(sum==2);
    {
        cout<<i<<",";
    }
    
    
    

        
    return 0;
}