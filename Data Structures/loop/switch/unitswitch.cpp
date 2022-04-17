#include <iostream>
using namespace std;

int main()
{
    float unit , c ;
    cout<<" ENTER UNITS "<<endl;
    cin>>unit;

    c=(unit)/5;

    switch (unit<=50)
    {
    case 1:
       cout<<"bill ;"<<endl<<unit*0.5;        
        break;
    case 0:
        switch (50<unit && unit<=100)
        {
        case 1:
           cout<<"bill ;"<<endl<<unit*0.75;           
            break;
        case 0:
         switch (100<unit && unit<=250)
         {
         case 1:
             
             cout<<"bill ;"<<endl<<unit*1.5;

             break;
         case 0:
         cout<<"bill ;"<<endl<<(unit*1.5)+c ;
            
             
             break;
         
         
         }
                      
            break;
        
        
        }
        break;
        return 0;
    
    
    }

}