#include <iostream>
using namespace std;

int main()
{
    int age  ;
    cout<<"enter ur age ";
    cin>> age ;
    

    char sex , marity ;
    cout<<"SEX TYPE (M/F)  ";
    cin>> sex ;
    cout<<"enter ur marity status (Y/N) ";
    cin>> marity ;
    
    if(sex== 'M' )
    {
        if (20<=age && age<40)
        {
            cout<<"YOU CAN WORK ANY WHERE ";


        }
        else if(40<=age && age<60){
            cout<<" Location is Urban";
        }

        

        else {
            cout<<"Invalid age1 ";
        }
        
             
    }
    else if(sex=='F')
        {
            if(age<20 or age>60)
            {
                 cout<<"ERROR ";

            }
            else
            {
             cout<<"F you can works in only urban area ";   
            }
        

        }
    
    else {
            cout<<"Invalid age2 ";
        }
   
        return 0;

    

}