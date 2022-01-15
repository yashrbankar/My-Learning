#include<iostream>

using namespace std;

int main()
{ 
    int n , i;

    cout<<"Enter ur no"<<endl;
    cin>>n;
    if(n==2)
    {
        cout<<"Prime number";
    }
    else{
        for (i = 2; i<=n/2 ; i++)
    {
            
        switch (n%i==0)
        {
            
        case 1:
            cout<<i<<" ,";
            cout<<"This is not Prime "<<endl;
            
            
            // cout<<"--------Final Result------------";
            break;
        case 0:
            cout<<"This is  Prime "<<endl;
            break;
        
        
        }


        
        
    }

    }
    

    

        
    return 0;
}


