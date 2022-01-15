#include <iostream>
using namespace std;
int main()
{
    int a , b ;
    cout<<"enter first no :"<< endl;
    cin>>a;
    cout<<"enter second  no :"<< endl;
    cin>>b;

    char sign;
    cout<<"enter Type of sign";
    cin>>sign;






    


    switch (sign)
    {
    case '+':
        cout<<"addtion is "<<endl<<a+b;
        
        break;
    case '/':
        cout<<"divison is "<<endl<<a/b;

        break;
    case '-':
        cout<<"subtraction  is "<<endl<<a-b;

        break;
    case '*':
        cout<<"multiplacation  is "<<endl<<a*b;

        break;
    
    default:
         cout<<"sign is invalid";
        break;
    }
    return 0;


}