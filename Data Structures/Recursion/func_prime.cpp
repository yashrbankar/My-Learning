#include <iostream>
using namespace std;
// int input;
int prime();

int main()
{

    cout << "Enter No.: ";
    cin >> input;
    
    prime();

    return 0;
}
int prime(int i)
{   int sum=0 ;
    for (int i =1; i <=input; i++)
    {
        if (input%i==0)
        {
            sum=sum+i;
            
        }
    }
    if (sum==input+1)
    {
        cout<<"This is Prime Number ";
    }
    else{
        cout<<"Not Prime ";
    }
    
}