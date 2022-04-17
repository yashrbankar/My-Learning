#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    
    cout<<"enter age A person";
    cin>> a;
    cout<<"enter age B person";
    cin>> b;
    cout<<"enter age C person";
    cin>> c;

    if(a>b && b>c)
    {
        cout<<"the Oldest PERSON IS A";
        cout<<"the Youngest PERSON IS C";
    }
    else if(b>c && c>a)
    {
        cout<<"the Youngest PERSON IS B";
        cout<<"the Youngest PERSON IS A";
    }
    else if(c>a && a>b)
    {
        cout<<"the Oldest PERSON IS C";
        cout<<"the Youngest PERSON IS B";

    }
    
    else{
        cout<<"Invaild";
    }



        
    return 0;
}