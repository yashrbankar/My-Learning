#include<iostream>

using namespace std;

int main()
{
    int num ,div=1 ,sum = 0;
    cout<<"enter no.";
    cin>>num;
    for(div; div<=num ; div++)
    {
        if(num%div==0)
        {
            sum=sum+div;
            n++;
            // cout<<"sum ::"<<sum<<endl;
        }
        // cout<<"div::"<< div<<endl;
    }
    if(sum==num-1)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<" not Prime";
    }

        
    return 0;
}