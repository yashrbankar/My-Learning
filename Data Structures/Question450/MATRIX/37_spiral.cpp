#include<iostream>
using namespace 

void func(  int m , int n, int M[][] ,int start)
{
    for (int j = start; j< n; j++)
    {
        cout<<M[start][j];
    }
    for (int i = start+1; i < m; i++)
    {
        
    }
    
    
}

int main()
{
    int m ,n ;
    cout<<"enter the Dimension ::"<<endl;
    cin>>m>>n;
    int M[m][n];
    cout<<"enter the element :: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <n; j++)
        {
            cin>>M[i][j];
        }
    }
    func( m , n , M , 0)
   
   return 0;
}