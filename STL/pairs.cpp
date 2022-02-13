#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int ,string>p; // !two data type or containers like set ,map 
    // p=make_pair(1,"yash"); //* style
    p={1,"yash"};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int , string>p1=p;// *by value
    p1.first=22;
    cout<<p1.first<<" "<<p1.second<<endl;

    // ? pairs is used for maintaining the relation bet two data type
    
    pair<int , int>p_array[3];
    // p_array[0]={2,3};
    cout<<"<int , int>\n";
    cin>>p_array[0].first; // taking the input from user 
    cin>>p_array[0].second;
    p_array[1]={4,5};
    p_array[2]={6,7};
    swap(p_array[0],p_array[2]); // !relation is maintained in the array

    for (int i = 0; i < 3; i++)
    {
        cout<<p_array[i].first<<" "<<p_array->second<<"\n";
    }

    //  instended of array we use vector


    



     


   return 0;
}