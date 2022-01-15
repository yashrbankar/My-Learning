#include<iostream>
using namespace std;


// sorting elements in acending order

int main()
{

    int first_array[]={2,3,1,45,15};
    

    int temp[1];

    for (int i = 0; i < 5; i++)
    {
        for (int j=0;j< 5;j++)
        {
            

            if (first_array[i]<first_array[j])
            {
                temp[0]=first_array[i];
                first_array[i]=first_array[j];
                first_array[j]=temp[0];
            }
            
            
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<first_array[i]<<endl;
    }
    
    

return 0;
}