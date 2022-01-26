// time complexity is n@2  
// using hasing it can decreaed 
#include<iostream>
using namespace std;


int main()
{

     int k=0;
     cout<<"Enter value of sum to search in sub array:: ";
     cin>>k; // in question 0 in given 
    int arr[5]={1,2,3,-5,5};

    for (int i = 0; i < 5-1; i++)
    {
        int sum=arr[i];
        for (int j = i+1; j < 5; j++)
        {
            sum=sum+arr[j];
            if (sum==k)
            {
               for ( int s = i; s <=j; s++)
               {
                   cout<<arr[s]<<"+ ";

               }
               cout<<"="<<k<<endl;
                
            }
            

        }
        
    }
    
    

   
   return 0;
}