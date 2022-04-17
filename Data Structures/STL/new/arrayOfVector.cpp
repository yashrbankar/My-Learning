#include<bits/stdc++.h>
using namespace std;

void Display(vector<int> v , int n)
{
   cout<<"vector number :" <<n<<endl;
   for(int i=0 ; i<v.size(); i++)
   {
       cout<<" "<<v[i];
   }
}

int main()
{
   int N;
   cout<<"enter the no of vector to created : ";
   cin>>N;
   vector <int> v[N]; // N vector are created v[0] ,v[1] , v[2] , v[3] , v[4] ,....N;
   for(int i=0;i<N;++i)
   {
       int n;
       cout<<"enter no of element you want to insert in vector " <<i+1<<" : ";
       cin>>n;
       for(int j =0 ;j<n; j++)
       {
            cout<<"enter element no . : "<<j+1<<endl;
            int x;
            cin>>x;
            v[i].push_back(x);
       }
   }
    
   for(int i=0 ;i<N;i++)
   {
       Display(v[i],i+1);
       cout<<"\n";
   }
   cout<<"2D Representation : "<<v[1][1]; // this similar to 2D array fix rows Bt varible column
}


